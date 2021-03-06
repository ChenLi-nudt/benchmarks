// statistical kernel
#define NUMBER_THREADS 512
__global__ void prepare222(	long d_Ne,
											float *d_I,										// pointer to output image (DEVICE GLOBAL MEMORY)
											float *d_sums,									// pointer to input image (DEVICE GLOBAL MEMORY)
											float *d_sums2){

	// indexes
	int bx = blockIdx.x;													// get current horizontal block index
	int tx = threadIdx.x;													// get current horizontal thread index
	int ei = (bx*NUMBER_THREADS)+tx;										// unique thread id, more threads than actual elements !!!

	// copy input to output & log uncompress
	if(ei<d_Ne){															// do only for the number of elements, omit extra threads

		d_sums[ei] = d_I[ei];
		d_sums2[ei] = d_I[ei]*d_I[ei];

	}

}
