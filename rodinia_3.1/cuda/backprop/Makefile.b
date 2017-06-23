include ../../common/make.config

# C compiler
CC = gcc
CC_FLAGS = -g  -O2

# CUDA compiler
NVCC = $(CUDA_DIR)/bin/nvcc
NVCC_FLAGS = -I$(CUDA_DIR)/include

# 'make dbg=1' enables NVCC debugging
ifeq ($(dbg),1)
	NVCC_FLAGS += -g -O0
else
	NVCC_FLAGS += -O2
endif

# 'make emu=1' compiles the CUDA kernels for emulation
ifeq ($(emu),1)
	NVCC_FLAGS += -deviceemu
endif


.PHONY: backprop
backprop: backprop.o facetrain.o imagenet.o backprop_cuda.o 
	ar rcs librbackprop.a backprop.o facetrain.o imagenet.o backprop_cuda.o 
#$(CC) $(CC_FLAGS) -c backprop.c facetrain.o imagenet.o backprop_cuda.o -o rbackprop -L$(CUDA_LIB_DIR) -lcuda -lcudart -lm -o rbackprop
#	ar rcs librbackprop.a backprop.o facetrain.o imagenet.o backprop_cuda.o

#%.o: %.[ch]
#	$(CC) $(CC_FLAGS) $< -c

facetrain.o: facetrain.c backprop.h
	$(CC) $(CC_FLAGS) facetrain.c -c -lm
	
backprop.o: backprop.c backprop.h
	$(CC) $(CC_FLAGS) backprop.c -c -lm

backprop_cuda.o: backprop_cuda.cu backprop.h
	$(NVCC) $(NVCC_FLAGS) -c backprop_cuda.cu -L$(CUDA_LIB_DIR) -lm -lcuda -lcudart

imagenet.o: imagenet.c backprop.h
	$(CC) $(CC_FLAGS) imagenet.c -c -lm

clean:
	rm -f *.o *~ rbackprop backprop_cuda.linkinfo
