#include "cuda_runtime.h"
#include "cuda.h"
#include "mycublas.h"
__global__ void transpose(float *AT, const float *A, int rows, int cols){

	int bx = blockIdx.x;
	int tx = threadIdx.x;
	int gid = bx*blockDim.x + tx;
	if (gid < rows*cols)
	{
		int rid = gid / cols;
		int cid = gid % cols;
		int target_id = cid*rows + rid;
		int btx = target_id / blockDim.x;
		int ttx = target_id % blockDim.x;
		AT[btx*blockDim.x + ttx] = A[gid];
	}
}

template <int BLOCK_SIZE> __global__ void

matrixMulCUDA(float *C, const float *A, const float *B, int wA, int wB, int hA)

{

	// Block index

	int bx = blockIdx.x;

	int by = blockIdx.y;



	// Thread index

	int tx = threadIdx.x;

	int ty = threadIdx.y;

	/*if (by*BLOCK_SIZE + ty >= hA)
	{
	return;
	}

	if (bx*BLOCK_SIZE + tx >= wB)
	{
	return;
	}*/

	// Index of the first sub-matrix of A processed by the block

	int aBegin = wA * BLOCK_SIZE * by;



	// Index of the last sub-matrix of A processed by the block

	int aEnd = aBegin + wA - 1;



	// Step size used to iterate through the sub-matrices of A

	int aStep = BLOCK_SIZE;



	// Index of the first sub-matrix of B processed by the block

	int bBegin = BLOCK_SIZE * bx;



	// Step size used to iterate through the sub-matrices of B

	int bStep = BLOCK_SIZE * wB;



	// Csub is used to store the element of the block sub-matrix

	// that is computed by the thread

	float Csub = 0;



	// Loop over all the sub-matrices of A and B

	// required to compute the block sub-matrix

	for (int a = aBegin, b = bBegin;

		a <= aEnd;

	a += aStep, b += bStep)

	{



		// Declaration of the shared memory array As used to

		// store the sub-matrix of A

		__shared__ float As[BLOCK_SIZE][BLOCK_SIZE];



		// Declaration of the shared memory array Bs used to

		// store the sub-matrix of B

		__shared__ float Bs[BLOCK_SIZE][BLOCK_SIZE];



		// Load the matrices from device memory

		// to shared memory; each thread loads

		// one element of each matrix
		if (by*BLOCK_SIZE + ty < hA && bx*BLOCK_SIZE + tx < wB){
			As[ty][tx] = A[a + wA * ty + tx];

			Bs[ty][tx] = B[b + wB * ty + tx];
		}


		// Synchronize to make sure the matrices are loaded

		__syncthreads();



		// Multiply the two matrices together;

		// each thread computes one element

		// of the block sub-matrix

#pragma unroll



		for (int k = 0; k < BLOCK_SIZE; ++k)

		{
			if (k < wA && by*BLOCK_SIZE + ty < hA && bx*BLOCK_SIZE + tx < wB){
				Csub += As[ty][k] * Bs[k][tx];
			}

		}



		// Synchronize to make sure that the preceding

		// computation is done before loading two new

		// sub-matrices of A and B in the next iteration

		__syncthreads();

	}



	// Write the block sub-matrix to device memory;

	// each thread writes one element

	int c = wB * BLOCK_SIZE * by + BLOCK_SIZE * bx;
	if (by*BLOCK_SIZE + ty < hA && bx*BLOCK_SIZE + tx < wB)
		C[c + wB * ty + tx] = Csub;

}
int mycublasSgemm(int transa, int transb, int m, int n, int k,
	const float *alpha, const float *A, int lda, const float *B, int ldb,
	const float *beta, float *C, int ldc)
{

	if (transa == 1 && transb == 1){
		dim3 threads(16, 16);

		dim3 grid((n + threads.x - 1) / threads.x, (m + threads.y - 1) / threads.y);
		//printf("grid.x %d grid.y %d\n", grid.x, grid.y);
		float *CT = cuda_make_array(0, m*n);
		matrixMulCUDA<16> << < grid, threads >> >(CT, A, B, k, n, m);
		int block_dim = 16;
		int grid_dim = (m*n + block_dim - 1) / block_dim;
		transpose<<<grid_dim,block_dim>>>(C, CT, m, n);
		cuda_free(CT);

	}
	else if (transa == 1 && transb == 0)
	{
		float *BT = cuda_make_array(0, k*n);
		int block_dim = 16;
		int grid_dim = (k*n + block_dim - 1) / block_dim;
		transpose << <grid_dim, block_dim >> >(BT, B, n, k);

		dim3 threads(16, 16);
		dim3 grid((n + threads.x - 1) / threads.x, (m + threads.y - 1) / threads.y);
		//printf("grid.x %d grid.y %d\n", grid.x, grid.y);
		float *CT = cuda_make_array(0, m*n);
		matrixMulCUDA<16> << < grid, threads >> >(CT, A, BT, k, n, m);

		block_dim = 16;
		grid_dim = (m*n + block_dim - 1) / block_dim;
		transpose << <grid_dim, block_dim >> >(C, CT, m, n);
		cuda_free(CT);
		cuda_free(BT);
	}

	else if (transa == 0 && transb == 1)
	{
		float *AT = cuda_make_array(0, k*m);
		int block_dim = 16;
		int grid_dim = (k*m + block_dim - 1) / block_dim;
		transpose << <grid_dim, block_dim >> >(AT, A, k, m);

		dim3 threads(16, 16);
		dim3 grid((n + threads.x - 1) / threads.x, (m + threads.y - 1) / threads.y);
		//printf("grid.x %d grid.y %d\n", grid.x, grid.y);
		float *CT = cuda_make_array(0, m*n);
		matrixMulCUDA<16> << < grid, threads >> >(CT, AT, B, k, n, m);

		block_dim = 16;
		grid_dim = (m*n + block_dim - 1) / block_dim;
		transpose << <grid_dim, block_dim >> >(C, CT, m, n);
		cuda_free(CT);
		cuda_free(AT);
	}

	else
	{
		float *AT = cuda_make_array(0, k*m);
		int block_dim = 16;
		int grid_dim = (k*m + block_dim - 1) / block_dim;
		transpose << <grid_dim, block_dim >> >(AT, A, k, m);

		float *BT = cuda_make_array(0, k*n);
		block_dim = 16;
		grid_dim = (k*n + block_dim - 1) / block_dim;
		transpose << <grid_dim, block_dim >> >(BT, B, n, k);

		dim3 threads(16, 16);
		dim3 grid((n + threads.x - 1) / threads.x, (m + threads.y - 1) / threads.y);
		//printf("grid.x %d grid.y %d\n", grid.x, grid.y);
		float *CT = cuda_make_array(0, m*n);
		matrixMulCUDA<16> << < grid, threads >> >(CT, AT, BT, k, n, m);

		block_dim = 16;
		grid_dim = (m*n + block_dim - 1) / block_dim;
		transpose << <grid_dim, block_dim >> >(C, CT, m, n);
		cuda_free(CT);
		cuda_free(AT);
		cuda_free(BT);
	}


	return 0;

}
