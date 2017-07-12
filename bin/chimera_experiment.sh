#!/bin/bash
# This script runs the benchmark experiments 
source chimera_script.config

if [ -z "$DEADLINES" ]
then
    echo "\$DEADLINES is empty! Set is in chimera_script.config!"
    exit 1
fi
if [ -z "$FREQUENCY" ]
then 
    echo "\$FREQUENCY is empty! Set it in chimera_script.config!"
    exit 1
fi
if [ -z "$NUM_POINTS" ]
then 
    echo "\$NUM_POINTS is empty! Set it in chimera_script.config!"
    exit 1
fi
if [ -z "$DIRNAME" ]
then
    echo "\$DIRNAME is empty! Set it in chimera_script.config!"
    exit 1
fi
if [ -z "$GPGPUSIM_CONFIG_PATH" ]
then
    echo "\$GPGPUSIM_CONFIG_PATH is empty. Set it in chimera_script.config!"
    exit 1
else
    GPGPUSIM_LOC=${GPGPUSIM_CONFIG_PATH}/gpgpusim.config
fi
if [ -z "$BIN_PATH" ]
then
    echo "\$BIN_PATH is empty. Set it in chimera_script.config!"
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
	sed -i "s/-time_percentage.*$/-time_percentage $time_point/g" $GPGPUSIM_LOC
        for deadline in "${DEADLINES[@]}" #loop over deadlines
        do
	    deadline_cycle=`echo "scale=1; $deadline * $FREQUENCY" | bc`
            sed -i "s/-deadline.*$/-deadline $deadline_cycle/g" $GPGPUSIM_LOC
            #run applications

            b_counter=0
            for pbin in "${BIN[@]}"
            do
		cd ${pbin}-folder
                rm _*
		cmd=(./${pbin})
                cmd+=${ARGS[$b_counter]}
                ${cmd[@]} > ../${DIRNAME}/${CDATE}/${pbin}-${time_point}-${deadline}.log & 
                lastpid=$!
                pids+=($lastpid)
                b_counter=$b_counter+1
		cd ..
            done

        #this next loop just checks if enough applications are finished
        #then lets next loop iteration run
        #the weird construct below is a do while loop emulated in bash
        num_benchmarks=$((${#BIN[@]}))
	num_running=$num_benchmarks
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
            (( $num_running != 0))
        do
            sleep 60
        done
        done #end deadline loop
done #end num points loop
