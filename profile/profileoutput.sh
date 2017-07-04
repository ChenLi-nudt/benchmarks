#!/bin/bash
#right now hardcord benchmarks
NVPROF=/home/chen/bin/cuda-8.0/bin/nvprof
OPTIONS="--print-gpu-trace --print-api-trace --export-profile"
./cleanup.sh
#parboil
$NVPROF $OPTIONS cutcp.profile ../parboil/bin/cutcp -i ../parboil/datasets/cutcp/small/input/watbox.sl40.pqr -o cutcp.out
$NVPROF $OPTIONS histo.profile ../parboil/bin/histo 20 4 -i ../parboil/datasets/histo/default/input/img.bin -o histo.out
$NVPROF $OPTIONS lbm.profile ../parboil/bin/lbm 100 -i ../parboil/datasets/lbm/short/input/120_120_150_ldc.of -o lbm.out
$NVPROF $OPTIONS mri-gridding.profile ../parboil/bin/mri-gridding 32 0 -i ../parboil/datasets/mri-gridding/small/input/small.uks -o mri-gridding.out
$NVPROF $OPTIONS mri-q.profile ../parboil/bin/mri-q -i ../parboil/datasets/mri-q/small/input/32_32_32_dataset.bin -o mri-q.out
$NVPROF $OPTIONS sad.profile ../parboil/bin/sad -i ../parboil/datasets/sad/default/input/frame.bin,../parboil/datasets/sad/default/input/reference.bin -o sad.out
$NVPROF $OPTIONS sgemm.profile ../parboil/bin/sgemm -i ../parboil/datasets/sgemm/small/input/matrix1.txt,../parboil/datasets/sgemm/small/input/matrix2.txt,../parboil/datasets/sgemm/small/input/matrix2t.txt -o sgemm.out
$NVPROF $OPTIONS spmv.profile  ../parboil/bin/spmv -i ../parboil/datasets/spmv/small/input/1138_bus.mtx,../parboil/datasets/spmv/small/input/vector.bin -o spmv.out
$NVPROF $OPTIONS stencil.profile  ../parboil/bin/stencil 128 128 32 100 -i ../parboil/datasets/stencil/small/input/128x128x32.bin -o stencil.out
#rodinia
$NVPROF $OPTIONS backprop.profile ../rodinia_3.1/bin/backprop 256 
$NVPROF $OPTIONS bfs.profile ../rodinia_3.1/bin/bfs ../rodinia_3.1/data/bfs/graph1MW_6.txt
$NVPROF $OPTIONS dwt2d.profile ../rodinia_3.1/bin/dwt2d ../rodinia_3.1/data/rgb.bmp -d 1024x1024 -f -5 -l 3
$NVPROF $OPTIONS gaussian.profile ../rodinia_3.1/bin/gaussian -f ../rodinia_3.1/data/gaussian/matrix4.txt
$NVPROF $OPTIONS heartwall.profile ../rodinia_3.1/bin/heartwall ../rodinia_3.1/data/heartwall/test.avi 20
$NVPROF $OPTIONS hotspot.profile ../rodinia_3.1/bin/hotspot 64 2 2 ../rodinia_3.1/data/hotspot/temp_64 ../rodinia_3.1/data/hotspot/power_64 output.out
$NVPROF $OPTIONS lavaMD.profile ../rodinia_3.1/bin/lavaMD -boxes1d 10
$NVPROF $OPTIONS leukocyte.profile ../rodinia_3.1/bin/leukocyte ../rodinia_3.1/data/leukocyte/testfile.avi 5 
#$NVPROF $OPTIONS lud_cuda.profile ../rodinia_3.1/bin/lud_cuda -s 256 -v
$NVPROF $OPTIONS mummergpu.profile ../rodinia_3.1/bin/mummergpu ../rodinia_3.1/data/mummergpu/NC_003997.fna ../rodinia_3.1/data/mummergpu/NC_003997_q100bp.fna
$NVPROF $OPTIONS needle.profile ../rodinia_3.1/bin/needle 2048 10
$NVPROF $OPTIONS nn.profile ../rodinia_3.1/bin/nn ../rodinia_3.1/cuda/nn/filelist_4 -r 5 -lat 30 -lng 90 
$NVPROF $OPTIONS particlefilter_float.profile ../rodinia_3.1/bin/particlefilter_float -x 128 -y 128 -z 10 -np 1000
$NVPROF $OPTIONS particlefilter_naive.profile ../rodinia_3.1/bin/particlefilter_naive -x 128 -y 128 -z 10 -np 1000
$NVPROF $OPTIONS pathfinder.profile ../rodinia_3.1/bin/pathfinder 100000 100 20 
$NVPROF $OPTIONS sc_gpu.profile ../rodinia_3.1/bin/sc_gpu 10 20 256 65536 65536 1000 none output.txt 1
$NVPROF $OPTIONS srad_v1.profile ../rodinia_3.1/bin/srad_v1 100 0.5 502 458
$NVPROF $OPTIONS srad_v2.profile ../rodinia_3.1/bin/srad_v2 2048 2048 0 127 0 127 0.5 2
#darknet
