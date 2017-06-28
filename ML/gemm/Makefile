CUDACFLAGS = -O3 -arch compute_20
SOURCEFILES = gemm.cu

TARGET=gemm

$(TARGET):
	nvcc $(LDFLAGS) $(CUDACFLAGS) $(SOURCEFILES) $(OTHERFLAGS) -o $@
	cp $@ ../bin

clean:
	rm -f $(TARGET)
