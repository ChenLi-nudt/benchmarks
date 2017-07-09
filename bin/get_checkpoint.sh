#!/bin/bash

touch checkpoint
rm checkpoint
for ((i=1;i<21;i++)) 
do	
	echo "">>checkpoint
        echo "============">>checkpoint	
	echo $i  >>checkpoint
	echo "kernel name: "`grep "Context size per TB" ${i}.log | awk '{print $6; exit}'` >>checkpoint
	echo "register size: " `grep "register size" ${i}.log | awk '{sum += $12} END{if(NR>0) print sum/NR}'`  >>checkpoint
	echo "shared memory size: " `grep "shared memory size" ${i}.log | awk '{sum += $13} END{if(NR>0) print sum/NR}'`  >>checkpoint
	echo "Shared memory per TB: " `grep "Context size per TB" ${i}.log | awk '{print $9; exit}'` >>checkpoint
	echo "register per TB: " `grep "Context size per TB" ${i}.log | awk '{print $12; exit}'` >>checkpoint
done


