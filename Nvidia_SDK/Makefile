NVIDIA_BIN = blackscholes

all:
	for benchmark in $(NVIDIA_BIN); do cd $$benchmark; make; cp $$benchmark ../bin; cd ../..; done

