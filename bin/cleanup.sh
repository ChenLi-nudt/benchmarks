#!/bin/bash
files='_cuobjdump* _ptx* gpgpu_inst_stats.txt out *.out *.log *.txt *.log* *.csv'


for file in $files 
do
    rm $file 
done
