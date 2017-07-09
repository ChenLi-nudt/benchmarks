#!/bin/bash
cd result
rm *.log 
cd ..
./cleanup.sh

./cutcp -i ../parboil/datasets/cutcp/small/input/watbox.sl40.pqr > ./result/1.log
./cleanup.sh

./lbm -i ../parboil/datasets/lbm/short/input/120_120_150_ldc.of -- 100 >  ./result/2.log 
./cleanup.sh    

./mri-q -i ../parboil/datasets/mri-q/small/input/32_32_32_dataset.bin >  ./result/3.log 
./cleanup.sh

./sad -i ../parboil/datasets/sad/default/input/frame.bin,../parboil/datasets/sad/default/input/reference.bin -o sad.out >  ./result/4.log 
./cleanup.sh    

./stencil 128 128 32 100 -i ../parboil/datasets/stencil/small/input/128x128x32.bin -o stencil.out >  ./result/5.log 
./cleanup.sh

./backprop 256 >  ./result/6.log 
./cleanup.sh
./backprop2 256 > ./result/7.log
./cleanup.sh
./hotspot 64 2 2 ../rodinia_3.1/data/hotspot/temp_64 ../rodinia_3.1/data/hotspot/power_64 output.out >  ./result/8.log 
./cleanup.sh
./lud_cuda  -s 256 -v >  ./result/9.log
./cleanup.sh
./pathfinder 100000 100 20 >  ./result/10.log 
./cleanup.sh

./srad_v1 100 0.5 502 458 >  ./result/11.log 
./cleanup.sh
./srad222 100 0.5 502 458 >  ./result/12.log
./cleanup.sh 
./srad_v2 2048 2048 0 127 0 127 0.5 2 >  ./result/13.log 
./cleanup.sh
./sc_gpu 10 20 256 65536 65536 1000 none output.txt 1 >  ./result/14.log 
./cleanup.sh
./kmeans -o -i ../rodinia_3.1/data/kmeans/kdd_cup > ./result/15.log
./cleanup.sh
./gemm > ./result/16.log 
./cleanup.sh
./BlackScholes > ./result/17.log
./cleanup.sh
