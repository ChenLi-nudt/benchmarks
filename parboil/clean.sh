#!/bin/bash
APPS=(bfs cutcp histo lbm mri-gridding mri-q sad sgemm spmv stencil tpacf)

for app in "${APPS[@]}"
do
    rm -r ./benchmarks/$app/build
    rm bin/*
done
