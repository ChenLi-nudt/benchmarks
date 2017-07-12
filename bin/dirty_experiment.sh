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
if [ -z "$PARBOIL_BIN_PATH" ]
then
    echo "\$PARBOIL_BIN_PATH is empty. Set it in dirty_script.config!"
    exit 1
fi
if [ -z "$RODINIA_BIN_PATH" ]
then
    echo "\$RODINIA_BIN_PATH is empty. Set it in dirty_script.config!"
    exit 1
fi

if [ -z "$ML_BIN_PATH" ]
then
    echo "\$ML_BIN_PATH is empty. Set it in dirty_script.config!"
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

            #parboil
            b_counter=0
            for pbin in "${PARBOIL_BIN[@]}"
            do
                cmd=($PARBOIL_BIN_PATH/$pbin)
                cmd+=${PARBOIL_ARGS[$b_counter]}
                ${cmd[@]} > ./${DIRNAME}/${CDATE}/${pbin}-${time_point}-${ptime}-${ltime}.log &
                lastpid=$!
                pids+=($lastpid)
                b_counter=$b_counter+1
            done

            #rodinia
            b_counter=0
            for rbin in "${RODINIA_BIN[@]}"
            do
                cmd=($RODINIA_BIN_PATH/$rbin)
                cmd+=${RODINIA_ARGS[$b_counter]}
                ${cmd[@]} > ./${DIRNAME}/${CDATE}/${rbin}-${time_point}-${ptime}-${ltime}.log &
                lastpid=$!
                pids+=($lastpid)
                b_counter=$b_counter+1
            done

            #nvidia 
            b_counter=0
            for nbin in "${NVIDIA_BIN[@]}"
            do
                cmd=($NVIDIA_BIN_PATH/$nbin)
                cmd+=${NVIDIA_ARGS[$b_counter]}
                ${cmd[@]} > ./${DIRNAME}/${CDATE}/${nbin}-${time_point}-${ptime}-${ltime}.log &
                lastpid=$!
                pids+=($lastpid)
                b_counter=$b_counter+1
            done

            #ml
            b_counter=0
            for mbin in "${ML_BIN[@]}"
            do
                cmd=($ML_BIN_PATH/$mbin)
                cmd+=${ML_ARGS[$b_counter]}
                ${cmd[@]} > ./${DIRNAME}/${CDATE}/${mbin}-${time_point}-${ptime}-${ltime}.log &
                lastpid=$!
                pids+=($lastpid)
                b_counter=$b_counter+1
            done

        done #end predicted time loop

        #this next loop just checks if enough applications are finished
        #then lets next loop iteration run
        #the weird construct below is a do while loop emulated in bash
        num_benchmarks=$((${#PARBOIL_BIN[@]}+${#RODINIA_BIN[@]}+${#ML_BIN[@]}))
        num_running=$((num_benchmarks * ${#PREDICTED_LAUNCH_TIMES[@]}))
        stop_num=$((num_running/2))
        while 
            newpids=()
            for((j=0; j<num_running; j++)) #loop over time points
            do
                cpid=${pids[$j]}
                echo "cpid:" $cpid
                if [ -n "$(ps -p $cpid -o pid=)" ]
                then
                    newpids+=($cpid)
                fi
            done
            pids=$newpids
            num_running=${#newpids[@]}
            (( stop_num < num_running))
        do
            sleep 60
        done
    done #end launch time loop
done #end num points loop
