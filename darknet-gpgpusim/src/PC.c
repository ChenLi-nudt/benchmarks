#include "network.h"
#include "utils.h"
#include "parser.h"
#include "option_list.h"
#include "blas.h"
#include "assert.h"
#include "classifier.h"
#include "cuda.h"
#include <sys/time.h>


void train_PC(char *datacfg, char *cfgfile, char *weightfile, int *gpus, int ngpus, int clear)
{
    int i;

    float avg_loss = -1;
    char *base = basecfg(cfgfile);
    printf("%s\n", base);
    printf("%d\n", ngpus);
    network *nets = calloc(ngpus, sizeof(network));

    srand(time(0));
    int seed = rand();
    for(i = 0; i < ngpus; ++i){
        srand(seed);
#ifdef GPU
        cuda_set_device(gpus[i]);
#endif
        nets[i] = parse_network_cfg(cfgfile);
        if(weightfile){
            load_weights(&nets[i], weightfile);
        }
        if(clear) *nets[i].seen = 0;
        nets[i].learning_rate *= ngpus;
    }
    srand(time(0));
    network net = nets[0];

    int imgs = net.batch * net.subdivisions * ngpus;

    printf("Learning Rate: %g, Momentum: %g, Decay: %g\n", net.learning_rate, net.momentum, net.decay);
    list *options = read_data_cfg(datacfg);

    char *backup_directory = option_find_str(options, "backup", "/backup/");
    char *train_path = option_find_str(options, "train", "data/train.list");
    int classes = option_find_int(options, "classes", 2);

    clock_t time;

    load_args args = {0};
    args.path = train_path;
    //args.threads = 32;
    args.hierarchy = net.hierarchy;

    args.size = net.w;

    args.classes = classes;
    args.type = TRACE_DATA;

    data train;
    data buffer;
    pthread_t load_thread;
    args.d = &buffer;
    load_thread = load_data_in_thread(args);
    int N;
    int epoch = 0;//(*net.seen)/N;
    while(1){
        time=clock();

        pthread_join(load_thread, 0);
        train = buffer;
	N = train.X.rows;	
        load_thread = load_data_in_thread(args);

        printf("Loaded: %lf seconds\n", sec(clock()-time));
        time=clock();

        float loss = 0;
#ifdef GPU
        if(ngpus == 1){
            loss = train_network(net, train);
        } else {
            loss = train_networks(nets, ngpus, train, 4);
        }
#else
        loss = train_network(net, train);
#endif
        if(avg_loss == -1) avg_loss = loss;
        avg_loss = avg_loss*.9 + loss*.1;
        printf("%d, %.3f: %f, %f avg, %f rate, %lf seconds, %d images\n", epoch, (float)(*net.seen)/N, loss, avg_loss, get_current_rate(net), sec(clock()-time), *net.seen);
        free_data(train);
        if(1){
            epoch++;
            char buff[256];
            sprintf(buff, "%s/%s_%d.weights",backup_directory,base, epoch);
            save_weights(net, buff);
        }
    }
    char buff[256];
    sprintf(buff, "%s/%s.weights", backup_directory, base);
    save_weights(net, buff);

    free_network(net);
    free(base);
}
