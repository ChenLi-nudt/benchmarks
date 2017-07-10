This is the combined repo for rodinia 3.1, parboil and some ML benchmarks. 
Note: This does **not** include the datasets; download those elsewhere
separately.

First, make bin directories in rodinia_3.1 and parboil. So these should be
present:
parboil/bin
rodinia_3.1/bin

For rodinia, just make in the directory. The data should be in the directory
rodinia_3.1/data.

For parboil, run ./compile.sh. Note: you need to have the datasets directory
present. The parboil driver will error telling you the benchmarks directory is
missing, but it's really checking for a datasets directory in parboil/datasets.

This works currently with cuda4.0 and higher. If you use cuda4.2, use gcc/g++
lower than 4.7. 4.4 is easily installed on ubuntu.


To run the experiment scripts (in bin/):

Make sure you cp the template_configs, and edit them appropriate.
For example

cp template_dirty_script.config dirty_script.config

Then edit dirty_script.config
