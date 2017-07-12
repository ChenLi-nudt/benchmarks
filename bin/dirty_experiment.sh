#!/bin/bash
# This script runs the benchmark experiments 
source dirty_script.config

if [ -z "$FREQUENCY" ]
then 
    echo "\$FREQUENCY is empty! Set it in dirty_script.config!"
    exit 1
fi
if [ -z "$NUM_POINTS" ]
then 
    echo "\$NUM_POINTS is empty! Set it in dirty_script.config!"
    exit 1
fi
if [ -z "$CUDALAUNCH_TIMES" ]
then 
    echo "\$CUDALAUNCH_TIMES is empty! Set it in dirty_script.config!"
    exit 1
fi
if [ -z "$PREDICTED_LAUNCH_TIMES" ]
then 
    echo "\$PREDICTED_LAUNCH_TIMES is empty! Set it in dirty_script.config!"
    exit 1
fi
if [ -z "$DIRNAME" ]
then
    echo "\$DIRNAME is empty! Set it in dirty_script.config!"
    exit 1
fi
if [ -z "$GPGPUSIM_CONFIG_PATH" ]
then
    echo "\$GPGPUSIM_CONFIG_PATH is empty. Set it in dirty_script.config!"
    exit 1
else
    GPGPUSIM_LOC=${GPGPUSIM_CONFIG_PATH}/gpgpusim.config
fi
if [ -z "$BIN_PATH" ]
then
    echo "\$BIN_PATH is empty. Set it in dirty_script.config!"
    exit 1
fi

#setup directory
mkdir -p $DIRNAME
CDATE=$(date +%F)
cd $DIRNAME
mkdir -p $CDATE
cd ..

#setup time points
time_point=0
time_percent=`echo "scale=3; 1.0/($NUM_POINTS+1) * 100" | bc`

#setup pids array
pids=() #pids array to be used below for looping 

for((i=1; i<=NUM_POINTS; i++)) #loop over time points
do
    time_point=`echo "scale=1; $time_point + $time_percent" | bc`
    echo $time_point
    sed -i "s/-time_percentage.*$/-time_percentage $time_point/g" $GPGPUSIM_LOC
    for ltime in "${CUDALAUNCH_TIMES[@]}" #loop over cudalaunch times
    do
        ltime_cycle=`echo "scale=1; $ltime * $FREQUENCY" | bc`
        sed -i "s/-cudalaunch_time.*$/-cudalaunch_time $ltime_cycle/g" $GPGPUSIM_LOC
        for ptime in "${PREDICTED_LAUNCH_TIMES[@]}" #loop over predicted times
        do
            ptime_cycle=`echo "scale=1; $ptime * $FREQUENCY" | bc`
            sed -i "s/-predicted_cudalaunch_time.*$/-predicted_cudalaunch_time $ptime_cycle/g" $GPGPUSIM_LOC
            #run applications
            pids=()
            cpid=()
            b_counter=0
            for pbin in "${BIN[@]}"
            do
		cd ${pbin}-folder
                rm _*
		cmd=(./${pbin})
                cmd+=${PARBOIL_ARGS[$b_counter]}
                ${cmd[@]} > ../${DIRNAME}/${CDATE}/${pbin}-${time_point}-${ptime}-${ltime}.log &
                lastpid=$!
                pids+=($lastpid)
                b_counter=$b_counter+1
                cd ..
            done

            #this next loop just checks if enough applications are finished
            #then lets next loop iteration run
            #the weird construct below is a do while loop emulated in bash
            #this was needed for an earlier version; it can be rewritten 
            #to be much cleaner
            num_benchmarks=$((${#BIN[@]}))
            while 
                num_running=0
                for((j=0; j<num_benchmarks; j++)) #loop over time points
                do
                    cpid=${pids[$j]}
                    echo "cpid:" $cpid
                    if [ -n "$(ps -p $cpid -o pid=)" ]
                    then
                        num_running+=1
                    fi
                done
                (( $num_running != 0))
            do
                sleep 60
            done
        done #end predicted time loop
    done #end launch time loop
done #end num points loop
