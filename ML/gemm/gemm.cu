#define BLOCK_SIZE 16
#include <stdio.h>
#include "cuda_runtime.h"
#include "curand.h"
#include <stdlib.h>

__global__ void
matrixMulCUDA(float *C, const float *A, const float *B, int wA, int wB, int hA, int tran = 0, int tranA = 0, int tranB = 0, float alpha = 1, float beta = 0)
{

	// Block index
	int bx = blockIdx.x;
	int by = blockIdx.y;
	// Thread index
	int tx = threadIdx.x;
	int ty = threadIdx.y;

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
	int i = 0;
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
		//if (by*BLOCK_SIZE + ty < hA && bx*BLOCK_SIZE + tx < wB){
		int gid = a + wA * ty + tx;
		if (gid < wA*hA && i*BLOCK_SIZE + tx < wA){
			if (tranA == 0)
			{
				As[ty][tx] = A[gid];
			}
			else
			{

				int rid = gid / wA;
				int cid = gid % wA;
				int target_id = cid*hA + rid;
				As[ty][tx] = A[target_id];
			}
		}
		gid = b + wB * ty + tx;
		if (gid < wA*wB ){
			if (tranB == 0)
			{
				Bs[ty][tx] = B[gid];
			}
			else
			{

				int rid = gid / wB;
				int cid = gid % wB;
				int target_id = cid*wA + rid;
				Bs[ty][tx] = B[target_id];
			}
		}

		//}

		// Synchronize to make sure the matrices are loaded
		__syncthreads();

		// Multiply the two matrices together;

		// each thread computes one element

		// of the block sub-matrix


		if (by*BLOCK_SIZE + ty < hA && bx*BLOCK_SIZE + tx < wB){
#pragma unroll
			for (int k = 0; k < BLOCK_SIZE; ++k)
			{
				if (i*BLOCK_SIZE + k < wA){
					Csub += As[ty][k] * Bs[k][tx];
				}
			}
		}

		// Synchronize to make sure that the preceding

		// computation is done before loading two new

		// sub-matrices of A and B in the next iteration

		__syncthreads();
		i++;
	}

	// Write the block sub-matrix to device memory;

	// each thread writes one element

	int c = wB * BLOCK_SIZE * by + BLOCK_SIZE * bx;
	if (by*BLOCK_SIZE + ty < hA && bx*BLOCK_SIZE + tx < wB){
		if (tran == 0)
		{
			C[c + wB * ty + tx] = C[c + wB * ty + tx] * beta + Csub*alpha;
		}
		else
		{
			int gid = c + wB * ty + tx;
			int rid = gid / wB;
			int cid = gid % wB;
			int target_id = cid*hA + rid;
			C[target_id] = C[target_id] * beta + Csub*alpha;
		}
	}
}

float *cuda_make_array(float *x, size_t n)
{
    float *x_gpu;
    size_t size = sizeof(float)*n;
    cudaError_t status = cudaMalloc((void **)&x_gpu, size);
    //check_error(status);
    if(x){
        status = cudaMemcpy(x_gpu, x, size, cudaMemcpyHostToDevice);
        //check_error(status);
    }
    if(!x_gpu) printf("Cuda malloc failed\n");
    return x_gpu;
}



int main(){

    int wA = 512;
    int wB = 512;
    int hA = 512;

    float *Acpu = (float*)malloc(hA*wA*sizeof(float));
    float *Bcpu = (float*)malloc(wA*wB*sizeof(float));
    float *Ccpu = (float*)malloc(hA*wB*sizeof(float));

    // initalize A and B

    float *A = cuda_make_array(Acpu, hA*wA);
    float *B = cuda_make_array(Bcpu, wA*wB);
    float *C = cuda_make_array(Ccpu, hA*wB);

    dim3 threads(BLOCK_SIZE, BLOCK_SIZE);
    dim3 grid((wB + threads.x - 1) / threads.x, (hA + threads.y - 1) / threads.y);
    matrixMulCUDA<< < grid, threads >> >(C, A, B, wA, wB, hA, 0, 0, 0, 1, 0);

    // check results with a cpu matrix multiplication

    free(Acpu);
    free(Bcpu);
    free(Ccpu);

    cudaFree(A);
    cudaFree(B);
    cudaFree(C);        
    return 0;
}
