include ../../rodinia_3.1/common/make.config
CUDACFLAGS = --use_fast_math
LDFLAGS = -L$(CUDA_LIB_DIR) -L../shared/lib -lcuda -lcudart -lm
INCLUDES = -I. -I$(CUDA_DIR)/include -I../common/inc -I../shared/inc
OTHERFLAGS = -v -O3
SOURCEFILES = BlackScholes.cu BlackScholes_gold.cpp
SHARED_OBJ_DIR = ../shared/obj/x86_64/release
COMMON_OBJ_DIR= ../common/obj/x86_64/release
SHARED_OBJ = $(SHARED_OBJ_DIR)/shrUtils.cpp.o $(SHARED_OBJ_DIR)/cmd_arg_reader.cpp.o
COMMON_OBJ = $(COMMON_OBJ_DIR)/cutil.cpp.o $(COMMON_OBJ_DIR)/stopwatch.cpp.o $(COMMON_OBJ_DIR)/stopwatch_linux.cpp.o $(COMMON_OBJ_DIR)/bank_checker.cpp.o
OBJFILES = $(SHARED_OBJ) $(COMMON_OBJ)
TARGET = blackscholes

$(TARGET): 
	cd ../shared; make; cd ..
	cd ../common; make; cd ..
	nvcc $(LDFLAGS) $(CUDACFLAGS) $(INCLUDES) $(NVCC_FLAGS) $(OBJFILES) $(SOURCEFILES) $(OTHERFLAGS) -o $@

clean: 
	rm -f blackscholes BlackScholes.txt SdkMasterLog.csv
