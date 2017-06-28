#!/bin/bash
APPS=(bfs cutcp histo lbm mri-gridding mri-q sad sgemm spmv stencil tpacf)

for app in "${APPS[@]}"
do
    ./parboil compile $app cuda default
    cp ./benchmarks/$app/build/cuda_default/$app bin/
done
