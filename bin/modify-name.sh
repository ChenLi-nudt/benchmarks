#!/bin/bash

app=(backprop backprop2 bfs bfs2 BlackScholes cutcp gemm histo hotspot kmeans lbm lud_cuda mri-gridding mri-q pathfinder sad sc_gpu spmv srad222 srad_v1 srad_v2 stencil)


for i in ${app[@]}
do
  # mkdir ${i}-folder 
  # mv ${i} ${i}-folder
  cd ${i}-folder
  ln -s ../../../gpgpu-sim/configs/GTX980/gpgpusim.config gpgpusim.config
  ln -s ../../../gpgpu-sim/configs/GTX980/config_fermi_islip.icnt config_fermi_islip.icnt
  cd ..
done
