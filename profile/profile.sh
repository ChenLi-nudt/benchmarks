#!/bin/bash
#right now hardcord benchmarks
NVPROF=/usr/local/cuda-8.0/bin/nvprof
OPTIONS=--print-gpu-trace
OUTPUT_FILE=profile_output
cleanup.sh
rm $OUTPUT_FILE
#parboil
$NVPROF $OPTIONS ../parboil/bin/cutcp -i ../parboil/datasets/cutcp/small/input/watbox.sl40.pqr -o cutcp.out 2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../parboil/bin/histo 20 4 -i ../parboil/datasets/histo/default/input/img.bin -o histo.out 2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../parboil/bin/lbm 100 -i ../parboil/datasets/lbm/short/input/120_120_150_ldc.of -o lbm.out 2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../parboil/bin/mri-gridding 32 0 -i ../parboil/datasets/mri-gridding/small/input/small.uks -o mri-gridding.out 2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../parboil/bin/mri-q -i ../parboil/datasets/mri-q/small/input/32_32_32_dataset.bin -o mri-q.out 2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../parboil/bin/sad -i ../parboil/datasets/sad/default/input/frame.bin../parboil/datasets/sad/default/input/reference.bin -o sad.out 2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../parboil/bin/sgemm -i ../parboil/datasets/sgemm/small/input/matrix1.txt../parboil/datasets/sgemm/small/input/matrix2.txt../parboil/datasets/sgemm/small/input/matrix2t.txt -o sgemm.out 2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../parboil/bin/spmv -i ../parboil/datasets/spmv/small/input/1138_bus.mtx../parboil/datasets/spmv/small/input/vector.bin -o spmv.out 2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../parboil/bin/stencil 128 128 32 100 -i ../parboil/datasets/stencil/small/input/128x128x32.bin -o stencil.out 2>> $OUTPUT_FILE
#rodinia
$NVPROF $OPTIONS ../rodinia_3.1/bin/backprop 256  2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../rodinia_3.1/bin/bfs ../rodinia_3.1/data/bfs/graph1MW_6.txt 2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../rodinia_3.1/bin/dwt2d ~/workspace/unified-benchmarks/rodinia_3.1/data/rgb.bmp -d 1024x1024 -f -5 -l 3 2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../rodinia_3.1/bin/gaussian -f ../rodinia_3.1/data/gaussian/matrix4.txt 2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../rodinia_3.1/bin/heartwall ../rodinia_3.1/data/heartwall/test.avi 20 2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../rodinia_3.1/bin/hotspot 64 2 2 ../rodinia_3.1/data/hotspot/temp_64 ../rodinia_3.1/data/hotspot/power_64 output.out 2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../rodinia_3.1/bin/lavaMD -boxes1d 10 2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../rodinia_3.1/bin/leukocyte  ../rodinia_3.1/data/leukocyte/testfile.avi 5  2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../rodinia_3.1/bin/lud_cuda -s 256 -v 2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../rodinia_3.1/bin/mummergpu ../rodinia_3.1/data/mummergpu/NC_003997.fna ../rodinia_3.1/data/mummergpu/NC_003997_q100bp.fna 2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../rodinia_3.1/bin/needle 2048 10 2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../rodinia_3.1/bin/nn../rodinia_3.1/cuda/nn/filelist_4 -r 5 -lat 30 -lng 90  2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../rodinia_3.1/bin/particlefilter_float -x 128 -y 128 -z 10 -np 1000 2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../rodinia_3.1/bin/particlefilter_naive -x 128 -y 128 -z 10 -np 1000 2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../rodinia_3.1/bin/pathfinder 100000 100 20  2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../rodinia_3.1/bin/sc_gpu 10 20 256 65536 65536 1000 none output.txt 1 2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../rodinia_3.1/bin/srad_v1 100 0.5 502 458 2>> $OUTPUT_FILE
$NVPROF $OPTIONS ../rodinia_3.1/bin/srad_v2 2048 2048 0 127 0 127 0.5 2 2>> $OUTPUT_FILE
