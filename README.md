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

