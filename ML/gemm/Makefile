CUDACFLAGS = -O3
SOURCEFILES = gemm.cu

TARGET=gemm

$(TARGET):
	nvcc $(SOURCEFILES) $(CUDACFLAGS) -o $@
	cp $@ ../bin

clean:
	rm -f $(TARGET)
