#ifndef MUCUBLAS
#define MUCUBLAS


int mycublasSgemm(int transa, int transb, int m, int n, int k,
	const float *alpha, const float *A, int lda, const float *B, int ldb,
	const float *beta, float *C, int ldc);

void test_my_cublas_gpu();

#endif
