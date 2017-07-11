### dirty_experiment.sh

First, make sure to edit dirty_script.config (copy from the template; don't
change the template.)

Here is the loop structure
time loop
    launchtime loop
        predicted time loop
            application loops
        do-while loop

The application loops are per benchmark set.

Consider when the whole predicted time loop is run, i.e. 1 iteration of the 
predicted time loop. Each predicted time loop launches *N*
applications, where `N = #applications * #predicted times`

The do while loop polls to see if the number of currently executing
applications is less than *N/2*. If it is, it launches another *N* applications
by iterating once more through the launchtime loop. Else, it pauses for a
minute, then pools again.

Note: This will run forever if the applications happen to hang and not exit.
Also, the do-while loop is strangely written because bash only has while loops;
but the way it's written here functions as a do-while loop.
