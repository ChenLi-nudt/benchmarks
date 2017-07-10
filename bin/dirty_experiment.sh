#!/bin/bash
# This script runs the benchmark experiments 
source script.config

if [ -z "$FREQUENCY" ]
then 
    echo "\$FREQUENCY is empty! Set it in script.config!"
    exit 1
fi
if [ -z "$NUM_POINTS" ]
then 
    echo "\$NUM_POINTS is empty! Set it in script.config!"
    exit 1
fi
if [ -z "$CUDALAUNCH_TIMES" ]
then 
    echo "\$CUDALAUNCH_TIMES is empty! Set it in script.config!"
    exit 1
fi
if [ -z "$PREDICTED_LAUNCH_TIMES" ]
then 
    echo "\$PREDICTED_LAUNCH_TIMES is empty! Set it in script.config!"
    exit 1
fi
if [ -z "$DIRNAME" ]
then
    echo "\$DIRNAME is empty! Set it in script.config!"
    exit 1
fi
if [ -z "$GPGPUSIM_CONFIG_PATH" ]
then
    echo "\$GPGPUSIM_CONFIG_PATH is empty. Set it in script.config!"
    exit 1
else
    GPGPUSIM_LOC=${GPGPUSIM_CONFIG_PATH}/gpgpusim.config
fi
if [ -z "$PARBOIL_BIN_PATH" ]
then
    echo "\$PARBOIL_BIN_PATH is empty. Set it in script.config!"
    exit 1
fi
if [ -z "$RODINIA_BIN_PATH" ]
then
    echo "\$RODINIA_BIN_PATH is empty. Set it in script.config!"
    exit 1
fi

if [ -z "$ML_BIN_PATH" ]
then
    echo "\$ML_BIN_PATH is empty. Set it in script.config!"
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

#application counter for output
appnum=1
for((i=1; i<=NUM_POINTS; i++)) #loop over time points
do
	time_point=`echo "scale=1; $time_point + $time_percent" | bc`
	sed -i "s/-time_percentage.*$/-time_percentage $time_point/g" $GPGPUSIM_LOC
        for ltime in "${CUDALAUNCH_TIMES[@]}" #loop over cudalaunch times
        do
	    ltime_cycle=`echo "scale=1; $ltime * $FREQUENCY" | bc`
            sed -i "s/-cudalaunch_time.*$/-cudalaunch_time $ltime_cycle/g" $GPGPUSIM_LOC
            for ptime in "${PREDICTED_LAUNCH_TIMES[@]}"
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
                    b_counter=$b_counter+1
                    appnum=$appnum+1
                done

                #ml
                b_counter=0
                for mbin in "${ML_BIN[@]}"
                do
                    cmd=($ML_BIN_PATH/$mbin)
                    cmd+=${ML_ARGS[$b_counter]}
                    ${cmd[@]} > ./${DIRNAME}/${CDATE}/${mbin}-${time_point}-${ptime}-${ltime}.log &
                    b_counter=$b_counter+1
                    appnum=$appnum+1
                done

            done
        done
	#for((j=0; j<NUM_BENCHMARKS; j++))
	#do
#		app=${APPN[j]}

#            drain_percent=`echo "scale=3; 100*$k/$NUM_TB" | bc`
#            context_percent=`echo "scale=3; 100-$drain_percent" | bc`
#            sed -i "s/-flush_percentage.*$/-flush_percentage 0/g" $GPGPUSIM_LOC
#		cmd=($BIN_PATH/$BENCHMARK)
#           	cmd+=($app)
#           	cmd+=(0)
#           	${cmd[@]} > ./${DIRNAME}/${CDATE}/${app}-${time_point}.log &
		
#		echo " ${app}-${time_point} PID: $!"
		flag=true
        #done
done
