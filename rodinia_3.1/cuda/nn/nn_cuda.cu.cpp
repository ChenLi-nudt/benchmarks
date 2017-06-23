# 1 "/tmp/tmpxft_00006b7a_00000000-1_nn_cuda.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/tmp/tmpxft_00006b7a_00000000-1_nn_cuda.cudafe1.cpp"
# 1 "nn_cuda.cu"
# 60 "/usr/local/cuda/bin/../include/device_types.h"
# 149 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef long ptrdiff_t;
# 211 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 3
typedef unsigned long size_t;
# 1 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 1 3
# 69 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 3
# 1 "/usr/local/cuda/bin/../include/builtin_types.h" 1 3
# 56 "/usr/local/cuda/bin/../include/builtin_types.h" 3
# 1 "/usr/local/cuda/bin/../include/device_types.h" 1 3
# 60 "/usr/local/cuda/bin/../include/device_types.h" 3
enum cudaRoundMode
{
  cudaRoundNearest,
  cudaRoundZero,
  cudaRoundPosInf,
  cudaRoundMinInf
};
# 57 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/driver_types.h" 1 3
# 118 "/usr/local/cuda/bin/../include/driver_types.h" 3
enum cudaError
{





  cudaSuccess = 0,





  cudaErrorMissingConfiguration = 1,





  cudaErrorMemoryAllocation = 2,





  cudaErrorInitializationError = 3,
# 153 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchFailure = 4,
# 162 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorPriorLaunchFailure = 5,
# 172 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchTimeout = 6,
# 181 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorLaunchOutOfResources = 7,





  cudaErrorInvalidDeviceFunction = 8,
# 196 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorInvalidConfiguration = 9,





  cudaErrorInvalidDevice = 10,





  cudaErrorInvalidValue = 11,





  cudaErrorInvalidPitchValue = 12,





  cudaErrorInvalidSymbol = 13,




  cudaErrorMapBufferObjectFailed = 14,




  cudaErrorUnmapBufferObjectFailed = 15,





  cudaErrorInvalidHostPointer = 16,





  cudaErrorInvalidDevicePointer = 17,





  cudaErrorInvalidTexture = 18,





  cudaErrorInvalidTextureBinding = 19,






  cudaErrorInvalidChannelDescriptor = 20,





  cudaErrorInvalidMemcpyDirection = 21,
# 277 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorAddressOfConstant = 22,
# 286 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorTextureFetchFailed = 23,
# 295 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorTextureNotBound = 24,
# 304 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorSynchronizationError = 25,





  cudaErrorInvalidFilterSetting = 26,





  cudaErrorInvalidNormSetting = 27,







  cudaErrorMixedDeviceExecution = 28,







  cudaErrorCudartUnloading = 29,




  cudaErrorUnknown = 30,





  cudaErrorNotYetImplemented = 31,
# 352 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorMemoryValueTooLarge = 32,






  cudaErrorInvalidResourceHandle = 33,







  cudaErrorNotReady = 34,






  cudaErrorInsufficientDriver = 35,
# 387 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorSetOnActiveProcess = 36,





  cudaErrorInvalidSurface = 37,





  cudaErrorNoDevice = 38,





  cudaErrorECCUncorrectable = 39,




  cudaErrorSharedObjectSymbolNotFound = 40,




  cudaErrorSharedObjectInitFailed = 41,





  cudaErrorUnsupportedLimit = 42,





  cudaErrorDuplicateVariableName = 43,





  cudaErrorDuplicateTextureName = 44,





  cudaErrorDuplicateSurfaceName = 45,
# 449 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorDevicesUnavailable = 46,




  cudaErrorInvalidKernelImage = 47,







  cudaErrorNoKernelImageForDevice = 48,
# 475 "/usr/local/cuda/bin/../include/driver_types.h" 3
  cudaErrorIncompatibleDriverContext = 49,






  cudaErrorPeerAccessAlreadyEnabled = 50,






  cudaErrorPeerAccessNotEnabled = 51,





  cudaErrorDeviceAlreadyInUse = 54,







  cudaErrorProfilerDisabled = 55,






  cudaErrorProfilerNotInitialized = 56,






  cudaErrorProfilerAlreadyStarted = 57,





   cudaErrorProfilerAlreadyStopped = 58,




  cudaErrorStartupFailure = 0x7f,





  cudaErrorApiFailureBase = 10000
};





enum cudaChannelFormatKind
{
  cudaChannelFormatKindSigned = 0,
  cudaChannelFormatKindUnsigned = 1,
  cudaChannelFormatKindFloat = 2,
  cudaChannelFormatKindNone = 3
};





struct cudaChannelFormatDesc
{
  int x;
  int y;
  int z;
  int w;
  enum cudaChannelFormatKind f;
};





struct cudaArray;





enum cudaMemoryType
{
  cudaMemoryTypeHost = 1,
  cudaMemoryTypeDevice = 2
};





enum cudaMemcpyKind
{
  cudaMemcpyHostToHost = 0,
  cudaMemcpyHostToDevice = 1,
  cudaMemcpyDeviceToHost = 2,
  cudaMemcpyDeviceToDevice = 3,
  cudaMemcpyDefault = 4
};






struct cudaPitchedPtr
{
  void *ptr;
  size_t pitch;
  size_t xsize;
  size_t ysize;
};






struct cudaExtent
{
  size_t width;
  size_t height;
  size_t depth;
};






struct cudaPos
{
  size_t x;
  size_t y;
  size_t z;
};





struct cudaMemcpy3DParms
{
  struct cudaArray *srcArray;
  struct cudaPos srcPos;
  struct cudaPitchedPtr srcPtr;

  struct cudaArray *dstArray;
  struct cudaPos dstPos;
  struct cudaPitchedPtr dstPtr;

  struct cudaExtent extent;
  enum cudaMemcpyKind kind;
};





struct cudaMemcpy3DPeerParms
{
  struct cudaArray *srcArray;
  struct cudaPos srcPos;
  struct cudaPitchedPtr srcPtr;
  int srcDevice;

  struct cudaArray *dstArray;
  struct cudaPos dstPos;
  struct cudaPitchedPtr dstPtr;
  int dstDevice;

  struct cudaExtent extent;
};





struct cudaGraphicsResource;





enum cudaGraphicsRegisterFlags
{
  cudaGraphicsRegisterFlagsNone = 0,
  cudaGraphicsRegisterFlagsReadOnly = 1,
  cudaGraphicsRegisterFlagsWriteDiscard = 2,
  cudaGraphicsRegisterFlagsSurfaceLoadStore = 4
};





enum cudaGraphicsMapFlags
{
  cudaGraphicsMapFlagsNone = 0,
  cudaGraphicsMapFlagsReadOnly = 1,
  cudaGraphicsMapFlagsWriteDiscard = 2
};





enum cudaGraphicsCubeFace {
  cudaGraphicsCubeFacePositiveX = 0x00,
  cudaGraphicsCubeFaceNegativeX = 0x01,
  cudaGraphicsCubeFacePositiveY = 0x02,
  cudaGraphicsCubeFaceNegativeY = 0x03,
  cudaGraphicsCubeFacePositiveZ = 0x04,
  cudaGraphicsCubeFaceNegativeZ = 0x05
};





struct cudaPointerAttributes
{




    enum cudaMemoryType memoryType;
# 728 "/usr/local/cuda/bin/../include/driver_types.h" 3
    int device;





    void *devicePointer;





    void *hostPointer;
};





struct cudaFuncAttributes
{





   size_t sharedSizeBytes;





   size_t constSizeBytes;




   size_t localSizeBytes;






   int maxThreadsPerBlock;




   int numRegs;






   int ptxVersion;






   int binaryVersion;
};





enum cudaFuncCache
{
  cudaFuncCachePreferNone = 0,
  cudaFuncCachePreferShared = 1,
  cudaFuncCachePreferL1 = 2
};





enum cudaComputeMode
{
  cudaComputeModeDefault = 0,
  cudaComputeModeExclusive = 1,
  cudaComputeModeProhibited = 2,
  cudaComputeModeExclusiveProcess = 3
};





enum cudaLimit
{
    cudaLimitStackSize = 0x00,
    cudaLimitPrintfFifoSize = 0x01,
    cudaLimitMallocHeapSize = 0x02
};





enum cudaOutputMode
{
    cudaKeyValuePair = 0x00,
    cudaCSV = 0x01
};





struct cudaDeviceProp
{
  char name[256];
  size_t totalGlobalMem;
  size_t sharedMemPerBlock;
  int regsPerBlock;
  int warpSize;
  size_t memPitch;
  int maxThreadsPerBlock;
  int maxThreadsDim[3];
  int maxGridSize[3];
  int clockRate;
  size_t totalConstMem;
  int major;
  int minor;
  size_t textureAlignment;
  int deviceOverlap;
  int multiProcessorCount;
  int kernelExecTimeoutEnabled;
  int integrated;
  int canMapHostMemory;
  int computeMode;
  int maxTexture1D;
  int maxTexture2D[2];
  int maxTexture3D[3];
  int maxTexture1DLayered[2];
  int maxTexture2DLayered[3];
  size_t surfaceAlignment;
  int concurrentKernels;
  int ECCEnabled;
  int pciBusID;
  int pciDeviceID;
  int pciDomainID;
  int tccDriver;
  int asyncEngineCount;
  int unifiedAddressing;
  int memoryClockRate;
  int memoryBusWidth;
  int l2CacheSize;
  int maxThreadsPerMultiProcessor;
};
# 936 "/usr/local/cuda/bin/../include/driver_types.h" 3
typedef enum cudaError cudaError_t;





typedef struct CUstream_st *cudaStream_t;





typedef struct CUevent_st *cudaEvent_t;





typedef struct cudaGraphicsResource *cudaGraphicsResource_t;





typedef struct CUuuid_st cudaUUID_t;





typedef enum cudaOutputMode cudaOutputMode_t;
# 58 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/surface_types.h" 1 3
# 77 "/usr/local/cuda/bin/../include/surface_types.h" 3
enum cudaSurfaceBoundaryMode
{
  cudaBoundaryModeZero = 0,
  cudaBoundaryModeClamp = 1,
  cudaBoundaryModeTrap = 2
};





enum cudaSurfaceFormatMode
{
  cudaFormatModeForced = 0,
  cudaFormatModeAuto = 1
};





struct surfaceReference
{



  struct cudaChannelFormatDesc channelDesc;
};
# 59 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/texture_types.h" 1 3
# 83 "/usr/local/cuda/bin/../include/texture_types.h" 3
enum cudaTextureAddressMode
{
  cudaAddressModeWrap = 0,
  cudaAddressModeClamp = 1,
  cudaAddressModeMirror = 2,
  cudaAddressModeBorder = 3
};





enum cudaTextureFilterMode
{
  cudaFilterModePoint = 0,
  cudaFilterModeLinear = 1
};





enum cudaTextureReadMode
{
  cudaReadModeElementType = 0,
  cudaReadModeNormalizedFloat = 1
};





struct textureReference
{



  int normalized;



  enum cudaTextureFilterMode filterMode;



  enum cudaTextureAddressMode addressMode[3];



  struct cudaChannelFormatDesc channelDesc;



  int sRGB;
  int __cudaReserved[15];
};
# 60 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/vector_types.h" 1 3
# 59 "/usr/local/cuda/bin/../include/vector_types.h" 3
# 1 "/usr/local/cuda/bin/../include/builtin_types.h" 1 3
# 60 "/usr/local/cuda/bin/../include/builtin_types.h" 3
# 1 "/usr/local/cuda/bin/../include/vector_types.h" 1 3
# 60 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 60 "/usr/local/cuda/bin/../include/vector_types.h" 2 3
# 1 "/usr/local/cuda/bin/../include/host_defines.h" 1 3
# 61 "/usr/local/cuda/bin/../include/vector_types.h" 2 3
# 92 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct char1
{
  signed char x;
};


struct uchar1
{
  unsigned char x;
};


struct __attribute__((aligned(2))) char2
{
  signed char x, y;
};


struct __attribute__((aligned(2))) uchar2
{
  unsigned char x, y;
};


struct char3
{
  signed char x, y, z;
};


struct uchar3
{
  unsigned char x, y, z;
};


struct __attribute__((aligned(4))) char4
{
  signed char x, y, z, w;
};


struct __attribute__((aligned(4))) uchar4
{
  unsigned char x, y, z, w;
};


struct short1
{
  short x;
};


struct ushort1
{
  unsigned short x;
};


struct __attribute__((aligned(4))) short2
{
  short x, y;
};


struct __attribute__((aligned(4))) ushort2
{
  unsigned short x, y;
};


struct short3
{
  short x, y, z;
};


struct ushort3
{
  unsigned short x, y, z;
};


struct __attribute__((aligned(8))) short4 { short x; short y; short z; short w; };


struct __attribute__((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; };


struct int1
{
  int x;
};


struct uint1
{
  unsigned int x;
};


struct __attribute__((aligned(8))) int2 { int x; int y; };


struct __attribute__((aligned(8))) uint2 { unsigned int x; unsigned int y; };


struct int3
{
  int x, y, z;
};


struct uint3
{
  unsigned int x, y, z;
};


struct __attribute__((aligned(16))) int4
{
  int x, y, z, w;
};


struct __attribute__((aligned(16))) uint4
{
  unsigned int x, y, z, w;
};


struct long1
{
  long int x;
};


struct ulong1
{
  unsigned long x;
};
# 246 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct __attribute__((aligned(2*sizeof(long int)))) long2
{
  long int x, y;
};


struct __attribute__((aligned(2*sizeof(unsigned long int)))) ulong2
{
  unsigned long int x, y;
};




struct long3
{
  long int x, y, z;
};


struct ulong3
{
  unsigned long int x, y, z;
};


struct __attribute__((aligned(16))) long4
{
  long int x, y, z, w;
};


struct __attribute__((aligned(16))) ulong4
{
  unsigned long int x, y, z, w;
};


struct float1
{
  float x;
};


struct __attribute__((aligned(8))) float2 { float x; float y; };


struct float3
{
  float x, y, z;
};


struct __attribute__((aligned(16))) float4
{
  float x, y, z, w;
};


struct longlong1
{
  long long int x;
};


struct ulonglong1
{
  unsigned long long int x;
};


struct __attribute__((aligned(16))) longlong2
{
  long long int x, y;
};


struct __attribute__((aligned(16))) ulonglong2
{
  unsigned long long int x, y;
};


struct longlong3
{
  long long int x, y, z;
};


struct ulonglong3
{
  unsigned long long int x, y, z;
};


struct __attribute__((aligned(16))) longlong4
{
  long long int x, y, z ,w;
};


struct __attribute__((aligned(16))) ulonglong4
{
  unsigned long long int x, y, z, w;
};


struct double1
{
  double x;
};


struct __attribute__((aligned(16))) double2
{
  double x, y;
};


struct double3
{
  double x, y, z;
};


struct __attribute__((aligned(16))) double4
{
  double x, y, z, w;
};
# 390 "/usr/local/cuda/bin/../include/vector_types.h" 3
typedef struct char1 char1;

typedef struct uchar1 uchar1;

typedef struct char2 char2;

typedef struct uchar2 uchar2;

typedef struct char3 char3;

typedef struct uchar3 uchar3;

typedef struct char4 char4;

typedef struct uchar4 uchar4;

typedef struct short1 short1;

typedef struct ushort1 ushort1;

typedef struct short2 short2;

typedef struct ushort2 ushort2;

typedef struct short3 short3;

typedef struct ushort3 ushort3;

typedef struct short4 short4;

typedef struct ushort4 ushort4;

typedef struct int1 int1;

typedef struct uint1 uint1;

typedef struct int2 int2;

typedef struct uint2 uint2;

typedef struct int3 int3;

typedef struct uint3 uint3;

typedef struct int4 int4;

typedef struct uint4 uint4;

typedef struct long1 long1;

typedef struct ulong1 ulong1;

typedef struct long2 long2;

typedef struct ulong2 ulong2;

typedef struct long3 long3;

typedef struct ulong3 ulong3;

typedef struct long4 long4;

typedef struct ulong4 ulong4;

typedef struct float1 float1;

typedef struct float2 float2;

typedef struct float3 float3;

typedef struct float4 float4;

typedef struct longlong1 longlong1;

typedef struct ulonglong1 ulonglong1;

typedef struct longlong2 longlong2;

typedef struct ulonglong2 ulonglong2;

typedef struct longlong3 longlong3;

typedef struct ulonglong3 ulonglong3;

typedef struct longlong4 longlong4;

typedef struct ulonglong4 ulonglong4;

typedef struct double1 double1;

typedef struct double2 double2;

typedef struct double3 double3;

typedef struct double4 double4;
# 493 "/usr/local/cuda/bin/../include/vector_types.h" 3
struct dim3
{
    unsigned int x, y, z;

    dim3(unsigned int vx = 1, unsigned int vy = 1, unsigned int vz = 1) : x(vx), y(vy), z(vz) {}
    dim3(uint3 v) : x(v.x), y(v.y), z(v.z) {}
    operator uint3(void) { uint3 t; t.x = x; t.y = y; t.z = z; return t; }

};


typedef struct dim3 dim3;
# 60 "/usr/local/cuda/bin/../include/builtin_types.h" 2 3
# 70 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2 3
# 1 "/usr/local/cuda/bin/../include/crt/storage_class.h" 1 3
# 71 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2 3
# 213 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stddef.h" 2 3
# 118 "/usr/local/cuda/bin/../include/driver_types.h"
# 541 "/usr/local/cuda/bin/../include/driver_types.h"
# 553 "/usr/local/cuda/bin/../include/driver_types.h"
# 566 "/usr/local/cuda/bin/../include/driver_types.h"
# 572 "/usr/local/cuda/bin/../include/driver_types.h"
# 582 "/usr/local/cuda/bin/../include/driver_types.h"
# 596 "/usr/local/cuda/bin/../include/driver_types.h"
# 609 "/usr/local/cuda/bin/../include/driver_types.h"
# 621 "/usr/local/cuda/bin/../include/driver_types.h"
# 632 "/usr/local/cuda/bin/../include/driver_types.h"
# 650 "/usr/local/cuda/bin/../include/driver_types.h"
# 669 "/usr/local/cuda/bin/../include/driver_types.h"
# 675 "/usr/local/cuda/bin/../include/driver_types.h"
# 687 "/usr/local/cuda/bin/../include/driver_types.h"
# 698 "/usr/local/cuda/bin/../include/driver_types.h"
# 711 "/usr/local/cuda/bin/../include/driver_types.h"
# 747 "/usr/local/cuda/bin/../include/driver_types.h"
# 798 "/usr/local/cuda/bin/../include/driver_types.h"
# 809 "/usr/local/cuda/bin/../include/driver_types.h"
# 821 "/usr/local/cuda/bin/../include/driver_types.h"
# 832 "/usr/local/cuda/bin/../include/driver_types.h"
# 842 "/usr/local/cuda/bin/../include/driver_types.h"
# 936 "/usr/local/cuda/bin/../include/driver_types.h"
# 942 "/usr/local/cuda/bin/../include/driver_types.h"
# 948 "/usr/local/cuda/bin/../include/driver_types.h"
# 954 "/usr/local/cuda/bin/../include/driver_types.h"
# 960 "/usr/local/cuda/bin/../include/driver_types.h"
# 966 "/usr/local/cuda/bin/../include/driver_types.h"
# 77 "/usr/local/cuda/bin/../include/surface_types.h"
# 88 "/usr/local/cuda/bin/../include/surface_types.h"
# 98 "/usr/local/cuda/bin/../include/surface_types.h"
# 83 "/usr/local/cuda/bin/../include/texture_types.h"
# 95 "/usr/local/cuda/bin/../include/texture_types.h"
# 105 "/usr/local/cuda/bin/../include/texture_types.h"
# 115 "/usr/local/cuda/bin/../include/texture_types.h"
# 92 "/usr/local/cuda/bin/../include/vector_types.h"
# 98 "/usr/local/cuda/bin/../include/vector_types.h"
# 104 "/usr/local/cuda/bin/../include/vector_types.h"
# 110 "/usr/local/cuda/bin/../include/vector_types.h"
# 116 "/usr/local/cuda/bin/../include/vector_types.h"
# 122 "/usr/local/cuda/bin/../include/vector_types.h"
# 128 "/usr/local/cuda/bin/../include/vector_types.h"
# 134 "/usr/local/cuda/bin/../include/vector_types.h"
# 140 "/usr/local/cuda/bin/../include/vector_types.h"
# 146 "/usr/local/cuda/bin/../include/vector_types.h"
# 152 "/usr/local/cuda/bin/../include/vector_types.h"
# 158 "/usr/local/cuda/bin/../include/vector_types.h"
# 164 "/usr/local/cuda/bin/../include/vector_types.h"
# 170 "/usr/local/cuda/bin/../include/vector_types.h"
# 176 "/usr/local/cuda/bin/../include/vector_types.h"
# 179 "/usr/local/cuda/bin/../include/vector_types.h"
# 182 "/usr/local/cuda/bin/../include/vector_types.h"
# 188 "/usr/local/cuda/bin/../include/vector_types.h"
# 194 "/usr/local/cuda/bin/../include/vector_types.h"
# 197 "/usr/local/cuda/bin/../include/vector_types.h"
# 200 "/usr/local/cuda/bin/../include/vector_types.h"
# 206 "/usr/local/cuda/bin/../include/vector_types.h"
# 212 "/usr/local/cuda/bin/../include/vector_types.h"
# 218 "/usr/local/cuda/bin/../include/vector_types.h"
# 224 "/usr/local/cuda/bin/../include/vector_types.h"
# 230 "/usr/local/cuda/bin/../include/vector_types.h"
# 246 "/usr/local/cuda/bin/../include/vector_types.h"
# 252 "/usr/local/cuda/bin/../include/vector_types.h"
# 260 "/usr/local/cuda/bin/../include/vector_types.h"
# 266 "/usr/local/cuda/bin/../include/vector_types.h"
# 272 "/usr/local/cuda/bin/../include/vector_types.h"
# 278 "/usr/local/cuda/bin/../include/vector_types.h"
# 284 "/usr/local/cuda/bin/../include/vector_types.h"
# 290 "/usr/local/cuda/bin/../include/vector_types.h"
# 293 "/usr/local/cuda/bin/../include/vector_types.h"
# 299 "/usr/local/cuda/bin/../include/vector_types.h"
# 305 "/usr/local/cuda/bin/../include/vector_types.h"
# 311 "/usr/local/cuda/bin/../include/vector_types.h"
# 317 "/usr/local/cuda/bin/../include/vector_types.h"
# 323 "/usr/local/cuda/bin/../include/vector_types.h"
# 329 "/usr/local/cuda/bin/../include/vector_types.h"
# 335 "/usr/local/cuda/bin/../include/vector_types.h"
# 341 "/usr/local/cuda/bin/../include/vector_types.h"
# 347 "/usr/local/cuda/bin/../include/vector_types.h"
# 353 "/usr/local/cuda/bin/../include/vector_types.h"
# 359 "/usr/local/cuda/bin/../include/vector_types.h"
# 365 "/usr/local/cuda/bin/../include/vector_types.h"
# 371 "/usr/local/cuda/bin/../include/vector_types.h"
# 390 "/usr/local/cuda/bin/../include/vector_types.h"
# 392 "/usr/local/cuda/bin/../include/vector_types.h"
# 394 "/usr/local/cuda/bin/../include/vector_types.h"
# 396 "/usr/local/cuda/bin/../include/vector_types.h"
# 398 "/usr/local/cuda/bin/../include/vector_types.h"
# 400 "/usr/local/cuda/bin/../include/vector_types.h"
# 402 "/usr/local/cuda/bin/../include/vector_types.h"
# 404 "/usr/local/cuda/bin/../include/vector_types.h"
# 406 "/usr/local/cuda/bin/../include/vector_types.h"
# 408 "/usr/local/cuda/bin/../include/vector_types.h"
# 410 "/usr/local/cuda/bin/../include/vector_types.h"
# 412 "/usr/local/cuda/bin/../include/vector_types.h"
# 414 "/usr/local/cuda/bin/../include/vector_types.h"
# 416 "/usr/local/cuda/bin/../include/vector_types.h"
# 418 "/usr/local/cuda/bin/../include/vector_types.h"
# 420 "/usr/local/cuda/bin/../include/vector_types.h"
# 422 "/usr/local/cuda/bin/../include/vector_types.h"
# 424 "/usr/local/cuda/bin/../include/vector_types.h"
# 426 "/usr/local/cuda/bin/../include/vector_types.h"
# 428 "/usr/local/cuda/bin/../include/vector_types.h"
# 430 "/usr/local/cuda/bin/../include/vector_types.h"
# 432 "/usr/local/cuda/bin/../include/vector_types.h"
# 434 "/usr/local/cuda/bin/../include/vector_types.h"
# 436 "/usr/local/cuda/bin/../include/vector_types.h"
# 438 "/usr/local/cuda/bin/../include/vector_types.h"
# 440 "/usr/local/cuda/bin/../include/vector_types.h"
# 442 "/usr/local/cuda/bin/../include/vector_types.h"
# 444 "/usr/local/cuda/bin/../include/vector_types.h"
# 446 "/usr/local/cuda/bin/../include/vector_types.h"
# 448 "/usr/local/cuda/bin/../include/vector_types.h"
# 450 "/usr/local/cuda/bin/../include/vector_types.h"
# 452 "/usr/local/cuda/bin/../include/vector_types.h"
# 454 "/usr/local/cuda/bin/../include/vector_types.h"
# 456 "/usr/local/cuda/bin/../include/vector_types.h"
# 458 "/usr/local/cuda/bin/../include/vector_types.h"
# 460 "/usr/local/cuda/bin/../include/vector_types.h"
# 462 "/usr/local/cuda/bin/../include/vector_types.h"
# 464 "/usr/local/cuda/bin/../include/vector_types.h"
# 466 "/usr/local/cuda/bin/../include/vector_types.h"
# 468 "/usr/local/cuda/bin/../include/vector_types.h"
# 470 "/usr/local/cuda/bin/../include/vector_types.h"
# 472 "/usr/local/cuda/bin/../include/vector_types.h"
# 474 "/usr/local/cuda/bin/../include/vector_types.h"
# 476 "/usr/local/cuda/bin/../include/vector_types.h"
# 478 "/usr/local/cuda/bin/../include/vector_types.h"
# 480 "/usr/local/cuda/bin/../include/vector_types.h"
# 482 "/usr/local/cuda/bin/../include/vector_types.h"
# 484 "/usr/local/cuda/bin/../include/vector_types.h"
# 493 "/usr/local/cuda/bin/../include/vector_types.h"
# 504 "/usr/local/cuda/bin/../include/vector_types.h"
# 134 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceReset();
# 151 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceSynchronize();
# 203 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceSetLimit(cudaLimit , size_t );
# 227 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceGetLimit(size_t * , cudaLimit );
# 257 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceGetCacheConfig(cudaFuncCache * );
# 298 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceSetCacheConfig(cudaFuncCache );
# 332 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadExit();
# 356 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSynchronize();
# 415 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetLimit(cudaLimit , size_t );
# 446 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetLimit(size_t * , cudaLimit );
# 481 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetCacheConfig(cudaFuncCache * );
# 527 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetCacheConfig(cudaFuncCache );
# 581 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetLastError();
# 624 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaPeekAtLastError();
# 638 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" const char *cudaGetErrorString(cudaError_t );
# 668 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceCount(int * );
# 829 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp * , int );
# 848 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaChooseDevice(int * , const cudaDeviceProp * );
# 881 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDevice(int );
# 898 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDevice(int * );
# 927 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetValidDevices(int * , int );
# 987 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDeviceFlags(unsigned );
# 1013 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamCreate(cudaStream_t * );
# 1034 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t );
# 1070 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamWaitEvent(cudaStream_t , cudaEvent_t , unsigned );
# 1089 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t );
# 1107 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamQuery(cudaStream_t );
# 1139 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreate(cudaEvent_t * );
# 1170 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreateWithFlags(cudaEvent_t * , unsigned );
# 1203 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventRecord(cudaEvent_t , cudaStream_t = 0);
# 1232 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventQuery(cudaEvent_t );
# 1264 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t );
# 1289 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t );
# 1330 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventElapsedTime(float * , cudaEvent_t , cudaEvent_t );
# 1369 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaConfigureCall(dim3 , dim3 , size_t = (0), cudaStream_t = 0);
# 1396 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetupArgument(const void * , size_t , size_t );
# 1442 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncSetCacheConfig(const char * , cudaFuncCache );
# 1477 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaLaunch(const char * );
# 1510 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * , const char * );
# 1532 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForDevice(double * );
# 1554 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForHost(double * );
# 1586 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc(void ** , size_t );
# 1615 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocHost(void ** , size_t );
# 1654 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocPitch(void ** , size_t * , size_t , size_t );
# 1693 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocArray(cudaArray ** , const cudaChannelFormatDesc * , size_t , size_t = (0), unsigned = (0));
# 1717 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFree(void * );
# 1737 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeHost(void * );
# 1759 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeArray(cudaArray * );
# 1818 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostAlloc(void ** , size_t , unsigned );
# 1874 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostRegister(void * , size_t , unsigned );
# 1893 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostUnregister(void * );
# 1920 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetDevicePointer(void ** , void * , unsigned );
# 1939 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetFlags(unsigned * , void * );
# 1974 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr * , cudaExtent );
# 2035 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3DArray(cudaArray ** , const cudaChannelFormatDesc * , cudaExtent , unsigned = (0));
# 2132 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms * );
# 2159 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DPeer(const cudaMemcpy3DPeerParms * );
# 2264 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms * , cudaStream_t = 0);
# 2285 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DPeerAsync(const cudaMemcpy3DPeerParms * , cudaStream_t = 0);
# 2304 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemGetInfo(size_t * , size_t * );
# 2337 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy(void * , const void * , size_t , cudaMemcpyKind );
# 2368 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyPeer(void * , int , const void * , int , size_t );
# 2401 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArray(cudaArray * , size_t , size_t , const void * , size_t , cudaMemcpyKind );
# 2434 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArray(void * , const cudaArray * , size_t , size_t , size_t , cudaMemcpyKind );
# 2469 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray * , size_t , size_t , const cudaArray * , size_t , size_t , size_t , cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2511 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2D(void * , size_t , const void * , size_t , size_t , size_t , cudaMemcpyKind );
# 2552 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray * , size_t , size_t , const void * , size_t , size_t , size_t , cudaMemcpyKind );
# 2593 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArray(void * , size_t , const cudaArray * , size_t , size_t , size_t , size_t , cudaMemcpyKind );
# 2632 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray * , size_t , size_t , const cudaArray * , size_t , size_t , size_t , size_t , cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2667 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbol(const char * , const void * , size_t , size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice);
# 2701 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbol(void * , const char * , size_t , size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost);
# 2744 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyAsync(void * , const void * , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 2774 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyPeerAsync(void * , int , const void * , int , size_t , cudaStream_t = 0);
# 2816 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray * , size_t , size_t , const void * , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 2858 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void * , const cudaArray * , size_t , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 2909 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DAsync(void * , size_t , const void * , size_t , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 2959 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray * , size_t , size_t , const void * , size_t , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3009 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void * , size_t , const cudaArray * , size_t , size_t , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3053 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char * , const void * , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3096 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void * , const char * , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3118 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset(void * , int , size_t );
# 3144 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2D(void * , size_t , int , size_t , size_t );
# 3183 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr , int , cudaExtent );
# 3210 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemsetAsync(void * , int , size_t , cudaStream_t = 0);
# 3242 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2DAsync(void * , size_t , int , size_t , size_t , cudaStream_t = 0);
# 3287 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3DAsync(cudaPitchedPtr , int , cudaExtent , cudaStream_t = 0);
# 3314 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolAddress(void ** , const char * );
# 3337 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolSize(size_t * , const char * );
# 3482 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaPointerGetAttributes(cudaPointerAttributes * , void * );
# 3516 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceCanAccessPeer(int * , int , int );
# 3557 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceEnablePeerAccess(int , unsigned );
# 3582 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceDisablePeerAccess(int );
# 3628 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t );
# 3660 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t , unsigned );
# 3695 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsMapResources(int , cudaGraphicsResource_t * , cudaStream_t = 0);
# 3726 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnmapResources(int , cudaGraphicsResource_t * , cudaStream_t = 0);
# 3755 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceGetMappedPointer(void ** , size_t * , cudaGraphicsResource_t );
# 3789 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray ** , cudaGraphicsResource_t , unsigned , unsigned );
# 3822 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc * , const cudaArray * );
# 3857 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int , int , int , int , cudaChannelFormatKind );
# 3899 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture(size_t * , const textureReference * , const void * , const cudaChannelFormatDesc * , size_t = (((2147483647) * 2U) + 1U));
# 3942 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture2D(size_t * , const textureReference * , const void * , const cudaChannelFormatDesc * , size_t , size_t , size_t );
# 3970 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTextureToArray(const textureReference * , const cudaArray * , const cudaChannelFormatDesc * );
# 3991 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaUnbindTexture(const textureReference * );
# 4016 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t * , const textureReference * );
# 4040 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureReference(const textureReference ** , const char * );
# 4073 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindSurfaceToArray(const surfaceReference * , const cudaArray * , const cudaChannelFormatDesc * );
# 4091 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSurfaceReference(const surfaceReference ** , const char * );
# 4118 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDriverGetVersion(int * );
# 4135 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaRuntimeGetVersion(int * );
# 4140 "/usr/local/cuda/bin/../include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetExportTable(const void ** , const cudaUUID_t * );
# 107 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc()
# 108 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 109 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone);
# 110 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 112 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf()
# 113 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 114 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 116 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 117 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 119 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1()
# 120 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 121 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 123 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 124 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 126 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2()
# 127 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 128 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 130 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 131 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 133 "/usr/local/cuda/bin/../include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4()
# 134 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 135 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 137 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 138 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 140 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> ()
# 141 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 142 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(char)) * 8);
# 147 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 149 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 151 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> ()
# 152 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 153 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 155 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 156 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 158 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> ()
# 159 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 160 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 162 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 163 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 165 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> ()
# 166 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 167 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 169 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 170 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 172 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> ()
# 173 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 174 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 176 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 177 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 179 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> ()
# 180 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 181 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 183 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 184 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 186 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> ()
# 187 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 188 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 190 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 191 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 193 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> ()
# 194 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 195 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 197 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 198 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 200 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> ()
# 201 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 202 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 204 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 205 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 207 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> ()
# 208 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 209 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 211 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 212 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 214 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> ()
# 215 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 216 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 218 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 219 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 221 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> ()
# 222 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 223 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 225 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 226 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 228 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> ()
# 229 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 230 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 232 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 233 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 235 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> ()
# 236 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 237 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 239 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 240 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 242 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> ()
# 243 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 244 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 246 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 247 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 249 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> ()
# 250 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 251 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 253 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 254 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 256 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> ()
# 257 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 258 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 260 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 261 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 263 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> ()
# 264 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 265 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 267 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 268 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 270 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> ()
# 271 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 272 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 274 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 275 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 277 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> ()
# 278 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 279 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 281 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 282 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 284 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> ()
# 285 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 286 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 288 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 289 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 291 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> ()
# 292 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 293 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 295 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 296 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 298 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> ()
# 299 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 300 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 302 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 303 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 305 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> ()
# 306 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 307 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 309 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 310 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 312 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> ()
# 313 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 314 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 316 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 317 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 379 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> ()
# 380 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 381 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 383 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 384 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 386 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> ()
# 387 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 388 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 390 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 391 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 393 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> ()
# 394 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 395 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 397 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 398 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 400 "/usr/local/cuda/bin/../include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> ()
# 401 "/usr/local/cuda/bin/../include/channel_descriptor.h"
{
# 402 "/usr/local/cuda/bin/../include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 404 "/usr/local/cuda/bin/../include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 405 "/usr/local/cuda/bin/../include/channel_descriptor.h"
}
# 79 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz)
# 80 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 81 "/usr/local/cuda/bin/../include/driver_functions.h"
cudaPitchedPtr s;
# 83 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.ptr) = d;
# 84 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.pitch) = p;
# 85 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.xsize) = xsz;
# 86 "/usr/local/cuda/bin/../include/driver_functions.h"
(s.ysize) = ysz;
# 88 "/usr/local/cuda/bin/../include/driver_functions.h"
return s;
# 89 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 106 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z)
# 107 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 108 "/usr/local/cuda/bin/../include/driver_functions.h"
cudaPos p;
# 110 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.x) = x;
# 111 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.y) = y;
# 112 "/usr/local/cuda/bin/../include/driver_functions.h"
(p.z) = z;
# 114 "/usr/local/cuda/bin/../include/driver_functions.h"
return p;
# 115 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 132 "/usr/local/cuda/bin/../include/driver_functions.h"
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d)
# 133 "/usr/local/cuda/bin/../include/driver_functions.h"
{
# 134 "/usr/local/cuda/bin/../include/driver_functions.h"
cudaExtent e;
# 136 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.width) = w;
# 137 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.height) = h;
# 138 "/usr/local/cuda/bin/../include/driver_functions.h"
(e.depth) = d;
# 140 "/usr/local/cuda/bin/../include/driver_functions.h"
return e;
# 141 "/usr/local/cuda/bin/../include/driver_functions.h"
}
# 69 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char1 make_char1(signed char x)
# 70 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 71 "/usr/local/cuda/bin/../include/vector_functions.h"
char1 t; (t.x) = x; return t;
# 72 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 74 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar1 make_uchar1(unsigned char x)
# 75 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 76 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar1 t; (t.x) = x; return t;
# 77 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 79 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char2 make_char2(signed char x, signed char y)
# 80 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 81 "/usr/local/cuda/bin/../include/vector_functions.h"
char2 t; (t.x) = x; (t.y) = y; return t;
# 82 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 84 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar2 make_uchar2(unsigned char x, unsigned char y)
# 85 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 86 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar2 t; (t.x) = x; (t.y) = y; return t;
# 87 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 89 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char3 make_char3(signed char x, signed char y, signed char z)
# 90 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 91 "/usr/local/cuda/bin/../include/vector_functions.h"
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 92 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 94 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z)
# 95 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 96 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 97 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 99 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w)
# 100 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 101 "/usr/local/cuda/bin/../include/vector_functions.h"
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 102 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 104 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
# 105 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 106 "/usr/local/cuda/bin/../include/vector_functions.h"
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 107 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 109 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short1 make_short1(short x)
# 110 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 111 "/usr/local/cuda/bin/../include/vector_functions.h"
short1 t; (t.x) = x; return t;
# 112 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 114 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort1 make_ushort1(unsigned short x)
# 115 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 116 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort1 t; (t.x) = x; return t;
# 117 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 119 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short2 make_short2(short x, short y)
# 120 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 121 "/usr/local/cuda/bin/../include/vector_functions.h"
short2 t; (t.x) = x; (t.y) = y; return t;
# 122 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 124 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort2 make_ushort2(unsigned short x, unsigned short y)
# 125 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 126 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort2 t; (t.x) = x; (t.y) = y; return t;
# 127 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 129 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short3 make_short3(short x, short y, short z)
# 130 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 131 "/usr/local/cuda/bin/../include/vector_functions.h"
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 132 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 134 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z)
# 135 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 136 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 137 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 139 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline short4 make_short4(short x, short y, short z, short w)
# 140 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 141 "/usr/local/cuda/bin/../include/vector_functions.h"
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 142 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 144 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
# 145 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 146 "/usr/local/cuda/bin/../include/vector_functions.h"
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 147 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 149 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int1 make_int1(int x)
# 150 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 151 "/usr/local/cuda/bin/../include/vector_functions.h"
int1 t; (t.x) = x; return t;
# 152 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 154 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint1 make_uint1(unsigned x)
# 155 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 156 "/usr/local/cuda/bin/../include/vector_functions.h"
uint1 t; (t.x) = x; return t;
# 157 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 159 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int2 make_int2(int x, int y)
# 160 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 161 "/usr/local/cuda/bin/../include/vector_functions.h"
int2 t; (t.x) = x; (t.y) = y; return t;
# 162 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 164 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint2 make_uint2(unsigned x, unsigned y)
# 165 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 166 "/usr/local/cuda/bin/../include/vector_functions.h"
uint2 t; (t.x) = x; (t.y) = y; return t;
# 167 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 169 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int3 make_int3(int x, int y, int z)
# 170 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 171 "/usr/local/cuda/bin/../include/vector_functions.h"
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 172 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 174 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z)
# 175 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 176 "/usr/local/cuda/bin/../include/vector_functions.h"
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 177 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 179 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline int4 make_int4(int x, int y, int z, int w)
# 180 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 181 "/usr/local/cuda/bin/../include/vector_functions.h"
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 182 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 184 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w)
# 185 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 186 "/usr/local/cuda/bin/../include/vector_functions.h"
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 187 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 189 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long1 make_long1(long x)
# 190 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 191 "/usr/local/cuda/bin/../include/vector_functions.h"
long1 t; (t.x) = x; return t;
# 192 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 194 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong1 make_ulong1(unsigned long x)
# 195 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 196 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong1 t; (t.x) = x; return t;
# 197 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 199 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long2 make_long2(long x, long y)
# 200 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 201 "/usr/local/cuda/bin/../include/vector_functions.h"
long2 t; (t.x) = x; (t.y) = y; return t;
# 202 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 204 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong2 make_ulong2(unsigned long x, unsigned long y)
# 205 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 206 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong2 t; (t.x) = x; (t.y) = y; return t;
# 207 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 209 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long3 make_long3(long x, long y, long z)
# 210 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 211 "/usr/local/cuda/bin/../include/vector_functions.h"
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 212 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 214 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z)
# 215 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 216 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 217 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 219 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline long4 make_long4(long x, long y, long z, long w)
# 220 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 221 "/usr/local/cuda/bin/../include/vector_functions.h"
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 222 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 224 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w)
# 225 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 226 "/usr/local/cuda/bin/../include/vector_functions.h"
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 227 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 229 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float1 make_float1(float x)
# 230 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 231 "/usr/local/cuda/bin/../include/vector_functions.h"
float1 t; (t.x) = x; return t;
# 232 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 234 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float2 make_float2(float x, float y)
# 235 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 236 "/usr/local/cuda/bin/../include/vector_functions.h"
float2 t; (t.x) = x; (t.y) = y; return t;
# 237 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 239 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float3 make_float3(float x, float y, float z)
# 240 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 241 "/usr/local/cuda/bin/../include/vector_functions.h"
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 242 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 244 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline float4 make_float4(float x, float y, float z, float w)
# 245 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 246 "/usr/local/cuda/bin/../include/vector_functions.h"
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 247 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 249 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong1 make_longlong1(long long x)
# 250 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 251 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong1 t; (t.x) = x; return t;
# 252 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 254 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong1 make_ulonglong1(unsigned long long x)
# 255 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 256 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong1 t; (t.x) = x; return t;
# 257 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 259 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong2 make_longlong2(long long x, long long y)
# 260 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 261 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong2 t; (t.x) = x; (t.y) = y; return t;
# 262 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 264 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y)
# 265 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 266 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong2 t; (t.x) = x; (t.y) = y; return t;
# 267 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 269 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong3 make_longlong3(long long x, long long y, long long z)
# 270 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 271 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 272 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 274 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z)
# 275 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 276 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 277 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 279 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w)
# 280 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 281 "/usr/local/cuda/bin/../include/vector_functions.h"
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 282 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 284 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w)
# 285 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 286 "/usr/local/cuda/bin/../include/vector_functions.h"
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 287 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 289 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double1 make_double1(double x)
# 290 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 291 "/usr/local/cuda/bin/../include/vector_functions.h"
double1 t; (t.x) = x; return t;
# 292 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 294 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double2 make_double2(double x, double y)
# 295 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 296 "/usr/local/cuda/bin/../include/vector_functions.h"
double2 t; (t.x) = x; (t.y) = y; return t;
# 297 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 299 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double3 make_double3(double x, double y, double z)
# 300 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 301 "/usr/local/cuda/bin/../include/vector_functions.h"
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 302 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 304 "/usr/local/cuda/bin/../include/vector_functions.h"
static inline double4 make_double4(double x, double y, double z, double w)
# 305 "/usr/local/cuda/bin/../include/vector_functions.h"
{
# 306 "/usr/local/cuda/bin/../include/vector_functions.h"
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 307 "/usr/local/cuda/bin/../include/vector_functions.h"
}
# 42 "/usr/include/string.h" 3
extern "C" void *memcpy(void *__restrict__ , const void *__restrict__ , size_t ) throw()
# 43 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 46 "/usr/include/string.h" 3
extern "C" void *memmove(void * , const void * , size_t ) throw()
# 47 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 54 "/usr/include/string.h" 3
extern "C" void *memccpy(void *__restrict__ , const void *__restrict__ , int , size_t ) throw()
# 56 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 62 "/usr/include/string.h" 3
extern "C" void *memset(void * , int , size_t ) throw() __attribute((__nonnull__(1)));
# 65 "/usr/include/string.h" 3
extern "C" int memcmp(const void * , const void * , size_t ) throw()
# 66 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 72 "/usr/include/string.h" 3
extern void *memchr(void * , int , size_t ) throw() __asm__("memchr")
# 73 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 74 "/usr/include/string.h" 3
extern const void *memchr(const void * , int , size_t ) throw() __asm__("memchr")
# 75 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 101 "/usr/include/string.h" 3
void *rawmemchr(void * , int ) throw() __asm__("rawmemchr")
# 102 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 103 "/usr/include/string.h" 3
const void *rawmemchr(const void * , int ) throw() __asm__("rawmemchr")
# 104 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 112 "/usr/include/string.h" 3
void *memrchr(void * , int , size_t ) throw() __asm__("memrchr")
# 113 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 114 "/usr/include/string.h" 3
const void *memrchr(const void * , int , size_t ) throw() __asm__("memrchr")
# 115 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 125 "/usr/include/string.h" 3
extern "C" char *strcpy(char *__restrict__ , const char *__restrict__ ) throw()
# 126 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 128 "/usr/include/string.h" 3
extern "C" char *strncpy(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 130 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 133 "/usr/include/string.h" 3
extern "C" char *strcat(char *__restrict__ , const char *__restrict__ ) throw()
# 134 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 136 "/usr/include/string.h" 3
extern "C" char *strncat(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 137 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 140 "/usr/include/string.h" 3
extern "C" int strcmp(const char * , const char * ) throw()
# 141 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 143 "/usr/include/string.h" 3
extern "C" int strncmp(const char * , const char * , size_t ) throw()
# 144 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 147 "/usr/include/string.h" 3
extern "C" int strcoll(const char * , const char * ) throw()
# 148 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 150 "/usr/include/string.h" 3
extern "C" size_t strxfrm(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 152 "/usr/include/string.h" 3
 __attribute((__nonnull__(2)));
# 39 "/usr/include/xlocale.h" 3
extern "C" { typedef
# 27 "/usr/include/xlocale.h" 3
struct __locale_struct {
# 30 "/usr/include/xlocale.h" 3
struct __locale_data *__locales[13];
# 33 "/usr/include/xlocale.h" 3
const unsigned short *__ctype_b;
# 34 "/usr/include/xlocale.h" 3
const int *__ctype_tolower;
# 35 "/usr/include/xlocale.h" 3
const int *__ctype_toupper;
# 38 "/usr/include/xlocale.h" 3
const char *__names[13];
# 39 "/usr/include/xlocale.h" 3
} *__locale_t; }
# 42 "/usr/include/xlocale.h" 3
extern "C" { typedef __locale_t locale_t; }
# 162 "/usr/include/string.h" 3
extern "C" int strcoll_l(const char * , const char * , __locale_t ) throw()
# 163 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3)));
# 165 "/usr/include/string.h" 3
extern "C" size_t strxfrm_l(char * , const char * , size_t , __locale_t ) throw()
# 166 "/usr/include/string.h" 3
 __attribute((__nonnull__(2, 4)));
# 171 "/usr/include/string.h" 3
extern "C" char *strdup(const char * ) throw()
# 172 "/usr/include/string.h" 3
 __attribute((__malloc__)) __attribute((__nonnull__(1)));
# 179 "/usr/include/string.h" 3
extern "C" char *strndup(const char * , size_t ) throw()
# 180 "/usr/include/string.h" 3
 __attribute((__malloc__)) __attribute((__nonnull__(1)));
# 211 "/usr/include/string.h" 3
extern char *strchr(char * , int ) throw() __asm__("strchr")
# 212 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 213 "/usr/include/string.h" 3
extern const char *strchr(const char * , int ) throw() __asm__("strchr")
# 214 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 238 "/usr/include/string.h" 3
extern char *strrchr(char * , int ) throw() __asm__("strrchr")
# 239 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 240 "/usr/include/string.h" 3
extern const char *strrchr(const char * , int ) throw() __asm__("strrchr")
# 241 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 267 "/usr/include/string.h" 3
char *strchrnul(char * , int ) throw() __asm__("strchrnul")
# 268 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 269 "/usr/include/string.h" 3
const char *strchrnul(const char * , int ) throw() __asm__("strchrnul")
# 270 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 280 "/usr/include/string.h" 3
extern "C" size_t strcspn(const char * , const char * ) throw()
# 281 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 284 "/usr/include/string.h" 3
extern "C" size_t strspn(const char * , const char * ) throw()
# 285 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 290 "/usr/include/string.h" 3
extern char *strpbrk(char * , const char * ) throw() __asm__("strpbrk")
# 291 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 292 "/usr/include/string.h" 3
extern const char *strpbrk(const char * , const char * ) throw() __asm__("strpbrk")
# 293 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 317 "/usr/include/string.h" 3
extern char *strstr(char * , const char * ) throw() __asm__("strstr")
# 318 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 319 "/usr/include/string.h" 3
extern const char *strstr(const char * , const char * ) throw() __asm__("strstr")
# 320 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 343 "/usr/include/string.h" 3
extern "C" char *strtok(char *__restrict__ , const char *__restrict__ ) throw()
# 344 "/usr/include/string.h" 3
 __attribute((__nonnull__(2)));
# 349 "/usr/include/string.h" 3
extern "C" char *__strtok_r(char *__restrict__ , const char *__restrict__ , char **__restrict__ ) throw()
# 352 "/usr/include/string.h" 3
 __attribute((__nonnull__(2, 3)));
# 354 "/usr/include/string.h" 3
extern "C" char *strtok_r(char *__restrict__ , const char *__restrict__ , char **__restrict__ ) throw()
# 356 "/usr/include/string.h" 3
 __attribute((__nonnull__(2, 3)));
# 362 "/usr/include/string.h" 3
char *strcasestr(char * , const char * ) throw() __asm__("strcasestr")
# 363 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 364 "/usr/include/string.h" 3
const char *strcasestr(const char * , const char * ) throw() __asm__("strcasestr")
# 366 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 377 "/usr/include/string.h" 3
extern "C" void *memmem(const void * , size_t , const void * , size_t ) throw()
# 379 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 3)));
# 383 "/usr/include/string.h" 3
extern "C" void *__mempcpy(void *__restrict__ , const void *__restrict__ , size_t ) throw()
# 385 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 386 "/usr/include/string.h" 3
extern "C" void *mempcpy(void *__restrict__ , const void *__restrict__ , size_t ) throw()
# 388 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 394 "/usr/include/string.h" 3
extern "C" size_t strlen(const char * ) throw()
# 395 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 401 "/usr/include/string.h" 3
extern "C" size_t strnlen(const char * , size_t ) throw()
# 402 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 408 "/usr/include/string.h" 3
extern "C" char *strerror(int ) throw();
# 433 "/usr/include/string.h" 3
extern "C" char *strerror_r(int , char * , size_t ) throw()
# 434 "/usr/include/string.h" 3
 __attribute((__nonnull__(2)));
# 440 "/usr/include/string.h" 3
extern "C" char *strerror_l(int , __locale_t ) throw();
# 446 "/usr/include/string.h" 3
extern "C" void __bzero(void * , size_t ) throw() __attribute((__nonnull__(1)));
# 450 "/usr/include/string.h" 3
extern "C" void bcopy(const void * , void * , size_t ) throw()
# 451 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 454 "/usr/include/string.h" 3
extern "C" void bzero(void * , size_t ) throw() __attribute((__nonnull__(1)));
# 457 "/usr/include/string.h" 3
extern "C" int bcmp(const void * , const void * , size_t ) throw()
# 458 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 464 "/usr/include/string.h" 3
extern char *index(char * , int ) throw() __asm__("index")
# 465 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 466 "/usr/include/string.h" 3
extern const char *index(const char * , int ) throw() __asm__("index")
# 467 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 492 "/usr/include/string.h" 3
extern char *rindex(char * , int ) throw() __asm__("rindex")
# 493 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 494 "/usr/include/string.h" 3
extern const char *rindex(const char * , int ) throw() __asm__("rindex")
# 495 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 518 "/usr/include/string.h" 3
extern "C" int ffs(int ) throw() __attribute((const));
# 523 "/usr/include/string.h" 3
extern "C" int ffsl(long ) throw() __attribute((const));
# 524 "/usr/include/string.h" 3
extern "C" int ffsll(long long ) throw()
# 525 "/usr/include/string.h" 3
 __attribute((const));
# 529 "/usr/include/string.h" 3
extern "C" int strcasecmp(const char * , const char * ) throw()
# 530 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 533 "/usr/include/string.h" 3
extern "C" int strncasecmp(const char * , const char * , size_t ) throw()
# 534 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 540 "/usr/include/string.h" 3
extern "C" int strcasecmp_l(const char * , const char * , __locale_t ) throw()
# 542 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3)));
# 544 "/usr/include/string.h" 3
extern "C" int strncasecmp_l(const char * , const char * , size_t , __locale_t ) throw()
# 546 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 4)));
# 552 "/usr/include/string.h" 3
extern "C" char *strsep(char **__restrict__ , const char *__restrict__ ) throw()
# 554 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 559 "/usr/include/string.h" 3
extern "C" char *strsignal(int ) throw();
# 562 "/usr/include/string.h" 3
extern "C" char *__stpcpy(char *__restrict__ , const char *__restrict__ ) throw()
# 563 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 564 "/usr/include/string.h" 3
extern "C" char *stpcpy(char *__restrict__ , const char *__restrict__ ) throw()
# 565 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 569 "/usr/include/string.h" 3
extern "C" char *__stpncpy(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 571 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 572 "/usr/include/string.h" 3
extern "C" char *stpncpy(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 574 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 579 "/usr/include/string.h" 3
extern "C" int strverscmp(const char * , const char * ) throw()
# 580 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 583 "/usr/include/string.h" 3
extern "C" char *strfry(char * ) throw() __attribute((__nonnull__(1)));
# 586 "/usr/include/string.h" 3
extern "C" void *memfrob(void * , size_t ) throw() __attribute((__nonnull__(1)));
# 594 "/usr/include/string.h" 3
char *basename(char * ) throw() __asm__("basename")
# 595 "/usr/include/string.h" 3
 __attribute((__nonnull__(1)));
# 596 "/usr/include/string.h" 3
const char *basename(const char * ) throw() __asm__("basename")
# 597 "/usr/include/string.h" 3
 __attribute((__nonnull__(1)));
# 30 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned char __u_char; }
# 31 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned short __u_short; }
# 32 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __u_int; }
# 33 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __u_long; }
# 36 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef signed char __int8_t; }
# 37 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned char __uint8_t; }
# 38 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef signed short __int16_t; }
# 39 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned short __uint16_t; }
# 40 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef signed int __int32_t; }
# 41 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __uint32_t; }
# 43 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef signed long __int64_t; }
# 44 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __uint64_t; }
# 52 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __quad_t; }
# 53 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __u_quad_t; }
# 124 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __dev_t; }
# 125 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __uid_t; }
# 126 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __gid_t; }
# 127 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __ino_t; }
# 128 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __ino64_t; }
# 129 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __mode_t; }
# 130 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __nlink_t; }
# 131 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __off_t; }
# 132 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __off64_t; }
# 133 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef int __pid_t; }
# 134 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef struct { int __val[2]; } __fsid_t; }
# 135 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __clock_t; }
# 136 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __rlim_t; }
# 137 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __rlim64_t; }
# 138 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __id_t; }
# 139 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __time_t; }
# 140 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __useconds_t; }
# 141 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __suseconds_t; }
# 143 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef int __daddr_t; }
# 144 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef int __key_t; }
# 147 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef int __clockid_t; }
# 150 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef void *__timer_t; }
# 153 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __blksize_t; }
# 158 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __blkcnt_t; }
# 159 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __blkcnt64_t; }
# 162 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt_t; }
# 163 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt64_t; }
# 166 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt_t; }
# 167 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt64_t; }
# 170 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __fsword_t; }
# 172 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __ssize_t; }
# 175 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __syscall_slong_t; }
# 177 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned long __syscall_ulong_t; }
# 181 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef __off64_t __loff_t; }
# 182 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef __quad_t *__qaddr_t; }
# 183 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef char *__caddr_t; }
# 186 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef long __intptr_t; }
# 189 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
extern "C" { typedef unsigned __socklen_t; }
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
extern "C" { struct timeval {
# 32 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
__time_t tv_sec;
# 33 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
__suseconds_t tv_usec;
# 34 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
}; }
# 25 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
extern "C" { struct timex {
# 27 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
unsigned modes;
# 28 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t offset;
# 29 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t freq;
# 30 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t maxerror;
# 31 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t esterror;
# 32 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
int status;
# 33 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t constant;
# 34 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t precision;
# 35 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t tolerance;
# 36 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
timeval time;
# 37 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t tick;
# 38 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t ppsfreq;
# 39 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t jitter;
# 40 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
int shift;
# 41 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t stabil;
# 42 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t jitcnt;
# 43 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t calcnt;
# 44 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t errcnt;
# 45 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
__syscall_slong_t stbcnt;
# 47 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
int tai;
# 50 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
int:32; int:32; int:32; int:32;
# 51 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
int:32; int:32; int:32; int:32;
# 52 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
int:32; int:32; int:32;
# 53 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
}; }
# 93 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
extern "C" int clock_adjtime(__clockid_t , timex * ) throw();
# 59 "/usr/include/time.h" 3
extern "C" { typedef __clock_t clock_t; }
# 75 "/usr/include/time.h" 3
extern "C" { typedef __time_t time_t; }
# 91 "/usr/include/time.h" 3
extern "C" { typedef __clockid_t clockid_t; }
# 103 "/usr/include/time.h" 3
extern "C" { typedef __timer_t timer_t; }
# 120 "/usr/include/time.h" 3
extern "C" { struct timespec {
# 122 "/usr/include/time.h" 3
__time_t tv_sec;
# 123 "/usr/include/time.h" 3
__syscall_slong_t tv_nsec;
# 124 "/usr/include/time.h" 3
}; }
# 133 "/usr/include/time.h" 3
extern "C" { struct tm {
# 135 "/usr/include/time.h" 3
int tm_sec;
# 136 "/usr/include/time.h" 3
int tm_min;
# 137 "/usr/include/time.h" 3
int tm_hour;
# 138 "/usr/include/time.h" 3
int tm_mday;
# 139 "/usr/include/time.h" 3
int tm_mon;
# 140 "/usr/include/time.h" 3
int tm_year;
# 141 "/usr/include/time.h" 3
int tm_wday;
# 142 "/usr/include/time.h" 3
int tm_yday;
# 143 "/usr/include/time.h" 3
int tm_isdst;
# 146 "/usr/include/time.h" 3
long tm_gmtoff;
# 147 "/usr/include/time.h" 3
const char *tm_zone;
# 152 "/usr/include/time.h" 3
}; }
# 161 "/usr/include/time.h" 3
extern "C" { struct itimerspec {
# 163 "/usr/include/time.h" 3
timespec it_interval;
# 164 "/usr/include/time.h" 3
timespec it_value;
# 165 "/usr/include/time.h" 3
}; }
# 168 "/usr/include/time.h" 3
struct sigevent;
# 174 "/usr/include/time.h" 3
extern "C" { typedef __pid_t pid_t; }
# 189 "/usr/include/time.h" 3
extern "C" clock_t clock() throw();
# 192 "/usr/include/time.h" 3
extern "C" time_t time(time_t * ) throw();
# 195 "/usr/include/time.h" 3
extern "C" double difftime(time_t , time_t ) throw()
# 196 "/usr/include/time.h" 3
 __attribute((const));
# 199 "/usr/include/time.h" 3
extern "C" time_t mktime(tm * ) throw();
# 205 "/usr/include/time.h" 3
extern "C" size_t strftime(char *__restrict__ , size_t , const char *__restrict__ , const tm *__restrict__ ) throw();
# 213 "/usr/include/time.h" 3
extern "C" char *strptime(const char *__restrict__ , const char *__restrict__ , tm * ) throw();
# 223 "/usr/include/time.h" 3
extern "C" size_t strftime_l(char *__restrict__ , size_t , const char *__restrict__ , const tm *__restrict__ , __locale_t ) throw();
# 230 "/usr/include/time.h" 3
extern "C" char *strptime_l(const char *__restrict__ , const char *__restrict__ , tm * , __locale_t ) throw();
# 239 "/usr/include/time.h" 3
extern "C" tm *gmtime(const time_t * ) throw();
# 243 "/usr/include/time.h" 3
extern "C" tm *localtime(const time_t * ) throw();
# 249 "/usr/include/time.h" 3
extern "C" tm *gmtime_r(const time_t *__restrict__ , tm *__restrict__ ) throw();
# 254 "/usr/include/time.h" 3
extern "C" tm *localtime_r(const time_t *__restrict__ , tm *__restrict__ ) throw();
# 261 "/usr/include/time.h" 3
extern "C" char *asctime(const tm * ) throw();
# 264 "/usr/include/time.h" 3
extern "C" char *ctime(const time_t * ) throw();
# 272 "/usr/include/time.h" 3
extern "C" char *asctime_r(const tm *__restrict__ , char *__restrict__ ) throw();
# 276 "/usr/include/time.h" 3
extern "C" char *ctime_r(const time_t *__restrict__ , char *__restrict__ ) throw();
# 282 "/usr/include/time.h" 3
extern "C" { extern char *__tzname[2]; }
# 283 "/usr/include/time.h" 3
extern "C" { extern int __daylight; }
# 284 "/usr/include/time.h" 3
extern "C" { extern long __timezone; }
# 289 "/usr/include/time.h" 3
extern "C" { extern char *tzname[2]; }
# 293 "/usr/include/time.h" 3
extern "C" void tzset() throw();
# 297 "/usr/include/time.h" 3
extern "C" { extern int daylight; }
# 298 "/usr/include/time.h" 3
extern "C" { extern long timezone; }
# 304 "/usr/include/time.h" 3
extern "C" int stime(const time_t * ) throw();
# 319 "/usr/include/time.h" 3
extern "C" time_t timegm(tm * ) throw();
# 322 "/usr/include/time.h" 3
extern "C" time_t timelocal(tm * ) throw();
# 325 "/usr/include/time.h" 3
extern "C" int dysize(int ) throw() __attribute((const));
# 334 "/usr/include/time.h" 3
extern "C" int nanosleep(const timespec * , timespec * );
# 339 "/usr/include/time.h" 3
extern "C" int clock_getres(clockid_t , timespec * ) throw();
# 342 "/usr/include/time.h" 3
extern "C" int clock_gettime(clockid_t , timespec * ) throw();
# 345 "/usr/include/time.h" 3
extern "C" int clock_settime(clockid_t , const timespec * ) throw();
# 353 "/usr/include/time.h" 3
extern "C" int clock_nanosleep(clockid_t , int , const timespec * , timespec * );
# 358 "/usr/include/time.h" 3
extern "C" int clock_getcpuclockid(pid_t , clockid_t * ) throw();
# 363 "/usr/include/time.h" 3
extern "C" int timer_create(clockid_t , sigevent *__restrict__ , timer_t *__restrict__ ) throw();
# 368 "/usr/include/time.h" 3
extern "C" int timer_delete(timer_t ) throw();
# 371 "/usr/include/time.h" 3
extern "C" int timer_settime(timer_t , int , const itimerspec *__restrict__ , itimerspec *__restrict__ ) throw();
# 376 "/usr/include/time.h" 3
extern "C" int timer_gettime(timer_t , itimerspec * ) throw();
# 380 "/usr/include/time.h" 3
extern "C" int timer_getoverrun(timer_t ) throw();
# 386 "/usr/include/time.h" 3
extern "C" int timespec_get(timespec * , int ) throw()
# 387 "/usr/include/time.h" 3
 __attribute((__nonnull__(1)));
# 403 "/usr/include/time.h" 3
extern "C" { extern int getdate_err; }
# 412 "/usr/include/time.h" 3
extern "C" tm *getdate(const char * );
# 426 "/usr/include/time.h" 3
extern "C" int getdate_r(const char *__restrict__ , tm *__restrict__ );
# 71 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" clock_t clock() throw();
# 73 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" void *memset(void *, int, size_t) throw();
# 75 "/usr/local/cuda/bin/../include/common_functions.h"
extern "C" void *memcpy(void *, const void *, size_t) throw();
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3
extern "C" { typedef float float_t; }
# 29 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3
extern "C" { typedef double double_t; }
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double acos(double ) throw(); extern "C" double __acos(double ) throw();
# 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double asin(double ) throw(); extern "C" double __asin(double ) throw();
# 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double atan(double ) throw(); extern "C" double __atan(double ) throw();
# 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double atan2(double , double ) throw(); extern "C" double __atan2(double , double ) throw();
# 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double cos(double ) throw(); extern "C" double __cos(double ) throw();
# 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double sin(double ) throw(); extern "C" double __sin(double ) throw();
# 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double tan(double ) throw(); extern "C" double __tan(double ) throw();
# 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double cosh(double ) throw(); extern "C" double __cosh(double ) throw();
# 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double sinh(double ) throw(); extern "C" double __sinh(double ) throw();
# 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double tanh(double ) throw(); extern "C" double __tanh(double ) throw();
# 81 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" void sincos(double , double * , double * ) throw(); extern "C" void __sincos(double , double * , double * ) throw();
# 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double acosh(double ) throw(); extern "C" double __acosh(double ) throw();
# 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double asinh(double ) throw(); extern "C" double __asinh(double ) throw();
# 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double atanh(double ) throw(); extern "C" double __atanh(double ) throw();
# 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double exp(double ) throw(); extern "C" double __exp(double ) throw();
# 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double frexp(double , int * ) throw(); extern "C" double __frexp(double , int * ) throw();
# 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double ldexp(double , int ) throw(); extern "C" double __ldexp(double , int ) throw();
# 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double log(double ) throw(); extern "C" double __log(double ) throw();
# 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double log10(double ) throw(); extern "C" double __log10(double ) throw();
# 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double modf(double , double * ) throw(); extern "C" double __modf(double , double * ) throw() __attribute((__nonnull__(2)));
# 120 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double exp10(double ) throw(); extern "C" double __exp10(double ) throw();
# 122 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double pow10(double ) throw(); extern "C" double __pow10(double ) throw();
# 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double expm1(double ) throw(); extern "C" double __expm1(double ) throw();
# 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double log1p(double ) throw(); extern "C" double __log1p(double ) throw();
# 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double logb(double ) throw(); extern "C" double __logb(double ) throw();
# 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double exp2(double ) throw(); extern "C" double __exp2(double ) throw();
# 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double log2(double ) throw(); extern "C" double __log2(double ) throw();
# 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double pow(double , double ) throw(); extern "C" double __pow(double , double ) throw();
# 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double sqrt(double ) throw(); extern "C" double __sqrt(double ) throw();
# 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double hypot(double , double ) throw(); extern "C" double __hypot(double , double ) throw();
# 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double cbrt(double ) throw(); extern "C" double __cbrt(double ) throw();
# 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double ceil(double ) throw() __attribute((const)); extern "C" double __ceil(double ) throw() __attribute((const));
# 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double fabs(double ) throw() __attribute((const)); extern "C" double __fabs(double ) throw() __attribute((const));
# 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double floor(double ) throw() __attribute((const)); extern "C" double __floor(double ) throw() __attribute((const));
# 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double fmod(double , double ) throw(); extern "C" double __fmod(double , double ) throw();
# 192 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __isinf(double ) throw() __attribute((const));
# 195 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __finite(double ) throw() __attribute((const));
# 204 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int isinf(double ) throw() __attribute((const));
# 208 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int finite(double ) throw() __attribute((const));
# 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double drem(double , double ) throw(); extern "C" double __drem(double , double ) throw();
# 215 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double significand(double ) throw(); extern "C" double __significand(double ) throw();
# 221 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double copysign(double , double ) throw() __attribute((const)); extern "C" double __copysign(double , double ) throw() __attribute((const));
# 228 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double nan(const char * ) throw() __attribute((const)); extern "C" double __nan(const char * ) throw() __attribute((const));
# 234 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __isnan(double ) throw() __attribute((const));
# 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int isnan(double ) throw() __attribute((const));
# 247 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double j0(double) throw(); extern "C" double __j0(double) throw();
# 248 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double j1(double) throw(); extern "C" double __j1(double) throw();
# 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double jn(int, double) throw(); extern "C" double __jn(int, double) throw();
# 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double y0(double) throw(); extern "C" double __y0(double) throw();
# 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double y1(double) throw(); extern "C" double __y1(double) throw();
# 252 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double yn(int, double) throw(); extern "C" double __yn(int, double) throw();
# 259 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double erf(double) throw(); extern "C" double __erf(double) throw();
# 260 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double erfc(double) throw(); extern "C" double __erfc(double) throw();
# 261 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double lgamma(double) throw(); extern "C" double __lgamma(double) throw();
# 268 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double tgamma(double) throw(); extern "C" double __tgamma(double) throw();
# 274 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double gamma(double) throw(); extern "C" double __gamma(double) throw();
# 281 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double lgamma_r(double, int * ) throw(); extern "C" double __lgamma_r(double, int * ) throw();
# 289 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double rint(double ) throw(); extern "C" double __rint(double ) throw();
# 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double nextafter(double , double ) throw() __attribute((const)); extern "C" double __nextafter(double , double ) throw() __attribute((const));
# 294 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double nexttoward(double , long double ) throw() __attribute((const)); extern "C" double __nexttoward(double , long double ) throw() __attribute((const));
# 298 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double remainder(double , double ) throw(); extern "C" double __remainder(double , double ) throw();
# 302 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double scalbn(double , int ) throw(); extern "C" double __scalbn(double , int ) throw();
# 306 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int ilogb(double ) throw(); extern "C" int __ilogb(double ) throw();
# 311 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double scalbln(double , long ) throw(); extern "C" double __scalbln(double , long ) throw();
# 315 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double nearbyint(double ) throw(); extern "C" double __nearbyint(double ) throw();
# 319 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double round(double ) throw() __attribute((const)); extern "C" double __round(double ) throw() __attribute((const));
# 323 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double trunc(double ) throw() __attribute((const)); extern "C" double __trunc(double ) throw() __attribute((const));
# 328 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double remquo(double , double , int * ) throw(); extern "C" double __remquo(double , double , int * ) throw();
# 335 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long lrint(double ) throw(); extern "C" long __lrint(double ) throw();
# 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long long llrint(double ) throw(); extern "C" long long __llrint(double ) throw();
# 341 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long lround(double ) throw(); extern "C" long __lround(double ) throw();
# 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long long llround(double ) throw(); extern "C" long long __llround(double ) throw();
# 347 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double fdim(double , double ) throw(); extern "C" double __fdim(double , double ) throw();
# 350 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double fmax(double , double ) throw() __attribute((const)); extern "C" double __fmax(double , double ) throw() __attribute((const));
# 353 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double fmin(double , double ) throw() __attribute((const)); extern "C" double __fmin(double , double ) throw() __attribute((const));
# 357 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __fpclassify(double ) throw()
# 358 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
 __attribute((const));
# 361 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __signbit(double ) throw()
# 362 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
 __attribute((const));
# 366 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double fma(double , double , double ) throw(); extern "C" double __fma(double , double , double ) throw();
# 375 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __issignaling(double ) throw()
# 376 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
 __attribute((const));
# 383 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" double scalb(double , double ) throw(); extern "C" double __scalb(double , double ) throw();
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float acosf(float ) throw(); extern "C" float __acosf(float ) throw();
# 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float asinf(float ) throw(); extern "C" float __asinf(float ) throw();
# 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float atanf(float ) throw(); extern "C" float __atanf(float ) throw();
# 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float atan2f(float , float ) throw(); extern "C" float __atan2f(float , float ) throw();
# 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float cosf(float ) throw();
# 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float sinf(float ) throw();
# 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float tanf(float ) throw();
# 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float coshf(float ) throw(); extern "C" float __coshf(float ) throw();
# 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float sinhf(float ) throw(); extern "C" float __sinhf(float ) throw();
# 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float tanhf(float ) throw(); extern "C" float __tanhf(float ) throw();
# 81 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" void sincosf(float , float * , float * ) throw();
# 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float acoshf(float ) throw(); extern "C" float __acoshf(float ) throw();
# 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float asinhf(float ) throw(); extern "C" float __asinhf(float ) throw();
# 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float atanhf(float ) throw(); extern "C" float __atanhf(float ) throw();
# 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float expf(float ) throw();
# 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float frexpf(float , int * ) throw(); extern "C" float __frexpf(float , int * ) throw();
# 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float ldexpf(float , int ) throw(); extern "C" float __ldexpf(float , int ) throw();
# 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float logf(float ) throw();
# 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float log10f(float ) throw();
# 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float modff(float , float * ) throw(); extern "C" float __modff(float , float * ) throw() __attribute((__nonnull__(2)));
# 120 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float exp10f(float ) throw();
# 122 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float pow10f(float ) throw(); extern "C" float __pow10f(float ) throw();
# 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float expm1f(float ) throw(); extern "C" float __expm1f(float ) throw();
# 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float log1pf(float ) throw(); extern "C" float __log1pf(float ) throw();
# 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float logbf(float ) throw(); extern "C" float __logbf(float ) throw();
# 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float exp2f(float ) throw(); extern "C" float __exp2f(float ) throw();
# 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float log2f(float ) throw();
# 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float powf(float , float ) throw();
# 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float sqrtf(float ) throw(); extern "C" float __sqrtf(float ) throw();
# 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float hypotf(float , float ) throw(); extern "C" float __hypotf(float , float ) throw();
# 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float cbrtf(float ) throw(); extern "C" float __cbrtf(float ) throw();
# 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float ceilf(float ) throw() __attribute((const)); extern "C" float __ceilf(float ) throw() __attribute((const));
# 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float fabsf(float ) throw() __attribute((const)); extern "C" float __fabsf(float ) throw() __attribute((const));
# 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float floorf(float ) throw() __attribute((const)); extern "C" float __floorf(float ) throw() __attribute((const));
# 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float fmodf(float , float ) throw(); extern "C" float __fmodf(float , float ) throw();
# 192 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __isinff(float ) throw() __attribute((const));
# 195 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __finitef(float ) throw() __attribute((const));
# 204 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int isinff(float ) throw() __attribute((const));
# 208 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int finitef(float ) throw() __attribute((const));
# 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float dremf(float , float ) throw(); extern "C" float __dremf(float , float ) throw();
# 215 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float significandf(float ) throw(); extern "C" float __significandf(float ) throw();
# 221 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float copysignf(float , float ) throw() __attribute((const)); extern "C" float __copysignf(float , float ) throw() __attribute((const));
# 228 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float nanf(const char * ) throw() __attribute((const)); extern "C" float __nanf(const char * ) throw() __attribute((const));
# 234 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __isnanf(float ) throw() __attribute((const));
# 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int isnanf(float ) throw() __attribute((const));
# 247 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float j0f(float) throw(); extern "C" float __j0f(float) throw();
# 248 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float j1f(float) throw(); extern "C" float __j1f(float) throw();
# 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float jnf(int, float) throw(); extern "C" float __jnf(int, float) throw();
# 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float y0f(float) throw(); extern "C" float __y0f(float) throw();
# 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float y1f(float) throw(); extern "C" float __y1f(float) throw();
# 252 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float ynf(int, float) throw(); extern "C" float __ynf(int, float) throw();
# 259 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float erff(float) throw(); extern "C" float __erff(float) throw();
# 260 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float erfcf(float) throw(); extern "C" float __erfcf(float) throw();
# 261 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float lgammaf(float) throw(); extern "C" float __lgammaf(float) throw();
# 268 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float tgammaf(float) throw(); extern "C" float __tgammaf(float) throw();
# 274 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float gammaf(float) throw(); extern "C" float __gammaf(float) throw();
# 281 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float lgammaf_r(float, int * ) throw(); extern "C" float __lgammaf_r(float, int * ) throw();
# 289 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float rintf(float ) throw(); extern "C" float __rintf(float ) throw();
# 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float nextafterf(float , float ) throw() __attribute((const)); extern "C" float __nextafterf(float , float ) throw() __attribute((const));
# 294 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float nexttowardf(float , long double ) throw() __attribute((const)); extern "C" float __nexttowardf(float , long double ) throw() __attribute((const));
# 298 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float remainderf(float , float ) throw(); extern "C" float __remainderf(float , float ) throw();
# 302 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float scalbnf(float , int ) throw(); extern "C" float __scalbnf(float , int ) throw();
# 306 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int ilogbf(float ) throw(); extern "C" int __ilogbf(float ) throw();
# 311 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float scalblnf(float , long ) throw(); extern "C" float __scalblnf(float , long ) throw();
# 315 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float nearbyintf(float ) throw(); extern "C" float __nearbyintf(float ) throw();
# 319 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float roundf(float ) throw() __attribute((const)); extern "C" float __roundf(float ) throw() __attribute((const));
# 323 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float truncf(float ) throw() __attribute((const)); extern "C" float __truncf(float ) throw() __attribute((const));
# 328 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float remquof(float , float , int * ) throw(); extern "C" float __remquof(float , float , int * ) throw();
# 335 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long lrintf(float ) throw(); extern "C" long __lrintf(float ) throw();
# 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long long llrintf(float ) throw(); extern "C" long long __llrintf(float ) throw();
# 341 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long lroundf(float ) throw(); extern "C" long __lroundf(float ) throw();
# 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long long llroundf(float ) throw(); extern "C" long long __llroundf(float ) throw();
# 347 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float fdimf(float , float ) throw(); extern "C" float __fdimf(float , float ) throw();
# 350 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float fmaxf(float , float ) throw() __attribute((const)); extern "C" float __fmaxf(float , float ) throw() __attribute((const));
# 353 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float fminf(float , float ) throw() __attribute((const)); extern "C" float __fminf(float , float ) throw() __attribute((const));
# 357 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __fpclassifyf(float ) throw()
# 358 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
 __attribute((const));
# 361 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __signbitf(float ) throw()
# 362 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
 __attribute((const));
# 366 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float fmaf(float , float , float ) throw(); extern "C" float __fmaf(float , float , float ) throw();
# 375 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __issignalingf(float ) throw()
# 376 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
 __attribute((const));
# 383 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" float scalbf(float , float ) throw(); extern "C" float __scalbf(float , float ) throw();
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double acosl(long double ) throw(); extern "C" long double __acosl(long double ) throw();
# 56 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double asinl(long double ) throw(); extern "C" long double __asinl(long double ) throw();
# 58 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double atanl(long double ) throw(); extern "C" long double __atanl(long double ) throw();
# 60 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double atan2l(long double , long double ) throw(); extern "C" long double __atan2l(long double , long double ) throw();
# 63 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double cosl(long double ) throw(); extern "C" long double __cosl(long double ) throw();
# 65 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double sinl(long double ) throw(); extern "C" long double __sinl(long double ) throw();
# 67 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double tanl(long double ) throw(); extern "C" long double __tanl(long double ) throw();
# 72 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double coshl(long double ) throw(); extern "C" long double __coshl(long double ) throw();
# 74 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double sinhl(long double ) throw(); extern "C" long double __sinhl(long double ) throw();
# 76 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double tanhl(long double ) throw(); extern "C" long double __tanhl(long double ) throw();
# 81 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" void sincosl(long double , long double * , long double * ) throw(); extern "C" void __sincosl(long double , long double * , long double * ) throw();
# 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double acoshl(long double ) throw(); extern "C" long double __acoshl(long double ) throw();
# 90 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double asinhl(long double ) throw(); extern "C" long double __asinhl(long double ) throw();
# 92 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double atanhl(long double ) throw(); extern "C" long double __atanhl(long double ) throw();
# 100 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double expl(long double ) throw(); extern "C" long double __expl(long double ) throw();
# 103 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double frexpl(long double , int * ) throw(); extern "C" long double __frexpl(long double , int * ) throw();
# 106 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double ldexpl(long double , int ) throw(); extern "C" long double __ldexpl(long double , int ) throw();
# 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double logl(long double ) throw(); extern "C" long double __logl(long double ) throw();
# 112 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double log10l(long double ) throw(); extern "C" long double __log10l(long double ) throw();
# 115 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double modfl(long double , long double * ) throw(); extern "C" long double __modfl(long double , long double * ) throw() __attribute((__nonnull__(2)));
# 120 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double exp10l(long double ) throw(); extern "C" long double __exp10l(long double ) throw();
# 122 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double pow10l(long double ) throw(); extern "C" long double __pow10l(long double ) throw();
# 128 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double expm1l(long double ) throw(); extern "C" long double __expm1l(long double ) throw();
# 131 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double log1pl(long double ) throw(); extern "C" long double __log1pl(long double ) throw();
# 134 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double logbl(long double ) throw(); extern "C" long double __logbl(long double ) throw();
# 141 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double exp2l(long double ) throw(); extern "C" long double __exp2l(long double ) throw();
# 144 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double log2l(long double ) throw(); extern "C" long double __log2l(long double ) throw();
# 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double powl(long double , long double ) throw(); extern "C" long double __powl(long double , long double ) throw();
# 156 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double sqrtl(long double ) throw(); extern "C" long double __sqrtl(long double ) throw();
# 162 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double hypotl(long double , long double ) throw(); extern "C" long double __hypotl(long double , long double ) throw();
# 169 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double cbrtl(long double ) throw(); extern "C" long double __cbrtl(long double ) throw();
# 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double ceill(long double ) throw() __attribute((const)); extern "C" long double __ceill(long double ) throw() __attribute((const));
# 181 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double fabsl(long double ) throw() __attribute((const)); extern "C" long double __fabsl(long double ) throw() __attribute((const));
# 184 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double floorl(long double ) throw() __attribute((const)); extern "C" long double __floorl(long double ) throw() __attribute((const));
# 187 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double fmodl(long double , long double ) throw(); extern "C" long double __fmodl(long double , long double ) throw();
# 192 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __isinfl(long double ) throw() __attribute((const));
# 195 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __finitel(long double ) throw() __attribute((const));
# 204 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int isinfl(long double ) throw() __attribute((const));
# 208 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int finitel(long double ) throw() __attribute((const));
# 211 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double dreml(long double , long double ) throw(); extern "C" long double __dreml(long double , long double ) throw();
# 215 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double significandl(long double ) throw(); extern "C" long double __significandl(long double ) throw();
# 221 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double copysignl(long double , long double ) throw() __attribute((const)); extern "C" long double __copysignl(long double , long double ) throw() __attribute((const));
# 228 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double nanl(const char * ) throw() __attribute((const)); extern "C" long double __nanl(const char * ) throw() __attribute((const));
# 234 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __isnanl(long double ) throw() __attribute((const));
# 241 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int isnanl(long double ) throw() __attribute((const));
# 247 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double j0l(long double) throw(); extern "C" long double __j0l(long double) throw();
# 248 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double j1l(long double) throw(); extern "C" long double __j1l(long double) throw();
# 249 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double jnl(int, long double) throw(); extern "C" long double __jnl(int, long double) throw();
# 250 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double y0l(long double) throw(); extern "C" long double __y0l(long double) throw();
# 251 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double y1l(long double) throw(); extern "C" long double __y1l(long double) throw();
# 252 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double ynl(int, long double) throw(); extern "C" long double __ynl(int, long double) throw();
# 259 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double erfl(long double) throw(); extern "C" long double __erfl(long double) throw();
# 260 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double erfcl(long double) throw(); extern "C" long double __erfcl(long double) throw();
# 261 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double lgammal(long double) throw(); extern "C" long double __lgammal(long double) throw();
# 268 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double tgammal(long double) throw(); extern "C" long double __tgammal(long double) throw();
# 274 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double gammal(long double) throw(); extern "C" long double __gammal(long double) throw();
# 281 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double lgammal_r(long double, int * ) throw(); extern "C" long double __lgammal_r(long double, int * ) throw();
# 289 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double rintl(long double ) throw(); extern "C" long double __rintl(long double ) throw();
# 292 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double nextafterl(long double , long double ) throw() __attribute((const)); extern "C" long double __nextafterl(long double , long double ) throw() __attribute((const));
# 294 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double nexttowardl(long double , long double ) throw() __attribute((const)); extern "C" long double __nexttowardl(long double , long double ) throw() __attribute((const));
# 298 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double remainderl(long double , long double ) throw(); extern "C" long double __remainderl(long double , long double ) throw();
# 302 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double scalbnl(long double , int ) throw(); extern "C" long double __scalbnl(long double , int ) throw();
# 306 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int ilogbl(long double ) throw(); extern "C" int __ilogbl(long double ) throw();
# 311 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double scalblnl(long double , long ) throw(); extern "C" long double __scalblnl(long double , long ) throw();
# 315 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double nearbyintl(long double ) throw(); extern "C" long double __nearbyintl(long double ) throw();
# 319 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double roundl(long double ) throw() __attribute((const)); extern "C" long double __roundl(long double ) throw() __attribute((const));
# 323 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double truncl(long double ) throw() __attribute((const)); extern "C" long double __truncl(long double ) throw() __attribute((const));
# 328 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double remquol(long double , long double , int * ) throw(); extern "C" long double __remquol(long double , long double , int * ) throw();
# 335 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long lrintl(long double ) throw(); extern "C" long __lrintl(long double ) throw();
# 337 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long long llrintl(long double ) throw(); extern "C" long long __llrintl(long double ) throw();
# 341 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long lroundl(long double ) throw(); extern "C" long __lroundl(long double ) throw();
# 343 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long long llroundl(long double ) throw(); extern "C" long long __llroundl(long double ) throw();
# 347 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double fdiml(long double , long double ) throw(); extern "C" long double __fdiml(long double , long double ) throw();
# 350 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double fmaxl(long double , long double ) throw() __attribute((const)); extern "C" long double __fmaxl(long double , long double ) throw() __attribute((const));
# 353 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double fminl(long double , long double ) throw() __attribute((const)); extern "C" long double __fminl(long double , long double ) throw() __attribute((const));
# 357 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __fpclassifyl(long double ) throw()
# 358 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
 __attribute((const));
# 361 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __signbitl(long double ) throw()
# 362 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
 __attribute((const));
# 366 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double fmal(long double , long double , long double ) throw(); extern "C" long double __fmal(long double , long double , long double ) throw();
# 375 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" int __issignalingl(long double ) throw()
# 376 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
 __attribute((const));
# 383 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern "C" long double scalbl(long double , long double ) throw(); extern "C" long double __scalbl(long double , long double ) throw();
# 168 "/usr/include/math.h" 3
extern "C" { extern int signgam; }
# 210 "/usr/include/math.h" 3
enum {
# 211 "/usr/include/math.h" 3
FP_NAN,
# 214 "/usr/include/math.h" 3
FP_INFINITE,
# 217 "/usr/include/math.h" 3
FP_ZERO,
# 220 "/usr/include/math.h" 3
FP_SUBNORMAL,
# 223 "/usr/include/math.h" 3
FP_NORMAL
# 226 "/usr/include/math.h" 3
};
# 354 "/usr/include/math.h" 3
extern "C" { typedef
# 348 "/usr/include/math.h" 3
enum {
# 349 "/usr/include/math.h" 3
_IEEE_ = (-1),
# 350 "/usr/include/math.h" 3
_SVID_ = 0,
# 351 "/usr/include/math.h" 3
_XOPEN_,
# 352 "/usr/include/math.h" 3
_POSIX_,
# 353 "/usr/include/math.h" 3
_ISOC_
# 354 "/usr/include/math.h" 3
} _LIB_VERSION_TYPE; }
# 359 "/usr/include/math.h" 3
extern "C" { extern _LIB_VERSION_TYPE _LIB_VERSION; }
# 370 "/usr/include/math.h" 3
extern "C" { struct __exception {
# 375 "/usr/include/math.h" 3
int type;
# 376 "/usr/include/math.h" 3
char *name;
# 377 "/usr/include/math.h" 3
double arg1;
# 378 "/usr/include/math.h" 3
double arg2;
# 379 "/usr/include/math.h" 3
double retval;
# 380 "/usr/include/math.h" 3
}; }
# 383 "/usr/include/math.h" 3
extern "C" int matherr(__exception * ) throw();
# 55 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
extern "C" { typedef
# 51 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
enum {
# 52 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
P_ALL,
# 53 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
P_PID,
# 54 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
P_PGID
# 55 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
} idtype_t; }
# 45 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
extern "C" { static inline unsigned __bswap_32(unsigned __bsx)
# 46 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
{
# 47 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
return __builtin_bswap32(__bsx);
# 48 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
} }
# 109 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
extern "C" { static inline __uint64_t __bswap_64(__uint64_t __bsx)
# 110 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
{
# 111 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
return __builtin_bswap64(__bsx);
# 112 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
} }
# 66 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
extern "C" { union wait {
# 68 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
int w_status;
# 70 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
struct {
# 72 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
unsigned __w_termsig:7;
# 73 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
unsigned __w_coredump:1;
# 74 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
unsigned __w_retcode:8;
# 75 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
unsigned:16;
# 83 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
} __wait_terminated;
# 85 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
struct {
# 87 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
unsigned __w_stopval:8;
# 88 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
unsigned __w_stopsig:8;
# 89 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
unsigned:16;
# 96 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
} __wait_stopped;
# 97 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
}; }
# 101 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 98 "/usr/include/stdlib.h" 3
struct {
# 99 "/usr/include/stdlib.h" 3
int quot;
# 100 "/usr/include/stdlib.h" 3
int rem;
# 101 "/usr/include/stdlib.h" 3
} div_t; }
# 109 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 106 "/usr/include/stdlib.h" 3
struct {
# 107 "/usr/include/stdlib.h" 3
long quot;
# 108 "/usr/include/stdlib.h" 3
long rem;
# 109 "/usr/include/stdlib.h" 3
} ldiv_t; }
# 121 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 118 "/usr/include/stdlib.h" 3
struct {
# 119 "/usr/include/stdlib.h" 3
long long quot;
# 120 "/usr/include/stdlib.h" 3
long long rem;
# 121 "/usr/include/stdlib.h" 3
} lldiv_t; }
# 139 "/usr/include/stdlib.h" 3
extern "C" size_t __ctype_get_mb_cur_max() throw();
# 144 "/usr/include/stdlib.h" 3
extern "C" double atof(const char * ) throw()
# 145 "/usr/include/stdlib.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 147 "/usr/include/stdlib.h" 3
extern "C" int atoi(const char * ) throw()
# 148 "/usr/include/stdlib.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 150 "/usr/include/stdlib.h" 3
extern "C" long atol(const char * ) throw()
# 151 "/usr/include/stdlib.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 157 "/usr/include/stdlib.h" 3
extern "C" long long atoll(const char * ) throw()
# 158 "/usr/include/stdlib.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 164 "/usr/include/stdlib.h" 3
extern "C" double strtod(const char *__restrict__ , char **__restrict__ ) throw()
# 166 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 172 "/usr/include/stdlib.h" 3
extern "C" float strtof(const char *__restrict__ , char **__restrict__ ) throw()
# 173 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 175 "/usr/include/stdlib.h" 3
extern "C" long double strtold(const char *__restrict__ , char **__restrict__ ) throw()
# 177 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 183 "/usr/include/stdlib.h" 3
extern "C" long strtol(const char *__restrict__ , char **__restrict__ , int ) throw()
# 185 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 187 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul(const char *__restrict__ , char **__restrict__ , int ) throw()
# 189 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 195 "/usr/include/stdlib.h" 3
extern "C" long long strtoq(const char *__restrict__ , char **__restrict__ , int ) throw()
# 197 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 200 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtouq(const char *__restrict__ , char **__restrict__ , int ) throw()
# 202 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 209 "/usr/include/stdlib.h" 3
extern "C" long long strtoll(const char *__restrict__ , char **__restrict__ , int ) throw()
# 211 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 214 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull(const char *__restrict__ , char **__restrict__ , int ) throw()
# 216 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 239 "/usr/include/stdlib.h" 3
extern "C" long strtol_l(const char *__restrict__ , char **__restrict__ , int , __locale_t ) throw()
# 241 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 243 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul_l(const char *__restrict__ , char **__restrict__ , int , __locale_t ) throw()
# 246 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 249 "/usr/include/stdlib.h" 3
extern "C" long long strtoll_l(const char *__restrict__ , char **__restrict__ , int , __locale_t ) throw()
# 252 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 255 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull_l(const char *__restrict__ , char **__restrict__ , int , __locale_t ) throw()
# 258 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 260 "/usr/include/stdlib.h" 3
extern "C" double strtod_l(const char *__restrict__ , char **__restrict__ , __locale_t ) throw()
# 262 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 3)));
# 264 "/usr/include/stdlib.h" 3
extern "C" float strtof_l(const char *__restrict__ , char **__restrict__ , __locale_t ) throw()
# 266 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 3)));
# 268 "/usr/include/stdlib.h" 3
extern "C" long double strtold_l(const char *__restrict__ , char **__restrict__ , __locale_t ) throw()
# 271 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 3)));
# 305 "/usr/include/stdlib.h" 3
extern "C" char *l64a(long ) throw();
# 308 "/usr/include/stdlib.h" 3
extern "C" long a64l(const char * ) throw()
# 309 "/usr/include/stdlib.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 33 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __u_char u_char; }
# 34 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __u_short u_short; }
# 35 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __u_int u_int; }
# 36 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __u_long u_long; }
# 37 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __quad_t quad_t; }
# 38 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __u_quad_t u_quad_t; }
# 39 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __fsid_t fsid_t; }
# 44 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __loff_t loff_t; }
# 48 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __ino_t ino_t; }
# 55 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __ino64_t ino64_t; }
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __dev_t dev_t; }
# 65 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __gid_t gid_t; }
# 70 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __mode_t mode_t; }
# 75 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __nlink_t nlink_t; }
# 80 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __uid_t uid_t; }
# 86 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __off_t off_t; }
# 93 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __off64_t off64_t; }
# 104 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __id_t id_t; }
# 109 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __ssize_t ssize_t; }
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __daddr_t daddr_t; }
# 116 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __caddr_t caddr_t; }
# 122 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __key_t key_t; }
# 136 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __useconds_t useconds_t; }
# 140 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __suseconds_t suseconds_t; }
# 150 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned long ulong; }
# 151 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned short ushort; }
# 152 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned uint; }
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef signed char int8_t __attribute((__mode__(__QI__))); }
# 195 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef short int16_t __attribute((__mode__(__HI__))); }
# 196 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef int int32_t __attribute((__mode__(__SI__))); }
# 197 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef long int64_t __attribute((__mode__(__DI__))); }
# 200 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned char u_int8_t __attribute((__mode__(__QI__))); }
# 201 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned short u_int16_t __attribute((__mode__(__HI__))); }
# 202 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned u_int32_t __attribute((__mode__(__SI__))); }
# 203 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef unsigned long u_int64_t __attribute((__mode__(__DI__))); }
# 205 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef long register_t __attribute((__mode__(__word__))); }
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
extern "C" { typedef int __sig_atomic_t; }
# 30 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
extern "C" { typedef
# 28 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
struct {
# 29 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
unsigned long __val[(1024) / ((8) * sizeof(unsigned long))];
# 30 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
} __sigset_t; }
# 37 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" { typedef __sigset_t sigset_t; }
# 54 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" { typedef long __fd_mask; }
# 75 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" { typedef
# 65 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
struct {
# 69 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
__fd_mask fds_bits[1024 / (8 * ((int)sizeof(__fd_mask)))];
# 75 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
} fd_set; }
# 82 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" { typedef __fd_mask fd_mask; }
# 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" int select(int , fd_set *__restrict__ , fd_set *__restrict__ , fd_set *__restrict__ , timeval *__restrict__ );
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" int pselect(int , fd_set *__restrict__ , fd_set *__restrict__ , fd_set *__restrict__ , const timespec *__restrict__ , const __sigset_t *__restrict__ );
# 27 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_major(unsigned long long ) throw()
# 28 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
 __attribute((const));
# 30 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_minor(unsigned long long ) throw()
# 31 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
 __attribute((const));
# 33 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
extern "C" unsigned long long gnu_dev_makedev(unsigned , unsigned ) throw()
# 35 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
 __attribute((const));
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __blksize_t blksize_t; }
# 235 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __blkcnt_t blkcnt_t; }
# 239 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __fsblkcnt_t fsblkcnt_t; }
# 243 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __fsfilcnt_t fsfilcnt_t; }
# 262 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __blkcnt64_t blkcnt64_t; }
# 263 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __fsblkcnt64_t fsblkcnt64_t; }
# 264 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" { typedef __fsfilcnt64_t fsfilcnt64_t; }
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned long pthread_t; }
# 63 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { union pthread_attr_t {
# 65 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[56];
# 66 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
long __align;
# 67 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
}; }
# 69 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef pthread_attr_t pthread_attr_t; }
# 79 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 75 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct __pthread_internal_list {
# 77 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
__pthread_internal_list *__prev;
# 78 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
__pthread_internal_list *__next;
# 79 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} __pthread_list_t; }
# 128 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 91 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 92 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct __pthread_mutex_s {
# 94 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __lock;
# 95 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __count;
# 96 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __owner;
# 98 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __nusers;
# 102 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __kind;
# 104 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
short __spins;
# 105 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
short __elision;
# 106 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
__pthread_list_t __list;
# 125 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} __data;
# 126 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[40];
# 127 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
long __align;
# 128 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_mutex_t; }
# 134 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 131 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 132 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[4];
# 133 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __align;
# 134 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_mutexattr_t; }
# 154 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 140 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 142 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct {
# 143 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __lock;
# 144 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __futex;
# 145 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
__extension__ unsigned long long __total_seq;
# 146 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
__extension__ unsigned long long __wakeup_seq;
# 147 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
__extension__ unsigned long long __woken_seq;
# 148 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
void *__mutex;
# 149 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __nwaiters;
# 150 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __broadcast_seq;
# 151 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} __data;
# 152 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[48];
# 153 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
__extension__ long long __align;
# 154 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_cond_t; }
# 160 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 157 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 158 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[4];
# 159 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __align;
# 160 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_condattr_t; }
# 164 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned pthread_key_t; }
# 168 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef int pthread_once_t; }
# 222 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 175 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 178 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
struct {
# 179 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __lock;
# 180 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __nr_readers;
# 181 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __readers_wakeup;
# 182 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __writer_wakeup;
# 183 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __nr_readers_queued;
# 184 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __nr_writers_queued;
# 185 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __writer;
# 186 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __shared;
# 187 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
signed char __rwelision;
# 192 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned char __pad1[7];
# 195 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned long __pad2;
# 198 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
unsigned __flags;
# 200 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} __data;
# 220 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[56];
# 221 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
long __align;
# 222 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_rwlock_t; }
# 228 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 225 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 226 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[8];
# 227 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
long __align;
# 228 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_rwlockattr_t; }
# 234 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef volatile int pthread_spinlock_t; }
# 243 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 240 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 241 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[32];
# 242 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
long __align;
# 243 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_barrier_t; }
# 249 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
extern "C" { typedef
# 246 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union {
# 247 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[4];
# 248 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
int __align;
# 249 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} pthread_barrierattr_t; }
# 321 "/usr/include/stdlib.h" 3
extern "C" long random() throw();
# 324 "/usr/include/stdlib.h" 3
extern "C" void srandom(unsigned ) throw();
# 330 "/usr/include/stdlib.h" 3
extern "C" char *initstate(unsigned , char * , size_t ) throw()
# 331 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2)));
# 335 "/usr/include/stdlib.h" 3
extern "C" char *setstate(char * ) throw() __attribute((__nonnull__(1)));
# 343 "/usr/include/stdlib.h" 3
extern "C" { struct random_data {
# 345 "/usr/include/stdlib.h" 3
int32_t *fptr;
# 346 "/usr/include/stdlib.h" 3
int32_t *rptr;
# 347 "/usr/include/stdlib.h" 3
int32_t *state;
# 348 "/usr/include/stdlib.h" 3
int rand_type;
# 349 "/usr/include/stdlib.h" 3
int rand_deg;
# 350 "/usr/include/stdlib.h" 3
int rand_sep;
# 351 "/usr/include/stdlib.h" 3
int32_t *end_ptr;
# 352 "/usr/include/stdlib.h" 3
}; }
# 354 "/usr/include/stdlib.h" 3
extern "C" int random_r(random_data *__restrict__ , int32_t *__restrict__ ) throw()
# 355 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 357 "/usr/include/stdlib.h" 3
extern "C" int srandom_r(unsigned , random_data * ) throw()
# 358 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2)));
# 360 "/usr/include/stdlib.h" 3
extern "C" int initstate_r(unsigned , char *__restrict__ , size_t , random_data *__restrict__ ) throw()
# 363 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2, 4)));
# 365 "/usr/include/stdlib.h" 3
extern "C" int setstate_r(char *__restrict__ , random_data *__restrict__ ) throw()
# 367 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 374 "/usr/include/stdlib.h" 3
extern "C" int rand() throw();
# 376 "/usr/include/stdlib.h" 3
extern "C" void srand(unsigned ) throw();
# 381 "/usr/include/stdlib.h" 3
extern "C" int rand_r(unsigned * ) throw();
# 389 "/usr/include/stdlib.h" 3
extern "C" double drand48() throw();
# 390 "/usr/include/stdlib.h" 3
extern "C" double erand48(unsigned short [3]) throw() __attribute((__nonnull__(1)));
# 393 "/usr/include/stdlib.h" 3
extern "C" long lrand48() throw();
# 394 "/usr/include/stdlib.h" 3
extern "C" long nrand48(unsigned short [3]) throw()
# 395 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 398 "/usr/include/stdlib.h" 3
extern "C" long mrand48() throw();
# 399 "/usr/include/stdlib.h" 3
extern "C" long jrand48(unsigned short [3]) throw()
# 400 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 403 "/usr/include/stdlib.h" 3
extern "C" void srand48(long ) throw();
# 404 "/usr/include/stdlib.h" 3
extern "C" unsigned short *seed48(unsigned short [3]) throw()
# 405 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 406 "/usr/include/stdlib.h" 3
extern "C" void lcong48(unsigned short [7]) throw() __attribute((__nonnull__(1)));
# 412 "/usr/include/stdlib.h" 3
extern "C" { struct drand48_data {
# 414 "/usr/include/stdlib.h" 3
unsigned short __x[3];
# 415 "/usr/include/stdlib.h" 3
unsigned short __old_x[3];
# 416 "/usr/include/stdlib.h" 3
unsigned short __c;
# 417 "/usr/include/stdlib.h" 3
unsigned short __init;
# 418 "/usr/include/stdlib.h" 3
__extension__ unsigned long long __a;
# 420 "/usr/include/stdlib.h" 3
}; }
# 423 "/usr/include/stdlib.h" 3
extern "C" int drand48_r(drand48_data *__restrict__ , double *__restrict__ ) throw()
# 424 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 425 "/usr/include/stdlib.h" 3
extern "C" int erand48_r(unsigned short [3], drand48_data *__restrict__ , double *__restrict__ ) throw()
# 427 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 430 "/usr/include/stdlib.h" 3
extern "C" int lrand48_r(drand48_data *__restrict__ , long *__restrict__ ) throw()
# 432 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 433 "/usr/include/stdlib.h" 3
extern "C" int nrand48_r(unsigned short [3], drand48_data *__restrict__ , long *__restrict__ ) throw()
# 436 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 439 "/usr/include/stdlib.h" 3
extern "C" int mrand48_r(drand48_data *__restrict__ , long *__restrict__ ) throw()
# 441 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 442 "/usr/include/stdlib.h" 3
extern "C" int jrand48_r(unsigned short [3], drand48_data *__restrict__ , long *__restrict__ ) throw()
# 445 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 448 "/usr/include/stdlib.h" 3
extern "C" int srand48_r(long , drand48_data * ) throw()
# 449 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2)));
# 451 "/usr/include/stdlib.h" 3
extern "C" int seed48_r(unsigned short [3], drand48_data * ) throw()
# 452 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 454 "/usr/include/stdlib.h" 3
extern "C" int lcong48_r(unsigned short [7], drand48_data * ) throw()
# 456 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 466 "/usr/include/stdlib.h" 3
extern "C" void *malloc(size_t ) throw() __attribute((__malloc__));
# 468 "/usr/include/stdlib.h" 3
extern "C" void *calloc(size_t , size_t ) throw()
# 469 "/usr/include/stdlib.h" 3
 __attribute((__malloc__));
# 480 "/usr/include/stdlib.h" 3
extern "C" void *realloc(void * , size_t ) throw()
# 481 "/usr/include/stdlib.h" 3
 __attribute((__warn_unused_result__));
# 483 "/usr/include/stdlib.h" 3
extern "C" void free(void * ) throw();
# 488 "/usr/include/stdlib.h" 3
extern "C" void cfree(void * ) throw();
# 32 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t ) throw();
# 498 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t ) throw() __attribute((__malloc__));
# 503 "/usr/include/stdlib.h" 3
extern "C" int posix_memalign(void ** , size_t , size_t ) throw()
# 504 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 509 "/usr/include/stdlib.h" 3
extern "C" void *aligned_alloc(size_t , size_t ) throw()
# 510 "/usr/include/stdlib.h" 3
 __attribute((__malloc__)) __attribute((__alloc_size__(2)));
# 515 "/usr/include/stdlib.h" 3
extern "C" void abort() throw() __attribute((__noreturn__));
# 519 "/usr/include/stdlib.h" 3
extern "C" int atexit(void (* )(void)) throw() __attribute((__nonnull__(1)));
# 524 "/usr/include/stdlib.h" 3
int at_quick_exit(void (* )(void)) throw() __asm__("at_quick_exit")
# 525 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 535 "/usr/include/stdlib.h" 3
extern "C" int on_exit(void (* )(int , void * ), void * ) throw()
# 536 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 543 "/usr/include/stdlib.h" 3
extern "C" void exit(int ) throw() __attribute((__noreturn__));
# 549 "/usr/include/stdlib.h" 3
extern "C" void quick_exit(int ) throw() __attribute((__noreturn__));
# 557 "/usr/include/stdlib.h" 3
extern "C" void _Exit(int ) throw() __attribute((__noreturn__));
# 564 "/usr/include/stdlib.h" 3
extern "C" char *getenv(const char * ) throw() __attribute((__nonnull__(1)));
# 570 "/usr/include/stdlib.h" 3
extern "C" char *secure_getenv(const char * ) throw()
# 571 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 578 "/usr/include/stdlib.h" 3
extern "C" int putenv(char * ) throw() __attribute((__nonnull__(1)));
# 584 "/usr/include/stdlib.h" 3
extern "C" int setenv(const char * , const char * , int ) throw()
# 585 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2)));
# 588 "/usr/include/stdlib.h" 3
extern "C" int unsetenv(const char * ) throw() __attribute((__nonnull__(1)));
# 595 "/usr/include/stdlib.h" 3
extern "C" int clearenv() throw();
# 606 "/usr/include/stdlib.h" 3
extern "C" char *mktemp(char * ) throw() __attribute((__nonnull__(1)));
# 619 "/usr/include/stdlib.h" 3
extern "C" int mkstemp(char * ) __attribute((__nonnull__(1)));
# 629 "/usr/include/stdlib.h" 3
extern "C" int mkstemp64(char * ) __attribute((__nonnull__(1)));
# 641 "/usr/include/stdlib.h" 3
extern "C" int mkstemps(char * , int ) __attribute((__nonnull__(1)));
# 651 "/usr/include/stdlib.h" 3
extern "C" int mkstemps64(char * , int )
# 652 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 662 "/usr/include/stdlib.h" 3
extern "C" char *mkdtemp(char * ) throw() __attribute((__nonnull__(1)));
# 673 "/usr/include/stdlib.h" 3
extern "C" int mkostemp(char * , int ) __attribute((__nonnull__(1)));
# 683 "/usr/include/stdlib.h" 3
extern "C" int mkostemp64(char * , int ) __attribute((__nonnull__(1)));
# 693 "/usr/include/stdlib.h" 3
extern "C" int mkostemps(char * , int , int )
# 694 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 705 "/usr/include/stdlib.h" 3
extern "C" int mkostemps64(char * , int , int )
# 706 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 716 "/usr/include/stdlib.h" 3
extern "C" int system(const char * );
# 723 "/usr/include/stdlib.h" 3
extern "C" char *canonicalize_file_name(const char * ) throw()
# 724 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 733 "/usr/include/stdlib.h" 3
extern "C" char *realpath(const char *__restrict__ , char *__restrict__ ) throw();
# 741 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_fn_t)(const void *, const void *); }
# 744 "/usr/include/stdlib.h" 3
extern "C" { typedef __compar_fn_t comparison_fn_t; }
# 748 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_d_fn_t)(const void *, const void *, void *); }
# 754 "/usr/include/stdlib.h" 3
extern "C" void *bsearch(const void * , const void * , size_t , size_t , __compar_fn_t )
# 756 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2, 5)));
# 764 "/usr/include/stdlib.h" 3
extern "C" void qsort(void * , size_t , size_t , __compar_fn_t )
# 765 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 767 "/usr/include/stdlib.h" 3
extern "C" void qsort_r(void * , size_t , size_t , __compar_d_fn_t , void * )
# 769 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 774 "/usr/include/stdlib.h" 3
extern "C" int abs(int ) throw() __attribute((const));
# 775 "/usr/include/stdlib.h" 3
extern "C" long labs(long ) throw() __attribute((const));
# 779 "/usr/include/stdlib.h" 3
extern "C" long long llabs(long long ) throw()
# 780 "/usr/include/stdlib.h" 3
 __attribute((const));
# 788 "/usr/include/stdlib.h" 3
extern "C" div_t div(int , int ) throw()
# 789 "/usr/include/stdlib.h" 3
 __attribute((const));
# 790 "/usr/include/stdlib.h" 3
extern "C" ldiv_t ldiv(long , long ) throw()
# 791 "/usr/include/stdlib.h" 3
 __attribute((const));
# 796 "/usr/include/stdlib.h" 3
extern "C" lldiv_t lldiv(long long , long long ) throw()
# 798 "/usr/include/stdlib.h" 3
 __attribute((const));
# 811 "/usr/include/stdlib.h" 3
extern "C" char *ecvt(double , int , int *__restrict__ , int *__restrict__ ) throw()
# 812 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4)));
# 817 "/usr/include/stdlib.h" 3
extern "C" char *fcvt(double , int , int *__restrict__ , int *__restrict__ ) throw()
# 818 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4)));
# 823 "/usr/include/stdlib.h" 3
extern "C" char *gcvt(double , int , char * ) throw()
# 824 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3)));
# 829 "/usr/include/stdlib.h" 3
extern "C" char *qecvt(long double , int , int *__restrict__ , int *__restrict__ ) throw()
# 831 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4)));
# 832 "/usr/include/stdlib.h" 3
extern "C" char *qfcvt(long double , int , int *__restrict__ , int *__restrict__ ) throw()
# 834 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4)));
# 835 "/usr/include/stdlib.h" 3
extern "C" char *qgcvt(long double , int , char * ) throw()
# 836 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3)));
# 841 "/usr/include/stdlib.h" 3
extern "C" int ecvt_r(double , int , int *__restrict__ , int *__restrict__ , char *__restrict__ , size_t ) throw()
# 843 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4, 5)));
# 844 "/usr/include/stdlib.h" 3
extern "C" int fcvt_r(double , int , int *__restrict__ , int *__restrict__ , char *__restrict__ , size_t ) throw()
# 846 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4, 5)));
# 848 "/usr/include/stdlib.h" 3
extern "C" int qecvt_r(long double , int , int *__restrict__ , int *__restrict__ , char *__restrict__ , size_t ) throw()
# 851 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4, 5)));
# 852 "/usr/include/stdlib.h" 3
extern "C" int qfcvt_r(long double , int , int *__restrict__ , int *__restrict__ , char *__restrict__ , size_t ) throw()
# 855 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4, 5)));
# 862 "/usr/include/stdlib.h" 3
extern "C" int mblen(const char * , size_t ) throw();
# 865 "/usr/include/stdlib.h" 3
extern "C" int mbtowc(wchar_t *__restrict__ , const char *__restrict__ , size_t ) throw();
# 869 "/usr/include/stdlib.h" 3
extern "C" int wctomb(char * , wchar_t ) throw();
# 873 "/usr/include/stdlib.h" 3
extern "C" size_t mbstowcs(wchar_t *__restrict__ , const char *__restrict__ , size_t ) throw();
# 876 "/usr/include/stdlib.h" 3
extern "C" size_t wcstombs(char *__restrict__ , const wchar_t *__restrict__ , size_t ) throw();
# 887 "/usr/include/stdlib.h" 3
extern "C" int rpmatch(const char * ) throw() __attribute((__nonnull__(1)));
# 898 "/usr/include/stdlib.h" 3
extern "C" int getsubopt(char **__restrict__ , char *const *__restrict__ , char **__restrict__ ) throw()
# 901 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2, 3)));
# 907 "/usr/include/stdlib.h" 3
extern "C" void setkey(const char * ) throw() __attribute((__nonnull__(1)));
# 915 "/usr/include/stdlib.h" 3
extern "C" int posix_openpt(int );
# 923 "/usr/include/stdlib.h" 3
extern "C" int grantpt(int ) throw();
# 927 "/usr/include/stdlib.h" 3
extern "C" int unlockpt(int ) throw();
# 932 "/usr/include/stdlib.h" 3
extern "C" char *ptsname(int ) throw();
# 939 "/usr/include/stdlib.h" 3
extern "C" int ptsname_r(int , char * , size_t ) throw()
# 940 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2)));
# 943 "/usr/include/stdlib.h" 3
extern "C" int getpt();
# 950 "/usr/include/stdlib.h" 3
extern "C" int getloadavg(double [], int ) throw()
# 951 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 69 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) {
# 71 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template < typename _Iterator, typename _Container >
    class __normal_iterator;
# 74 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
}
# 76 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
namespace std __attribute((__visibility__("default")))
# 77 "/usr/include/c++/4.4/cmath" 3
 __attribute((__visibility__("default")))
# 492 "/usr/include/c++/4.4/cmath" 3
 __attribute((__visibility__("default")))
# 35 "/usr/include/c++/4.4/bits/cmath.tcc" 3
 __attribute((__visibility__("default")))
# 49 "/usr/include/c++/4.4/cstddef" 3
 __attribute((__visibility__("default")))
# 100 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default")))
# 199 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default")))
# 39 "/usr/include/c++/4.4/bits/functexcept.h" 3
 __attribute((__visibility__("default")))
# 66 "/usr/include/c++/4.4/bits/move.h" 3
 __attribute((__visibility__("default")))
# 63 "/usr/include/c++/4.4/bits/stl_pair.h" 3
 __attribute((__visibility__("default")))
# 68 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
 __attribute((__visibility__("default")))
# 66 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
 __attribute((__visibility__("default")))
# 68 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
 __attribute((__visibility__("default")))
# 74 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 936 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 50 "/usr/include/c++/4.4/bits/allocator.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_construct.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
 __attribute((__visibility__("default")))
# 65 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 454 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute((__visibility__("default"))) {
# 78 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __true_type { };
# 79 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __false_type { };
# 81 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< bool __T0>
# 82 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __truth_type {
# 83 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type; };
# 86 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __truth_type< true> {
# 87 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type; };
# 91 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Sp, class _Tp>
# 92 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __traitor {
# 94 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = (((bool)_Sp::__value) || ((bool)_Tp::__value))};
# 95 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef typename __truth_type< __value> ::__type __type;
# 96 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 99 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class , class >
# 100 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __are_same {
# 102 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 103 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 104 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 106 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 107 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __are_same< _Tp, _Tp> {
# 109 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 110 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 111 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 114 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 115 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_void {
# 117 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 118 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 119 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 122 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_void< void> {
# 124 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 125 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 126 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 131 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 132 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_integer {
# 134 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 135 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 136 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 142 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< bool> {
# 144 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 145 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 146 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 149 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< char> {
# 151 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 152 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 153 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 156 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< signed char> {
# 158 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 159 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 160 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 163 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned char> {
# 165 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 166 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 167 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 171 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< wchar_t> {
# 173 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 174 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 175 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 195 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< short> {
# 197 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 198 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 199 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 202 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned short> {
# 204 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 205 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 206 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 209 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< int> {
# 211 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 212 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 213 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 216 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned> {
# 218 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 219 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 220 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 223 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long> {
# 225 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 226 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 227 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 230 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long> {
# 232 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 233 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 234 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 237 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long long> {
# 239 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 240 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 241 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 244 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long long> {
# 246 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 247 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 248 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 253 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 254 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_floating {
# 256 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 257 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 258 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 262 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< float> {
# 264 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 265 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 266 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 269 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< double> {
# 271 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 272 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 273 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 276 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_floating< long double> {
# 278 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 279 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 280 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 285 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 286 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_pointer {
# 288 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 289 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 290 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 292 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 293 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_pointer< _Tp *> {
# 295 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 296 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 297 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 302 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 303 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_normal_iterator {
# 305 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 306 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 307 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 309 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container>
# 310 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> > {
# 313 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 314 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 315 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 320 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 321 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> > {
# 323 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 328 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 329 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> > {
# 331 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 336 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 337 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> > {
# 339 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 344 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 345 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_char {
# 347 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 348 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 349 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 352 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_char< char> {
# 354 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 355 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 356 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 360 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_char< wchar_t> {
# 362 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 363 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 364 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 367 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 368 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_byte {
# 370 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 371 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 372 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 375 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< char> {
# 377 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 378 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 379 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 382 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< signed char> {
# 384 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 385 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 386 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 389 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template<> struct __is_byte< unsigned char> {
# 391 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 392 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 393 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 398 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
template< class _Tp>
# 399 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
struct __is_move_iterator {
# 401 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
enum { __value};
# 402 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 403 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
};
# 417 "/usr/include/c++/4.4/bits/cpp_type_traits.h" 3
}
# 37 "/usr/include/c++/4.4/ext/type_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default")))
# 157 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default")))
# 37 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
 __attribute((__visibility__("default")))
# 656 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
 __attribute((__visibility__("default")))
# 120 "/usr/include/c++/4.4/exception" 3
 __attribute((__visibility__("default")))
# 37 "/usr/include/c++/4.4/ext/new_allocator.h" 3
 __attribute((__visibility__("default"))) {
# 40 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< bool __T1, class >
# 41 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __enable_if {
# 42 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 44 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 45 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __enable_if< true, _Tp> {
# 46 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Tp __type; };
# 50 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< bool _Cond, class _Iftrue, class _Iffalse>
# 51 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __conditional_type {
# 52 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Iftrue __type; };
# 54 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Iftrue, class _Iffalse>
# 55 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __conditional_type< false, _Iftrue, _Iffalse> {
# 56 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Iffalse __type; };
# 60 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 61 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __add_unsigned {
# 64 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 67 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 68 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 71 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< char> {
# 72 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned char __type; };
# 75 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< signed char> {
# 76 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned char __type; };
# 79 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< short> {
# 80 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned short __type; };
# 83 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< int> {
# 84 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned __type; };
# 87 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< long> {
# 88 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned long __type; };
# 91 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< long long> {
# 92 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef unsigned long long __type; };
# 96 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< bool> ;
# 99 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __add_unsigned< wchar_t> ;
# 103 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 104 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __remove_unsigned {
# 107 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 110 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 111 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 114 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< char> {
# 115 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef signed char __type; };
# 118 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned char> {
# 119 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef signed char __type; };
# 122 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned short> {
# 123 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef short __type; };
# 126 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned> {
# 127 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef int __type; };
# 130 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long> {
# 131 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef long __type; };
# 134 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long long> {
# 135 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef long long __type; };
# 139 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< bool> ;
# 142 "/usr/include/c++/4.4/ext/type_traits.h" 3
template<> struct __remove_unsigned< wchar_t> ;
# 146 "/usr/include/c++/4.4/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type * __ptr )
    { return __ptr == 0; }
# 151 "/usr/include/c++/4.4/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type )
    { return false; }
# 158 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, bool __T2 = std::__is_integer< _Tp> ::__value>
# 159 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote {
# 160 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef double __type; };
# 162 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp>
# 163 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote< _Tp, false> {
# 164 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef _Tp __type; };
# 166 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up>
# 167 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_2 {
# 170 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 171 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 174 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__((__type1() + __type2())) __type;
# 175 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 177 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp>
# 178 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_3 {
# 181 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 182 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 183 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 186 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__(((__type1() + __type2()) + __type3())) __type;
# 187 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 189 "/usr/include/c++/4.4/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp, class _Wp>
# 190 "/usr/include/c++/4.4/ext/type_traits.h" 3
struct __promote_4 {
# 193 "/usr/include/c++/4.4/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 194 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 195 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 196 "/usr/include/c++/4.4/ext/type_traits.h" 3
typedef typename __promote< _Wp, std::__is_integer< _Wp> ::__value> ::__type __type4;
# 199 "/usr/include/c++/4.4/ext/type_traits.h" 3
public: typedef __typeof__((((__type1() + __type2()) + __type3()) + __type4())) __type;
# 200 "/usr/include/c++/4.4/ext/type_traits.h" 3
};
# 202 "/usr/include/c++/4.4/ext/type_traits.h" 3
}
# 77 "/usr/include/c++/4.4/cmath" 3
namespace std __attribute((__visibility__("default")))
# 492 "/usr/include/c++/4.4/cmath" 3
 __attribute((__visibility__("default")))
# 35 "/usr/include/c++/4.4/bits/cmath.tcc" 3
 __attribute((__visibility__("default")))
# 49 "/usr/include/c++/4.4/cstddef" 3
 __attribute((__visibility__("default")))
# 100 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default")))
# 199 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default")))
# 39 "/usr/include/c++/4.4/bits/functexcept.h" 3
 __attribute((__visibility__("default")))
# 66 "/usr/include/c++/4.4/bits/move.h" 3
 __attribute((__visibility__("default")))
# 63 "/usr/include/c++/4.4/bits/stl_pair.h" 3
 __attribute((__visibility__("default")))
# 68 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
 __attribute((__visibility__("default")))
# 66 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
 __attribute((__visibility__("default")))
# 68 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
 __attribute((__visibility__("default")))
# 74 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 936 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 50 "/usr/include/c++/4.4/bits/allocator.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_construct.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
 __attribute((__visibility__("default")))
# 65 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 454 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute((__visibility__("default"))) {
# 81 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    _Tp __cmath_power ( _Tp, unsigned int );
# 84 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline _Tp
    __pow_helper ( _Tp __x, int __n )
    {
      return __n < 0
        ? _Tp ( 1 ) / __cmath_power ( __x, - __n )
        : __cmath_power ( __x, __n );
    }
# 94 "/usr/include/c++/4.4/cmath" 3
inline double abs(double __x)
# 95 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabs(__x); }
# 98 "/usr/include/c++/4.4/cmath" 3
inline float abs(float __x)
# 99 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsf(__x); }
# 102 "/usr/include/c++/4.4/cmath" 3
inline long double abs(long double __x)
# 103 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsl(__x); }
# 105 "/usr/include/c++/4.4/cmath" 3
using ::acos;
# 108 "/usr/include/c++/4.4/cmath" 3
inline float acos(float __x)
# 109 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_acosf(__x); }
# 112 "/usr/include/c++/4.4/cmath" 3
inline long double acos(long double __x)
# 113 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_acosl(__x); }
# 115 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    acos ( _Tp __x )
    { return __builtin_acos ( __x ); }
# 121 "/usr/include/c++/4.4/cmath" 3
using ::asin;
# 124 "/usr/include/c++/4.4/cmath" 3
inline float asin(float __x)
# 125 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_asinf(__x); }
# 128 "/usr/include/c++/4.4/cmath" 3
inline long double asin(long double __x)
# 129 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_asinl(__x); }
# 131 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    asin ( _Tp __x )
    { return __builtin_asin ( __x ); }
# 137 "/usr/include/c++/4.4/cmath" 3
using ::atan;
# 140 "/usr/include/c++/4.4/cmath" 3
inline float atan(float __x)
# 141 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atanf(__x); }
# 144 "/usr/include/c++/4.4/cmath" 3
inline long double atan(long double __x)
# 145 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atanl(__x); }
# 147 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    atan ( _Tp __x )
    { return __builtin_atan ( __x ); }
# 153 "/usr/include/c++/4.4/cmath" 3
using ::atan2;
# 156 "/usr/include/c++/4.4/cmath" 3
inline float atan2(float __y, float __x)
# 157 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atan2f(__y, __x); }
# 160 "/usr/include/c++/4.4/cmath" 3
inline long double atan2(long double __y, long double __x)
# 161 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_atan2l(__y, __x); }
# 163 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value
        && __is_arithmetic < _Up > :: __value,
        _Tp > :: __type, _Up > :: __type
    atan2 ( _Tp __y, _Up __x )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return atan2 ( __type ( __y ), __type ( __x ) );
    }
# 175 "/usr/include/c++/4.4/cmath" 3
using ::ceil;
# 178 "/usr/include/c++/4.4/cmath" 3
inline float ceil(float __x)
# 179 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ceilf(__x); }
# 182 "/usr/include/c++/4.4/cmath" 3
inline long double ceil(long double __x)
# 183 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ceill(__x); }
# 185 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    ceil ( _Tp __x )
    { return __builtin_ceil ( __x ); }
# 191 "/usr/include/c++/4.4/cmath" 3
using ::cos;
# 194 "/usr/include/c++/4.4/cmath" 3
inline float cos(float __x)
# 195 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_cosf(__x); }
# 198 "/usr/include/c++/4.4/cmath" 3
inline long double cos(long double __x)
# 199 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_cosl(__x); }
# 201 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cos ( _Tp __x )
    { return __builtin_cos ( __x ); }
# 207 "/usr/include/c++/4.4/cmath" 3
using ::cosh;
# 210 "/usr/include/c++/4.4/cmath" 3
inline float cosh(float __x)
# 211 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_coshf(__x); }
# 214 "/usr/include/c++/4.4/cmath" 3
inline long double cosh(long double __x)
# 215 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_coshl(__x); }
# 217 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cosh ( _Tp __x )
    { return __builtin_cosh ( __x ); }
# 223 "/usr/include/c++/4.4/cmath" 3
using ::exp;
# 226 "/usr/include/c++/4.4/cmath" 3
inline float exp(float __x)
# 227 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_expf(__x); }
# 230 "/usr/include/c++/4.4/cmath" 3
inline long double exp(long double __x)
# 231 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_expl(__x); }
# 233 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    exp ( _Tp __x )
    { return __builtin_exp ( __x ); }
# 239 "/usr/include/c++/4.4/cmath" 3
using ::fabs;
# 242 "/usr/include/c++/4.4/cmath" 3
inline float fabs(float __x)
# 243 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsf(__x); }
# 246 "/usr/include/c++/4.4/cmath" 3
inline long double fabs(long double __x)
# 247 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fabsl(__x); }
# 249 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    fabs ( _Tp __x )
    { return __builtin_fabs ( __x ); }
# 255 "/usr/include/c++/4.4/cmath" 3
using ::floor;
# 258 "/usr/include/c++/4.4/cmath" 3
inline float floor(float __x)
# 259 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_floorf(__x); }
# 262 "/usr/include/c++/4.4/cmath" 3
inline long double floor(long double __x)
# 263 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_floorl(__x); }
# 265 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    floor ( _Tp __x )
    { return __builtin_floor ( __x ); }
# 271 "/usr/include/c++/4.4/cmath" 3
using ::fmod;
# 274 "/usr/include/c++/4.4/cmath" 3
inline float fmod(float __x, float __y)
# 275 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fmodf(__x, __y); }
# 278 "/usr/include/c++/4.4/cmath" 3
inline long double fmod(long double __x, long double __y)
# 279 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_fmodl(__x, __y); }
# 281 "/usr/include/c++/4.4/cmath" 3
using ::frexp;
# 284 "/usr/include/c++/4.4/cmath" 3
inline float frexp(float __x, int *__exp)
# 285 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_frexpf(__x, __exp); }
# 288 "/usr/include/c++/4.4/cmath" 3
inline long double frexp(long double __x, int *__exp)
# 289 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_frexpl(__x, __exp); }
# 291 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    frexp ( _Tp __x, int * __exp )
    { return __builtin_frexp ( __x, __exp ); }
# 297 "/usr/include/c++/4.4/cmath" 3
using ::ldexp;
# 300 "/usr/include/c++/4.4/cmath" 3
inline float ldexp(float __x, int __exp)
# 301 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ldexpf(__x, __exp); }
# 304 "/usr/include/c++/4.4/cmath" 3
inline long double ldexp(long double __x, int __exp)
# 305 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_ldexpl(__x, __exp); }
# 307 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
  ldexp ( _Tp __x, int __exp )
  { return __builtin_ldexp ( __x, __exp ); }
# 313 "/usr/include/c++/4.4/cmath" 3
using ::log;
# 316 "/usr/include/c++/4.4/cmath" 3
inline float log(float __x)
# 317 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_logf(__x); }
# 320 "/usr/include/c++/4.4/cmath" 3
inline long double log(long double __x)
# 321 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_logl(__x); }
# 323 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log ( _Tp __x )
    { return __builtin_log ( __x ); }
# 329 "/usr/include/c++/4.4/cmath" 3
using ::log10;
# 332 "/usr/include/c++/4.4/cmath" 3
inline float log10(float __x)
# 333 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_log10f(__x); }
# 336 "/usr/include/c++/4.4/cmath" 3
inline long double log10(long double __x)
# 337 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_log10l(__x); }
# 339 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log10 ( _Tp __x )
    { return __builtin_log10 ( __x ); }
# 345 "/usr/include/c++/4.4/cmath" 3
using ::modf;
# 348 "/usr/include/c++/4.4/cmath" 3
inline float modf(float __x, float *__iptr)
# 349 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_modff(__x, __iptr); }
# 352 "/usr/include/c++/4.4/cmath" 3
inline long double modf(long double __x, long double *__iptr)
# 353 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_modfl(__x, __iptr); }
# 355 "/usr/include/c++/4.4/cmath" 3
using ::pow;
# 358 "/usr/include/c++/4.4/cmath" 3
inline float pow(float __x, float __y)
# 359 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powf(__x, __y); }
# 362 "/usr/include/c++/4.4/cmath" 3
inline long double pow(long double __x, long double __y)
# 363 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powl(__x, __y); }
# 369 "/usr/include/c++/4.4/cmath" 3
inline double pow(double __x, int __i)
# 370 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powi(__x, __i); }
# 373 "/usr/include/c++/4.4/cmath" 3
inline float pow(float __x, int __n)
# 374 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powif(__x, __n); }
# 377 "/usr/include/c++/4.4/cmath" 3
inline long double pow(long double __x, int __n)
# 378 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_powil(__x, __n); }
# 381 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp, typename _Up >
    inline
    typename __gnu_cxx :: __promote_2 <
    typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value
        && __is_arithmetic < _Up > :: __value,
        _Tp > :: __type, _Up > :: __type
    pow ( _Tp __x, _Up __y )
    {
      typedef typename __gnu_cxx :: __promote_2 < _Tp, _Up > :: __type __type;
      return pow ( __type ( __x ), __type ( __y ) );
    }
# 393 "/usr/include/c++/4.4/cmath" 3
using ::sin;
# 396 "/usr/include/c++/4.4/cmath" 3
inline float sin(float __x)
# 397 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinf(__x); }
# 400 "/usr/include/c++/4.4/cmath" 3
inline long double sin(long double __x)
# 401 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinl(__x); }
# 403 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sin ( _Tp __x )
    { return __builtin_sin ( __x ); }
# 409 "/usr/include/c++/4.4/cmath" 3
using ::sinh;
# 412 "/usr/include/c++/4.4/cmath" 3
inline float sinh(float __x)
# 413 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinhf(__x); }
# 416 "/usr/include/c++/4.4/cmath" 3
inline long double sinh(long double __x)
# 417 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sinhl(__x); }
# 419 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sinh ( _Tp __x )
    { return __builtin_sinh ( __x ); }
# 425 "/usr/include/c++/4.4/cmath" 3
using ::sqrt;
# 428 "/usr/include/c++/4.4/cmath" 3
inline float sqrt(float __x)
# 429 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sqrtf(__x); }
# 432 "/usr/include/c++/4.4/cmath" 3
inline long double sqrt(long double __x)
# 433 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_sqrtl(__x); }
# 435 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sqrt ( _Tp __x )
    { return __builtin_sqrt ( __x ); }
# 441 "/usr/include/c++/4.4/cmath" 3
using ::tan;
# 444 "/usr/include/c++/4.4/cmath" 3
inline float tan(float __x)
# 445 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanf(__x); }
# 448 "/usr/include/c++/4.4/cmath" 3
inline long double tan(long double __x)
# 449 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanl(__x); }
# 451 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tan ( _Tp __x )
    { return __builtin_tan ( __x ); }
# 457 "/usr/include/c++/4.4/cmath" 3
using ::tanh;
# 460 "/usr/include/c++/4.4/cmath" 3
inline float tanh(float __x)
# 461 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanhf(__x); }
# 464 "/usr/include/c++/4.4/cmath" 3
inline long double tanh(long double __x)
# 465 "/usr/include/c++/4.4/cmath" 3
{ return __builtin_tanhl(__x); }
# 467 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tanh ( _Tp __x )
    { return __builtin_tanh ( __x ); }
# 473 "/usr/include/c++/4.4/cmath" 3
}
# 492 "/usr/include/c++/4.4/cmath" 3
namespace std __attribute((__visibility__("default")))
# 35 "/usr/include/c++/4.4/bits/cmath.tcc" 3
 __attribute((__visibility__("default")))
# 49 "/usr/include/c++/4.4/cstddef" 3
 __attribute((__visibility__("default")))
# 100 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default")))
# 199 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default")))
# 39 "/usr/include/c++/4.4/bits/functexcept.h" 3
 __attribute((__visibility__("default")))
# 66 "/usr/include/c++/4.4/bits/move.h" 3
 __attribute((__visibility__("default")))
# 63 "/usr/include/c++/4.4/bits/stl_pair.h" 3
 __attribute((__visibility__("default")))
# 68 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
 __attribute((__visibility__("default")))
# 66 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
 __attribute((__visibility__("default")))
# 68 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
 __attribute((__visibility__("default")))
# 74 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 936 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 50 "/usr/include/c++/4.4/bits/allocator.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_construct.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
 __attribute((__visibility__("default")))
# 65 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 454 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute((__visibility__("default"))) {
# 494 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    fpclassify ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_fpclassify ( 0, 1, 4,
      3, 2, __type ( __f ) );
    }
# 504 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isfinite ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isfinite ( __type ( __f ) );
    }
# 513 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isinf ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isinf ( __type ( __f ) );
    }
# 522 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnan ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnan ( __type ( __f ) );
    }
# 531 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnormal ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnormal ( __type ( __f ) );
    }
# 540 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    signbit ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_signbit ( __type ( __f ) );
    }
# 549 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 558 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreaterequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreaterequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 567 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isless ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isless ( __type ( __f1 ), __type ( __f2 ) );
    }
# 576 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 585 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 594 "/usr/include/c++/4.4/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isunordered ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isunordered ( __type ( __f1 ), __type ( __f2 ) );
    }
# 603 "/usr/include/c++/4.4/cmath" 3
}
# 35 "/usr/include/c++/4.4/bits/cmath.tcc" 3
namespace std __attribute((__visibility__("default")))
# 49 "/usr/include/c++/4.4/cstddef" 3
 __attribute((__visibility__("default")))
# 100 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default")))
# 199 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default")))
# 39 "/usr/include/c++/4.4/bits/functexcept.h" 3
 __attribute((__visibility__("default")))
# 66 "/usr/include/c++/4.4/bits/move.h" 3
 __attribute((__visibility__("default")))
# 63 "/usr/include/c++/4.4/bits/stl_pair.h" 3
 __attribute((__visibility__("default")))
# 68 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
 __attribute((__visibility__("default")))
# 66 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
 __attribute((__visibility__("default")))
# 68 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
 __attribute((__visibility__("default")))
# 74 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 936 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 50 "/usr/include/c++/4.4/bits/allocator.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_construct.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
 __attribute((__visibility__("default")))
# 65 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 454 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute((__visibility__("default"))) {
# 37 "/usr/include/c++/4.4/bits/cmath.tcc" 3
template < typename _Tp >
    inline _Tp
    __cmath_power ( _Tp __x, unsigned int __n )
    {
      _Tp __y = __n % 2 ? __x : _Tp ( 1 );

      while ( __n >>= 1 )
        {
          __x = __x * __x;
          if ( __n % 2 )
            __y = __y * __x;
        }

      return __y;
    }
# 53 "/usr/include/c++/4.4/bits/cmath.tcc" 3
}
# 49 "/usr/include/c++/4.4/cstddef" 3
namespace std __attribute((__visibility__("default")))
# 100 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default")))
# 199 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default")))
# 39 "/usr/include/c++/4.4/bits/functexcept.h" 3
 __attribute((__visibility__("default")))
# 66 "/usr/include/c++/4.4/bits/move.h" 3
 __attribute((__visibility__("default")))
# 63 "/usr/include/c++/4.4/bits/stl_pair.h" 3
 __attribute((__visibility__("default")))
# 68 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
 __attribute((__visibility__("default")))
# 66 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
 __attribute((__visibility__("default")))
# 68 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
 __attribute((__visibility__("default")))
# 74 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 936 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 50 "/usr/include/c++/4.4/bits/allocator.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_construct.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
 __attribute((__visibility__("default")))
# 65 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 454 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute((__visibility__("default"))) {
# 51 "/usr/include/c++/4.4/cstddef" 3
using ::ptrdiff_t;
# 52 "/usr/include/c++/4.4/cstddef" 3
using ::size_t;
# 54 "/usr/include/c++/4.4/cstddef" 3
}
# 100 "/usr/include/c++/4.4/cstdlib" 3
namespace std __attribute((__visibility__("default")))
# 199 "/usr/include/c++/4.4/cstdlib" 3
 __attribute((__visibility__("default")))
# 39 "/usr/include/c++/4.4/bits/functexcept.h" 3
 __attribute((__visibility__("default")))
# 66 "/usr/include/c++/4.4/bits/move.h" 3
 __attribute((__visibility__("default")))
# 63 "/usr/include/c++/4.4/bits/stl_pair.h" 3
 __attribute((__visibility__("default")))
# 68 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
 __attribute((__visibility__("default")))
# 66 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
 __attribute((__visibility__("default")))
# 68 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
 __attribute((__visibility__("default")))
# 74 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 936 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 50 "/usr/include/c++/4.4/bits/allocator.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_construct.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
 __attribute((__visibility__("default")))
# 65 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 454 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute((__visibility__("default"))) {
# 102 "/usr/include/c++/4.4/cstdlib" 3
using ::div_t;
# 103 "/usr/include/c++/4.4/cstdlib" 3
using ::ldiv_t;
# 105 "/usr/include/c++/4.4/cstdlib" 3
using ::abort;
# 106 "/usr/include/c++/4.4/cstdlib" 3
using ::abs;
# 107 "/usr/include/c++/4.4/cstdlib" 3
using ::atexit;
# 108 "/usr/include/c++/4.4/cstdlib" 3
using ::atof;
# 109 "/usr/include/c++/4.4/cstdlib" 3
using ::atoi;
# 110 "/usr/include/c++/4.4/cstdlib" 3
using ::atol;
# 111 "/usr/include/c++/4.4/cstdlib" 3
using ::bsearch;
# 112 "/usr/include/c++/4.4/cstdlib" 3
using ::calloc;
# 113 "/usr/include/c++/4.4/cstdlib" 3
using ::div;
# 114 "/usr/include/c++/4.4/cstdlib" 3
using ::exit;
# 115 "/usr/include/c++/4.4/cstdlib" 3
using ::free;
# 116 "/usr/include/c++/4.4/cstdlib" 3
using ::getenv;
# 117 "/usr/include/c++/4.4/cstdlib" 3
using ::labs;
# 118 "/usr/include/c++/4.4/cstdlib" 3
using ::ldiv;
# 119 "/usr/include/c++/4.4/cstdlib" 3
using ::malloc;
# 121 "/usr/include/c++/4.4/cstdlib" 3
using ::mblen;
# 122 "/usr/include/c++/4.4/cstdlib" 3
using ::mbstowcs;
# 123 "/usr/include/c++/4.4/cstdlib" 3
using ::mbtowc;
# 125 "/usr/include/c++/4.4/cstdlib" 3
using ::qsort;
# 126 "/usr/include/c++/4.4/cstdlib" 3
using ::rand;
# 127 "/usr/include/c++/4.4/cstdlib" 3
using ::realloc;
# 128 "/usr/include/c++/4.4/cstdlib" 3
using ::srand;
# 129 "/usr/include/c++/4.4/cstdlib" 3
using ::strtod;
# 130 "/usr/include/c++/4.4/cstdlib" 3
using ::strtol;
# 131 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoul;
# 132 "/usr/include/c++/4.4/cstdlib" 3
using ::system;
# 134 "/usr/include/c++/4.4/cstdlib" 3
using ::wcstombs;
# 135 "/usr/include/c++/4.4/cstdlib" 3
using ::wctomb;
# 139 "/usr/include/c++/4.4/cstdlib" 3
inline long abs(long __i) { return labs(__i); }
# 142 "/usr/include/c++/4.4/cstdlib" 3
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); }
# 144 "/usr/include/c++/4.4/cstdlib" 3
}
# 157 "/usr/include/c++/4.4/cstdlib" 3
namespace __gnu_cxx __attribute((__visibility__("default")))
# 37 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
 __attribute((__visibility__("default")))
# 656 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
 __attribute((__visibility__("default")))
# 120 "/usr/include/c++/4.4/exception" 3
 __attribute((__visibility__("default")))
# 37 "/usr/include/c++/4.4/ext/new_allocator.h" 3
 __attribute((__visibility__("default"))) {
# 160 "/usr/include/c++/4.4/cstdlib" 3
using ::lldiv_t;
# 166 "/usr/include/c++/4.4/cstdlib" 3
using ::_Exit;
# 170 "/usr/include/c++/4.4/cstdlib" 3
inline long long abs(long long __x) { return (__x >= (0)) ? __x : (-__x); }
# 173 "/usr/include/c++/4.4/cstdlib" 3
using ::llabs;
# 176 "/usr/include/c++/4.4/cstdlib" 3
inline lldiv_t div(long long __n, long long __d)
# 177 "/usr/include/c++/4.4/cstdlib" 3
{ lldiv_t __q; (__q.quot) = (__n / __d); (__q.rem) = (__n % __d); return __q; }
# 179 "/usr/include/c++/4.4/cstdlib" 3
using ::lldiv;
# 190 "/usr/include/c++/4.4/cstdlib" 3
using ::atoll;
# 191 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoll;
# 192 "/usr/include/c++/4.4/cstdlib" 3
using ::strtoull;
# 194 "/usr/include/c++/4.4/cstdlib" 3
using ::strtof;
# 195 "/usr/include/c++/4.4/cstdlib" 3
using ::strtold;
# 197 "/usr/include/c++/4.4/cstdlib" 3
}
# 199 "/usr/include/c++/4.4/cstdlib" 3
namespace std __attribute((__visibility__("default")))
# 39 "/usr/include/c++/4.4/bits/functexcept.h" 3
 __attribute((__visibility__("default")))
# 66 "/usr/include/c++/4.4/bits/move.h" 3
 __attribute((__visibility__("default")))
# 63 "/usr/include/c++/4.4/bits/stl_pair.h" 3
 __attribute((__visibility__("default")))
# 68 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
 __attribute((__visibility__("default")))
# 66 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
 __attribute((__visibility__("default")))
# 68 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
 __attribute((__visibility__("default")))
# 74 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 936 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 50 "/usr/include/c++/4.4/bits/allocator.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_construct.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
 __attribute((__visibility__("default")))
# 65 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 454 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute((__visibility__("default"))) {
# 202 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::lldiv_t;
# 204 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::_Exit;
# 205 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::abs;
# 207 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::llabs;
# 208 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::div;
# 209 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::lldiv;
# 211 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::atoll;
# 212 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtof;
# 213 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtoll;
# 214 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtoull;
# 215 "/usr/include/c++/4.4/cstdlib" 3
using __gnu_cxx::strtold;
# 217 "/usr/include/c++/4.4/cstdlib" 3
}
# 85 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" int abs(int) throw();
# 87 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" long labs(long) throw();
# 89 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" long long llabs(long long) throw();
# 91 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double fabs(double) throw();
# 93 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float fabsf(float) throw();
# 96 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" int min(int, int);
# 98 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" unsigned umin(unsigned, unsigned);
# 100 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" long long llmin(long long, long long);
# 102 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" unsigned long long ullmin(unsigned long long, unsigned long long);
# 104 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float fminf(float, float) throw();
# 106 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double fmin(double, double) throw();
# 109 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" int max(int, int);
# 111 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" unsigned umax(unsigned, unsigned);
# 113 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" long long llmax(long long, long long);
# 115 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" unsigned long long ullmax(unsigned long long, unsigned long long);
# 117 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float fmaxf(float, float) throw();
# 119 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double fmax(double, double) throw();
# 122 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double sin(double) throw();
# 125 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double cos(double) throw();
# 128 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" void sincos(double, double *, double *) throw();
# 130 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" void sincosf(float, float *, float *) throw();
# 133 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double tan(double) throw();
# 136 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double sqrt(double) throw();
# 139 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double rsqrt(double);
# 141 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float rsqrtf(float);
# 144 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double exp2(double) throw();
# 146 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float exp2f(float) throw();
# 149 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double exp10(double) throw();
# 151 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float exp10f(float) throw();
# 154 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double expm1(double) throw();
# 156 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float expm1f(float) throw();
# 159 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double log2(double) throw();
# 161 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float log2f(float) throw();
# 164 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double log10(double) throw();
# 167 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double log(double) throw();
# 170 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double log1p(double) throw();
# 172 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float log1pf(float) throw();
# 175 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double floor(double) throw();
# 178 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double exp(double) throw();
# 181 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double cosh(double) throw();
# 184 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double sinh(double) throw();
# 187 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double tanh(double) throw();
# 190 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double acosh(double) throw();
# 192 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float acoshf(float) throw();
# 195 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double asinh(double) throw();
# 197 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float asinhf(float) throw();
# 200 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double atanh(double) throw();
# 202 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float atanhf(float) throw();
# 205 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double ldexp(double, int) throw();
# 207 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float ldexpf(float, int) throw();
# 210 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double logb(double) throw();
# 212 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float logbf(float) throw();
# 215 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" int ilogb(double) throw();
# 217 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" int ilogbf(float) throw();
# 220 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double scalbn(double, int) throw();
# 222 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float scalbnf(float, int) throw();
# 225 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double scalbln(double, long) throw();
# 227 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float scalblnf(float, long) throw();
# 230 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double frexp(double, int *) throw();
# 232 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float frexpf(float, int *) throw();
# 235 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double round(double) throw();
# 237 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float roundf(float) throw();
# 240 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" long lround(double) throw();
# 242 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" long lroundf(float) throw();
# 245 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" long long llround(double) throw();
# 247 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" long long llroundf(float) throw();
# 250 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double rint(double) throw();
# 252 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float rintf(float) throw();
# 255 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" long lrint(double) throw();
# 257 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" long lrintf(float) throw();
# 260 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" long long llrint(double) throw();
# 262 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" long long llrintf(float) throw();
# 265 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double nearbyint(double) throw();
# 267 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float nearbyintf(float) throw();
# 270 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double ceil(double) throw();
# 273 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double trunc(double) throw();
# 275 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float truncf(float) throw();
# 278 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double fdim(double, double) throw();
# 280 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float fdimf(float, float) throw();
# 283 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double atan2(double, double) throw();
# 286 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double atan(double) throw();
# 289 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double asin(double) throw();
# 292 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double acos(double) throw();
# 296 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double hypot(double, double) throw();
# 302 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float hypotf(float, float) throw();
# 305 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double cbrt(double) throw();
# 307 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float cbrtf(float) throw();
# 310 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double rcbrt(double);
# 312 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float rcbrtf(float);
# 315 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double sinpi(double);
# 317 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float sinpif(float);
# 320 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double cospi(double);
# 322 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float cospif(float);
# 325 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double pow(double, double) throw();
# 328 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double modf(double, double *) throw();
# 331 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double fmod(double, double) throw();
# 334 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double remainder(double, double) throw();
# 336 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float remainderf(float, float) throw();
# 339 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double remquo(double, double, int *) throw();
# 341 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float remquof(float, float, int *) throw();
# 344 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double erf(double) throw();
# 346 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float erff(float) throw();
# 349 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double erfinv(double);
# 351 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float erfinvf(float);
# 354 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double erfc(double) throw();
# 356 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float erfcf(float) throw();
# 359 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double erfcinv(double);
# 361 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float erfcinvf(float);
# 364 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double lgamma(double) throw();
# 366 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float lgammaf(float) throw();
# 369 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double tgamma(double) throw();
# 371 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float tgammaf(float) throw();
# 374 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double copysign(double, double) throw();
# 376 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float copysignf(float, float) throw();
# 379 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double nextafter(double, double) throw();
# 381 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float nextafterf(float, float) throw();
# 384 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double nan(const char *) throw();
# 386 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float nanf(const char *) throw();
# 389 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" int __isinf(double) throw();
# 391 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" int __isinff(float) throw();
# 394 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" int __isnan(double) throw();
# 397 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" int __isnanf(float) throw();
# 411 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" int __finite(double) throw();
# 414 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" int __finitef(float) throw();
# 418 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" int __signbit(double) throw();
# 423 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" int __signbitf(float) throw();
# 426 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" double fma(double, double, double) throw();
# 428 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float fmaf(float, float, float) throw();
# 436 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" int __signbitl(long double) throw();
# 438 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" int __isinfl(long double) throw();
# 440 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" int __isnanl(long double) throw();
# 450 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" int __finitel(long double) throw();
# 516 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float acosf(float) throw();
# 519 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float asinf(float) throw();
# 522 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float atanf(float) throw();
# 525 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float atan2f(float, float) throw();
# 528 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float cosf(float) throw();
# 531 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float sinf(float) throw();
# 534 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float tanf(float) throw();
# 537 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float coshf(float) throw();
# 540 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float sinhf(float) throw();
# 543 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float tanhf(float) throw();
# 546 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float expf(float) throw();
# 549 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float logf(float) throw();
# 552 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float log10f(float) throw();
# 555 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float modff(float, float *) throw();
# 558 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float powf(float, float) throw();
# 561 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float sqrtf(float) throw();
# 564 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float ceilf(float) throw();
# 567 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float floorf(float) throw();
# 570 "/usr/local/cuda/bin/../include/math_functions.h"
extern "C" float fmodf(float, float) throw();
# 605 "/usr/local/cuda/bin/../include/math_functions.h"
namespace __gnu_cxx {
# 607 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline long long abs(long long);
# 608 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 610 "/usr/local/cuda/bin/../include/math_functions.h"
namespace std {
# 612 "/usr/local/cuda/bin/../include/math_functions.h"
template< class T> extern inline T __pow_helper(T, int);
# 613 "/usr/local/cuda/bin/../include/math_functions.h"
template< class T> extern inline T __cmath_power(T, unsigned);
# 614 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 616 "/usr/local/cuda/bin/../include/math_functions.h"
using std::abs;
# 617 "/usr/local/cuda/bin/../include/math_functions.h"
using std::fabs;
# 618 "/usr/local/cuda/bin/../include/math_functions.h"
using std::ceil;
# 619 "/usr/local/cuda/bin/../include/math_functions.h"
using std::floor;
# 620 "/usr/local/cuda/bin/../include/math_functions.h"
using std::sqrt;
# 621 "/usr/local/cuda/bin/../include/math_functions.h"
using std::pow;
# 622 "/usr/local/cuda/bin/../include/math_functions.h"
using std::log;
# 623 "/usr/local/cuda/bin/../include/math_functions.h"
using std::log10;
# 624 "/usr/local/cuda/bin/../include/math_functions.h"
using std::fmod;
# 625 "/usr/local/cuda/bin/../include/math_functions.h"
using std::modf;
# 626 "/usr/local/cuda/bin/../include/math_functions.h"
using std::exp;
# 627 "/usr/local/cuda/bin/../include/math_functions.h"
using std::frexp;
# 628 "/usr/local/cuda/bin/../include/math_functions.h"
using std::ldexp;
# 629 "/usr/local/cuda/bin/../include/math_functions.h"
using std::asin;
# 630 "/usr/local/cuda/bin/../include/math_functions.h"
using std::sin;
# 631 "/usr/local/cuda/bin/../include/math_functions.h"
using std::sinh;
# 632 "/usr/local/cuda/bin/../include/math_functions.h"
using std::acos;
# 633 "/usr/local/cuda/bin/../include/math_functions.h"
using std::cos;
# 634 "/usr/local/cuda/bin/../include/math_functions.h"
using std::cosh;
# 635 "/usr/local/cuda/bin/../include/math_functions.h"
using std::atan;
# 636 "/usr/local/cuda/bin/../include/math_functions.h"
using std::atan2;
# 637 "/usr/local/cuda/bin/../include/math_functions.h"
using std::tan;
# 638 "/usr/local/cuda/bin/../include/math_functions.h"
using std::tanh;
# 695 "/usr/local/cuda/bin/../include/math_functions.h"
namespace std {
# 698 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline long abs(long);
# 699 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float abs(float);
# 700 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline double abs(double);
# 701 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float fabs(float);
# 702 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float ceil(float);
# 703 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float floor(float);
# 704 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sqrt(float);
# 705 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float pow(float, float);
# 706 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float pow(float, int);
# 707 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline double pow(double, int);
# 708 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float log(float);
# 709 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float log10(float);
# 710 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float fmod(float, float);
# 711 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float modf(float, float *);
# 712 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float exp(float);
# 713 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float frexp(float, int *);
# 714 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float ldexp(float, int);
# 715 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float asin(float);
# 716 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sin(float);
# 717 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float sinh(float);
# 718 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float acos(float);
# 719 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float cos(float);
# 720 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float cosh(float);
# 721 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float atan(float);
# 722 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float atan2(float, float);
# 723 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float tan(float);
# 724 "/usr/local/cuda/bin/../include/math_functions.h"
extern inline float tanh(float);
# 727 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 730 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float logb(float a)
# 731 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 732 "/usr/local/cuda/bin/../include/math_functions.h"
return logbf(a);
# 733 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 735 "/usr/local/cuda/bin/../include/math_functions.h"
static inline int ilogb(float a)
# 736 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 737 "/usr/local/cuda/bin/../include/math_functions.h"
return ilogbf(a);
# 738 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 740 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float scalbn(float a, int b)
# 741 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 742 "/usr/local/cuda/bin/../include/math_functions.h"
return scalbnf(a, b);
# 743 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 745 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float scalbln(float a, long b)
# 746 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 747 "/usr/local/cuda/bin/../include/math_functions.h"
return scalblnf(a, b);
# 748 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 750 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float exp2(float a)
# 751 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 752 "/usr/local/cuda/bin/../include/math_functions.h"
return exp2f(a);
# 753 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 755 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float exp10(float a)
# 756 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 757 "/usr/local/cuda/bin/../include/math_functions.h"
return exp10f(a);
# 758 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 760 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float expm1(float a)
# 761 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 762 "/usr/local/cuda/bin/../include/math_functions.h"
return expm1f(a);
# 763 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 765 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float log2(float a)
# 766 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 767 "/usr/local/cuda/bin/../include/math_functions.h"
return log2f(a);
# 768 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 770 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float log1p(float a)
# 771 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 772 "/usr/local/cuda/bin/../include/math_functions.h"
return log1pf(a);
# 773 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 775 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rsqrt(float a)
# 776 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 777 "/usr/local/cuda/bin/../include/math_functions.h"
return rsqrtf(a);
# 778 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 780 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float acosh(float a)
# 781 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 782 "/usr/local/cuda/bin/../include/math_functions.h"
return acoshf(a);
# 783 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 785 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float asinh(float a)
# 786 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 787 "/usr/local/cuda/bin/../include/math_functions.h"
return asinhf(a);
# 788 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 790 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float atanh(float a)
# 791 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 792 "/usr/local/cuda/bin/../include/math_functions.h"
return atanhf(a);
# 793 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 795 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float hypot(float a, float b)
# 796 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 797 "/usr/local/cuda/bin/../include/math_functions.h"
return hypotf(a, b);
# 798 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 800 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float cbrt(float a)
# 801 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 802 "/usr/local/cuda/bin/../include/math_functions.h"
return cbrtf(a);
# 803 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 805 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rcbrt(float a)
# 806 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 807 "/usr/local/cuda/bin/../include/math_functions.h"
return rcbrtf(a);
# 808 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 810 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float sinpi(float a)
# 811 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 812 "/usr/local/cuda/bin/../include/math_functions.h"
return sinpif(a);
# 813 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 815 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float cospi(float a)
# 816 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 817 "/usr/local/cuda/bin/../include/math_functions.h"
return cospif(a);
# 818 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 820 "/usr/local/cuda/bin/../include/math_functions.h"
static inline void sincos(float a, float *sptr, float *cptr)
# 821 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 822 "/usr/local/cuda/bin/../include/math_functions.h"
sincosf(a, sptr, cptr);
# 823 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 825 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erf(float a)
# 826 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 827 "/usr/local/cuda/bin/../include/math_functions.h"
return erff(a);
# 828 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 830 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erfinv(float a)
# 831 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 832 "/usr/local/cuda/bin/../include/math_functions.h"
return erfinvf(a);
# 833 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 835 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erfc(float a)
# 836 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 837 "/usr/local/cuda/bin/../include/math_functions.h"
return erfcf(a);
# 838 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 840 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float erfcinv(float a)
# 841 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 842 "/usr/local/cuda/bin/../include/math_functions.h"
return erfcinvf(a);
# 843 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 845 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float lgamma(float a)
# 846 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 847 "/usr/local/cuda/bin/../include/math_functions.h"
return lgammaf(a);
# 848 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 850 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float tgamma(float a)
# 851 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 852 "/usr/local/cuda/bin/../include/math_functions.h"
return tgammaf(a);
# 853 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 855 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float copysign(float a, float b)
# 856 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 857 "/usr/local/cuda/bin/../include/math_functions.h"
return copysignf(a, b);
# 858 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 860 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double copysign(double a, float b)
# 861 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 862 "/usr/local/cuda/bin/../include/math_functions.h"
return copysign(a, (double)b);
# 863 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 865 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float copysign(float a, double b)
# 866 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 867 "/usr/local/cuda/bin/../include/math_functions.h"
return copysignf(a, (float)b);
# 868 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 870 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float nextafter(float a, float b)
# 871 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 872 "/usr/local/cuda/bin/../include/math_functions.h"
return nextafterf(a, b);
# 873 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 875 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float remainder(float a, float b)
# 876 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 877 "/usr/local/cuda/bin/../include/math_functions.h"
return remainderf(a, b);
# 878 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 880 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float remquo(float a, float b, int *quo)
# 881 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 882 "/usr/local/cuda/bin/../include/math_functions.h"
return remquof(a, b, quo);
# 883 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 885 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float round(float a)
# 886 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 887 "/usr/local/cuda/bin/../include/math_functions.h"
return roundf(a);
# 888 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 890 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long lround(float a)
# 891 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 892 "/usr/local/cuda/bin/../include/math_functions.h"
return lroundf(a);
# 893 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 895 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long llround(float a)
# 896 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 897 "/usr/local/cuda/bin/../include/math_functions.h"
return llroundf(a);
# 898 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 900 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float trunc(float a)
# 901 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 902 "/usr/local/cuda/bin/../include/math_functions.h"
return truncf(a);
# 903 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 905 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float rint(float a)
# 906 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 907 "/usr/local/cuda/bin/../include/math_functions.h"
return rintf(a);
# 908 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 910 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long lrint(float a)
# 911 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 912 "/usr/local/cuda/bin/../include/math_functions.h"
return lrintf(a);
# 913 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 915 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long llrint(float a)
# 916 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 917 "/usr/local/cuda/bin/../include/math_functions.h"
return llrintf(a);
# 918 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 920 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float nearbyint(float a)
# 921 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 922 "/usr/local/cuda/bin/../include/math_functions.h"
return nearbyintf(a);
# 923 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 925 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fdim(float a, float b)
# 926 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 927 "/usr/local/cuda/bin/../include/math_functions.h"
return fdimf(a, b);
# 928 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 930 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fma(float a, float b, float c)
# 931 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 932 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaf(a, b, c);
# 933 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 935 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fmax(float a, float b)
# 936 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 937 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaxf(a, b);
# 938 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 940 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float fmin(float a, float b)
# 941 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 942 "/usr/local/cuda/bin/../include/math_functions.h"
return fminf(a, b);
# 943 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 945 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(unsigned a, unsigned b)
# 946 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 947 "/usr/local/cuda/bin/../include/math_functions.h"
return umin(a, b);
# 948 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 950 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(int a, unsigned b)
# 951 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 952 "/usr/local/cuda/bin/../include/math_functions.h"
return umin((unsigned)a, b);
# 953 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 955 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned min(unsigned a, int b)
# 956 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 957 "/usr/local/cuda/bin/../include/math_functions.h"
return umin(a, (unsigned)b);
# 958 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 960 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long min(long long a, long long b)
# 961 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 962 "/usr/local/cuda/bin/../include/math_functions.h"
return llmin(a, b);
# 963 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 965 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(unsigned long long a, unsigned long long b)
# 966 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 967 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmin(a, b);
# 968 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 970 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(long long a, unsigned long long b)
# 971 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 972 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmin((unsigned long long)a, b);
# 973 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 975 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long min(unsigned long long a, long long b)
# 976 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 977 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmin(a, (unsigned long long)b);
# 978 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 980 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float min(float a, float b)
# 981 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 982 "/usr/local/cuda/bin/../include/math_functions.h"
return fminf(a, b);
# 983 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 985 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(double a, double b)
# 986 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 987 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin(a, b);
# 988 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 990 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(float a, double b)
# 991 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 992 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin((double)a, b);
# 993 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 995 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double min(double a, float b)
# 996 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 997 "/usr/local/cuda/bin/../include/math_functions.h"
return fmin(a, (double)b);
# 998 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 1000 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(unsigned a, unsigned b)
# 1001 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 1002 "/usr/local/cuda/bin/../include/math_functions.h"
return umax(a, b);
# 1003 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 1005 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(int a, unsigned b)
# 1006 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 1007 "/usr/local/cuda/bin/../include/math_functions.h"
return umax((unsigned)a, b);
# 1008 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 1010 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned max(unsigned a, int b)
# 1011 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 1012 "/usr/local/cuda/bin/../include/math_functions.h"
return umax(a, (unsigned)b);
# 1013 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 1015 "/usr/local/cuda/bin/../include/math_functions.h"
static inline long long max(long long a, long long b)
# 1016 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 1017 "/usr/local/cuda/bin/../include/math_functions.h"
return llmax(a, b);
# 1018 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 1020 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(unsigned long long a, unsigned long long b)
# 1021 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 1022 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmax(a, b);
# 1023 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 1025 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(long long a, unsigned long long b)
# 1026 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 1027 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmax((unsigned long long)a, b);
# 1028 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 1030 "/usr/local/cuda/bin/../include/math_functions.h"
static inline unsigned long long max(unsigned long long a, long long b)
# 1031 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 1032 "/usr/local/cuda/bin/../include/math_functions.h"
return ullmax(a, (unsigned long long)b);
# 1033 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 1035 "/usr/local/cuda/bin/../include/math_functions.h"
static inline float max(float a, float b)
# 1036 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 1037 "/usr/local/cuda/bin/../include/math_functions.h"
return fmaxf(a, b);
# 1038 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 1040 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(double a, double b)
# 1041 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 1042 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax(a, b);
# 1043 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 1045 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(float a, double b)
# 1046 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 1047 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax((double)a, b);
# 1048 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 1050 "/usr/local/cuda/bin/../include/math_functions.h"
static inline double max(double a, float b)
# 1051 "/usr/local/cuda/bin/../include/math_functions.h"
{
# 1052 "/usr/local/cuda/bin/../include/math_functions.h"
return fmax(a, (double)b);
# 1053 "/usr/local/cuda/bin/../include/math_functions.h"
}
# 74 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
template< class T, int dim = 1>
# 75 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
struct surface : public surfaceReference {
# 77 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
surface()
# 78 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
{
# 79 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 80 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
}
# 82 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
surface(cudaChannelFormatDesc desc)
# 83 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
{
# 84 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = desc;
# 85 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
}
# 86 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
};
# 89 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
template< int dim>
# 90 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
struct surface< void, dim> : public surfaceReference {
# 92 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
surface()
# 93 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
{
# 94 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< void> ();
# 95 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
}
# 96 "/usr/local/cuda/bin/../include/cuda_surface_types.h"
};
# 74 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
template< class T, int texType = 1, cudaTextureReadMode mode = cudaReadModeElementType>
# 75 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
struct texture : public textureReference {
# 77 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
texture(int norm = 0, cudaTextureFilterMode
# 78 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
fMode = cudaFilterModePoint, cudaTextureAddressMode
# 79 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
aMode = cudaAddressModeClamp)
# 80 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
{
# 81 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(normalized) = norm;
# 82 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(filterMode) = fMode;
# 83 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 84 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 85 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 86 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 87 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(sRGB) = 0;
# 88 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
}
# 90 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
texture(int norm, cudaTextureFilterMode
# 91 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
fMode, cudaTextureAddressMode
# 92 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
aMode, cudaChannelFormatDesc
# 93 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
desc)
# 94 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
{
# 95 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(normalized) = norm;
# 96 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(filterMode) = fMode;
# 97 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 98 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 99 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 100 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(channelDesc) = desc;
# 101 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
(sRGB) = 0;
# 102 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
}
# 103 "/usr/local/cuda/bin/../include/cuda_texture_types.h"
};
# 338 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int mulhi(int a, int b)
# 339 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 341 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 343 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b)
# 344 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 346 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 348 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b)
# 349 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 351 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 353 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b)
# 354 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 356 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 358 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline long long mul64hi(long long a, long long b)
# 359 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 361 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 363 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b)
# 364 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 366 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 368 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b)
# 369 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 371 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 373 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b)
# 374 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 376 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 378 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int float_as_int(float a)
# 379 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;(void)a;
# 381 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 383 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float int_as_float(int a)
# 384 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;(void)a;
# 386 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 388 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float saturate(float a)
# 389 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;(void)a;
# 391 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 393 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int mul24(int a, int b)
# 394 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 396 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 398 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b)
# 399 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 401 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 403 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void trap()
# 404 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 406 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 409 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void brkpt(int c = 0)
# 410 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;(void)c;
# 412 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 414 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void syncthreads()
# 415 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;
# 417 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 419 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void prof_trigger(int e)
# 420 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;(void)e;
# 437 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 439 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline void threadfence(bool global = true)
# 440 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;(void)global;
# 442 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 444 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode = cudaRoundZero)
# 445 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 450 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 452 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode = cudaRoundZero)
# 453 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 458 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 460 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode = cudaRoundNearest)
# 461 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 466 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 468 "/usr/local/cuda/bin/../include/device_functions.h"
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 469 "/usr/local/cuda/bin/../include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 474 "/usr/local/cuda/bin/../include/device_functions.h"
exit(___);}
# 116 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd(int *address, int val)
# 117 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 119 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 121 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val)
# 122 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 124 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 126 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub(int *address, int val)
# 127 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 129 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 131 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val)
# 132 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 134 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 136 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch(int *address, int val)
# 137 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 139 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 141 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val)
# 142 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 144 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 146 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch(float *address, float val)
# 147 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 149 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 151 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin(int *address, int val)
# 152 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 154 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 156 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val)
# 157 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 159 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 161 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax(int *address, int val)
# 162 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 164 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 166 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val)
# 167 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 169 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 171 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val)
# 172 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 174 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 176 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val)
# 177 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 179 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 181 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd(int *address, int val)
# 182 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 184 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 186 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val)
# 187 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 189 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 191 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr(int *address, int val)
# 192 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 194 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 196 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val)
# 197 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 199 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 201 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor(int *address, int val)
# 202 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 204 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 206 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val)
# 207 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 209 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 211 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val)
# 212 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)compare;(void)val;
# 214 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 216 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val)
# 217 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)compare;(void)val;
# 219 "/usr/local/cuda/bin/../include/sm_11_atomic_functions.h"
exit(___);}
# 89 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val)
# 90 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 92 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 94 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val)
# 95 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 97 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 99 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val)
# 100 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)compare;(void)val;
# 102 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 104 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool any(bool cond)
# 105 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;(void)cond;
# 107 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 109 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool all(bool cond)
# 110 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
{int volatile ___ = 1;(void)cond;
# 112 "/usr/local/cuda/bin/../include/sm_12_atomic_functions.h"
exit(___);}
# 184 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode)
# 185 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)b;(void)c;(void)mode;
# 190 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 192 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 193 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 198 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 200 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 201 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 206 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 208 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero)
# 209 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 214 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 216 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero)
# 217 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 222 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 224 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero)
# 225 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 230 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 232 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero)
# 233 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 238 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 240 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest)
# 241 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 246 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 248 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest)
# 249 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 254 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 256 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest)
# 257 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 259 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 261 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 262 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 264 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 266 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest)
# 267 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 269 "/usr/local/cuda/bin/../include/sm_13_double_functions.h"
exit(___);}
# 80 "/usr/local/cuda/bin/../include/sm_20_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd(float *address, float val)
# 81 "/usr/local/cuda/bin/../include/sm_20_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 83 "/usr/local/cuda/bin/../include/sm_20_atomic_functions.h"
exit(___);}
# 138 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned ballot(bool pred)
# 139 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;(void)pred;
# 141 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 143 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline int syncthreads_count(bool pred)
# 144 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;(void)pred;
# 146 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 148 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_and(bool pred)
# 149 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;(void)pred;
# 151 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 153 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_or(bool pred)
# 154 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
{int volatile ___ = 1;(void)pred;
# 156 "/usr/local/cuda/bin/../include/sm_20_intrinsics.h"
exit(___);}
# 111 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 112 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 113 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)s;(void)mode;
# 120 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 122 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 123 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 124 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 130 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 132 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 133 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 134 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)mode;
# 136 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 139 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 140 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 142 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 145 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 146 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 148 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 151 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 152 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 154 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 157 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 158 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 160 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 163 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 164 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 166 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 169 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 170 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 174 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 177 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 178 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 180 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 183 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 184 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 188 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 191 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 192 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 194 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 197 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 198 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 200 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 203 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 204 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 206 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 209 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 210 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 212 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 215 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 216 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 218 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 221 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 222 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 226 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 229 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 230 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 232 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 235 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 236 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 240 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 243 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 244 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 246 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 249 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 250 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 252 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 255 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 256 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 258 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 261 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 262 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 264 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 267 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 268 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 270 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 273 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 274 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 278 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 281 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 282 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 284 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 287 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 288 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 292 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 295 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 296 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 298 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 301 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 302 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 304 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 307 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 308 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 310 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 313 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 314 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 316 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 319 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 320 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 322 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 325 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 326 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 330 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 333 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 334 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 336 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 399 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 400 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 402 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 405 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 406 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 408 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 411 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 412 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 416 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 419 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 420 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 424 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 471 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 472 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 473 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)s;(void)mode;
# 480 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 482 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 483 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 484 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 490 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 492 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 493 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 494 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)mode;
# 496 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 499 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 500 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 502 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 505 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 506 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 508 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 511 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 512 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 514 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 517 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 518 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 520 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 523 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 524 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 526 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 529 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 530 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 534 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 537 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 538 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 540 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 543 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 544 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 548 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 551 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 552 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 554 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 557 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 558 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 560 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 563 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 564 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 566 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 569 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 570 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 572 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 575 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 576 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 578 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 581 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 582 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 586 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 589 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 590 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 592 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 595 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 596 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 600 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 603 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 604 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 606 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 609 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 610 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 612 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 615 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 616 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 618 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 621 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 622 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 624 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 627 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 628 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 630 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 633 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 634 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 638 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 641 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 642 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 644 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 647 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 648 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 652 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 655 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 656 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 658 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 661 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 662 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 664 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 667 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 668 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 670 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 673 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 674 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 676 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 679 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 680 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 682 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 685 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 686 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 690 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 693 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 694 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 696 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 759 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 760 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 762 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 765 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 766 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 768 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 771 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 772 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 776 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 779 "/usr/local/cuda/bin/../include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 780 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 784 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 831 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 832 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 833 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)s;(void)mode;
# 851 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 853 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 854 "/usr/local/cuda/bin/../include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 855 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 857 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 860 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 861 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 863 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 865 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(signed char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 866 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 868 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 870 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 871 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 873 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 875 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 876 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 878 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 880 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 881 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 883 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 885 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 886 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 888 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 890 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 891 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 893 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 895 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 896 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 898 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 900 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 901 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 903 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 905 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 906 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 908 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 910 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 911 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 913 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 915 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 916 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 918 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 920 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 921 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 923 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 925 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 926 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 928 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 930 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 931 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 933 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 935 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 936 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 938 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 940 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 941 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 943 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 945 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 946 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 948 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 950 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 951 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 953 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 955 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 956 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 958 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 960 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 961 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 963 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 965 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 966 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 968 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 970 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 971 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 973 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 975 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 976 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 978 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 980 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 981 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 983 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 985 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 986 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 988 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 990 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 991 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 993 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 995 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 996 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 998 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1000 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1001 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 1003 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1005 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1006 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 1008 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1010 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1011 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 1013 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1059 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1060 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 1062 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1064 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1065 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 1067 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1069 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1070 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 1072 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1074 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1075 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 1077 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1124 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1125 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1126 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)s;(void)mode;
# 1144 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1146 "/usr/local/cuda/bin/../include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1147 "/usr/local/cuda/bin/../include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1148 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1150 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1153 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1154 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1156 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1158 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(signed char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1159 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1161 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1163 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1164 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1166 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1168 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1169 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1171 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1173 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1174 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1176 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1178 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1179 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1181 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1183 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1184 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1186 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1188 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1189 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1191 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1193 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1194 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1196 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1198 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1199 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1201 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1203 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1204 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1206 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1208 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1209 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1211 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1213 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1214 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1216 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1218 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1219 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1221 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1223 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1224 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1226 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1228 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1229 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1231 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1233 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1234 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1236 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1238 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1239 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1241 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1243 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1244 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1246 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1248 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1249 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1251 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1253 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1254 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1256 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1258 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1259 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1261 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1263 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1264 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1266 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1268 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1269 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1271 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1273 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1274 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1276 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1278 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1279 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1281 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1283 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1284 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1286 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1288 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1289 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1291 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1293 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1294 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1296 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1298 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1299 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1301 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1303 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1304 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1306 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1352 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1353 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1355 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1357 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1358 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1360 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1362 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1363 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1365 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 1367 "/usr/local/cuda/bin/../include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1368 "/usr/local/cuda/bin/../include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1370 "/usr/local/cuda/bin/../include/surface_functions.h"
exit(___);}
# 75 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetchi(texture< T, 1, readMode> , int4 );
# 77 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetchi(texture< T, 1, readMode> , int4 );
# 79 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetchi(texture< T, 1, readMode> , int4 );
# 82 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int texType, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetch(texture< T, texType, readMode> , float4 , int = texType);
# 84 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int texType, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetch(texture< T, texType, readMode> , float4 , int = texType);
# 86 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int texType, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetch(texture< T, texType, readMode> , float4 , int = texType);
# 89 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int texType, cudaTextureReadMode readMode> __attribute__((unused)) extern uint4 __utexfetchl(texture< T, texType, readMode> , float4 , int , int = (texType & 15));
# 91 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int texType, cudaTextureReadMode readMode> __attribute__((unused)) extern int4 __itexfetchl(texture< T, texType, readMode> , float4 , int , int = (texType & 15));
# 93 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
template< class T, int texType, cudaTextureReadMode readMode> __attribute__((unused)) extern float4 __ftexfetchl(texture< T, texType, readMode> , float4 , int , int = (texType & 15));
# 101 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1Dfetch(texture< char, 1, cudaReadModeElementType> t, int x)
# 102 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 110 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 112 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1Dfetch(texture< signed char, 1, cudaReadModeElementType> t, int x)
# 113 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 117 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 119 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1Dfetch(texture< unsigned char, 1, cudaReadModeElementType> t, int x)
# 120 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 124 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 126 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1Dfetch(texture< char1, 1, cudaReadModeElementType> t, int x)
# 127 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 131 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 133 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1Dfetch(texture< uchar1, 1, cudaReadModeElementType> t, int x)
# 134 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 138 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 140 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1Dfetch(texture< char2, 1, cudaReadModeElementType> t, int x)
# 141 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 145 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 147 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1Dfetch(texture< uchar2, 1, cudaReadModeElementType> t, int x)
# 148 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 152 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 154 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1Dfetch(texture< char4, 1, cudaReadModeElementType> t, int x)
# 155 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 159 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 161 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1Dfetch(texture< uchar4, 1, cudaReadModeElementType> t, int x)
# 162 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 166 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 174 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1Dfetch(texture< short, 1, cudaReadModeElementType> t, int x)
# 175 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 179 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 181 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1Dfetch(texture< unsigned short, 1, cudaReadModeElementType> t, int x)
# 182 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 186 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 188 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1Dfetch(texture< short1, 1, cudaReadModeElementType> t, int x)
# 189 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 193 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 195 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1Dfetch(texture< ushort1, 1, cudaReadModeElementType> t, int x)
# 196 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 200 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 202 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1Dfetch(texture< short2, 1, cudaReadModeElementType> t, int x)
# 203 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 207 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 209 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1Dfetch(texture< ushort2, 1, cudaReadModeElementType> t, int x)
# 210 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 214 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 216 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1Dfetch(texture< short4, 1, cudaReadModeElementType> t, int x)
# 217 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 221 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 223 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1Dfetch(texture< ushort4, 1, cudaReadModeElementType> t, int x)
# 224 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 228 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 236 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1Dfetch(texture< int, 1, cudaReadModeElementType> t, int x)
# 237 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 241 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 243 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1Dfetch(texture< unsigned, 1, cudaReadModeElementType> t, int x)
# 244 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 248 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 250 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1Dfetch(texture< int1, 1, cudaReadModeElementType> t, int x)
# 251 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 255 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 257 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1Dfetch(texture< uint1, 1, cudaReadModeElementType> t, int x)
# 258 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 262 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 264 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1Dfetch(texture< int2, 1, cudaReadModeElementType> t, int x)
# 265 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 269 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 271 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1Dfetch(texture< uint2, 1, cudaReadModeElementType> t, int x)
# 272 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 276 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 278 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1Dfetch(texture< int4, 1, cudaReadModeElementType> t, int x)
# 279 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 283 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 285 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1Dfetch(texture< uint4, 1, cudaReadModeElementType> t, int x)
# 286 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 290 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 364 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< float, 1, cudaReadModeElementType> t, int x)
# 365 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 369 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 371 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< float1, 1, cudaReadModeElementType> t, int x)
# 372 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 376 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 378 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< float2, 1, cudaReadModeElementType> t, int x)
# 379 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 383 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 385 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< float4, 1, cudaReadModeElementType> t, int x)
# 386 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 390 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 398 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< char, 1, cudaReadModeNormalizedFloat> t, int x)
# 399 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 408 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 410 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< signed char, 1, cudaReadModeNormalizedFloat> t, int x)
# 411 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 416 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 418 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, int x)
# 419 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 424 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 426 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< char1, 1, cudaReadModeNormalizedFloat> t, int x)
# 427 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 432 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 434 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, int x)
# 435 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 440 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 442 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< char2, 1, cudaReadModeNormalizedFloat> t, int x)
# 443 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 448 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 450 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, int x)
# 451 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 456 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 458 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< char4, 1, cudaReadModeNormalizedFloat> t, int x)
# 459 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 464 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 466 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, int x)
# 467 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 472 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 480 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< short, 1, cudaReadModeNormalizedFloat> t, int x)
# 481 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 486 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 488 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, int x)
# 489 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 494 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 496 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< short1, 1, cudaReadModeNormalizedFloat> t, int x)
# 497 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 502 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 504 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, int x)
# 505 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 510 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 512 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< short2, 1, cudaReadModeNormalizedFloat> t, int x)
# 513 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 518 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 520 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, int x)
# 521 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 526 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 528 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< short4, 1, cudaReadModeNormalizedFloat> t, int x)
# 529 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 534 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 536 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, int x)
# 537 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 542 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 550 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1D(texture< char, 1, cudaReadModeElementType> t, float x)
# 551 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 559 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 561 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1D(texture< signed char, 1, cudaReadModeElementType> t, float x)
# 562 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 566 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 568 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1D(texture< unsigned char, 1, cudaReadModeElementType> t, float x)
# 569 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 573 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 575 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1D(texture< char1, 1, cudaReadModeElementType> t, float x)
# 576 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 580 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 582 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1D(texture< uchar1, 1, cudaReadModeElementType> t, float x)
# 583 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 587 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 589 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1D(texture< char2, 1, cudaReadModeElementType> t, float x)
# 590 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 594 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 596 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1D(texture< uchar2, 1, cudaReadModeElementType> t, float x)
# 597 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 601 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 603 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1D(texture< char4, 1, cudaReadModeElementType> t, float x)
# 604 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 608 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 610 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1D(texture< uchar4, 1, cudaReadModeElementType> t, float x)
# 611 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 615 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 623 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1D(texture< short, 1, cudaReadModeElementType> t, float x)
# 624 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 628 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 630 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1D(texture< unsigned short, 1, cudaReadModeElementType> t, float x)
# 631 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 635 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 637 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1D(texture< short1, 1, cudaReadModeElementType> t, float x)
# 638 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 642 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 644 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1D(texture< ushort1, 1, cudaReadModeElementType> t, float x)
# 645 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 649 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 651 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1D(texture< short2, 1, cudaReadModeElementType> t, float x)
# 652 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 656 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 658 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1D(texture< ushort2, 1, cudaReadModeElementType> t, float x)
# 659 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 663 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 665 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1D(texture< short4, 1, cudaReadModeElementType> t, float x)
# 666 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 670 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 672 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1D(texture< ushort4, 1, cudaReadModeElementType> t, float x)
# 673 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 677 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 685 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1D(texture< int, 1, cudaReadModeElementType> t, float x)
# 686 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 690 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 692 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1D(texture< unsigned, 1, cudaReadModeElementType> t, float x)
# 693 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 697 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 699 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1D(texture< int1, 1, cudaReadModeElementType> t, float x)
# 700 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 704 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 706 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1D(texture< uint1, 1, cudaReadModeElementType> t, float x)
# 707 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 711 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 713 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1D(texture< int2, 1, cudaReadModeElementType> t, float x)
# 714 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 718 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 720 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1D(texture< uint2, 1, cudaReadModeElementType> t, float x)
# 721 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 725 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 727 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1D(texture< int4, 1, cudaReadModeElementType> t, float x)
# 728 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 732 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 734 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1D(texture< uint4, 1, cudaReadModeElementType> t, float x)
# 735 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 739 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 819 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< float, 1, cudaReadModeElementType> t, float x)
# 820 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 824 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 826 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< float1, 1, cudaReadModeElementType> t, float x)
# 827 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 831 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 833 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< float2, 1, cudaReadModeElementType> t, float x)
# 834 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 838 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 840 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< float4, 1, cudaReadModeElementType> t, float x)
# 841 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 845 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 853 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< char, 1, cudaReadModeNormalizedFloat> t, float x)
# 854 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 863 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 865 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< signed char, 1, cudaReadModeNormalizedFloat> t, float x)
# 866 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 871 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 873 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, float x)
# 874 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 879 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 881 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< char1, 1, cudaReadModeNormalizedFloat> t, float x)
# 882 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 887 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 889 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, float x)
# 890 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 895 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 897 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< char2, 1, cudaReadModeNormalizedFloat> t, float x)
# 898 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 903 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 905 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, float x)
# 906 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 911 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 913 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< char4, 1, cudaReadModeNormalizedFloat> t, float x)
# 914 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 919 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 921 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, float x)
# 922 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 927 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 935 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< short, 1, cudaReadModeNormalizedFloat> t, float x)
# 936 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 941 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 943 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, float x)
# 944 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 949 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 951 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< short1, 1, cudaReadModeNormalizedFloat> t, float x)
# 952 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 957 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 959 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, float x)
# 960 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 965 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 967 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< short2, 1, cudaReadModeNormalizedFloat> t, float x)
# 968 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 973 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 975 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, float x)
# 976 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 981 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 983 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< short4, 1, cudaReadModeNormalizedFloat> t, float x)
# 984 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 989 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 991 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, float x)
# 992 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 997 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1005 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex2D(texture< char, 2, cudaReadModeElementType> t, float x, float y)
# 1006 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1014 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1016 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex2D(texture< signed char, 2, cudaReadModeElementType> t, float x, float y)
# 1017 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1021 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1023 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex2D(texture< unsigned char, 2, cudaReadModeElementType> t, float x, float y)
# 1024 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1028 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1030 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex2D(texture< char1, 2, cudaReadModeElementType> t, float x, float y)
# 1031 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1035 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1037 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex2D(texture< uchar1, 2, cudaReadModeElementType> t, float x, float y)
# 1038 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1042 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1044 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex2D(texture< char2, 2, cudaReadModeElementType> t, float x, float y)
# 1045 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1049 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1051 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex2D(texture< uchar2, 2, cudaReadModeElementType> t, float x, float y)
# 1052 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1056 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1058 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2D(texture< char4, 2, cudaReadModeElementType> t, float x, float y)
# 1059 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1063 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1065 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2D(texture< uchar4, 2, cudaReadModeElementType> t, float x, float y)
# 1066 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1070 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1078 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex2D(texture< short, 2, cudaReadModeElementType> t, float x, float y)
# 1079 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1083 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1085 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex2D(texture< unsigned short, 2, cudaReadModeElementType> t, float x, float y)
# 1086 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1090 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1092 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex2D(texture< short1, 2, cudaReadModeElementType> t, float x, float y)
# 1093 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1097 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1099 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex2D(texture< ushort1, 2, cudaReadModeElementType> t, float x, float y)
# 1100 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1104 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1106 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex2D(texture< short2, 2, cudaReadModeElementType> t, float x, float y)
# 1107 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1111 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1113 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex2D(texture< ushort2, 2, cudaReadModeElementType> t, float x, float y)
# 1114 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1118 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1120 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2D(texture< short4, 2, cudaReadModeElementType> t, float x, float y)
# 1121 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1125 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1127 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2D(texture< ushort4, 2, cudaReadModeElementType> t, float x, float y)
# 1128 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1132 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1140 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex2D(texture< int, 2, cudaReadModeElementType> t, float x, float y)
# 1141 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1145 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1147 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex2D(texture< unsigned, 2, cudaReadModeElementType> t, float x, float y)
# 1148 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1152 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1154 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex2D(texture< int1, 2, cudaReadModeElementType> t, float x, float y)
# 1155 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1159 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1161 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex2D(texture< uint1, 2, cudaReadModeElementType> t, float x, float y)
# 1162 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1166 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1168 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex2D(texture< int2, 2, cudaReadModeElementType> t, float x, float y)
# 1169 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1173 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1175 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex2D(texture< uint2, 2, cudaReadModeElementType> t, float x, float y)
# 1176 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1180 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1182 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2D(texture< int4, 2, cudaReadModeElementType> t, float x, float y)
# 1183 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1187 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1189 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2D(texture< uint4, 2, cudaReadModeElementType> t, float x, float y)
# 1190 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1194 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1268 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< float, 2, cudaReadModeElementType> t, float x, float y)
# 1269 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1273 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1275 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< float1, 2, cudaReadModeElementType> t, float x, float y)
# 1276 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1280 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1282 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< float2, 2, cudaReadModeElementType> t, float x, float y)
# 1283 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1287 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1289 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< float4, 2, cudaReadModeElementType> t, float x, float y)
# 1290 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1294 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1302 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1303 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1312 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1314 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< signed char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1315 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1320 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1322 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1323 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1328 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1330 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< char1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1331 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1336 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1338 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< uchar1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1339 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1344 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1346 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< char2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1347 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1352 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1354 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< uchar2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1355 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1360 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1362 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< char4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1363 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1368 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1370 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< uchar4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1371 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1376 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1384 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1385 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1390 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1392 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1393 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1398 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1400 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< short1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1401 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1406 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1408 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< ushort1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1409 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1414 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1416 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< short2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1417 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1422 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1424 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< ushort2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1425 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1430 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1432 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< short4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1433 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1438 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1440 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< ushort4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1441 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1446 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1454 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1DLayered(texture< char, 241, cudaReadModeElementType> t, float x, int layer)
# 1455 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1463 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1465 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1DLayered(texture< signed char, 241, cudaReadModeElementType> t, float x, int layer)
# 1466 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1470 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1472 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1DLayered(texture< unsigned char, 241, cudaReadModeElementType> t, float x, int layer)
# 1473 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1477 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1479 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1DLayered(texture< char1, 241, cudaReadModeElementType> t, float x, int layer)
# 1480 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1484 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1486 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1DLayered(texture< uchar1, 241, cudaReadModeElementType> t, float x, int layer)
# 1487 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1491 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1493 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1DLayered(texture< char2, 241, cudaReadModeElementType> t, float x, int layer)
# 1494 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1498 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1500 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1DLayered(texture< uchar2, 241, cudaReadModeElementType> t, float x, int layer)
# 1501 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1505 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1507 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1DLayered(texture< char4, 241, cudaReadModeElementType> t, float x, int layer)
# 1508 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1512 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1514 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1DLayered(texture< uchar4, 241, cudaReadModeElementType> t, float x, int layer)
# 1515 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1519 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1527 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1DLayered(texture< short, 241, cudaReadModeElementType> t, float x, int layer)
# 1528 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1532 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1534 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1DLayered(texture< unsigned short, 241, cudaReadModeElementType> t, float x, int layer)
# 1535 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1539 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1541 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1DLayered(texture< short1, 241, cudaReadModeElementType> t, float x, int layer)
# 1542 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1546 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1548 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1DLayered(texture< ushort1, 241, cudaReadModeElementType> t, float x, int layer)
# 1549 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1553 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1555 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1DLayered(texture< short2, 241, cudaReadModeElementType> t, float x, int layer)
# 1556 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1560 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1562 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1DLayered(texture< ushort2, 241, cudaReadModeElementType> t, float x, int layer)
# 1563 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1567 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1569 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1DLayered(texture< short4, 241, cudaReadModeElementType> t, float x, int layer)
# 1570 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1574 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1576 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1DLayered(texture< ushort4, 241, cudaReadModeElementType> t, float x, int layer)
# 1577 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1581 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1589 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1DLayered(texture< int, 241, cudaReadModeElementType> t, float x, int layer)
# 1590 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1594 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1596 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1DLayered(texture< unsigned, 241, cudaReadModeElementType> t, float x, int layer)
# 1597 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1601 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1603 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1DLayered(texture< int1, 241, cudaReadModeElementType> t, float x, int layer)
# 1604 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1608 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1610 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1DLayered(texture< uint1, 241, cudaReadModeElementType> t, float x, int layer)
# 1611 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1615 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1617 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1DLayered(texture< int2, 241, cudaReadModeElementType> t, float x, int layer)
# 1618 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1622 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1624 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1DLayered(texture< uint2, 241, cudaReadModeElementType> t, float x, int layer)
# 1625 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1629 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1631 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1DLayered(texture< int4, 241, cudaReadModeElementType> t, float x, int layer)
# 1632 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1636 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1638 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1DLayered(texture< uint4, 241, cudaReadModeElementType> t, float x, int layer)
# 1639 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1643 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1717 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< float, 241, cudaReadModeElementType> t, float x, int layer)
# 1718 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1722 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1724 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< float1, 241, cudaReadModeElementType> t, float x, int layer)
# 1725 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1729 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1731 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< float2, 241, cudaReadModeElementType> t, float x, int layer)
# 1732 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1736 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1738 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< float4, 241, cudaReadModeElementType> t, float x, int layer)
# 1739 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1743 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1751 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< char, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1752 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1761 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1763 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< signed char, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1764 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1769 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1771 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< unsigned char, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1772 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1777 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1779 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< char1, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1780 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1785 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1787 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< uchar1, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1788 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1793 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1795 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< char2, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1796 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1801 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1803 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< uchar2, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1804 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1809 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1811 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< char4, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1812 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1817 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1819 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< uchar4, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1820 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1825 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1833 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< short, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1834 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1839 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1841 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< unsigned short, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1842 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1847 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1849 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< short1, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1850 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1855 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1857 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< ushort1, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1858 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1863 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1865 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< short2, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1866 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1871 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1873 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< ushort2, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1874 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1879 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1881 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< short4, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1882 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1887 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1889 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< ushort4, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1890 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1895 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1903 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex2DLayered(texture< char, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1904 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1912 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1914 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex2DLayered(texture< signed char, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1915 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1919 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1921 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex2DLayered(texture< unsigned char, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1922 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1926 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1928 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex2DLayered(texture< char1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1929 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1933 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1935 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex2DLayered(texture< uchar1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1936 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1940 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1942 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex2DLayered(texture< char2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1943 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1947 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1949 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex2DLayered(texture< uchar2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1950 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1954 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1956 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2DLayered(texture< char4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1957 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1961 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1963 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2DLayered(texture< uchar4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1964 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1968 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1976 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex2DLayered(texture< short, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1977 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1981 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1983 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex2DLayered(texture< unsigned short, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1984 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1988 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1990 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex2DLayered(texture< short1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1991 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1995 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 1997 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex2DLayered(texture< ushort1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1998 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2002 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2004 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex2DLayered(texture< short2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2005 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2009 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2011 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex2DLayered(texture< ushort2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2012 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2016 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2018 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2DLayered(texture< short4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2019 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2023 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2025 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2DLayered(texture< ushort4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2026 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2030 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2038 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex2DLayered(texture< int, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2039 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2043 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2045 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex2DLayered(texture< unsigned, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2046 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2050 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2052 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex2DLayered(texture< int1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2053 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2057 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2059 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex2DLayered(texture< uint1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2060 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2064 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2066 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex2DLayered(texture< int2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2067 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2071 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2073 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex2DLayered(texture< uint2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2074 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2078 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2080 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2DLayered(texture< int4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2081 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2085 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2087 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2DLayered(texture< uint4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2088 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2092 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2166 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< float, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2167 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2171 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2173 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< float1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2174 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2178 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2180 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< float2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2181 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2185 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2187 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< float4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2188 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2192 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2200 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< char, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2201 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2210 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2212 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< signed char, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2213 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2218 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2220 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< unsigned char, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2221 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2226 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2228 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< char1, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2229 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2234 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2236 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< uchar1, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2237 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2242 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2244 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< char2, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2245 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2250 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2252 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< uchar2, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2253 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2258 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2260 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< char4, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2261 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2266 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2268 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< uchar4, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2269 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2274 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2282 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< short, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2283 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2288 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2290 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< unsigned short, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2291 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2296 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2298 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< short1, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2299 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2304 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2306 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< ushort1, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2307 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2312 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2314 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< short2, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2315 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2320 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2322 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< ushort2, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2323 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2328 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2330 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< short4, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2331 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2336 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2338 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< ushort4, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2339 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2344 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2352 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex3D(texture< char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2353 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2361 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2363 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex3D(texture< signed char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2364 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2368 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2370 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex3D(texture< unsigned char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2371 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2375 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2377 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex3D(texture< char1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2378 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2382 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2384 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex3D(texture< uchar1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2385 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2389 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2391 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex3D(texture< char2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2392 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2396 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2398 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex3D(texture< uchar2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2399 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2403 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2405 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex3D(texture< char4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2406 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2410 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2412 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex3D(texture< uchar4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2413 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2417 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2425 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex3D(texture< short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2426 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2430 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2432 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex3D(texture< unsigned short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2433 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2437 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2439 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex3D(texture< short1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2440 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2444 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2446 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex3D(texture< ushort1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2447 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2451 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2453 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex3D(texture< short2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2454 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2458 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2460 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex3D(texture< ushort2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2461 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2465 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2467 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex3D(texture< short4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2468 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2472 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2474 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex3D(texture< ushort4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2475 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2479 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2487 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex3D(texture< int, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2488 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2492 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2494 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex3D(texture< unsigned, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2495 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2499 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2501 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex3D(texture< int1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2502 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2506 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2508 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex3D(texture< uint1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2509 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2513 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2515 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex3D(texture< int2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2516 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2520 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2522 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex3D(texture< uint2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2523 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2527 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2529 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex3D(texture< int4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2530 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2534 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2536 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex3D(texture< uint4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2537 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2541 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2615 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< float, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2616 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2620 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2622 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< float1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2623 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2627 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2629 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< float2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2630 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2634 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2636 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< float4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2637 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2641 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2649 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2650 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2659 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2661 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< signed char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2662 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2667 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2669 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2670 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2675 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2677 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< char1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2678 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2683 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2685 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< uchar1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2686 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2691 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2693 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< char2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2694 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2699 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2701 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< uchar2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2702 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2707 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2709 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< char4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2710 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2715 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2717 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< uchar4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2718 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2723 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2731 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2732 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2737 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2739 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2740 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2745 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2747 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< short1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2748 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2753 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2755 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< ushort1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2756 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2761 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2763 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< short2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2764 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2769 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2771 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< ushort2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2772 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2777 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2779 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< short4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2780 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2785 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 2787 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< ushort4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2788 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2793 "/usr/local/cuda/bin/../include/texture_fetch_functions.h"
exit(___);}
# 67 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const uint3 threadIdx; }
# 69 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const uint3 blockIdx; }
# 71 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const dim3 blockDim; }
# 73 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const dim3 gridDim; }
# 75 "/usr/local/cuda/bin/../include/device_launch_parameters.h"
extern "C" { extern const int warpSize; }
# 120 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 121 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaSetupArgument(T
# 122 "/usr/local/cuda/bin/../include/cuda_runtime.h"
arg, size_t
# 123 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset)
# 125 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 126 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset);
# 127 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 159 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 160 "/usr/local/cuda/bin/../include/cuda_runtime.h"
event, unsigned
# 161 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 163 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 164 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaEventCreateWithFlags(event, flags);
# 165 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 222 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMallocHost(void **
# 223 "/usr/local/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 224 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 225 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 227 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 228 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaHostAlloc(ptr, size, flags);
# 229 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 231 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 232 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaHostAlloc(T **
# 233 "/usr/local/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 234 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 235 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 237 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 238 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaHostAlloc((void **)((void *)ptr), size, flags);
# 239 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 241 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 242 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaHostGetDevicePointer(T **
# 243 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pDevice, void *
# 244 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pHost, unsigned
# 245 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags)
# 247 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 248 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags);
# 249 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 251 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 252 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMalloc(T **
# 253 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 254 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size)
# 256 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 257 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMalloc((void **)((void *)devPtr), size);
# 258 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 260 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 261 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMallocHost(T **
# 262 "/usr/local/cuda/bin/../include/cuda_runtime.h"
ptr, size_t
# 263 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, unsigned
# 264 "/usr/local/cuda/bin/../include/cuda_runtime.h"
flags = (0))
# 266 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 267 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMallocHost((void **)((void *)ptr), size, flags);
# 268 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 270 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 271 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMallocPitch(T **
# 272 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t *
# 273 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pitch, size_t
# 274 "/usr/local/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 275 "/usr/local/cuda/bin/../include/cuda_runtime.h"
height)
# 277 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 278 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMallocPitch((void **)((void *)devPtr), pitch, width, height);
# 279 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 289 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbol(char *
# 290 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 291 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 292 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 293 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 294 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 296 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 297 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind);
# 298 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 300 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 301 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyToSymbol(const T &
# 302 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 303 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 304 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 305 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 306 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 308 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 309 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind);
# 310 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 312 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbolAsync(char *
# 313 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 314 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 315 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 316 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 317 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 318 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 320 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 321 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream);
# 322 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 324 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 325 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyToSymbolAsync(const T &
# 326 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, const void *
# 327 "/usr/local/cuda/bin/../include/cuda_runtime.h"
src, size_t
# 328 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 329 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 330 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 331 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 333 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 334 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream);
# 335 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 343 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbol(void *
# 344 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, char *
# 345 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 346 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 347 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 348 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 350 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 351 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind);
# 352 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 354 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 355 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyFromSymbol(void *
# 356 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, const T &
# 357 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 358 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 359 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 360 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 362 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 363 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind);
# 364 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 366 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
# 367 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, char *
# 368 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 369 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 370 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 371 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 372 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 374 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 375 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream);
# 376 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 378 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 379 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaMemcpyFromSymbolAsync(void *
# 380 "/usr/local/cuda/bin/../include/cuda_runtime.h"
dst, const T &
# 381 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol, size_t
# 382 "/usr/local/cuda/bin/../include/cuda_runtime.h"
count, size_t
# 383 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 384 "/usr/local/cuda/bin/../include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 385 "/usr/local/cuda/bin/../include/cuda_runtime.h"
stream = 0)
# 387 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 388 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream);
# 389 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 391 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolAddress(void **
# 392 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, char *
# 393 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 395 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 396 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)symbol);
# 397 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 424 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 425 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetSymbolAddress(void **
# 426 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const T &
# 427 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 429 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 430 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol));
# 431 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 439 "/usr/local/cuda/bin/../include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolSize(size_t *
# 440 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, char *
# 441 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 443 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 444 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)symbol);
# 445 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 472 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 473 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetSymbolSize(size_t *
# 474 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size, const T &
# 475 "/usr/local/cuda/bin/../include/cuda_runtime.h"
symbol)
# 477 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 478 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)(&symbol));
# 479 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 521 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 522 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 523 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 524 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 525 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 526 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc, size_t
# 527 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 529 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 530 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture(offset, &tex, devPtr, &desc, size);
# 531 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 566 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 567 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture(size_t *
# 568 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 569 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 570 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 571 "/usr/local/cuda/bin/../include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 573 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 574 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size);
# 575 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 622 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 623 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 624 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 625 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 626 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 627 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc, size_t
# 628 "/usr/local/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 629 "/usr/local/cuda/bin/../include/cuda_runtime.h"
height, size_t
# 630 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pitch)
# 632 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 633 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch);
# 634 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 680 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 681 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 682 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 683 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const void *
# 684 "/usr/local/cuda/bin/../include/cuda_runtime.h"
devPtr, size_t
# 685 "/usr/local/cuda/bin/../include/cuda_runtime.h"
width, size_t
# 686 "/usr/local/cuda/bin/../include/cuda_runtime.h"
height, size_t
# 687 "/usr/local/cuda/bin/../include/cuda_runtime.h"
pitch)
# 689 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 690 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &(tex.texture< T, dim, readMode> ::channelDesc), width, height, pitch);
# 691 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 722 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 723 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 724 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const cudaArray *
# 725 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 726 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc)
# 728 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 729 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindTextureToArray(&tex, array, &desc);
# 730 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 760 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 761 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 762 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex, const cudaArray *
# 763 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array)
# 765 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 766 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 767 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 769 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err;
# 770 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 799 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 800 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaUnbindTexture(const texture< T, dim, readMode> &
# 801 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex)
# 803 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 804 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaUnbindTexture(&tex);
# 805 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 839 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 840 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaGetTextureAlignmentOffset(size_t *
# 841 "/usr/local/cuda/bin/../include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 842 "/usr/local/cuda/bin/../include/cuda_runtime.h"
tex)
# 844 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 845 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaGetTextureAlignmentOffset(offset, &tex);
# 846 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 900 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 901 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaFuncSetCacheConfig(T *
# 902 "/usr/local/cuda/bin/../include/cuda_runtime.h"
func, cudaFuncCache
# 903 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cacheConfig)
# 905 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 906 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaFuncSetCacheConfig((const char *)func, cacheConfig);
# 907 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 944 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 945 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaLaunch(T *
# 946 "/usr/local/cuda/bin/../include/cuda_runtime.h"
entry)
# 948 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 949 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaLaunch((const char *)entry);
# 950 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 984 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T> inline cudaError_t
# 985 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaFuncGetAttributes(cudaFuncAttributes *
# 986 "/usr/local/cuda/bin/../include/cuda_runtime.h"
attr, T *
# 987 "/usr/local/cuda/bin/../include/cuda_runtime.h"
entry)
# 989 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 990 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaFuncGetAttributes(attr, (const char *)entry);
# 991 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 1013 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1014 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1015 "/usr/local/cuda/bin/../include/cuda_runtime.h"
surf, const cudaArray *
# 1016 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 1017 "/usr/local/cuda/bin/../include/cuda_runtime.h"
desc)
# 1019 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 1020 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return cudaBindSurfaceToArray(&surf, array, &desc);
# 1021 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 1042 "/usr/local/cuda/bin/../include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1043 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1044 "/usr/local/cuda/bin/../include/cuda_runtime.h"
surf, const cudaArray *
# 1045 "/usr/local/cuda/bin/../include/cuda_runtime.h"
array)
# 1047 "/usr/local/cuda/bin/../include/cuda_runtime.h"
{
# 1048 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 1049 "/usr/local/cuda/bin/../include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 1051 "/usr/local/cuda/bin/../include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err;
# 1052 "/usr/local/cuda/bin/../include/cuda_runtime.h"
}
# 44 "/usr/include/stdio.h" 3
struct _IO_FILE;
# 48 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE FILE; }
# 64 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE __FILE; }
# 94 "/usr/include/wchar.h" 3
extern "C" { typedef
# 83 "/usr/include/wchar.h" 3
struct {
# 84 "/usr/include/wchar.h" 3
int __count;
# 86 "/usr/include/wchar.h" 3
union {
# 88 "/usr/include/wchar.h" 3
unsigned __wch;
# 92 "/usr/include/wchar.h" 3
char __wchb[4];
# 93 "/usr/include/wchar.h" 3
} __value;
# 94 "/usr/include/wchar.h" 3
} __mbstate_t; }
# 25 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 22 "/usr/include/_G_config.h" 3
struct {
# 23 "/usr/include/_G_config.h" 3
__off_t __pos;
# 24 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 25 "/usr/include/_G_config.h" 3
} _G_fpos_t; }
# 30 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 27 "/usr/include/_G_config.h" 3
struct {
# 28 "/usr/include/_G_config.h" 3
__off64_t __pos;
# 29 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 30 "/usr/include/_G_config.h" 3
} _G_fpos64_t; }
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.4.7/include/stdarg.h" 3
extern "C" { typedef __builtin_va_list __gnuc_va_list; }
# 144 "/usr/include/libio.h" 3
struct _IO_jump_t; struct _IO_FILE;
# 150 "/usr/include/libio.h" 3
extern "C" { typedef void _IO_lock_t; }
# 156 "/usr/include/libio.h" 3
extern "C" { struct _IO_marker {
# 157 "/usr/include/libio.h" 3
_IO_marker *_next;
# 158 "/usr/include/libio.h" 3
_IO_FILE *_sbuf;
# 162 "/usr/include/libio.h" 3
int _pos;
# 173 "/usr/include/libio.h" 3
}; }
# 176 "/usr/include/libio.h" 3
enum __codecvt_result {
# 178 "/usr/include/libio.h" 3
__codecvt_ok,
# 179 "/usr/include/libio.h" 3
__codecvt_partial,
# 180 "/usr/include/libio.h" 3
__codecvt_error,
# 181 "/usr/include/libio.h" 3
__codecvt_noconv
# 182 "/usr/include/libio.h" 3
};
# 241 "/usr/include/libio.h" 3
extern "C" { struct _IO_FILE {
# 242 "/usr/include/libio.h" 3
int _flags;
# 247 "/usr/include/libio.h" 3
char *_IO_read_ptr;
# 248 "/usr/include/libio.h" 3
char *_IO_read_end;
# 249 "/usr/include/libio.h" 3
char *_IO_read_base;
# 250 "/usr/include/libio.h" 3
char *_IO_write_base;
# 251 "/usr/include/libio.h" 3
char *_IO_write_ptr;
# 252 "/usr/include/libio.h" 3
char *_IO_write_end;
# 253 "/usr/include/libio.h" 3
char *_IO_buf_base;
# 254 "/usr/include/libio.h" 3
char *_IO_buf_end;
# 256 "/usr/include/libio.h" 3
char *_IO_save_base;
# 257 "/usr/include/libio.h" 3
char *_IO_backup_base;
# 258 "/usr/include/libio.h" 3
char *_IO_save_end;
# 260 "/usr/include/libio.h" 3
_IO_marker *_markers;
# 262 "/usr/include/libio.h" 3
_IO_FILE *_chain;
# 264 "/usr/include/libio.h" 3
int _fileno;
# 268 "/usr/include/libio.h" 3
int _flags2;
# 270 "/usr/include/libio.h" 3
__off_t _old_offset;
# 274 "/usr/include/libio.h" 3
unsigned short _cur_column;
# 275 "/usr/include/libio.h" 3
signed char _vtable_offset;
# 276 "/usr/include/libio.h" 3
char _shortbuf[1];
# 280 "/usr/include/libio.h" 3
_IO_lock_t *_lock;
# 289 "/usr/include/libio.h" 3
__off64_t _offset;
# 297 "/usr/include/libio.h" 3
void *__pad1;
# 298 "/usr/include/libio.h" 3
void *__pad2;
# 299 "/usr/include/libio.h" 3
void *__pad3;
# 300 "/usr/include/libio.h" 3
void *__pad4;
# 302 "/usr/include/libio.h" 3
size_t __pad5;
# 303 "/usr/include/libio.h" 3
int _mode;
# 305 "/usr/include/libio.h" 3
char _unused2[(((15) * sizeof(int)) - ((4) * sizeof(void *))) - sizeof(size_t)];
# 307 "/usr/include/libio.h" 3
}; }
# 313 "/usr/include/libio.h" 3
struct _IO_FILE_plus;
# 315 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdin_; }
# 316 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdout_; }
# 317 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stderr_; }
# 333 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_read_fn(void * , char * , size_t ); }
# 341 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_write_fn(void * , const char * , size_t ); }
# 350 "/usr/include/libio.h" 3
extern "C" { typedef int __io_seek_fn(void * , __off64_t * , int ); }
# 353 "/usr/include/libio.h" 3
extern "C" { typedef int __io_close_fn(void * ); }
# 358 "/usr/include/libio.h" 3
extern "C" { typedef __io_read_fn cookie_read_function_t; }
# 359 "/usr/include/libio.h" 3
extern "C" { typedef __io_write_fn cookie_write_function_t; }
# 360 "/usr/include/libio.h" 3
extern "C" { typedef __io_seek_fn cookie_seek_function_t; }
# 361 "/usr/include/libio.h" 3
extern "C" { typedef __io_close_fn cookie_close_function_t; }
# 370 "/usr/include/libio.h" 3
extern "C" { typedef
# 365 "/usr/include/libio.h" 3
struct {
# 366 "/usr/include/libio.h" 3
__io_read_fn *read;
# 367 "/usr/include/libio.h" 3
__io_write_fn *write;
# 368 "/usr/include/libio.h" 3
__io_seek_fn *seek;
# 369 "/usr/include/libio.h" 3
__io_close_fn *close;
# 370 "/usr/include/libio.h" 3
} _IO_cookie_io_functions_t; }
# 371 "/usr/include/libio.h" 3
extern "C" { typedef _IO_cookie_io_functions_t cookie_io_functions_t; }
# 373 "/usr/include/libio.h" 3
struct _IO_cookie_file;
# 376 "/usr/include/libio.h" 3
extern "C" void _IO_cookie_init(_IO_cookie_file * , int , void * , _IO_cookie_io_functions_t );
# 385 "/usr/include/libio.h" 3
extern "C" int __underflow(_IO_FILE *);
# 386 "/usr/include/libio.h" 3
extern "C" int __uflow(_IO_FILE *);
# 387 "/usr/include/libio.h" 3
extern "C" int __overflow(_IO_FILE *, int);
# 429 "/usr/include/libio.h" 3
extern "C" int _IO_getc(_IO_FILE * );
# 430 "/usr/include/libio.h" 3
extern "C" int _IO_putc(int , _IO_FILE * );
# 431 "/usr/include/libio.h" 3
extern "C" int _IO_feof(_IO_FILE * ) throw();
# 432 "/usr/include/libio.h" 3
extern "C" int _IO_ferror(_IO_FILE * ) throw();
# 434 "/usr/include/libio.h" 3
extern "C" int _IO_peekc_locked(_IO_FILE * );
# 440 "/usr/include/libio.h" 3
extern "C" void _IO_flockfile(_IO_FILE *) throw();
# 441 "/usr/include/libio.h" 3
extern "C" void _IO_funlockfile(_IO_FILE *) throw();
# 442 "/usr/include/libio.h" 3
extern "C" int _IO_ftrylockfile(_IO_FILE *) throw();
# 459 "/usr/include/libio.h" 3
extern "C" int _IO_vfscanf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list, int *__restrict__);
# 461 "/usr/include/libio.h" 3
extern "C" int _IO_vfprintf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 463 "/usr/include/libio.h" 3
extern "C" __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
# 464 "/usr/include/libio.h" 3
extern "C" size_t _IO_sgetn(_IO_FILE *, void *, size_t);
# 466 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
# 467 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);
# 469 "/usr/include/libio.h" 3
extern "C" void _IO_free_backup_area(_IO_FILE *) throw();
# 79 "/usr/include/stdio.h" 3
extern "C" { typedef __gnuc_va_list va_list; }
# 110 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos_t fpos_t; }
# 116 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos64_t fpos64_t; }
# 168 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdin; }
# 169 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdout; }
# 170 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stderr; }
# 178 "/usr/include/stdio.h" 3
extern "C" int remove(const char * ) throw();
# 180 "/usr/include/stdio.h" 3
extern "C" int rename(const char * , const char * ) throw();
# 185 "/usr/include/stdio.h" 3
extern "C" int renameat(int , const char * , int , const char * ) throw();
# 195 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile();
# 205 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile64();
# 209 "/usr/include/stdio.h" 3
extern "C" char *tmpnam(char * ) throw();
# 215 "/usr/include/stdio.h" 3
extern "C" char *tmpnam_r(char * ) throw();
# 227 "/usr/include/stdio.h" 3
extern "C" char *tempnam(const char * , const char * ) throw()
# 228 "/usr/include/stdio.h" 3
 __attribute((__malloc__));
# 237 "/usr/include/stdio.h" 3
extern "C" int fclose(FILE * );
# 242 "/usr/include/stdio.h" 3
extern "C" int fflush(FILE * );
# 252 "/usr/include/stdio.h" 3
extern "C" int fflush_unlocked(FILE * );
# 262 "/usr/include/stdio.h" 3
extern "C" int fcloseall();
# 272 "/usr/include/stdio.h" 3
extern "C" FILE *fopen(const char *__restrict__ , const char *__restrict__ );
# 278 "/usr/include/stdio.h" 3
extern "C" FILE *freopen(const char *__restrict__ , const char *__restrict__ , FILE *__restrict__ );
# 297 "/usr/include/stdio.h" 3
extern "C" FILE *fopen64(const char *__restrict__ , const char *__restrict__ );
# 299 "/usr/include/stdio.h" 3
extern "C" FILE *freopen64(const char *__restrict__ , const char *__restrict__ , FILE *__restrict__ );
# 306 "/usr/include/stdio.h" 3
extern "C" FILE *fdopen(int , const char * ) throw();
# 312 "/usr/include/stdio.h" 3
extern "C" FILE *fopencookie(void *__restrict__ , const char *__restrict__ , _IO_cookie_io_functions_t ) throw();
# 319 "/usr/include/stdio.h" 3
extern "C" FILE *fmemopen(void * , size_t , const char * ) throw();
# 325 "/usr/include/stdio.h" 3
extern "C" FILE *open_memstream(char ** , size_t * ) throw();
# 332 "/usr/include/stdio.h" 3
extern "C" void setbuf(FILE *__restrict__ , char *__restrict__ ) throw();
# 336 "/usr/include/stdio.h" 3
extern "C" int setvbuf(FILE *__restrict__ , char *__restrict__ , int , size_t ) throw();
# 343 "/usr/include/stdio.h" 3
extern "C" void setbuffer(FILE *__restrict__ , char *__restrict__ , size_t ) throw();
# 347 "/usr/include/stdio.h" 3
extern "C" void setlinebuf(FILE * ) throw();
# 356 "/usr/include/stdio.h" 3
extern "C" int fprintf(FILE *__restrict__ , const char *__restrict__ , ...);
# 362 "/usr/include/stdio.h" 3
extern "C" int printf(const char *__restrict__ , ...);
# 364 "/usr/include/stdio.h" 3
extern "C" int sprintf(char *__restrict__ , const char *__restrict__ , ...) throw();
# 371 "/usr/include/stdio.h" 3
extern "C" int vfprintf(FILE *__restrict__ , const char *__restrict__ , __gnuc_va_list );
# 377 "/usr/include/stdio.h" 3
extern "C" int vprintf(const char *__restrict__ , __gnuc_va_list );
# 379 "/usr/include/stdio.h" 3
extern "C" int vsprintf(char *__restrict__ , const char *__restrict__ , __gnuc_va_list ) throw();
# 386 "/usr/include/stdio.h" 3
extern "C" int snprintf(char *__restrict__ , size_t , const char *__restrict__ , ...) throw()
# 388 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 3, 4)));
# 390 "/usr/include/stdio.h" 3
extern "C" int vsnprintf(char *__restrict__ , size_t , const char *__restrict__ , __gnuc_va_list ) throw()
# 392 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 3, 0)));
# 399 "/usr/include/stdio.h" 3
extern "C" int vasprintf(char **__restrict__ , const char *__restrict__ , __gnuc_va_list ) throw()
# 401 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 2, 0)));
# 402 "/usr/include/stdio.h" 3
extern "C" int __asprintf(char **__restrict__ , const char *__restrict__ , ...) throw()
# 404 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 2, 3)));
# 405 "/usr/include/stdio.h" 3
extern "C" int asprintf(char **__restrict__ , const char *__restrict__ , ...) throw()
# 407 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 2, 3)));
# 412 "/usr/include/stdio.h" 3
extern "C" int vdprintf(int , const char *__restrict__ , __gnuc_va_list )
# 414 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 2, 0)));
# 415 "/usr/include/stdio.h" 3
extern "C" int dprintf(int , const char *__restrict__ , ...)
# 416 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 2, 3)));
# 425 "/usr/include/stdio.h" 3
extern "C" int fscanf(FILE *__restrict__ , const char *__restrict__ , ...);
# 431 "/usr/include/stdio.h" 3
extern "C" int scanf(const char *__restrict__ , ...);
# 433 "/usr/include/stdio.h" 3
extern "C" int sscanf(const char *__restrict__ , const char *__restrict__ , ...) throw();
# 471 "/usr/include/stdio.h" 3
extern "C" int vfscanf(FILE *__restrict__ , const char *__restrict__ , __gnuc_va_list )
# 473 "/usr/include/stdio.h" 3
 __attribute((__format__(__scanf__, 2, 0)));
# 479 "/usr/include/stdio.h" 3
extern "C" int vscanf(const char *__restrict__ , __gnuc_va_list )
# 480 "/usr/include/stdio.h" 3
 __attribute((__format__(__scanf__, 1, 0)));
# 483 "/usr/include/stdio.h" 3
extern "C" int vsscanf(const char *__restrict__ , const char *__restrict__ , __gnuc_va_list ) throw()
# 485 "/usr/include/stdio.h" 3
 __attribute((__format__(__scanf__, 2, 0)));
# 531 "/usr/include/stdio.h" 3
extern "C" int fgetc(FILE * );
# 532 "/usr/include/stdio.h" 3
extern "C" int getc(FILE * );
# 538 "/usr/include/stdio.h" 3
extern "C" int getchar();
# 550 "/usr/include/stdio.h" 3
extern "C" int getc_unlocked(FILE * );
# 551 "/usr/include/stdio.h" 3
extern "C" int getchar_unlocked();
# 561 "/usr/include/stdio.h" 3
extern "C" int fgetc_unlocked(FILE * );
# 573 "/usr/include/stdio.h" 3
extern "C" int fputc(int , FILE * );
# 574 "/usr/include/stdio.h" 3
extern "C" int putc(int , FILE * );
# 580 "/usr/include/stdio.h" 3
extern "C" int putchar(int );
# 594 "/usr/include/stdio.h" 3
extern "C" int fputc_unlocked(int , FILE * );
# 602 "/usr/include/stdio.h" 3
extern "C" int putc_unlocked(int , FILE * );
# 603 "/usr/include/stdio.h" 3
extern "C" int putchar_unlocked(int );
# 610 "/usr/include/stdio.h" 3
extern "C" int getw(FILE * );
# 613 "/usr/include/stdio.h" 3
extern "C" int putw(int , FILE * );
# 622 "/usr/include/stdio.h" 3
extern "C" char *fgets(char *__restrict__ , int , FILE *__restrict__ );
# 638 "/usr/include/stdio.h" 3
extern "C" char *gets(char * ) __attribute((__deprecated__));
# 649 "/usr/include/stdio.h" 3
extern "C" char *fgets_unlocked(char *__restrict__ , int , FILE *__restrict__ );
# 665 "/usr/include/stdio.h" 3
extern "C" __ssize_t __getdelim(char **__restrict__ , size_t *__restrict__ , int , FILE *__restrict__ );
# 668 "/usr/include/stdio.h" 3
extern "C" __ssize_t getdelim(char **__restrict__ , size_t *__restrict__ , int , FILE *__restrict__ );
# 678 "/usr/include/stdio.h" 3
extern "C" __ssize_t getline(char **__restrict__ , size_t *__restrict__ , FILE *__restrict__ );
# 689 "/usr/include/stdio.h" 3
extern "C" int fputs(const char *__restrict__ , FILE *__restrict__ );
# 695 "/usr/include/stdio.h" 3
extern "C" int puts(const char * );
# 702 "/usr/include/stdio.h" 3
extern "C" int ungetc(int , FILE * );
# 709 "/usr/include/stdio.h" 3
extern "C" size_t fread(void *__restrict__ , size_t , size_t , FILE *__restrict__ );
# 715 "/usr/include/stdio.h" 3
extern "C" size_t fwrite(const void *__restrict__ , size_t , size_t , FILE *__restrict__ );
# 726 "/usr/include/stdio.h" 3
extern "C" int fputs_unlocked(const char *__restrict__ , FILE *__restrict__ );
# 737 "/usr/include/stdio.h" 3
extern "C" size_t fread_unlocked(void *__restrict__ , size_t , size_t , FILE *__restrict__ );
# 739 "/usr/include/stdio.h" 3
extern "C" size_t fwrite_unlocked(const void *__restrict__ , size_t , size_t , FILE *__restrict__ );
# 749 "/usr/include/stdio.h" 3
extern "C" int fseek(FILE * , long , int );
# 754 "/usr/include/stdio.h" 3
extern "C" long ftell(FILE * );
# 759 "/usr/include/stdio.h" 3
extern "C" void rewind(FILE * );
# 773 "/usr/include/stdio.h" 3
extern "C" int fseeko(FILE * , __off_t , int );
# 778 "/usr/include/stdio.h" 3
extern "C" __off_t ftello(FILE * );
# 798 "/usr/include/stdio.h" 3
extern "C" int fgetpos(FILE *__restrict__ , fpos_t *__restrict__ );
# 803 "/usr/include/stdio.h" 3
extern "C" int fsetpos(FILE * , const fpos_t * );
# 818 "/usr/include/stdio.h" 3
extern "C" int fseeko64(FILE * , __off64_t , int );
# 819 "/usr/include/stdio.h" 3
extern "C" __off64_t ftello64(FILE * );
# 820 "/usr/include/stdio.h" 3
extern "C" int fgetpos64(FILE *__restrict__ , fpos64_t *__restrict__ );
# 821 "/usr/include/stdio.h" 3
extern "C" int fsetpos64(FILE * , const fpos64_t * );
# 826 "/usr/include/stdio.h" 3
extern "C" void clearerr(FILE * ) throw();
# 828 "/usr/include/stdio.h" 3
extern "C" int feof(FILE * ) throw();
# 830 "/usr/include/stdio.h" 3
extern "C" int ferror(FILE * ) throw();
# 835 "/usr/include/stdio.h" 3
extern "C" void clearerr_unlocked(FILE * ) throw();
# 836 "/usr/include/stdio.h" 3
extern "C" int feof_unlocked(FILE * ) throw();
# 837 "/usr/include/stdio.h" 3
extern "C" int ferror_unlocked(FILE * ) throw();
# 846 "/usr/include/stdio.h" 3
extern "C" void perror(const char * );
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3
extern "C" { extern int sys_nerr; }
# 27 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3
extern "C" { extern const char *const sys_errlist[]; }
# 30 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3
extern "C" { extern int _sys_nerr; }
# 31 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3
extern "C" { extern const char *const _sys_errlist[]; }
# 858 "/usr/include/stdio.h" 3
extern "C" int fileno(FILE * ) throw();
# 863 "/usr/include/stdio.h" 3
extern "C" int fileno_unlocked(FILE * ) throw();
# 872 "/usr/include/stdio.h" 3
extern "C" FILE *popen(const char * , const char * );
# 878 "/usr/include/stdio.h" 3
extern "C" int pclose(FILE * );
# 884 "/usr/include/stdio.h" 3
extern "C" char *ctermid(char * ) throw();
# 890 "/usr/include/stdio.h" 3
extern "C" char *cuserid(char * );
# 895 "/usr/include/stdio.h" 3
struct obstack;
# 898 "/usr/include/stdio.h" 3
extern "C" int obstack_printf(obstack *__restrict__ , const char *__restrict__ , ...) throw()
# 900 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 2, 3)));
# 901 "/usr/include/stdio.h" 3
extern "C" int obstack_vprintf(obstack *__restrict__ , const char *__restrict__ , __gnuc_va_list ) throw()
# 904 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 2, 0)));
# 912 "/usr/include/stdio.h" 3
extern "C" void flockfile(FILE * ) throw();
# 916 "/usr/include/stdio.h" 3
extern "C" int ftrylockfile(FILE * ) throw();
# 919 "/usr/include/stdio.h" 3
extern "C" void funlockfile(FILE * ) throw();
# 55 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
extern "C" { struct timezone {
# 57 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
int tz_minuteswest;
# 58 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
int tz_dsttime;
# 59 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
}; }
# 61 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
extern "C" { typedef struct timezone *__restrict__ __timezone_ptr_t; }
# 71 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
extern "C" int gettimeofday(timeval *__restrict__ , __timezone_ptr_t ) throw()
# 72 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
 __attribute((__nonnull__(1)));
# 77 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
extern "C" int settimeofday(const timeval * , const struct timezone * ) throw();
# 85 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
extern "C" int adjtime(const timeval * , timeval * ) throw();
# 91 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
enum __itimer_which {
# 94 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
ITIMER_REAL,
# 97 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
ITIMER_VIRTUAL,
# 101 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
ITIMER_PROF
# 103 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
};
# 107 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
extern "C" { struct itimerval {
# 110 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
timeval it_interval;
# 112 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
timeval it_value;
# 113 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
}; }
# 120 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
extern "C" { typedef int __itimer_which_t; }
# 125 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
extern "C" int getitimer(__itimer_which_t , itimerval * ) throw();
# 131 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
extern "C" int setitimer(__itimer_which_t , const itimerval *__restrict__ , itimerval *__restrict__ ) throw();
# 138 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
extern "C" int utimes(const char * , const timeval [2]) throw()
# 139 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
 __attribute((__nonnull__(1)));
# 143 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
extern "C" int lutimes(const char * , const timeval [2]) throw()
# 144 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
 __attribute((__nonnull__(1)));
# 147 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
extern "C" int futimes(int , const timeval [2]) throw();
# 154 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
extern "C" int futimesat(int , const char * , const timeval [2]) throw();
# 39 "/usr/include/c++/4.4/bits/functexcept.h" 3
namespace std __attribute((__visibility__("default")))
# 66 "/usr/include/c++/4.4/bits/move.h" 3
 __attribute((__visibility__("default")))
# 63 "/usr/include/c++/4.4/bits/stl_pair.h" 3
 __attribute((__visibility__("default")))
# 68 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
 __attribute((__visibility__("default")))
# 66 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
 __attribute((__visibility__("default")))
# 68 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
 __attribute((__visibility__("default")))
# 74 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 936 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 50 "/usr/include/c++/4.4/bits/allocator.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_construct.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
 __attribute((__visibility__("default")))
# 65 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 454 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute((__visibility__("default"))) {
# 43 "/usr/include/c++/4.4/bits/functexcept.h" 3
void __throw_bad_exception() __attribute((__noreturn__));
# 47 "/usr/include/c++/4.4/bits/functexcept.h" 3
void __throw_bad_alloc() __attribute((__noreturn__));
# 51 "/usr/include/c++/4.4/bits/functexcept.h" 3
void __throw_bad_cast() __attribute((__noreturn__));
# 54 "/usr/include/c++/4.4/bits/functexcept.h" 3
void __throw_bad_typeid() __attribute((__noreturn__));
# 58 "/usr/include/c++/4.4/bits/functexcept.h" 3
void __throw_logic_error(const char *) __attribute((__noreturn__));
# 61 "/usr/include/c++/4.4/bits/functexcept.h" 3
void __throw_domain_error(const char *) __attribute((__noreturn__));
# 64 "/usr/include/c++/4.4/bits/functexcept.h" 3
void __throw_invalid_argument(const char *) __attribute((__noreturn__));
# 67 "/usr/include/c++/4.4/bits/functexcept.h" 3
void __throw_length_error(const char *) __attribute((__noreturn__));
# 70 "/usr/include/c++/4.4/bits/functexcept.h" 3
void __throw_out_of_range(const char *) __attribute((__noreturn__));
# 73 "/usr/include/c++/4.4/bits/functexcept.h" 3
void __throw_runtime_error(const char *) __attribute((__noreturn__));
# 76 "/usr/include/c++/4.4/bits/functexcept.h" 3
void __throw_range_error(const char *) __attribute((__noreturn__));
# 79 "/usr/include/c++/4.4/bits/functexcept.h" 3
void __throw_overflow_error(const char *) __attribute((__noreturn__));
# 82 "/usr/include/c++/4.4/bits/functexcept.h" 3
void __throw_underflow_error(const char *) __attribute((__noreturn__));
# 86 "/usr/include/c++/4.4/bits/functexcept.h" 3
void __throw_ios_failure(const char *) __attribute((__noreturn__));
# 89 "/usr/include/c++/4.4/bits/functexcept.h" 3
void __throw_system_error(int) __attribute((__noreturn__));
# 91 "/usr/include/c++/4.4/bits/functexcept.h" 3
}
# 37 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default")))
# 656 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
 __attribute((__visibility__("default")))
# 120 "/usr/include/c++/4.4/exception" 3
 __attribute((__visibility__("default")))
# 37 "/usr/include/c++/4.4/ext/new_allocator.h" 3
 __attribute((__visibility__("default"))) {
# 52 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
template< class _Value>
# 53 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
struct __numeric_traits_integer {
# 56 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
static const _Value __min = (((((_Value)(-1)) < 0) ? (((_Value)1) << ((sizeof(_Value) * (8)) - ((((_Value)(-1)) < 0)))) : ((_Value)0)));
# 57 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
static const _Value __max = (((((_Value)(-1)) < 0) ? ((((((_Value)1) << (((sizeof(_Value) * (8)) - ((((_Value)(-1)) < 0))) - (1))) - 1) << 1) + 1) : (~((_Value)0))));
# 61 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
static const bool __is_signed = (((_Value)(-1)) < 0);
# 62 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
static const int __digits = (((sizeof(_Value) * (8)) - ((((_Value)(-1)) < 0))));
# 63 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
};
# 65 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
template< class _Value> const _Value
# 66 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
__numeric_traits_integer< _Value> ::__min;
# 68 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
template< class _Value> const _Value
# 69 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
__numeric_traits_integer< _Value> ::__max;
# 71 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
template< class _Value> const bool
# 72 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
__numeric_traits_integer< _Value> ::__is_signed;
# 74 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
template< class _Value> const int
# 75 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
__numeric_traits_integer< _Value> ::__digits;
# 97 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
template< class _Value>
# 98 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
struct __numeric_traits_floating {
# 101 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
static const int __max_digits10 = (2 + ((((std::__are_same< _Value, float> ::__value) ? 24 : ((std::__are_same< _Value, double> ::__value) ? 53 : 64)) * 3010) / 10000));
# 104 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
static const bool __is_signed = true;
# 105 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
static const int __digits10 = ((std::__are_same< _Value, float> ::__value) ? 6 : ((std::__are_same< _Value, double> ::__value) ? 15 : 18));
# 106 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
static const int __max_exponent10 = ((std::__are_same< _Value, float> ::__value) ? 38 : ((std::__are_same< _Value, double> ::__value) ? 308 : 4932));
# 107 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
};
# 109 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
template< class _Value> const int
# 110 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
__numeric_traits_floating< _Value> ::__max_digits10;
# 112 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
template< class _Value> const bool
# 113 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
__numeric_traits_floating< _Value> ::__is_signed;
# 115 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
template< class _Value> const int
# 116 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
__numeric_traits_floating< _Value> ::__digits10;
# 118 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
template< class _Value> const int
# 119 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
__numeric_traits_floating< _Value> ::__max_exponent10;
# 121 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
template< class _Value>
# 122 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
struct __numeric_traits : public __conditional_type< std::__is_integer< _Value> ::__value, __numeric_traits_integer< _Value> , __numeric_traits_floating< _Value> > ::__type {
# 126 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
};
# 128 "/usr/include/c++/4.4/ext/numeric_traits.h" 3
}
# 66 "/usr/include/c++/4.4/bits/move.h" 3
namespace std __attribute((__visibility__("default")))
# 63 "/usr/include/c++/4.4/bits/stl_pair.h" 3
 __attribute((__visibility__("default")))
# 68 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
 __attribute((__visibility__("default")))
# 66 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
 __attribute((__visibility__("default")))
# 68 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
 __attribute((__visibility__("default")))
# 74 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 936 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 50 "/usr/include/c++/4.4/bits/allocator.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_construct.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
 __attribute((__visibility__("default")))
# 65 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 454 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute((__visibility__("default"))) {
# 74 "/usr/include/c++/4.4/bits/move.h" 3
template < typename _Tp >
    inline void
    swap ( _Tp & __a, _Tp & __b )
    {



      _Tp __tmp = ( __a );
      __a = ( __b );
      __b = ( __tmp );
    }
# 88 "/usr/include/c++/4.4/bits/move.h" 3
template < typename _Tp, size_t _Nm >
    inline void
    swap ( _Tp ( & __a ) [ _Nm ], _Tp ( & __b ) [ _Nm ] )
    {
      for ( size_t __n = 0; __n < _Nm; ++ __n )
 swap ( __a [ __n ], __b [ __n ] );
    }
# 96 "/usr/include/c++/4.4/bits/move.h" 3
}
# 63 "/usr/include/c++/4.4/bits/stl_pair.h" 3
namespace std __attribute((__visibility__("default")))
# 68 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
 __attribute((__visibility__("default")))
# 66 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
 __attribute((__visibility__("default")))
# 68 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
 __attribute((__visibility__("default")))
# 74 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 936 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 50 "/usr/include/c++/4.4/bits/allocator.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_construct.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
 __attribute((__visibility__("default")))
# 65 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 454 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute((__visibility__("default"))) {
# 66 "/usr/include/c++/4.4/bits/stl_pair.h" 3
template < class _T1, class _T2 >
    struct pair
    {
      typedef _T1 first_type;
      typedef _T2 second_type;

      _T1 first;
      _T2 second;





      pair ( )
      : first ( ), second ( ) { }


      pair ( const _T1 & __a, const _T2 & __b )
      : first ( __a ), second ( __b ) { }


      template < class _U1, class _U2 >
        pair ( const pair < _U1, _U2 > & __p )
 : first ( __p . first ),
   second ( __p . second ) { }

    };
# 144 "/usr/include/c++/4.4/bits/stl_pair.h" 3
template < class _T1, class _T2 >
    inline bool
    operator == ( const pair < _T1, _T2 > & __x, const pair < _T1, _T2 > & __y )
    { return __x . first == __y . first && __x . second == __y . second; }
# 150 "/usr/include/c++/4.4/bits/stl_pair.h" 3
template < class _T1, class _T2 >
    inline bool
    operator < ( const pair < _T1, _T2 > & __x, const pair < _T1, _T2 > & __y )
    { return __x . first < __y . first
      || ( ! ( __y . first < __x . first ) && __x . second < __y . second ); }
# 157 "/usr/include/c++/4.4/bits/stl_pair.h" 3
template < class _T1, class _T2 >
    inline bool
    operator != ( const pair < _T1, _T2 > & __x, const pair < _T1, _T2 > & __y )
    { return ! ( __x == __y ); }
# 163 "/usr/include/c++/4.4/bits/stl_pair.h" 3
template < class _T1, class _T2 >
    inline bool
    operator > ( const pair < _T1, _T2 > & __x, const pair < _T1, _T2 > & __y )
    { return __y < __x; }
# 169 "/usr/include/c++/4.4/bits/stl_pair.h" 3
template < class _T1, class _T2 >
    inline bool
    operator <= ( const pair < _T1, _T2 > & __x, const pair < _T1, _T2 > & __y )
    { return ! ( __y < __x ); }
# 175 "/usr/include/c++/4.4/bits/stl_pair.h" 3
template < class _T1, class _T2 >
    inline bool
    operator >= ( const pair < _T1, _T2 > & __x, const pair < _T1, _T2 > & __y )
    { return ! ( __x < __y ); }
# 213 "/usr/include/c++/4.4/bits/stl_pair.h" 3
template < class _T1, class _T2 >
    inline pair < _T1, _T2 >
    make_pair ( _T1 __x, _T2 __y )
    { return pair < _T1, _T2 > ( __x, __y ); }
# 259 "/usr/include/c++/4.4/bits/stl_pair.h" 3
}
# 68 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
namespace std __attribute((__visibility__("default")))
# 66 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
 __attribute((__visibility__("default")))
# 68 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
 __attribute((__visibility__("default")))
# 74 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 936 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 50 "/usr/include/c++/4.4/bits/allocator.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_construct.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
 __attribute((__visibility__("default")))
# 65 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 454 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute((__visibility__("default"))) {
# 79 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
struct input_iterator_tag { };
# 81 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
struct output_iterator_tag { };
# 83 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
struct forward_iterator_tag : public input_iterator_tag { };
# 86 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
struct bidirectional_iterator_tag : public forward_iterator_tag { };
# 89 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
struct random_access_iterator_tag : public bidirectional_iterator_tag { };
# 102 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
template< class _Category, class _Tp, class _Distance = ptrdiff_t, class
# 103 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
_Pointer = _Tp *, class _Reference = _Tp &>
# 104 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
struct iterator {
# 107 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
typedef _Category iterator_category;
# 109 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
typedef _Tp value_type;
# 111 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
typedef _Distance difference_type;
# 113 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
typedef _Pointer pointer;
# 115 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
typedef _Reference reference;
# 116 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
};
# 124 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
template< class _Iterator>
# 125 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
struct iterator_traits {
# 127 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
typedef typename _Iterator::iterator_category iterator_category;
# 128 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
typedef typename _Iterator::value_type value_type;
# 129 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
typedef typename _Iterator::difference_type difference_type;
# 130 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
typedef typename _Iterator::pointer pointer;
# 131 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
typedef typename _Iterator::reference reference;
# 132 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
};
# 134 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
template< class _Tp>
# 135 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
struct iterator_traits< _Tp *> {
# 137 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
typedef random_access_iterator_tag iterator_category;
# 138 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
typedef _Tp value_type;
# 139 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
typedef ptrdiff_t difference_type;
# 140 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
typedef _Tp *pointer;
# 141 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
typedef _Tp &reference;
# 142 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
};
# 144 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
template< class _Tp>
# 145 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
struct iterator_traits< const _Tp *> {
# 147 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
typedef random_access_iterator_tag iterator_category;
# 148 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
typedef _Tp value_type;
# 149 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
typedef ptrdiff_t difference_type;
# 150 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
typedef const _Tp *pointer;
# 151 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
typedef const _Tp &reference;
# 152 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
};
# 158 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
template < typename _Iter >
    inline typename iterator_traits < _Iter > :: iterator_category
    __iterator_category ( const _Iter & )
    { return typename iterator_traits < _Iter > :: iterator_category ( ); }
# 165 "/usr/include/c++/4.4/bits/stl_iterator_base_types.h" 3
}
# 66 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
namespace std __attribute((__visibility__("default")))
# 68 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
 __attribute((__visibility__("default")))
# 74 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 936 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 50 "/usr/include/c++/4.4/bits/allocator.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_construct.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
 __attribute((__visibility__("default")))
# 65 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 454 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute((__visibility__("default"))) {
# 68 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
template < typename _InputIterator >
    inline typename iterator_traits < _InputIterator > :: difference_type
    __distance ( _InputIterator __first, _InputIterator __last,
               input_iterator_tag )
    {



      typename iterator_traits < _InputIterator > :: difference_type __n = 0;
      while ( __first != __last )
 {
   ++ __first;
   ++ __n;
 }
      return __n;
    }
# 85 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
template < typename _RandomAccessIterator >
    inline typename iterator_traits < _RandomAccessIterator > :: difference_type
    __distance ( _RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag )
    {



      return __last - __first;
    }
# 108 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
template < typename _InputIterator >
    inline typename iterator_traits < _InputIterator > :: difference_type
    distance ( _InputIterator __first, _InputIterator __last )
    {

      return std :: __distance ( __first, __last,
        std :: __iterator_category ( __first ) );
    }
# 117 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
template < typename _InputIterator, typename _Distance >
    inline void
    __advance ( _InputIterator & __i, _Distance __n, input_iterator_tag )
    {


      while ( __n -- )
 ++ __i;
    }
# 127 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
template < typename _BidirectionalIterator, typename _Distance >
    inline void
    __advance ( _BidirectionalIterator & __i, _Distance __n,
       bidirectional_iterator_tag )
    {



      if ( __n > 0 )
        while ( __n -- )
   ++ __i;
      else
        while ( __n ++ )
   -- __i;
    }
# 143 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
template < typename _RandomAccessIterator, typename _Distance >
    inline void
    __advance ( _RandomAccessIterator & __i, _Distance __n,
              random_access_iterator_tag )
    {



      __i += __n;
    }
# 166 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
template < typename _InputIterator, typename _Distance >
    inline void
    advance ( _InputIterator & __i, _Distance __n )
    {

      typename iterator_traits < _InputIterator > :: difference_type __d = __n;
      std :: __advance ( __i, __d, std :: __iterator_category ( __i ) );
    }
# 195 "/usr/include/c++/4.4/bits/stl_iterator_base_funcs.h" 3
}
# 68 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
namespace std __attribute((__visibility__("default")))
# 74 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 936 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 50 "/usr/include/c++/4.4/bits/allocator.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_construct.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
 __attribute((__visibility__("default")))
# 65 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 454 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute((__visibility__("default"))) {
# 89 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Iterator >
    class reverse_iterator
    : public iterator < typename iterator_traits < _Iterator > :: iterator_category,
        typename iterator_traits < _Iterator > :: value_type,
        typename iterator_traits < _Iterator > :: difference_type,
        typename iterator_traits < _Iterator > :: pointer,
                      typename iterator_traits < _Iterator > :: reference >
    {
    protected :
      _Iterator current;

    public :
      typedef _Iterator iterator_type;
      typedef typename iterator_traits < _Iterator > :: difference_type
              difference_type;
      typedef typename iterator_traits < _Iterator > :: reference reference;
      typedef typename iterator_traits < _Iterator > :: pointer pointer;

    public :






      reverse_iterator ( ) : current ( ) { }




      explicit
      reverse_iterator ( iterator_type __x ) : current ( __x ) { }




      reverse_iterator ( const reverse_iterator & __x )
      : current ( __x . current ) { }





      template < typename _Iter >
        reverse_iterator ( const reverse_iterator < _Iter > & __x )
 : current ( __x . base ( ) ) { }




      iterator_type
      base ( ) const
      { return current; }






      reference
      operator * ( ) const
      {
 _Iterator __tmp = current;
 return * -- __tmp;
      }






      pointer
      operator -> ( ) const
      { return & ( operator * ( ) ); }






      reverse_iterator &
      operator ++ ( )
      {
 -- current;
 return * this;
      }






      reverse_iterator
      operator ++ ( int )
      {
 reverse_iterator __tmp = * this;
 -- current;
 return __tmp;
      }






      reverse_iterator &
      operator -- ( )
      {
 ++ current;
 return * this;
      }






      reverse_iterator
      operator -- ( int )
      {
 reverse_iterator __tmp = * this;
 ++ current;
 return __tmp;
      }






      reverse_iterator
      operator + ( difference_type __n ) const
      { return reverse_iterator ( current - __n ); }






      reverse_iterator &
      operator += ( difference_type __n )
      {
 current -= __n;
 return * this;
      }






      reverse_iterator
      operator - ( difference_type __n ) const
      { return reverse_iterator ( current + __n ); }






      reverse_iterator &
      operator -= ( difference_type __n )
      {
 current += __n;
 return * this;
      }






      reference
      operator [ ] ( difference_type __n ) const
      { return * ( * this + __n ); }
    };
# 276 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Iterator >
    inline bool
    operator == ( const reverse_iterator < _Iterator > & __x,
        const reverse_iterator < _Iterator > & __y )
    { return __x . base ( ) == __y . base ( ); }
# 282 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Iterator >
    inline bool
    operator < ( const reverse_iterator < _Iterator > & __x,
       const reverse_iterator < _Iterator > & __y )
    { return __y . base ( ) < __x . base ( ); }
# 288 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Iterator >
    inline bool
    operator != ( const reverse_iterator < _Iterator > & __x,
        const reverse_iterator < _Iterator > & __y )
    { return ! ( __x == __y ); }
# 294 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Iterator >
    inline bool
    operator > ( const reverse_iterator < _Iterator > & __x,
       const reverse_iterator < _Iterator > & __y )
    { return __y < __x; }
# 300 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Iterator >
    inline bool
    operator <= ( const reverse_iterator < _Iterator > & __x,
        const reverse_iterator < _Iterator > & __y )
    { return ! ( __y < __x ); }
# 306 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Iterator >
    inline bool
    operator >= ( const reverse_iterator < _Iterator > & __x,
        const reverse_iterator < _Iterator > & __y )
    { return ! ( __x < __y ); }
# 312 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Iterator >
    inline typename reverse_iterator < _Iterator > :: difference_type
    operator - ( const reverse_iterator < _Iterator > & __x,
       const reverse_iterator < _Iterator > & __y )
    { return __y . base ( ) - __x . base ( ); }
# 318 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Iterator >
    inline reverse_iterator < _Iterator >
    operator + ( typename reverse_iterator < _Iterator > :: difference_type __n,
       const reverse_iterator < _Iterator > & __x )
    { return reverse_iterator < _Iterator > ( __x . base ( ) - __n ); }
# 326 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _IteratorL, typename _IteratorR >
    inline bool
    operator == ( const reverse_iterator < _IteratorL > & __x,
        const reverse_iterator < _IteratorR > & __y )
    { return __x . base ( ) == __y . base ( ); }
# 332 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _IteratorL, typename _IteratorR >
    inline bool
    operator < ( const reverse_iterator < _IteratorL > & __x,
       const reverse_iterator < _IteratorR > & __y )
    { return __y . base ( ) < __x . base ( ); }
# 338 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _IteratorL, typename _IteratorR >
    inline bool
    operator != ( const reverse_iterator < _IteratorL > & __x,
        const reverse_iterator < _IteratorR > & __y )
    { return ! ( __x == __y ); }
# 344 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _IteratorL, typename _IteratorR >
    inline bool
    operator > ( const reverse_iterator < _IteratorL > & __x,
       const reverse_iterator < _IteratorR > & __y )
    { return __y < __x; }
# 350 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _IteratorL, typename _IteratorR >
    inline bool
    operator <= ( const reverse_iterator < _IteratorL > & __x,
        const reverse_iterator < _IteratorR > & __y )
    { return ! ( __y < __x ); }
# 356 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _IteratorL, typename _IteratorR >
    inline bool
    operator >= ( const reverse_iterator < _IteratorL > & __x,
        const reverse_iterator < _IteratorR > & __y )
    { return ! ( __x < __y ); }
# 362 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _IteratorL, typename _IteratorR >







    inline typename reverse_iterator < _IteratorL > :: difference_type
    operator - ( const reverse_iterator < _IteratorL > & __x,
       const reverse_iterator < _IteratorR > & __y )

    { return __y . base ( ) - __x . base ( ); }
# 388 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Container >
    class back_insert_iterator
    : public iterator < output_iterator_tag, void, void, void, void >
    {
    protected :
      _Container * container;

    public :

      typedef _Container container_type;


      explicit
      back_insert_iterator ( _Container & __x ) : container ( & __x ) { }
# 414 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
      back_insert_iterator &
      operator = ( typename _Container :: const_reference __value )
      {
 container -> push_back ( __value );
 return * this;
      }


      back_insert_iterator &
      operator * ( )
      { return * this; }


      back_insert_iterator &
      operator ++ ( )
      { return * this; }


      back_insert_iterator
      operator ++ ( int )
      { return * this; }
    };
# 457 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Container >
    inline back_insert_iterator < _Container >
    back_inserter ( _Container & __x )
    { return back_insert_iterator < _Container > ( __x ); }
# 472 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Container >
    class front_insert_iterator
    : public iterator < output_iterator_tag, void, void, void, void >
    {
    protected :
      _Container * container;

    public :

      typedef _Container container_type;


      explicit front_insert_iterator ( _Container & __x ) : container ( & __x ) { }
# 497 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
      front_insert_iterator &
      operator = ( typename _Container :: const_reference __value )
      {
 container -> push_front ( __value );
 return * this;
      }


      front_insert_iterator &
      operator * ( )
      { return * this; }


      front_insert_iterator &
      operator ++ ( )
      { return * this; }


      front_insert_iterator
      operator ++ ( int )
      { return * this; }
    };
# 540 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Container >
    inline front_insert_iterator < _Container >
    front_inserter ( _Container & __x )
    { return front_insert_iterator < _Container > ( __x ); }
# 559 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Container >
    class insert_iterator
    : public iterator < output_iterator_tag, void, void, void, void >
    {
    protected :
      _Container * container;
      typename _Container :: iterator iter;

    public :

      typedef _Container container_type;





      insert_iterator ( _Container & __x, typename _Container :: iterator __i )
      : container ( & __x ), iter ( __i ) { }
# 601 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
      insert_iterator &
      operator = ( typename _Container :: const_reference __value )
      {
 iter = container -> insert ( iter, __value );
 ++ iter;
 return * this;
      }


      insert_iterator &
      operator * ( )
      { return * this; }


      insert_iterator &
      operator ++ ( )
      { return * this; }


      insert_iterator &
      operator ++ ( int )
      { return * this; }
    };
# 646 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Container, typename _Iterator >
    inline insert_iterator < _Container >
    inserter ( _Container & __x, _Iterator __i )
    {
      return insert_iterator < _Container > ( __x,
      typename _Container :: iterator ( __i ) );
    }
# 654 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
}
# 656 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
namespace __gnu_cxx __attribute((__visibility__("default")))
# 120 "/usr/include/c++/4.4/exception" 3
 __attribute((__visibility__("default")))
# 37 "/usr/include/c++/4.4/ext/new_allocator.h" 3
 __attribute((__visibility__("default"))) {
# 665 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
using std::iterator_traits;
# 666 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
using std::iterator;
# 667 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Iterator, typename _Container >
    class __normal_iterator
    {
    protected :
      _Iterator _M_current;

    public :
      typedef _Iterator iterator_type;
      typedef typename iterator_traits < _Iterator > :: iterator_category
                                                             iterator_category;
      typedef typename iterator_traits < _Iterator > :: value_type value_type;
      typedef typename iterator_traits < _Iterator > :: difference_type
                                                             difference_type;
      typedef typename iterator_traits < _Iterator > :: reference reference;
      typedef typename iterator_traits < _Iterator > :: pointer pointer;

      __normal_iterator ( ) : _M_current ( _Iterator ( ) ) { }

      explicit
      __normal_iterator ( const _Iterator & __i ) : _M_current ( __i ) { }


      template < typename _Iter >
        __normal_iterator ( const __normal_iterator < _Iter,
     typename __enable_if <
              ( std :: __are_same < _Iter, typename _Container :: pointer > :: __value ),
        _Container > :: __type > & __i )
        : _M_current ( __i . base ( ) ) { }


      reference
      operator * ( ) const
      { return * _M_current; }

      pointer
      operator -> ( ) const
      { return _M_current; }

      __normal_iterator &
      operator ++ ( )
      {
 ++ _M_current;
 return * this;
      }

      __normal_iterator
      operator ++ ( int )
      { return __normal_iterator ( _M_current ++ ); }


      __normal_iterator &
      operator -- ( )
      {
 -- _M_current;
 return * this;
      }

      __normal_iterator
      operator -- ( int )
      { return __normal_iterator ( _M_current -- ); }


      reference
      operator [ ] ( const difference_type & __n ) const
      { return _M_current [ __n ]; }

      __normal_iterator &
      operator += ( const difference_type & __n )
      { _M_current += __n; return * this; }

      __normal_iterator
      operator + ( const difference_type & __n ) const
      { return __normal_iterator ( _M_current + __n ); }

      __normal_iterator &
      operator -= ( const difference_type & __n )
      { _M_current -= __n; return * this; }

      __normal_iterator
      operator - ( const difference_type & __n ) const
      { return __normal_iterator ( _M_current - __n ); }

      const _Iterator &
      base ( ) const
      { return _M_current; }
    };
# 763 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _IteratorL, typename _IteratorR, typename _Container >
    inline bool
    operator == ( const __normal_iterator < _IteratorL, _Container > & __lhs,
        const __normal_iterator < _IteratorR, _Container > & __rhs )
    { return __lhs . base ( ) == __rhs . base ( ); }
# 769 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Iterator, typename _Container >
    inline bool
    operator == ( const __normal_iterator < _Iterator, _Container > & __lhs,
        const __normal_iterator < _Iterator, _Container > & __rhs )
    { return __lhs . base ( ) == __rhs . base ( ); }
# 775 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _IteratorL, typename _IteratorR, typename _Container >
    inline bool
    operator != ( const __normal_iterator < _IteratorL, _Container > & __lhs,
        const __normal_iterator < _IteratorR, _Container > & __rhs )
    { return __lhs . base ( ) != __rhs . base ( ); }
# 781 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Iterator, typename _Container >
    inline bool
    operator != ( const __normal_iterator < _Iterator, _Container > & __lhs,
        const __normal_iterator < _Iterator, _Container > & __rhs )
    { return __lhs . base ( ) != __rhs . base ( ); }
# 788 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _IteratorL, typename _IteratorR, typename _Container >
    inline bool
    operator < ( const __normal_iterator < _IteratorL, _Container > & __lhs,
       const __normal_iterator < _IteratorR, _Container > & __rhs )
    { return __lhs . base ( ) < __rhs . base ( ); }
# 794 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Iterator, typename _Container >
    inline bool
    operator < ( const __normal_iterator < _Iterator, _Container > & __lhs,
       const __normal_iterator < _Iterator, _Container > & __rhs )
    { return __lhs . base ( ) < __rhs . base ( ); }
# 800 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _IteratorL, typename _IteratorR, typename _Container >
    inline bool
    operator > ( const __normal_iterator < _IteratorL, _Container > & __lhs,
       const __normal_iterator < _IteratorR, _Container > & __rhs )
    { return __lhs . base ( ) > __rhs . base ( ); }
# 806 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Iterator, typename _Container >
    inline bool
    operator > ( const __normal_iterator < _Iterator, _Container > & __lhs,
       const __normal_iterator < _Iterator, _Container > & __rhs )
    { return __lhs . base ( ) > __rhs . base ( ); }
# 812 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _IteratorL, typename _IteratorR, typename _Container >
    inline bool
    operator <= ( const __normal_iterator < _IteratorL, _Container > & __lhs,
        const __normal_iterator < _IteratorR, _Container > & __rhs )
    { return __lhs . base ( ) <= __rhs . base ( ); }
# 818 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Iterator, typename _Container >
    inline bool
    operator <= ( const __normal_iterator < _Iterator, _Container > & __lhs,
        const __normal_iterator < _Iterator, _Container > & __rhs )
    { return __lhs . base ( ) <= __rhs . base ( ); }
# 824 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _IteratorL, typename _IteratorR, typename _Container >
    inline bool
    operator >= ( const __normal_iterator < _IteratorL, _Container > & __lhs,
        const __normal_iterator < _IteratorR, _Container > & __rhs )
    { return __lhs . base ( ) >= __rhs . base ( ); }
# 830 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Iterator, typename _Container >
    inline bool
    operator >= ( const __normal_iterator < _Iterator, _Container > & __lhs,
        const __normal_iterator < _Iterator, _Container > & __rhs )
    { return __lhs . base ( ) >= __rhs . base ( ); }
# 840 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _IteratorL, typename _IteratorR, typename _Container >







    inline typename __normal_iterator < _IteratorL, _Container > :: difference_type
    operator - ( const __normal_iterator < _IteratorL, _Container > & __lhs,
       const __normal_iterator < _IteratorR, _Container > & __rhs )

    { return __lhs . base ( ) - __rhs . base ( ); }
# 854 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Iterator, typename _Container >
    inline typename __normal_iterator < _Iterator, _Container > :: difference_type
    operator - ( const __normal_iterator < _Iterator, _Container > & __lhs,
       const __normal_iterator < _Iterator, _Container > & __rhs )
    { return __lhs . base ( ) - __rhs . base ( ); }
# 860 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
template < typename _Iterator, typename _Container >
    inline __normal_iterator < _Iterator, _Container >
    operator + ( typename __normal_iterator < _Iterator, _Container > :: difference_type
       __n, const __normal_iterator < _Iterator, _Container > & __i )
    { return __normal_iterator < _Iterator, _Container > ( __i . base ( ) + __n ); }
# 866 "/usr/include/c++/4.4/bits/stl_iterator.h" 3
}
# 47 "/usr/include/c++/4.4/debug/debug.h" 3
namespace std {
# 49 "/usr/include/c++/4.4/debug/debug.h" 3
namespace __debug { }
# 50 "/usr/include/c++/4.4/debug/debug.h" 3
}
# 55 "/usr/include/c++/4.4/debug/debug.h" 3
namespace __gnu_debug {
# 57 "/usr/include/c++/4.4/debug/debug.h" 3
using namespace std::__debug;
# 58 "/usr/include/c++/4.4/debug/debug.h" 3
}
# 74 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
namespace std __attribute((__visibility__("default")))
# 936 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
 __attribute((__visibility__("default")))
# 50 "/usr/include/c++/4.4/bits/allocator.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_construct.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
 __attribute((__visibility__("default")))
# 65 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 454 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute((__visibility__("default"))) {
# 79 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template< bool _BoolType>
# 80 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
struct __iter_swap {
# 82 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _ForwardIterator1, typename _ForwardIterator2 >
        static void
        iter_swap ( _ForwardIterator1 __a, _ForwardIterator2 __b )
        {
          typedef typename iterator_traits < _ForwardIterator1 > :: value_type
            _ValueType1;
          _ValueType1 __tmp = ( * __a );
          * __a = ( * __b );
          * __b = ( __tmp );
 }
# 92 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
};
# 95 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template<> struct __iter_swap< true> {
# 97 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _ForwardIterator1, typename _ForwardIterator2 >
        static void
        iter_swap ( _ForwardIterator1 __a, _ForwardIterator2 __b )
        {
          swap ( * __a, * __b );
        }
# 103 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
};
# 115 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _ForwardIterator1, typename _ForwardIterator2 >
    inline void
    iter_swap ( _ForwardIterator1 __a, _ForwardIterator2 __b )
    {
      typedef typename iterator_traits < _ForwardIterator1 > :: value_type
 _ValueType1;
      typedef typename iterator_traits < _ForwardIterator2 > :: value_type
 _ValueType2;
# 134 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
      typedef typename iterator_traits < _ForwardIterator1 > :: reference
 _ReferenceType1;
      typedef typename iterator_traits < _ForwardIterator2 > :: reference
 _ReferenceType2;
      std :: __iter_swap < __are_same < _ValueType1, _ValueType2 > :: __value
 && __are_same < _ValueType1 &, _ReferenceType1 > :: __value
 && __are_same < _ValueType2 &, _ReferenceType2 > :: __value > ::
 iter_swap ( __a, __b );
    }
# 156 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _ForwardIterator1, typename _ForwardIterator2 >
    _ForwardIterator2
    swap_ranges ( _ForwardIterator1 __first1, _ForwardIterator1 __last1,
  _ForwardIterator2 __first2 )
    {





      ;

      for (; __first1 != __last1; ++ __first1, ++ __first2 )
 std :: iter_swap ( __first1, __first2 );
      return __first2;
    }
# 184 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _Tp >
    inline const _Tp &
    min ( const _Tp & __a, const _Tp & __b )
    {



      if ( __b < __a )
 return __b;
      return __a;
    }
# 207 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _Tp >
    inline const _Tp &
    max ( const _Tp & __a, const _Tp & __b )
    {



      if ( __a < __b )
 return __b;
      return __a;
    }
# 230 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _Tp, typename _Compare >
    inline const _Tp &
    min ( const _Tp & __a, const _Tp & __b, _Compare __comp )
    {

      if ( __comp ( __b, __a ) )
 return __b;
      return __a;
    }
# 251 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _Tp, typename _Compare >
    inline const _Tp &
    max ( const _Tp & __a, const _Tp & __b, _Compare __comp )
    {

      if ( __comp ( __a, __b ) )
 return __b;
      return __a;
    }
# 264 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _Iterator,
    bool _IsNormal = __is_normal_iterator < _Iterator > :: __value >
    struct __niter_base
    {
      static _Iterator
      __b ( _Iterator __it )
      { return __it; }
    };
# 273 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _Iterator >
    struct __niter_base < _Iterator, true >
    {
      static typename _Iterator :: iterator_type
      __b ( _Iterator __it )
      { return __it . base ( ); }
    };
# 282 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _Iterator,
    bool _IsMove = __is_move_iterator < _Iterator > :: __value >
    struct __miter_base
    {
      static _Iterator
      __b ( _Iterator __it )
      { return __it; }
    };
# 291 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _Iterator >
    struct __miter_base < _Iterator, true >
    {
      static typename _Iterator :: iterator_type
      __b ( _Iterator __it )
      { return __it . base ( ); }
    };
# 305 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template< bool __T3, bool __T4, class >
# 306 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
struct __copy_move {
# 308 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _II, typename _OI >
        static _OI
        __copy_m ( _II __first, _II __last, _OI __result )
        {
   for (; __first != __last; ++ __result, ++ __first )
     * __result = * __first;
   return __result;
 }
# 316 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
};
# 334 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template<> struct __copy_move< false, false, random_access_iterator_tag> {
# 336 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _II, typename _OI >
        static _OI
        __copy_m ( _II __first, _II __last, _OI __result )
        {
   typedef typename iterator_traits < _II > :: difference_type _Distance;
   for ( _Distance __n = __last - __first; __n > 0; -- __n )
     {
       * __result = * __first;
       ++ __first;
       ++ __result;
     }
   return __result;
 }
# 349 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
};
# 371 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template< bool _IsMove>
# 372 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
struct __copy_move< _IsMove, true, random_access_iterator_tag> {
# 374 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _Tp >
        static _Tp *
        __copy_m ( const _Tp * __first, const _Tp * __last, _Tp * __result )
        {
   __builtin_memmove ( __result, __first,
       sizeof ( _Tp ) * ( __last - __first ) );
   return __result + ( __last - __first );
 }
# 382 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
};
# 384 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < bool _IsMove, typename _II, typename _OI >
    inline _OI
    __copy_move_a ( _II __first, _II __last, _OI __result )
    {
      typedef typename iterator_traits < _II > :: value_type _ValueTypeI;
      typedef typename iterator_traits < _OI > :: value_type _ValueTypeO;
      typedef typename iterator_traits < _II > :: iterator_category _Category;
      const bool __simple = ( __is_pod ( _ValueTypeI )
                      && __is_pointer < _II > :: __value
                      && __is_pointer < _OI > :: __value
        && __are_same < _ValueTypeI, _ValueTypeO > :: __value );

      return std :: __copy_move < _IsMove, __simple,
                       _Category > :: __copy_m ( __first, __last, __result );
    }
# 402 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template< class _CharT> struct char_traits;
# 405 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template< class _CharT, class _Traits> class istreambuf_iterator;
# 408 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template< class _CharT, class _Traits> class ostreambuf_iterator;
# 411 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template< bool _IsMove, class _CharT> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, ostreambuf_iterator< _CharT, char_traits< _CharT> > > ::__type __copy_move_a2(_CharT *, _CharT *, ostreambuf_iterator< _CharT, char_traits< _CharT> > );
# 417 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template< bool _IsMove, class _CharT> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, ostreambuf_iterator< _CharT, char_traits< _CharT> > > ::__type __copy_move_a2(const _CharT *, const _CharT *, ostreambuf_iterator< _CharT, char_traits< _CharT> > );
# 423 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template< bool _IsMove, class _CharT> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, _CharT *> ::__type __copy_move_a2(istreambuf_iterator< _CharT, char_traits< _CharT> > , istreambuf_iterator< _CharT, char_traits< _CharT> > , _CharT *);
# 429 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < bool _IsMove, typename _II, typename _OI >
    inline _OI
    __copy_move_a2 ( _II __first, _II __last, _OI __result )
    {
      return _OI ( std :: __copy_move_a < _IsMove >
   ( std :: __niter_base < _II > :: __b ( __first ),
    std :: __niter_base < _II > :: __b ( __last ),
    std :: __niter_base < _OI > :: __b ( __result ) ) );
    }
# 456 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _II, typename _OI >
    inline _OI
    copy ( _II __first, _II __last, _OI __result )
    {




      ;

      return ( std :: __copy_move_a2 < __is_move_iterator < _II > :: __value >
       ( std :: __miter_base < _II > :: __b ( __first ),
        std :: __miter_base < _II > :: __b ( __last ), __result ) );
    }
# 509 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template< bool __T5, bool __T6, class >
# 510 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
struct __copy_move_backward {
# 512 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _BI1, typename _BI2 >
        static _BI2
        __copy_move_b ( _BI1 __first, _BI1 __last, _BI2 __result )
        {
   while ( __first != __last )
     * -- __result = * -- __last;
   return __result;
 }
# 520 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
};
# 538 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template<> struct __copy_move_backward< false, false, random_access_iterator_tag> {
# 540 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _BI1, typename _BI2 >
        static _BI2
        __copy_move_b ( _BI1 __first, _BI1 __last, _BI2 __result )
        {
   typename iterator_traits < _BI1 > :: difference_type __n;
   for ( __n = __last - __first; __n > 0; -- __n )
     * -- __result = * -- __last;
   return __result;
 }
# 549 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
};
# 567 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template< bool _IsMove>
# 568 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
struct __copy_move_backward< _IsMove, true, random_access_iterator_tag> {
# 570 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _Tp >
        static _Tp *
        __copy_move_b ( const _Tp * __first, const _Tp * __last, _Tp * __result )
        {
   const ptrdiff_t _Num = __last - __first;
   __builtin_memmove ( __result - _Num, __first, sizeof ( _Tp ) * _Num );
   return __result - _Num;
 }
# 578 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
};
# 580 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < bool _IsMove, typename _BI1, typename _BI2 >
    inline _BI2
    __copy_move_backward_a ( _BI1 __first, _BI1 __last, _BI2 __result )
    {
      typedef typename iterator_traits < _BI1 > :: value_type _ValueType1;
      typedef typename iterator_traits < _BI2 > :: value_type _ValueType2;
      typedef typename iterator_traits < _BI1 > :: iterator_category _Category;
      const bool __simple = ( __is_pod ( _ValueType1 )
                      && __is_pointer < _BI1 > :: __value
                      && __is_pointer < _BI2 > :: __value
        && __are_same < _ValueType1, _ValueType2 > :: __value );

      return std :: __copy_move_backward < _IsMove, __simple,
                                _Category > :: __copy_move_b ( __first,
         __last,
         __result );
    }
# 598 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < bool _IsMove, typename _BI1, typename _BI2 >
    inline _BI2
    __copy_move_backward_a2 ( _BI1 __first, _BI1 __last, _BI2 __result )
    {
      return _BI2 ( std :: __copy_move_backward_a < _IsMove >
    ( std :: __niter_base < _BI1 > :: __b ( __first ),
     std :: __niter_base < _BI1 > :: __b ( __last ),
     std :: __niter_base < _BI2 > :: __b ( __result ) ) );
    }
# 626 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _BI1, typename _BI2 >
    inline _BI2
    copy_backward ( _BI1 __first, _BI1 __last, _BI2 __result )
    {






      ;

      return ( std :: __copy_move_backward_a2 < __is_move_iterator < _BI1 > :: __value >
       ( std :: __miter_base < _BI1 > :: __b ( __first ),
        std :: __miter_base < _BI1 > :: __b ( __last ), __result ) );
    }
# 684 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _ForwardIterator, typename _Tp >
    inline typename
    __gnu_cxx :: __enable_if < ! __is_scalar < _Tp > :: __value, void > :: __type
    __fill_a ( _ForwardIterator __first, _ForwardIterator __last,
       const _Tp & __value )
    {
      for (; __first != __last; ++ __first )
 * __first = __value;
    }
# 694 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _ForwardIterator, typename _Tp >
    inline typename
    __gnu_cxx :: __enable_if < __is_scalar < _Tp > :: __value, void > :: __type
    __fill_a ( _ForwardIterator __first, _ForwardIterator __last,
      const _Tp & __value )
    {
      const _Tp __tmp = __value;
      for (; __first != __last; ++ __first )
 * __first = __tmp;
    }
# 706 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _Tp >
    inline typename
    __gnu_cxx :: __enable_if < __is_byte < _Tp > :: __value, void > :: __type
    __fill_a ( _Tp * __first, _Tp * __last, const _Tp & __c )
    {
      const _Tp __tmp = __c;
      __builtin_memset ( __first, static_cast < unsigned char > ( __tmp ),
         __last - __first );
    }
# 728 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _ForwardIterator, typename _Tp >
    inline void
    fill ( _ForwardIterator __first, _ForwardIterator __last, const _Tp & __value )
    {



      ;

      std :: __fill_a ( std :: __niter_base < _ForwardIterator > :: __b ( __first ),
      std :: __niter_base < _ForwardIterator > :: __b ( __last ), __value );
    }
# 741 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _OutputIterator, typename _Size, typename _Tp >
    inline typename
    __gnu_cxx :: __enable_if < ! __is_scalar < _Tp > :: __value, _OutputIterator > :: __type
    __fill_n_a ( _OutputIterator __first, _Size __n, const _Tp & __value )
    {
      for (; __n > 0; -- __n, ++ __first )
 * __first = __value;
      return __first;
    }
# 751 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _OutputIterator, typename _Size, typename _Tp >
    inline typename
    __gnu_cxx :: __enable_if < __is_scalar < _Tp > :: __value, _OutputIterator > :: __type
    __fill_n_a ( _OutputIterator __first, _Size __n, const _Tp & __value )
    {
      const _Tp __tmp = __value;
      for (; __n > 0; -- __n, ++ __first )
 * __first = __tmp;
      return __first;
    }
# 762 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _Size, typename _Tp >
    inline typename
    __gnu_cxx :: __enable_if < __is_byte < _Tp > :: __value, _Tp * > :: __type
    __fill_n_a ( _Tp * __first, _Size __n, const _Tp & __c )
    {
      std :: __fill_a ( __first, __first + __n, __c );
      return __first + __n;
    }
# 783 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _OI, typename _Size, typename _Tp >
    inline _OI
    fill_n ( _OI __first, _Size __n, const _Tp & __value )
    {



      return _OI ( std :: __fill_n_a ( std :: __niter_base < _OI > :: __b ( __first ),
     __n, __value ) );
    }
# 794 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template< bool _BoolType>
# 795 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
struct __equal {
# 797 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _II1, typename _II2 >
        static bool
        equal ( _II1 __first1, _II1 __last1, _II2 __first2 )
        {
   for (; __first1 != __last1; ++ __first1, ++ __first2 )
     if ( ! ( * __first1 == * __first2 ) )
       return false;
   return true;
 }
# 806 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
};
# 809 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template<> struct __equal< true> {
# 811 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _Tp >
        static bool
        equal ( const _Tp * __first1, const _Tp * __last1, const _Tp * __first2 )
        {
   return ! __builtin_memcmp ( __first1, __first2, sizeof ( _Tp )
       * ( __last1 - __first1 ) );
 }
# 818 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
};
# 820 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _II1, typename _II2 >
    inline bool
    __equal_aux ( _II1 __first1, _II1 __last1, _II2 __first2 )
    {
      typedef typename iterator_traits < _II1 > :: value_type _ValueType1;
      typedef typename iterator_traits < _II2 > :: value_type _ValueType2;
      const bool __simple = ( __is_integer < _ValueType1 > :: __value
                      && __is_pointer < _II1 > :: __value
                      && __is_pointer < _II2 > :: __value
        && __are_same < _ValueType1, _ValueType2 > :: __value );

      return std :: __equal < __simple > :: equal ( __first1, __last1, __first2 );
    }
# 835 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template< class , class >
# 836 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
struct __lc_rai {
# 838 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _II1, typename _II2 >
        static _II1
        __newlast1 ( _II1, _II1 __last1, _II2, _II2 )
        { return __last1; }
# 843 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _II >
        static bool
        __cnd2 ( _II __first, _II __last )
        { return __first != __last; }
# 847 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
};
# 850 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template<> struct __lc_rai< random_access_iterator_tag, random_access_iterator_tag> {
# 852 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _RAI1, typename _RAI2 >
        static _RAI1
        __newlast1 ( _RAI1 __first1, _RAI1 __last1,
     _RAI2 __first2, _RAI2 __last2 )
        {
   const typename iterator_traits < _RAI1 > :: difference_type
     __diff1 = __last1 - __first1;
   const typename iterator_traits < _RAI2 > :: difference_type
     __diff2 = __last2 - __first2;
   return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
 }
# 864 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _RAI >
        static bool
        __cnd2 ( _RAI, _RAI )
        { return true; }
# 868 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
};
# 870 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template< bool _BoolType>
# 871 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
struct __lexicographical_compare {
# 873 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _II1, typename _II2 >
        static bool __lc ( _II1, _II1, _II2, _II2 );
# 875 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
};
# 877 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < bool _BoolType >
    template < typename _II1, typename _II2 >
      bool
      __lexicographical_compare < _BoolType > ::
      __lc ( _II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2 )
      {
 typedef typename iterator_traits < _II1 > :: iterator_category _Category1;
 typedef typename iterator_traits < _II2 > :: iterator_category _Category2;
 typedef std :: __lc_rai < _Category1, _Category2 > __rai_type;

 __last1 = __rai_type :: __newlast1 ( __first1, __last1,
      __first2, __last2 );
 for (; __first1 != __last1 && __rai_type :: __cnd2 ( __first2, __last2 );
      ++ __first1, ++ __first2 )
   {
     if ( * __first1 < * __first2 )
       return true;
     if ( * __first2 < * __first1 )
       return false;
   }
 return __first1 == __last1 && __first2 != __last2;
      }
# 901 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template<> struct __lexicographical_compare< true> {
# 903 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _Tp, typename _Up >
        static bool
        __lc ( const _Tp * __first1, const _Tp * __last1,
      const _Up * __first2, const _Up * __last2 )
 {
   const size_t __len1 = __last1 - __first1;
   const size_t __len2 = __last2 - __first2;
   const int __result = __builtin_memcmp ( __first1, __first2,
      std :: min ( __len1, __len2 ) );
   return __result != 0 ? __result < 0 : __len1 < __len2;
 }
# 914 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
};
# 916 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _II1, typename _II2 >
    inline bool
    __lexicographical_compare_aux ( _II1 __first1, _II1 __last1,
      _II2 __first2, _II2 __last2 )
    {
      typedef typename iterator_traits < _II1 > :: value_type _ValueType1;
      typedef typename iterator_traits < _II2 > :: value_type _ValueType2;
      const bool __simple =
 ( __is_byte < _ValueType1 > :: __value && __is_byte < _ValueType2 > :: __value
  && ! __gnu_cxx :: __numeric_traits < _ValueType1 > :: __is_signed
  && ! __gnu_cxx :: __numeric_traits < _ValueType2 > :: __is_signed
  && __is_pointer < _II1 > :: __value
  && __is_pointer < _II2 > :: __value );

      return std :: __lexicographical_compare < __simple > :: __lc ( __first1, __last1,
           __first2, __last2 );
    }
# 934 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
}
# 936 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
namespace std __attribute((__visibility__("default")))
# 50 "/usr/include/c++/4.4/bits/allocator.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_construct.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
 __attribute((__visibility__("default")))
# 65 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 454 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute((__visibility__("default"))) {
# 950 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _II1, typename _II2 >
    inline bool
    equal ( _II1 __first1, _II1 __last1, _II2 __first2 )
    {






      ;

      return std :: __equal_aux ( std :: __niter_base < _II1 > :: __b ( __first1 ),
         std :: __niter_base < _II1 > :: __b ( __last1 ),
         std :: __niter_base < _II2 > :: __b ( __first2 ) );
    }
# 982 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _IIter1, typename _IIter2, typename _BinaryPredicate >
    inline bool
    equal ( _IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _BinaryPredicate __binary_pred )
    {



      ;

      for (; __first1 != __last1; ++ __first1, ++ __first2 )
 if ( ! bool ( __binary_pred ( * __first1, * __first2 ) ) )
   return false;
      return true;
    }
# 1013 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _II1, typename _II2 >
    inline bool
    lexicographical_compare ( _II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2 )
    {

      typedef typename iterator_traits < _II1 > :: value_type _ValueType1;
      typedef typename iterator_traits < _II2 > :: value_type _ValueType2;




      ;
      ;

      return std :: __lexicographical_compare_aux
 ( std :: __niter_base < _II1 > :: __b ( __first1 ),
  std :: __niter_base < _II1 > :: __b ( __last1 ),
  std :: __niter_base < _II2 > :: __b ( __first2 ),
  std :: __niter_base < _II2 > :: __b ( __last2 ) );
    }
# 1048 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _II1, typename _II2, typename _Compare >
    bool
    lexicographical_compare ( _II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2, _Compare __comp )
    {
      typedef typename iterator_traits < _II1 > :: iterator_category _Category1;
      typedef typename iterator_traits < _II2 > :: iterator_category _Category2;
      typedef std :: __lc_rai < _Category1, _Category2 > __rai_type;




      ;
      ;

      __last1 = __rai_type :: __newlast1 ( __first1, __last1, __first2, __last2 );
      for (; __first1 != __last1 && __rai_type :: __cnd2 ( __first2, __last2 );
    ++ __first1, ++ __first2 )
 {
   if ( __comp ( * __first1, * __first2 ) )
     return true;
   if ( __comp ( * __first2, * __first1 ) )
     return false;
 }
      return __first1 == __last1 && __first2 != __last2;
    }
# 1088 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _InputIterator1, typename _InputIterator2 >
    pair < _InputIterator1, _InputIterator2 >
    mismatch ( _InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2 )
    {






      ;

      while ( __first1 != __last1 && * __first1 == * __first2 )
        {
   ++ __first1;
   ++ __first2;
        }
      return pair < _InputIterator1, _InputIterator2 > ( __first1, __first2 );
    }
# 1125 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
template < typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate >
    pair < _InputIterator1, _InputIterator2 >
    mismatch ( _InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _BinaryPredicate __binary_pred )
    {



      ;

      while ( __first1 != __last1 && bool ( __binary_pred ( * __first1, * __first2 ) ) )
        {
   ++ __first1;
   ++ __first2;
        }
      return pair < _InputIterator1, _InputIterator2 > ( __first1, __first2 );
    }
# 1144 "/usr/include/c++/4.4/bits/stl_algobase.h" 3
}
# 41 "/usr/include/c++/4.4/exception" 3
namespace std {
# 59 "/usr/include/c++/4.4/exception" 3
class exception {
# 62 "/usr/include/c++/4.4/exception" 3
public: exception() throw() { }
# 63 "/usr/include/c++/4.4/exception" 3
virtual ~exception() throw();
# 67 "/usr/include/c++/4.4/exception" 3
virtual const char *what() const throw();
# 68 "/usr/include/c++/4.4/exception" 3
};
# 72 "/usr/include/c++/4.4/exception" 3
class bad_exception : public exception {
# 75 "/usr/include/c++/4.4/exception" 3
public: bad_exception() throw() { }
# 79 "/usr/include/c++/4.4/exception" 3
virtual ~bad_exception() throw();
# 82 "/usr/include/c++/4.4/exception" 3
virtual const char *what() const throw();
# 83 "/usr/include/c++/4.4/exception" 3
};
# 86 "/usr/include/c++/4.4/exception" 3
typedef void (*terminate_handler)(void);
# 89 "/usr/include/c++/4.4/exception" 3
typedef void (*unexpected_handler)(void);
# 92 "/usr/include/c++/4.4/exception" 3
terminate_handler set_terminate(terminate_handler) throw();
# 96 "/usr/include/c++/4.4/exception" 3
void terminate() __attribute((__noreturn__));
# 99 "/usr/include/c++/4.4/exception" 3
unexpected_handler set_unexpected(unexpected_handler) throw();
# 103 "/usr/include/c++/4.4/exception" 3
void unexpected() __attribute((__noreturn__));
# 115 "/usr/include/c++/4.4/exception" 3
bool uncaught_exception() throw();
# 118 "/usr/include/c++/4.4/exception" 3
}
# 120 "/usr/include/c++/4.4/exception" 3
namespace __gnu_cxx __attribute((__visibility__("default")))
# 37 "/usr/include/c++/4.4/ext/new_allocator.h" 3
 __attribute((__visibility__("default"))) {
# 138 "/usr/include/c++/4.4/exception" 3
void __verbose_terminate_handler();
# 140 "/usr/include/c++/4.4/exception" 3
}
# 46 "/usr/include/c++/4.4/new" 3
namespace std {
# 54 "/usr/include/c++/4.4/new" 3
class bad_alloc : public exception {
# 57 "/usr/include/c++/4.4/new" 3
public: bad_alloc() throw() { }
# 61 "/usr/include/c++/4.4/new" 3
virtual ~bad_alloc() throw();
# 64 "/usr/include/c++/4.4/new" 3
virtual const char *what() const throw();
# 65 "/usr/include/c++/4.4/new" 3
};
# 67 "/usr/include/c++/4.4/new" 3
struct nothrow_t { };
# 69 "/usr/include/c++/4.4/new" 3
extern const nothrow_t nothrow;
# 73 "/usr/include/c++/4.4/new" 3
typedef void (*new_handler)(void);
# 77 "/usr/include/c++/4.4/new" 3
new_handler set_new_handler(new_handler) throw();
# 78 "/usr/include/c++/4.4/new" 3
}
# 91 "/usr/include/c++/4.4/new" 3
void *operator new(size_t) throw(std::bad_alloc);
# 92 "/usr/include/c++/4.4/new" 3
void *operator new[](size_t) throw(std::bad_alloc);
# 93 "/usr/include/c++/4.4/new" 3
void operator delete(void *) throw();
# 94 "/usr/include/c++/4.4/new" 3
void operator delete[](void *) throw();
# 95 "/usr/include/c++/4.4/new" 3
void *operator new(size_t, const std::nothrow_t &) throw();
# 96 "/usr/include/c++/4.4/new" 3
void *operator new[](size_t, const std::nothrow_t &) throw();
# 97 "/usr/include/c++/4.4/new" 3
void operator delete(void *, const std::nothrow_t &) throw();
# 98 "/usr/include/c++/4.4/new" 3
void operator delete[](void *, const std::nothrow_t &) throw();
# 101 "/usr/include/c++/4.4/new" 3
inline void *operator new(size_t, void *__p) throw() { return __p; }
# 102 "/usr/include/c++/4.4/new" 3
inline void *operator new[](size_t, void *__p) throw() { return __p; }
# 105 "/usr/include/c++/4.4/new" 3
inline void operator delete(void *, void *) throw() { }
# 106 "/usr/include/c++/4.4/new" 3
inline void operator delete[](void *, void *) throw() { }
# 37 "/usr/include/c++/4.4/ext/new_allocator.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) {
# 39 "/usr/include/c++/4.4/ext/new_allocator.h" 3
using std::size_t;
# 40 "/usr/include/c++/4.4/ext/new_allocator.h" 3
using std::ptrdiff_t;
# 50 "/usr/include/c++/4.4/ext/new_allocator.h" 3
template < typename _Tp >
    class new_allocator
    {
    public :
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp * pointer;
      typedef const _Tp * const_pointer;
      typedef _Tp & reference;
      typedef const _Tp & const_reference;
      typedef _Tp value_type;

      template < typename _Tp1 >
        struct rebind
        { typedef new_allocator < _Tp1 > other; };

      new_allocator ( ) throw ( ) { }

      new_allocator ( const new_allocator & ) throw ( ) { }

      template < typename _Tp1 >
        new_allocator ( const new_allocator < _Tp1 > & ) throw ( ) { }

      ~ new_allocator ( ) throw ( ) { }

      pointer
      address ( reference __x ) const { return & __x; }

      const_pointer
      address ( const_reference __x ) const { return & __x; }



      pointer
      allocate ( size_type __n, const void * = 0 )
      {
 if ( __builtin_expect ( __n > this -> max_size ( ), false ) )
   std :: __throw_bad_alloc ( );

 return static_cast < _Tp * > ( :: operator new ( __n * sizeof ( _Tp ) ) );
      }


      void
      deallocate ( pointer __p, size_type )
      { :: operator delete ( __p ); }

      size_type
      max_size ( ) const throw ( )
      { return size_t ( - 1 ) / sizeof ( _Tp ); }



      void
      construct ( pointer __p, const _Tp & __val )
      { :: new ( ( void * ) __p ) _Tp ( __val ); }

      void
      destroy ( pointer __p ) { __p -> ~ _Tp ( ); }
    };
# 118 "/usr/include/c++/4.4/ext/new_allocator.h" 3
template < typename _Tp >
    inline bool
    operator == ( const new_allocator < _Tp > &, const new_allocator < _Tp > & )
    { return true; }
# 123 "/usr/include/c++/4.4/ext/new_allocator.h" 3
template < typename _Tp >
    inline bool
    operator != ( const new_allocator < _Tp > &, const new_allocator < _Tp > & )
    { return false; }
# 128 "/usr/include/c++/4.4/ext/new_allocator.h" 3
}
# 50 "/usr/include/c++/4.4/bits/allocator.h" 3
namespace std __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_construct.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
 __attribute((__visibility__("default")))
# 65 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 454 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute((__visibility__("default"))) {
# 59 "/usr/include/c++/4.4/bits/allocator.h" 3
template < typename _Tp >
    class allocator;
# 64 "/usr/include/c++/4.4/bits/allocator.h" 3
template<> class allocator< void> {
# 67 "/usr/include/c++/4.4/bits/allocator.h" 3
public: typedef size_t size_type;
# 68 "/usr/include/c++/4.4/bits/allocator.h" 3
typedef ptrdiff_t difference_type;
# 69 "/usr/include/c++/4.4/bits/allocator.h" 3
typedef void *pointer;
# 70 "/usr/include/c++/4.4/bits/allocator.h" 3
typedef const void *const_pointer;
# 71 "/usr/include/c++/4.4/bits/allocator.h" 3
typedef void value_type;
# 73 "/usr/include/c++/4.4/bits/allocator.h" 3
template< class _Tp1>
# 74 "/usr/include/c++/4.4/bits/allocator.h" 3
struct rebind {
# 75 "/usr/include/c++/4.4/bits/allocator.h" 3
typedef std::allocator< _Tp1> other; };
# 76 "/usr/include/c++/4.4/bits/allocator.h" 3
};
# 85 "/usr/include/c++/4.4/bits/allocator.h" 3
template < typename _Tp >
    class allocator : public __gnu_cxx :: new_allocator < _Tp >
    {
   public :
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp * pointer;
      typedef const _Tp * const_pointer;
      typedef _Tp & reference;
      typedef const _Tp & const_reference;
      typedef _Tp value_type;

      template < typename _Tp1 >
        struct rebind
        { typedef allocator < _Tp1 > other; };

      allocator ( ) throw ( ) { }

      allocator ( const allocator & __a ) throw ( )
      : __gnu_cxx :: new_allocator < _Tp > ( __a ) { }

      template < typename _Tp1 >
        allocator ( const allocator < _Tp1 > & ) throw ( ) { }

      ~ allocator ( ) throw ( ) { }


    };
# 114 "/usr/include/c++/4.4/bits/allocator.h" 3
template < typename _T1, typename _T2 >
    inline bool
    operator == ( const allocator < _T1 > &, const allocator < _T2 > & )
    { return true; }
# 119 "/usr/include/c++/4.4/bits/allocator.h" 3
template < typename _Tp >
    inline bool
    operator == ( const allocator < _Tp > &, const allocator < _Tp > & )
    { return true; }
# 124 "/usr/include/c++/4.4/bits/allocator.h" 3
template < typename _T1, typename _T2 >
    inline bool
    operator != ( const allocator < _T1 > &, const allocator < _T2 > & )
    { return false; }
# 129 "/usr/include/c++/4.4/bits/allocator.h" 3
template < typename _Tp >
    inline bool
    operator != ( const allocator < _Tp > &, const allocator < _Tp > & )
    { return false; }
# 138 "/usr/include/c++/4.4/bits/allocator.h" 3
extern template class allocator< char> ;
# 139 "/usr/include/c++/4.4/bits/allocator.h" 3
extern template class allocator< wchar_t> ;
# 146 "/usr/include/c++/4.4/bits/allocator.h" 3
template < typename _Alloc, bool = __is_empty ( _Alloc ) >
    struct __alloc_swap
    { static void _S_do_it ( _Alloc &, _Alloc & ) { } };
# 150 "/usr/include/c++/4.4/bits/allocator.h" 3
template < typename _Alloc >
    struct __alloc_swap < _Alloc, false >
    {
      static void
      _S_do_it ( _Alloc & __one, _Alloc & __two )
      {

 if ( __one != __two )
   swap ( __one, __two );
      }
    };
# 163 "/usr/include/c++/4.4/bits/allocator.h" 3
template < typename _Alloc, bool = __is_empty ( _Alloc ) >
    struct __alloc_neq
    {
      static bool
      _S_do_it ( const _Alloc &, const _Alloc & )
      { return false; }
    };
# 171 "/usr/include/c++/4.4/bits/allocator.h" 3
template < typename _Alloc >
    struct __alloc_neq < _Alloc, false >
    {
      static bool
      _S_do_it ( const _Alloc & __one, const _Alloc & __two )
      { return __one != __two; }
    };
# 179 "/usr/include/c++/4.4/bits/allocator.h" 3
}
# 62 "/usr/include/c++/4.4/bits/stl_construct.h" 3
namespace std __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
 __attribute((__visibility__("default")))
# 65 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 454 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute((__visibility__("default"))) {
# 68 "/usr/include/c++/4.4/bits/stl_construct.h" 3
template < typename _T1, typename _T2 >
    inline void
    _Construct ( _T1 * __p, const _T2 & __value )
    {


      :: new ( static_cast < void * > ( __p ) ) _T1 ( __value );
    }
# 80 "/usr/include/c++/4.4/bits/stl_construct.h" 3
template < typename _Tp >
    inline void
    _Destroy ( _Tp * __pointer )
    { __pointer -> ~ _Tp ( ); }
# 85 "/usr/include/c++/4.4/bits/stl_construct.h" 3
template< bool __T7>
# 86 "/usr/include/c++/4.4/bits/stl_construct.h" 3
struct _Destroy_aux {
# 88 "/usr/include/c++/4.4/bits/stl_construct.h" 3
template < typename _ForwardIterator >
        static void
        __destroy ( _ForwardIterator __first, _ForwardIterator __last )
 {
   for (; __first != __last; ++ __first )
     std :: _Destroy ( & * __first );
 }
# 95 "/usr/include/c++/4.4/bits/stl_construct.h" 3
};
# 98 "/usr/include/c++/4.4/bits/stl_construct.h" 3
template<> struct _Destroy_aux< true> {
# 100 "/usr/include/c++/4.4/bits/stl_construct.h" 3
template < typename _ForwardIterator >
        static void
        __destroy ( _ForwardIterator, _ForwardIterator ) { }
# 103 "/usr/include/c++/4.4/bits/stl_construct.h" 3
};
# 110 "/usr/include/c++/4.4/bits/stl_construct.h" 3
template < typename _ForwardIterator >
    inline void
    _Destroy ( _ForwardIterator __first, _ForwardIterator __last )
    {
      typedef typename iterator_traits < _ForwardIterator > :: value_type
                       _Value_type;
      std :: _Destroy_aux < __has_trivial_destructor ( _Value_type ) > ::
 __destroy ( __first, __last );
    }
# 126 "/usr/include/c++/4.4/bits/stl_construct.h" 3
template< class _Tp> class allocator;
# 128 "/usr/include/c++/4.4/bits/stl_construct.h" 3
template < typename _ForwardIterator, typename _Allocator >
    void
    _Destroy ( _ForwardIterator __first, _ForwardIterator __last,
      _Allocator & __alloc )
    {
      for (; __first != __last; ++ __first )
 __alloc . destroy ( & * __first );
    }
# 137 "/usr/include/c++/4.4/bits/stl_construct.h" 3
template < typename _ForwardIterator, typename _Tp >
    inline void
    _Destroy ( _ForwardIterator __first, _ForwardIterator __last,
      allocator < _Tp > & )
    {
      _Destroy ( __first, __last );
    }
# 145 "/usr/include/c++/4.4/bits/stl_construct.h" 3
}
# 60 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
namespace std __attribute((__visibility__("default")))
# 65 "/usr/include/c++/4.4/bits/stl_vector.h" 3
 __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 454 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute((__visibility__("default"))) {
# 62 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template< bool __T8>
# 63 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
struct __uninitialized_copy {
# 65 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template < typename _InputIterator, typename _ForwardIterator >
        static _ForwardIterator
        uninitialized_copy ( _InputIterator __first, _InputIterator __last,
      _ForwardIterator __result )
        {
   _ForwardIterator __cur = __result;
   try
     {
       for (; __first != __last; ++ __first, ++ __cur )
  :: new ( static_cast < void * > ( & * __cur ) ) typename
      iterator_traits < _ForwardIterator > :: value_type ( * __first );
       return __cur;
     }
   catch ( ... )
     {
       std :: _Destroy ( __result, __cur );
       throw;
     }
 }
# 84 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
};
# 87 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template<> struct __uninitialized_copy< true> {
# 89 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template < typename _InputIterator, typename _ForwardIterator >
        static _ForwardIterator
        uninitialized_copy ( _InputIterator __first, _InputIterator __last,
      _ForwardIterator __result )
        { return std :: copy ( __first, __last, __result ); }
# 94 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
};
# 105 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template < typename _InputIterator, typename _ForwardIterator >
    inline _ForwardIterator
    uninitialized_copy ( _InputIterator __first, _InputIterator __last,
         _ForwardIterator __result )
    {
      typedef typename iterator_traits < _InputIterator > :: value_type
 _ValueType1;
      typedef typename iterator_traits < _ForwardIterator > :: value_type
 _ValueType2;

      return std :: __uninitialized_copy < ( __is_pod ( _ValueType1 )
     && __is_pod ( _ValueType2 ) ) > ::
 uninitialized_copy ( __first, __last, __result );
    }
# 121 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template< bool __T9>
# 122 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
struct __uninitialized_fill {
# 124 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template < typename _ForwardIterator, typename _Tp >
        static void
        uninitialized_fill ( _ForwardIterator __first,
      _ForwardIterator __last, const _Tp & __x )
        {
   _ForwardIterator __cur = __first;
   try
     {
       for (; __cur != __last; ++ __cur )
  std :: _Construct ( & * __cur, __x );
     }
   catch ( ... )
     {
       std :: _Destroy ( __first, __cur );
       throw;
     }
 }
# 141 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
};
# 144 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template<> struct __uninitialized_fill< true> {
# 146 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template < typename _ForwardIterator, typename _Tp >
        static void
        uninitialized_fill ( _ForwardIterator __first,
      _ForwardIterator __last, const _Tp & __x )
        { std :: fill ( __first, __last, __x ); }
# 151 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
};
# 162 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template < typename _ForwardIterator, typename _Tp >
    inline void
    uninitialized_fill ( _ForwardIterator __first, _ForwardIterator __last,
         const _Tp & __x )
    {
      typedef typename iterator_traits < _ForwardIterator > :: value_type
 _ValueType;

      std :: __uninitialized_fill < __is_pod ( _ValueType ) > ::
 uninitialized_fill ( __first, __last, __x );
    }
# 175 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template< bool __T10>
# 176 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
struct __uninitialized_fill_n {
# 178 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template < typename _ForwardIterator, typename _Size, typename _Tp >
        static void
        uninitialized_fill_n ( _ForwardIterator __first, _Size __n,
        const _Tp & __x )
        {
   _ForwardIterator __cur = __first;
   try
     {
       for (; __n > 0; -- __n, ++ __cur )
  std :: _Construct ( & * __cur, __x );
     }
   catch ( ... )
     {
       std :: _Destroy ( __first, __cur );
       throw;
     }
 }
# 195 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
};
# 198 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template<> struct __uninitialized_fill_n< true> {
# 200 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template < typename _ForwardIterator, typename _Size, typename _Tp >
        static void
        uninitialized_fill_n ( _ForwardIterator __first, _Size __n,
        const _Tp & __x )
        { std :: fill_n ( __first, __n, __x ); }
# 205 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
};
# 216 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template < typename _ForwardIterator, typename _Size, typename _Tp >
    inline void
    uninitialized_fill_n ( _ForwardIterator __first, _Size __n, const _Tp & __x )
    {
      typedef typename iterator_traits < _ForwardIterator > :: value_type
 _ValueType;

      std :: __uninitialized_fill_n < __is_pod ( _ValueType ) > ::
 uninitialized_fill_n ( __first, __n, __x );
    }
# 233 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template < typename _InputIterator, typename _ForwardIterator,
    typename _Allocator >
    _ForwardIterator
    __uninitialized_copy_a ( _InputIterator __first, _InputIterator __last,
      _ForwardIterator __result, _Allocator & __alloc )
    {
      _ForwardIterator __cur = __result;
      try
 {
   for (; __first != __last; ++ __first, ++ __cur )
     __alloc . construct ( & * __cur, * __first );
   return __cur;
 }
      catch ( ... )
 {
   std :: _Destroy ( __result, __cur, __alloc );
   throw;
 }
    }
# 253 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template < typename _InputIterator, typename _ForwardIterator, typename _Tp >
    inline _ForwardIterator
    __uninitialized_copy_a ( _InputIterator __first, _InputIterator __last,
      _ForwardIterator __result, allocator < _Tp > & )
    { return std :: uninitialized_copy ( __first, __last, __result ); }
# 259 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template < typename _InputIterator, typename _ForwardIterator,
    typename _Allocator >
    inline _ForwardIterator
    __uninitialized_move_a ( _InputIterator __first, _InputIterator __last,
      _ForwardIterator __result, _Allocator & __alloc )
    {
      return std :: __uninitialized_copy_a ( ( __first ),
      ( __last ),
      __result, __alloc );
    }
# 270 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template < typename _ForwardIterator, typename _Tp, typename _Allocator >
    void
    __uninitialized_fill_a ( _ForwardIterator __first, _ForwardIterator __last,
      const _Tp & __x, _Allocator & __alloc )
    {
      _ForwardIterator __cur = __first;
      try
 {
   for (; __cur != __last; ++ __cur )
     __alloc . construct ( & * __cur, __x );
 }
      catch ( ... )
 {
   std :: _Destroy ( __first, __cur, __alloc );
   throw;
 }
    }
# 288 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template < typename _ForwardIterator, typename _Tp, typename _Tp2 >
    inline void
    __uninitialized_fill_a ( _ForwardIterator __first, _ForwardIterator __last,
      const _Tp & __x, allocator < _Tp2 > & )
    { std :: uninitialized_fill ( __first, __last, __x ); }
# 294 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template < typename _ForwardIterator, typename _Size, typename _Tp,
    typename _Allocator >
    void
    __uninitialized_fill_n_a ( _ForwardIterator __first, _Size __n,
        const _Tp & __x, _Allocator & __alloc )
    {
      _ForwardIterator __cur = __first;
      try
 {
   for (; __n > 0; -- __n, ++ __cur )
     __alloc . construct ( & * __cur, __x );
 }
      catch ( ... )
 {
   std :: _Destroy ( __first, __cur, __alloc );
   throw;
 }
    }
# 313 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template < typename _ForwardIterator, typename _Size, typename _Tp,
    typename _Tp2 >
    inline void
    __uninitialized_fill_n_a ( _ForwardIterator __first, _Size __n,
        const _Tp & __x, allocator < _Tp2 > & )
    { std :: uninitialized_fill_n ( __first, __n, __x ); }
# 330 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template < typename _InputIterator1, typename _InputIterator2,
    typename _ForwardIterator, typename _Allocator >
    inline _ForwardIterator
    __uninitialized_copy_move ( _InputIterator1 __first1,
         _InputIterator1 __last1,
         _InputIterator2 __first2,
         _InputIterator2 __last2,
         _ForwardIterator __result,
         _Allocator & __alloc )
    {
      _ForwardIterator __mid = std :: __uninitialized_copy_a ( __first1, __last1,
          __result,
          __alloc );
      try
 {
   return std :: __uninitialized_move_a ( __first2, __last2, __mid, __alloc );
 }
      catch ( ... )
 {
   std :: _Destroy ( __result, __mid, __alloc );
   throw;
 }
    }
# 358 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template < typename _InputIterator1, typename _InputIterator2,
    typename _ForwardIterator, typename _Allocator >
    inline _ForwardIterator
    __uninitialized_move_copy ( _InputIterator1 __first1,
         _InputIterator1 __last1,
         _InputIterator2 __first2,
         _InputIterator2 __last2,
         _ForwardIterator __result,
         _Allocator & __alloc )
    {
      _ForwardIterator __mid = std :: __uninitialized_move_a ( __first1, __last1,
          __result,
          __alloc );
      try
 {
   return std :: __uninitialized_copy_a ( __first2, __last2, __mid, __alloc );
 }
      catch ( ... )
 {
   std :: _Destroy ( __result, __mid, __alloc );
   throw;
 }
    }
# 385 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template < typename _ForwardIterator, typename _Tp, typename _InputIterator,
    typename _Allocator >
    inline _ForwardIterator
    __uninitialized_fill_move ( _ForwardIterator __result, _ForwardIterator __mid,
         const _Tp & __x, _InputIterator __first,
         _InputIterator __last, _Allocator & __alloc )
    {
      std :: __uninitialized_fill_a ( __result, __mid, __x, __alloc );
      try
 {
   return std :: __uninitialized_move_a ( __first, __last, __mid, __alloc );
 }
      catch ( ... )
 {
   std :: _Destroy ( __result, __mid, __alloc );
   throw;
 }
    }
# 407 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
template < typename _InputIterator, typename _ForwardIterator, typename _Tp,
    typename _Allocator >
    inline void
    __uninitialized_move_fill ( _InputIterator __first1, _InputIterator __last1,
         _ForwardIterator __first2,
         _ForwardIterator __last2, const _Tp & __x,
         _Allocator & __alloc )
    {
      _ForwardIterator __mid2 = std :: __uninitialized_move_a ( __first1, __last1,
           __first2,
           __alloc );
      try
 {
   std :: __uninitialized_fill_a ( __mid2, __last2, __x, __alloc );
 }
      catch ( ... )
 {
   std :: _Destroy ( __first2, __mid2, __alloc );
   throw;
 }
    }
# 476 "/usr/include/c++/4.4/bits/stl_uninitialized.h" 3
}
# 65 "/usr/include/c++/4.4/bits/stl_vector.h" 3
namespace std __attribute((__visibility__("default")))
# 62 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 454 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute((__visibility__("default"))) {
# 68 "/usr/include/c++/4.4/bits/stl_vector.h" 3
template < typename _Tp, typename _Alloc >
    struct _Vector_base
    {
      typedef typename _Alloc :: template rebind < _Tp > :: other _Tp_alloc_type;

      struct _Vector_impl
      : public _Tp_alloc_type
      {
 typename _Tp_alloc_type :: pointer _M_start;
 typename _Tp_alloc_type :: pointer _M_finish;
 typename _Tp_alloc_type :: pointer _M_end_of_storage;

 _Vector_impl ( )
 : _Tp_alloc_type ( ), _M_start ( 0 ), _M_finish ( 0 ), _M_end_of_storage ( 0 )
 { }

 _Vector_impl ( _Tp_alloc_type const & __a )
 : _Tp_alloc_type ( __a ), _M_start ( 0 ), _M_finish ( 0 ), _M_end_of_storage ( 0 )
 { }
      };

    public :
      typedef _Alloc allocator_type;

      _Tp_alloc_type &
      _M_get_Tp_allocator ( )
      { return * static_cast < _Tp_alloc_type * > ( & this -> _M_impl ); }

      const _Tp_alloc_type &
      _M_get_Tp_allocator ( ) const
      { return * static_cast < const _Tp_alloc_type * > ( & this -> _M_impl ); }

      allocator_type
      get_allocator ( ) const
      { return allocator_type ( _M_get_Tp_allocator ( ) ); }

      _Vector_base ( )
      : _M_impl ( ) { }

      _Vector_base ( const allocator_type & __a )
      : _M_impl ( __a ) { }

      _Vector_base ( size_t __n, const allocator_type & __a )
      : _M_impl ( __a )
      {
 this -> _M_impl . _M_start = this -> _M_allocate ( __n );
 this -> _M_impl . _M_finish = this -> _M_impl . _M_start;
 this -> _M_impl . _M_end_of_storage = this -> _M_impl . _M_start + __n;
      }

      ~ _Vector_base ( )
      { _M_deallocate ( this -> _M_impl . _M_start, this -> _M_impl . _M_end_of_storage
        - this -> _M_impl . _M_start ); }

    public :
      _Vector_impl _M_impl;

      typename _Tp_alloc_type :: pointer
      _M_allocate ( size_t __n )
      { return __n != 0 ? _M_impl . allocate ( __n ) : 0; }

      void
      _M_deallocate ( typename _Tp_alloc_type :: pointer __p, size_t __n )
      {
 if ( __p )
   _M_impl . deallocate ( __p, __n );
      }
    };
# 169 "/usr/include/c++/4.4/bits/stl_vector.h" 3
template < typename _Tp, typename _Alloc = std :: allocator < _Tp > >
    class vector : protected _Vector_base < _Tp, _Alloc >
    {

      typedef typename _Alloc :: value_type _Alloc_value_type;



      typedef _Vector_base < _Tp, _Alloc > _Base;
      typedef typename _Base :: _Tp_alloc_type _Tp_alloc_type;

    public :
      typedef _Tp value_type;
      typedef typename _Tp_alloc_type :: pointer pointer;
      typedef typename _Tp_alloc_type :: const_pointer const_pointer;
      typedef typename _Tp_alloc_type :: reference reference;
      typedef typename _Tp_alloc_type :: const_reference const_reference;
      typedef __gnu_cxx :: __normal_iterator < pointer, vector > iterator;
      typedef __gnu_cxx :: __normal_iterator < const_pointer, vector >
      const_iterator;
      typedef std :: reverse_iterator < const_iterator > const_reverse_iterator;
      typedef std :: reverse_iterator < iterator > reverse_iterator;
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Alloc allocator_type;

    protected :
      using _Base :: _M_allocate;
      using _Base :: _M_deallocate;
      using _Base :: _M_impl;
      using _Base :: _M_get_Tp_allocator;

    public :





      vector ( )
      : _Base ( ) { }





      explicit
      vector ( const allocator_type & __a )
      : _Base ( __a ) { }
# 226 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      explicit
      vector ( size_type __n, const value_type & __value = value_type ( ),
      const allocator_type & __a = allocator_type ( ) )
      : _Base ( __n, __a )
      { _M_fill_initialize ( __n, __value ); }
# 241 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      vector ( const vector & __x )
      : _Base ( __x . size ( ), __x . _M_get_Tp_allocator ( ) )
      { this -> _M_impl . _M_finish =
   std :: __uninitialized_copy_a ( __x . begin ( ), __x . end ( ),
          this -> _M_impl . _M_start,
          _M_get_Tp_allocator ( ) );
      }
# 265 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      template < typename _InputIterator >
        vector ( _InputIterator __first, _InputIterator __last,
        const allocator_type & __a = allocator_type ( ) )
 : _Base ( __a )
        {

   typedef typename std :: __is_integer < _InputIterator > :: __type _Integral;
   _M_initialize_dispatch ( __first, __last, _Integral ( ) );
 }







      ~ vector ( )
      { std :: _Destroy ( this -> _M_impl . _M_start, this -> _M_impl . _M_finish,
        _M_get_Tp_allocator ( ) ); }
# 293 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      vector &
      operator = ( const vector & __x );
# 306 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      void
      assign ( size_type __n, const value_type & __val )
      { _M_fill_assign ( __n, __val ); }
# 322 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      template < typename _InputIterator >
        void
        assign ( _InputIterator __first, _InputIterator __last )
        {

   typedef typename std :: __is_integer < _InputIterator > :: __type _Integral;
   _M_assign_dispatch ( __first, __last, _Integral ( ) );
 }


      using _Base :: get_allocator;







      iterator
      begin ( )
      { return iterator ( this -> _M_impl . _M_start ); }






      const_iterator
      begin ( ) const
      { return const_iterator ( this -> _M_impl . _M_start ); }






      iterator
      end ( )
      { return iterator ( this -> _M_impl . _M_finish ); }






      const_iterator
      end ( ) const
      { return const_iterator ( this -> _M_impl . _M_finish ); }






      reverse_iterator
      rbegin ( )
      { return reverse_iterator ( end ( ) ); }






      const_reverse_iterator
      rbegin ( ) const
      { return const_reverse_iterator ( end ( ) ); }






      reverse_iterator
      rend ( )
      { return reverse_iterator ( begin ( ) ); }






      const_reverse_iterator
      rend ( ) const
      { return const_reverse_iterator ( begin ( ) ); }



      size_type
      size ( ) const
      { return size_type ( this -> _M_impl . _M_finish - this -> _M_impl . _M_start ); }


      size_type
      max_size ( ) const
      { return _M_get_Tp_allocator ( ) . max_size ( ); }
# 429 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      void
      resize ( size_type __new_size, value_type __x = value_type ( ) )
      {
 if ( __new_size < size ( ) )
   _M_erase_at_end ( this -> _M_impl . _M_start + __new_size );
 else
   insert ( end ( ), __new_size - size ( ), __x );
      }





      size_type
      capacity ( ) const
      { return size_type ( this -> _M_impl . _M_end_of_storage
    - this -> _M_impl . _M_start ); }





      bool
      empty ( ) const
      { return begin ( ) == end ( ); }
# 472 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      void
      reserve ( size_type __n );
# 487 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      reference
      operator [ ] ( size_type __n )
      { return * ( this -> _M_impl . _M_start + __n ); }
# 502 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      const_reference
      operator [ ] ( size_type __n ) const
      { return * ( this -> _M_impl . _M_start + __n ); }

    protected :

      void
      _M_range_check ( size_type __n ) const
      {
 if ( __n >= this -> size ( ) )
   __throw_out_of_range ( ( "vector::_M_range_check" ) );
      }

    public :
# 527 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      reference
      at ( size_type __n )
      {
 _M_range_check ( __n );
 return ( * this ) [ __n ];
      }
# 545 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      const_reference
      at ( size_type __n ) const
      {
 _M_range_check ( __n );
 return ( * this ) [ __n ];
      }





      reference
      front ( )
      { return * begin ( ); }





      const_reference
      front ( ) const
      { return * begin ( ); }





      reference
      back ( )
      { return * ( end ( ) - 1 ); }





      const_reference
      back ( ) const
      { return * ( end ( ) - 1 ); }
# 591 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      pointer
      data ( )
      { return pointer ( this -> _M_impl . _M_start ); }

      const_pointer
      data ( ) const
      { return const_pointer ( this -> _M_impl . _M_start ); }
# 610 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      void
      push_back ( const value_type & __x )
      {
 if ( this -> _M_impl . _M_finish != this -> _M_impl . _M_end_of_storage )
   {
     this -> _M_impl . construct ( this -> _M_impl . _M_finish, __x );
     ++ this -> _M_impl . _M_finish;
   }
 else
   _M_insert_aux ( end ( ), __x );
      }
# 631 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      void
      pop_back ( )
      {
 -- this -> _M_impl . _M_finish;
 this -> _M_impl . destroy ( this -> _M_impl . _M_finish );
      }
# 649 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      iterator
      insert ( iterator __position, const value_type & __x );
# 665 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      void
      insert ( iterator __position, size_type __n, const value_type & __x )
      { _M_fill_insert ( __position, __n, __x ); }
# 683 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      template < typename _InputIterator >
        void
        insert ( iterator __position, _InputIterator __first,
        _InputIterator __last )
        {

   typedef typename std :: __is_integer < _InputIterator > :: __type _Integral;
   _M_insert_dispatch ( __position, __first, __last, _Integral ( ) );
 }
# 708 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      iterator
      erase ( iterator __position );
# 729 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      iterator
      erase ( iterator __first, iterator __last );
# 741 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      void



      swap ( vector & __x )

      {
 std :: swap ( this -> _M_impl . _M_start, __x . _M_impl . _M_start );
 std :: swap ( this -> _M_impl . _M_finish, __x . _M_impl . _M_finish );
 std :: swap ( this -> _M_impl . _M_end_of_storage,
    __x . _M_impl . _M_end_of_storage );



 std :: __alloc_swap < _Tp_alloc_type > :: _S_do_it ( _M_get_Tp_allocator ( ),
          __x . _M_get_Tp_allocator ( ) );
      }







      void
      clear ( )
      { _M_erase_at_end ( this -> _M_impl . _M_start ); }

    protected :




      template < typename _ForwardIterator >
        pointer
        _M_allocate_and_copy ( size_type __n,
        _ForwardIterator __first, _ForwardIterator __last )
        {
   pointer __result = this -> _M_allocate ( __n );
   try
     {
       std :: __uninitialized_copy_a ( __first, __last, __result,
       _M_get_Tp_allocator ( ) );
       return __result;
     }
   catch ( ... )
     {
       _M_deallocate ( __result, __n );
       throw;
     }
 }
# 800 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      template < typename _Integer >
        void
        _M_initialize_dispatch ( _Integer __n, _Integer __value, __true_type )
        {
   this -> _M_impl . _M_start = _M_allocate ( static_cast < size_type > ( __n ) );
   this -> _M_impl . _M_end_of_storage =
     this -> _M_impl . _M_start + static_cast < size_type > ( __n );
   _M_fill_initialize ( static_cast < size_type > ( __n ), __value );
 }


      template < typename _InputIterator >
        void
        _M_initialize_dispatch ( _InputIterator __first, _InputIterator __last,
          __false_type )
        {
   typedef typename std :: iterator_traits < _InputIterator > ::
     iterator_category _IterCategory;
   _M_range_initialize ( __first, __last, _IterCategory ( ) );
 }


      template < typename _InputIterator >
        void
        _M_range_initialize ( _InputIterator __first,
       _InputIterator __last, std :: input_iterator_tag )
        {
   for (; __first != __last; ++ __first )
     push_back ( * __first );
 }


      template < typename _ForwardIterator >
        void
        _M_range_initialize ( _ForwardIterator __first,
       _ForwardIterator __last, std :: forward_iterator_tag )
        {
   const size_type __n = std :: distance ( __first, __last );
   this -> _M_impl . _M_start = this -> _M_allocate ( __n );
   this -> _M_impl . _M_end_of_storage = this -> _M_impl . _M_start + __n;
   this -> _M_impl . _M_finish =
     std :: __uninitialized_copy_a ( __first, __last,
     this -> _M_impl . _M_start,
     _M_get_Tp_allocator ( ) );
 }



      void
      _M_fill_initialize ( size_type __n, const value_type & __value )
      {
 std :: __uninitialized_fill_n_a ( this -> _M_impl . _M_start, __n, __value,
          _M_get_Tp_allocator ( ) );
 this -> _M_impl . _M_finish = this -> _M_impl . _M_end_of_storage;
      }
# 864 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      template < typename _Integer >
        void
        _M_assign_dispatch ( _Integer __n, _Integer __val, __true_type )
        { _M_fill_assign ( __n, __val ); }


      template < typename _InputIterator >
        void
        _M_assign_dispatch ( _InputIterator __first, _InputIterator __last,
      __false_type )
        {
   typedef typename std :: iterator_traits < _InputIterator > ::
     iterator_category _IterCategory;
   _M_assign_aux ( __first, __last, _IterCategory ( ) );
 }


      template < typename _InputIterator >
        void
        _M_assign_aux ( _InputIterator __first, _InputIterator __last,
        std :: input_iterator_tag );


      template < typename _ForwardIterator >
        void
        _M_assign_aux ( _ForwardIterator __first, _ForwardIterator __last,
        std :: forward_iterator_tag );



      void
      _M_fill_assign ( size_type __n, const value_type & __val );
# 904 "/usr/include/c++/4.4/bits/stl_vector.h" 3
      template < typename _Integer >
        void
        _M_insert_dispatch ( iterator __pos, _Integer __n, _Integer __val,
      __true_type )
        { _M_fill_insert ( __pos, __n, __val ); }


      template < typename _InputIterator >
        void
        _M_insert_dispatch ( iterator __pos, _InputIterator __first,
      _InputIterator __last, __false_type )
        {
   typedef typename std :: iterator_traits < _InputIterator > ::
     iterator_category _IterCategory;
   _M_range_insert ( __pos, __first, __last, _IterCategory ( ) );
 }


      template < typename _InputIterator >
        void
        _M_range_insert ( iterator __pos, _InputIterator __first,
   _InputIterator __last, std :: input_iterator_tag );


      template < typename _ForwardIterator >
        void
        _M_range_insert ( iterator __pos, _ForwardIterator __first,
   _ForwardIterator __last, std :: forward_iterator_tag );



      void
      _M_fill_insert ( iterator __pos, size_type __n, const value_type & __x );



      void
      _M_insert_aux ( iterator __position, const value_type & __x );







      size_type
      _M_check_len ( size_type __n, const char * __s ) const
      {
 if ( max_size ( ) - size ( ) < __n )
   __throw_length_error ( ( __s ) );

 const size_type __len = size ( ) + std :: max ( size ( ), __n );
 return ( __len < size ( ) || __len > max_size ( ) ) ? max_size ( ) : __len;
      }





      void
      _M_erase_at_end ( pointer __pos )
      {
 std :: _Destroy ( __pos, this -> _M_impl . _M_finish, _M_get_Tp_allocator ( ) );
 this -> _M_impl . _M_finish = __pos;
      }
    };
# 1166 "/usr/include/c++/4.4/bits/stl_vector.h" 3
template < typename _Tp, typename _Alloc >
    inline bool
    operator == ( const vector < _Tp, _Alloc > & __x, const vector < _Tp, _Alloc > & __y )
    { return ( __x . size ( ) == __y . size ( )
       && std :: equal ( __x . begin ( ), __x . end ( ), __y . begin ( ) ) ); }
# 1183 "/usr/include/c++/4.4/bits/stl_vector.h" 3
template < typename _Tp, typename _Alloc >
    inline bool
    operator < ( const vector < _Tp, _Alloc > & __x, const vector < _Tp, _Alloc > & __y )
    { return std :: lexicographical_compare ( __x . begin ( ), __x . end ( ),
       __y . begin ( ), __y . end ( ) ); }
# 1190 "/usr/include/c++/4.4/bits/stl_vector.h" 3
template < typename _Tp, typename _Alloc >
    inline bool
    operator != ( const vector < _Tp, _Alloc > & __x, const vector < _Tp, _Alloc > & __y )
    { return ! ( __x == __y ); }
# 1196 "/usr/include/c++/4.4/bits/stl_vector.h" 3
template < typename _Tp, typename _Alloc >
    inline bool
    operator > ( const vector < _Tp, _Alloc > & __x, const vector < _Tp, _Alloc > & __y )
    { return __y < __x; }
# 1202 "/usr/include/c++/4.4/bits/stl_vector.h" 3
template < typename _Tp, typename _Alloc >
    inline bool
    operator <= ( const vector < _Tp, _Alloc > & __x, const vector < _Tp, _Alloc > & __y )
    { return ! ( __y < __x ); }
# 1208 "/usr/include/c++/4.4/bits/stl_vector.h" 3
template < typename _Tp, typename _Alloc >
    inline bool
    operator >= ( const vector < _Tp, _Alloc > & __x, const vector < _Tp, _Alloc > & __y )
    { return ! ( __x < __y ); }
# 1214 "/usr/include/c++/4.4/bits/stl_vector.h" 3
template < typename _Tp, typename _Alloc >
    inline void
    swap ( vector < _Tp, _Alloc > & __x, vector < _Tp, _Alloc > & __y )
    { __x . swap ( __y ); }
# 1231 "/usr/include/c++/4.4/bits/stl_vector.h" 3
}
# 62 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
namespace std __attribute((__visibility__("default")))
# 454 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
 __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute((__visibility__("default"))) {
# 64 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
typedef unsigned long _Bit_type;
# 65 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
enum { _S_word_bit = 64};
# 67 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
struct _Bit_reference {
# 69 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
_Bit_type *_M_p;
# 70 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
_Bit_type _M_mask;
# 72 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
_Bit_reference(_Bit_type *__x, _Bit_type __y) : _M_p(__x), _M_mask(__y)
# 73 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{ }
# 75 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
_Bit_reference() : _M_p((0)), _M_mask((0)) { }
# 77 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
operator bool() const
# 78 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{ return !(!((*(_M_p)) & (_M_mask))); }
# 81 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
_Bit_reference &operator=(bool __x)
# 82 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 83 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
if (__x) {
# 84 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
(*(_M_p)) |= (_M_mask); } else {
# 86 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
(*(_M_p)) &= (~(_M_mask)); }
# 87 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
return *this;
# 88 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 91 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
_Bit_reference &operator=(const _Bit_reference &__x)
# 92 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{ return (((*this)) = (((bool)__x))); }
# 95 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
bool operator==(const _Bit_reference &__x) const
# 96 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{ return ((bool)(*this)) == ((bool)__x); }
# 99 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
bool operator<(const _Bit_reference &__x) const
# 100 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{ return (!((bool)(*this))) && ((bool)__x); }
# 103 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
void flip()
# 104 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{ (*(_M_p)) ^= (_M_mask); }
# 105 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
};
# 107 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
struct _Bit_iterator_base : public iterator< random_access_iterator_tag, bool, long, bool *, bool &> {
# 110 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
_Bit_type *_M_p;
# 111 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
unsigned _M_offset;
# 113 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
_Bit_iterator_base(_Bit_type *__x, unsigned __y) : _M_p(__x), _M_offset(__y)
# 114 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{ }
# 117 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
void _M_bump_up()
# 118 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 119 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
if (((_M_offset)++) == (((int)_S_word_bit) - 1))
# 120 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 121 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
(_M_offset) = (0);
# 122 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
++(_M_p);
# 123 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 124 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 127 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
void _M_bump_down()
# 128 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 129 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
if (((_M_offset)--) == (0))
# 130 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 131 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
(_M_offset) = (((int)_S_word_bit) - 1);
# 132 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
--(_M_p);
# 133 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 134 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 137 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
void _M_incr(ptrdiff_t __i)
# 138 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 139 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
difference_type __n = (__i + (_M_offset));
# 140 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
(_M_p) += (__n / ((int)_S_word_bit));
# 141 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
__n = (__n % ((int)_S_word_bit));
# 142 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
if (__n < (0))
# 143 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 144 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
__n += ((int)_S_word_bit);
# 145 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
--(_M_p);
# 146 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 147 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
(_M_offset) = (static_cast< unsigned>(__n));
# 148 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 151 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
bool operator==(const _Bit_iterator_base &__i) const
# 152 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{ return ((_M_p) == (__i._M_p)) && ((_M_offset) == (__i._M_offset)); }
# 155 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
bool operator<(const _Bit_iterator_base &__i) const
# 156 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 157 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
return ((_M_p) < (__i._M_p)) || (((_M_p) == (__i._M_p)) && ((_M_offset) < (__i._M_offset)));
# 159 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 162 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
bool operator!=(const _Bit_iterator_base &__i) const
# 163 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{ return !(((*this)) == (__i)); }
# 166 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
bool operator>(const _Bit_iterator_base &__i) const
# 167 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{ return (__i < ((*this))); }
# 170 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
bool operator<=(const _Bit_iterator_base &__i) const
# 171 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{ return !(__i < ((*this))); }
# 174 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
bool operator>=(const _Bit_iterator_base &__i) const
# 175 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{ return !(((*this)) < (__i)); }
# 176 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
};
# 179 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
inline ptrdiff_t operator-(const _Bit_iterator_base &__x, const _Bit_iterator_base &__y)
# 180 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 181 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
return ((((int)_S_word_bit) * ((__x._M_p) - (__y._M_p))) + (__x._M_offset)) - (__y._M_offset);
# 183 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 185 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
struct _Bit_iterator : public _Bit_iterator_base {
# 187 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
typedef _Bit_reference reference;
# 188 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
typedef _Bit_reference *pointer;
# 189 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
typedef _Bit_iterator iterator;
# 191 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
_Bit_iterator() : _Bit_iterator_base(0, 0) { }
# 193 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
_Bit_iterator(_Bit_type *__x, unsigned __y) : _Bit_iterator_base(__x, __y)
# 194 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{ }
# 197 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
reference operator*() const
# 198 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{ return reference(_M_p, 1UL << (_M_offset)); }
# 201 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
iterator &operator++()
# 202 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 203 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
this->_M_bump_up();
# 204 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
return *this;
# 205 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 208 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
iterator operator++(int)
# 209 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 210 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
iterator __tmp = (*this);
# 211 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
this->_M_bump_up();
# 212 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
return __tmp;
# 213 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 216 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
iterator &operator--()
# 217 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 218 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
this->_M_bump_down();
# 219 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
return *this;
# 220 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 223 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
iterator operator--(int)
# 224 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 225 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
iterator __tmp = (*this);
# 226 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
this->_M_bump_down();
# 227 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
return __tmp;
# 228 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 231 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
iterator &operator+=(difference_type __i)
# 232 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 233 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
this->_M_incr(__i);
# 234 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
return *this;
# 235 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 238 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
iterator &operator-=(difference_type __i)
# 239 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 240 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
(((*this)) += ((-__i)));
# 241 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
return *this;
# 242 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 245 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
iterator operator+(difference_type __i) const
# 246 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 247 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
iterator __tmp = (*this);
# 248 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
return (__tmp += __i);
# 249 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 252 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
iterator operator-(difference_type __i) const
# 253 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 254 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
iterator __tmp = (*this);
# 255 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
return (__tmp -= __i);
# 256 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 259 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
reference operator[](difference_type __i) const
# 260 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{ return (*((((*this)) + __i))); }
# 261 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
};
# 264 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
inline _Bit_iterator operator+(ptrdiff_t __n, const _Bit_iterator &__x)
# 265 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{ return (__x + __n); }
# 267 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
struct _Bit_const_iterator : public _Bit_iterator_base {
# 269 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
typedef bool reference;
# 270 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
typedef bool const_reference;
# 271 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
typedef const bool *pointer;
# 272 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
typedef _Bit_const_iterator const_iterator;
# 274 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
_Bit_const_iterator() : _Bit_iterator_base(0, 0) { }
# 276 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
_Bit_const_iterator(_Bit_type *__x, unsigned __y) : _Bit_iterator_base(__x, __y)
# 277 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{ }
# 279 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
_Bit_const_iterator(const _Bit_iterator &__x) : _Bit_iterator_base(__x._M_p, __x._M_offset)
# 280 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{ }
# 283 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
const_reference operator*() const
# 284 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{ return _Bit_reference(_M_p, 1UL << (_M_offset)); }
# 287 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
const_iterator &operator++()
# 288 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 289 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
this->_M_bump_up();
# 290 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
return *this;
# 291 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 294 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
const_iterator operator++(int)
# 295 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 296 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
const_iterator __tmp = (*this);
# 297 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
this->_M_bump_up();
# 298 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
return __tmp;
# 299 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 302 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
const_iterator &operator--()
# 303 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 304 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
this->_M_bump_down();
# 305 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
return *this;
# 306 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 309 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
const_iterator operator--(int)
# 310 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 311 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
const_iterator __tmp = (*this);
# 312 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
this->_M_bump_down();
# 313 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
return __tmp;
# 314 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 317 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
const_iterator &operator+=(difference_type __i)
# 318 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 319 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
this->_M_incr(__i);
# 320 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
return *this;
# 321 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 324 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
const_iterator &operator-=(difference_type __i)
# 325 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 326 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
(((*this)) += ((-__i)));
# 327 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
return *this;
# 328 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 331 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
const_iterator operator+(difference_type __i) const
# 332 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 333 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
const_iterator __tmp = (*this);
# 334 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
return (__tmp += __i);
# 335 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 338 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
const_iterator operator-(difference_type __i) const
# 339 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 340 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
const_iterator __tmp = (*this);
# 341 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
return (__tmp -= __i);
# 342 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 345 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
const_reference operator[](difference_type __i) const
# 346 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{ return (*((((*this)) + __i))); }
# 347 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
};
# 350 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
inline _Bit_const_iterator operator+(ptrdiff_t __n, const _Bit_const_iterator &__x)
# 351 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{ return (__x + __n); }
# 354 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
inline void __fill_bvector(_Bit_iterator __first, _Bit_iterator __last, bool __x)
# 355 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 356 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
for (; (__first != (__last)); (++__first)) {
# 357 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
(((*__first)) = __x); }
# 358 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 361 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
inline void fill(_Bit_iterator __first, _Bit_iterator __last, const bool &__x)
# 362 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 363 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
if ((__first._M_p) != (__last._M_p))
# 364 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
{
# 365 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
std::fill((__first._M_p) + 1, __last._M_p, (__x ? (~0) : 0));
# 366 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
__fill_bvector(__first, _Bit_iterator((__first._M_p) + 1, 0), __x);
# 367 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
__fill_bvector(_Bit_iterator(__last._M_p, 0), __last, __x);
# 368 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
} else {
# 370 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
__fill_bvector(__first, __last, __x); }
# 371 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 373 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
template < typename _Alloc >
    struct _Bvector_base
    {
      typedef typename _Alloc :: template rebind < _Bit_type > :: other
        _Bit_alloc_type;

      struct _Bvector_impl
      : public _Bit_alloc_type
      {
 _Bit_iterator _M_start;
 _Bit_iterator _M_finish;
 _Bit_type * _M_end_of_storage;

 _Bvector_impl ( )
 : _Bit_alloc_type ( ), _M_start ( ), _M_finish ( ), _M_end_of_storage ( 0 )
 { }

 _Bvector_impl ( const _Bit_alloc_type & __a )
 : _Bit_alloc_type ( __a ), _M_start ( ), _M_finish ( ), _M_end_of_storage ( 0 )
 { }
      };

    public :
      typedef _Alloc allocator_type;

      _Bit_alloc_type &
      _M_get_Bit_allocator ( )
      { return * static_cast < _Bit_alloc_type * > ( & this -> _M_impl ); }

      const _Bit_alloc_type &
      _M_get_Bit_allocator ( ) const
      { return * static_cast < const _Bit_alloc_type * > ( & this -> _M_impl ); }

      allocator_type
      get_allocator ( ) const
      { return allocator_type ( _M_get_Bit_allocator ( ) ); }

      _Bvector_base ( )
      : _M_impl ( ) { }

      _Bvector_base ( const allocator_type & __a )
      : _M_impl ( __a ) { }

      ~ _Bvector_base ( )
      { this -> _M_deallocate ( ); }

    protected :
      _Bvector_impl _M_impl;

      _Bit_type *
      _M_allocate ( size_t __n )
      { return _M_impl . allocate ( ( __n + int ( _S_word_bit ) - 1 )
    / int ( _S_word_bit ) ); }

      void
      _M_deallocate ( )
      {
 if ( _M_impl . _M_start . _M_p )
   _M_impl . deallocate ( _M_impl . _M_start . _M_p,
        _M_impl . _M_end_of_storage - _M_impl . _M_start . _M_p );
      }
    };
# 449 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 454 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
namespace std __attribute((__visibility__("default")))
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
 __attribute((__visibility__("default"))) {
# 473 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
template < typename _Alloc >
  class vector < bool, _Alloc > : protected _Bvector_base < _Alloc >
  {
    typedef _Bvector_base < _Alloc > _Base;

  public :
    typedef bool value_type;
    typedef size_t size_type;
    typedef ptrdiff_t difference_type;
    typedef _Bit_reference reference;
    typedef bool const_reference;
    typedef _Bit_reference * pointer;
    typedef const bool * const_pointer;
    typedef _Bit_iterator iterator;
    typedef _Bit_const_iterator const_iterator;
    typedef std :: reverse_iterator < const_iterator > const_reverse_iterator;
    typedef std :: reverse_iterator < iterator > reverse_iterator;
    typedef _Alloc allocator_type;

    allocator_type get_allocator ( ) const
    { return _Base :: get_allocator ( ); }

  protected :
    using _Base :: _M_allocate;
    using _Base :: _M_deallocate;
    using _Base :: _M_get_Bit_allocator;

  public :
    vector ( )
    : _Base ( ) { }

    explicit
    vector ( const allocator_type & __a )
    : _Base ( __a ) { }

    explicit
    vector ( size_type __n, const bool & __value = bool ( ),
    const allocator_type & __a = allocator_type ( ) )
    : _Base ( __a )
    {
      _M_initialize ( __n );
      std :: fill ( this -> _M_impl . _M_start . _M_p, this -> _M_impl . _M_end_of_storage,
  __value ? ~ 0 : 0 );
    }

    vector ( const vector & __x )
    : _Base ( __x . _M_get_Bit_allocator ( ) )
    {
      _M_initialize ( __x . size ( ) );
      _M_copy_aligned ( __x . begin ( ), __x . end ( ), this -> _M_impl . _M_start );
    }

    template < typename _InputIterator >
      vector ( _InputIterator __first, _InputIterator __last,
      const allocator_type & __a = allocator_type ( ) )
      : _Base ( __a )
      {
 typedef typename std :: __is_integer < _InputIterator > :: __type _Integral;
 _M_initialize_dispatch ( __first, __last, _Integral ( ) );
      }

    ~ vector ( ) { }

    vector &
    operator = ( const vector & __x )
    {
      if ( & __x == this )
 return * this;
      if ( __x . size ( ) > capacity ( ) )
 {
   this -> _M_deallocate ( );
   _M_initialize ( __x . size ( ) );
 }
      this -> _M_impl . _M_finish = _M_copy_aligned ( __x . begin ( ), __x . end ( ),
      begin ( ) );
      return * this;
    }





    void
    assign ( size_type __n, const bool & __x )
    { _M_fill_assign ( __n, __x ); }

    template < typename _InputIterator >
      void
      assign ( _InputIterator __first, _InputIterator __last )
      {
 typedef typename std :: __is_integer < _InputIterator > :: __type _Integral;
 _M_assign_dispatch ( __first, __last, _Integral ( ) );
      }







    iterator
    begin ( )
    { return this -> _M_impl . _M_start; }

    const_iterator
    begin ( ) const
    { return this -> _M_impl . _M_start; }

    iterator
    end ( )
    { return this -> _M_impl . _M_finish; }

    const_iterator
    end ( ) const
    { return this -> _M_impl . _M_finish; }

    reverse_iterator
    rbegin ( )
    { return reverse_iterator ( end ( ) ); }

    const_reverse_iterator
    rbegin ( ) const
    { return const_reverse_iterator ( end ( ) ); }

    reverse_iterator
    rend ( )
    { return reverse_iterator ( begin ( ) ); }

    const_reverse_iterator
    rend ( ) const
    { return const_reverse_iterator ( begin ( ) ); }

    size_type
    size ( ) const
    { return size_type ( end ( ) - begin ( ) ); }

    size_type
    max_size ( ) const
    {
      const size_type __isize =
 __gnu_cxx :: __numeric_traits < difference_type > :: __max
 - int ( _S_word_bit ) + 1;
      const size_type __asize = _M_get_Bit_allocator ( ) . max_size ( );
      return ( __asize <= __isize / int ( _S_word_bit )
       ? __asize * int ( _S_word_bit ) : __isize );
    }

    size_type
    capacity ( ) const
    { return size_type ( const_iterator ( this -> _M_impl . _M_end_of_storage, 0 )
         - begin ( ) ); }

    bool
    empty ( ) const
    { return begin ( ) == end ( ); }

    reference
    operator [ ] ( size_type __n )
    {
      return * iterator ( this -> _M_impl . _M_start . _M_p
         + __n / int ( _S_word_bit ), __n % int ( _S_word_bit ) );
    }

    const_reference
    operator [ ] ( size_type __n ) const
    {
      return * const_iterator ( this -> _M_impl . _M_start . _M_p
        + __n / int ( _S_word_bit ), __n % int ( _S_word_bit ) );
    }

  protected :
    void
    _M_range_check ( size_type __n ) const
    {
      if ( __n >= this -> size ( ) )
        __throw_out_of_range ( ( "vector<bool>::_M_range_check" ) );
    }

  public :
    reference
    at ( size_type __n )
    { _M_range_check ( __n ); return ( * this ) [ __n ]; }

    const_reference
    at ( size_type __n ) const
    { _M_range_check ( __n ); return ( * this ) [ __n ]; }

    void
    reserve ( size_type __n );

    reference
    front ( )
    { return * begin ( ); }

    const_reference
    front ( ) const
    { return * begin ( ); }

    reference
    back ( )
    { return * ( end ( ) - 1 ); }

    const_reference
    back ( ) const
    { return * ( end ( ) - 1 ); }






    void
    data ( ) { }

    void
    push_back ( bool __x )
    {
      if ( this -> _M_impl . _M_finish . _M_p != this -> _M_impl . _M_end_of_storage )
        * this -> _M_impl . _M_finish ++ = __x;
      else
        _M_insert_aux ( end ( ), __x );
    }

    void



    swap ( vector & __x )

    {
      std :: swap ( this -> _M_impl . _M_start, __x . _M_impl . _M_start );
      std :: swap ( this -> _M_impl . _M_finish, __x . _M_impl . _M_finish );
      std :: swap ( this -> _M_impl . _M_end_of_storage,
  __x . _M_impl . _M_end_of_storage );



      std :: __alloc_swap < typename _Base :: _Bit_alloc_type > ::
 _S_do_it ( _M_get_Bit_allocator ( ), __x . _M_get_Bit_allocator ( ) );
    }


    static void
    swap ( reference __x, reference __y )
    {
      bool __tmp = __x;
      __x = __y;
      __y = __tmp;
    }

    iterator
    insert ( iterator __position, const bool & __x = bool ( ) )
    {
      const difference_type __n = __position - begin ( );
      if ( this -> _M_impl . _M_finish . _M_p != this -> _M_impl . _M_end_of_storage
   && __position == end ( ) )
        * this -> _M_impl . _M_finish ++ = __x;
      else
        _M_insert_aux ( __position, __x );
      return begin ( ) + __n;
    }

    template < typename _InputIterator >
      void
      insert ( iterator __position,
      _InputIterator __first, _InputIterator __last )
      {
 typedef typename std :: __is_integer < _InputIterator > :: __type _Integral;
 _M_insert_dispatch ( __position, __first, __last, _Integral ( ) );
      }

    void
    insert ( iterator __position, size_type __n, const bool & __x )
    { _M_fill_insert ( __position, __n, __x ); }






    void
    pop_back ( )
    { -- this -> _M_impl . _M_finish; }

    iterator
    erase ( iterator __position )
    {
      if ( __position + 1 != end ( ) )
        std :: copy ( __position + 1, end ( ), __position );
      -- this -> _M_impl . _M_finish;
      return __position;
    }

    iterator
    erase ( iterator __first, iterator __last )
    {
      _M_erase_at_end ( std :: copy ( __last, end ( ), __first ) );
      return __first;
    }

    void
    resize ( size_type __new_size, bool __x = bool ( ) )
    {
      if ( __new_size < size ( ) )
        _M_erase_at_end ( begin ( ) + difference_type ( __new_size ) );
      else
        insert ( end ( ), __new_size - size ( ), __x );
    }

    void
    flip ( )
    {
      for ( _Bit_type * __p = this -> _M_impl . _M_start . _M_p;
    __p != this -> _M_impl . _M_end_of_storage; ++ __p )
        * __p = ~ * __p;
    }

    void
    clear ( )
    { _M_erase_at_end ( begin ( ) ); }


  protected :

    iterator
    _M_copy_aligned ( const_iterator __first, const_iterator __last,
      iterator __result )
    {
      _Bit_type * __q = std :: copy ( __first . _M_p, __last . _M_p, __result . _M_p );
      return std :: copy ( const_iterator ( __last . _M_p, 0 ), __last,
         iterator ( __q, 0 ) );
    }

    void
    _M_initialize ( size_type __n )
    {
      _Bit_type * __q = this -> _M_allocate ( __n );
      this -> _M_impl . _M_end_of_storage = ( __q
      + ( ( __n + int ( _S_word_bit ) - 1 )
         / int ( _S_word_bit ) ) );
      this -> _M_impl . _M_start = iterator ( __q, 0 );
      this -> _M_impl . _M_finish = this -> _M_impl . _M_start + difference_type ( __n );
    }





    template < typename _Integer >
      void
      _M_initialize_dispatch ( _Integer __n, _Integer __x, __true_type )
      {
 _M_initialize ( static_cast < size_type > ( __n ) );
 std :: fill ( this -> _M_impl . _M_start . _M_p,
    this -> _M_impl . _M_end_of_storage, __x ? ~ 0 : 0 );
      }

    template < typename _InputIterator >
      void
      _M_initialize_dispatch ( _InputIterator __first, _InputIterator __last,
        __false_type )
      { _M_initialize_range ( __first, __last,
       std :: __iterator_category ( __first ) ); }

    template < typename _InputIterator >
      void
      _M_initialize_range ( _InputIterator __first, _InputIterator __last,
     std :: input_iterator_tag )
      {
 for (; __first != __last; ++ __first )
   push_back ( * __first );
      }

    template < typename _ForwardIterator >
      void
      _M_initialize_range ( _ForwardIterator __first, _ForwardIterator __last,
     std :: forward_iterator_tag )
      {
 const size_type __n = std :: distance ( __first, __last );
 _M_initialize ( __n );
 std :: copy ( __first, __last, this -> _M_impl . _M_start );
      }



    template < typename _Integer >
      void
      _M_assign_dispatch ( _Integer __n, _Integer __val, __true_type )
      { _M_fill_assign ( __n, __val ); }

    template < class _InputIterator >
      void
      _M_assign_dispatch ( _InputIterator __first, _InputIterator __last,
    __false_type )
      { _M_assign_aux ( __first, __last, std :: __iterator_category ( __first ) ); }

    void
    _M_fill_assign ( size_t __n, bool __x )
    {
      if ( __n > size ( ) )
 {
   std :: fill ( this -> _M_impl . _M_start . _M_p,
      this -> _M_impl . _M_end_of_storage, __x ? ~ 0 : 0 );
   insert ( end ( ), __n - size ( ), __x );
 }
      else
 {
   _M_erase_at_end ( begin ( ) + __n );
   std :: fill ( this -> _M_impl . _M_start . _M_p,
      this -> _M_impl . _M_end_of_storage, __x ? ~ 0 : 0 );
 }
    }

    template < typename _InputIterator >
      void
      _M_assign_aux ( _InputIterator __first, _InputIterator __last,
      std :: input_iterator_tag )
      {
 iterator __cur = begin ( );
 for (; __first != __last && __cur != end ( ); ++ __cur, ++ __first )
   * __cur = * __first;
 if ( __first == __last )
   _M_erase_at_end ( __cur );
 else
   insert ( end ( ), __first, __last );
      }

    template < typename _ForwardIterator >
      void
      _M_assign_aux ( _ForwardIterator __first, _ForwardIterator __last,
      std :: forward_iterator_tag )
      {
 const size_type __len = std :: distance ( __first, __last );
 if ( __len < size ( ) )
   _M_erase_at_end ( std :: copy ( __first, __last, begin ( ) ) );
 else
   {
     _ForwardIterator __mid = __first;
     std :: advance ( __mid, size ( ) );
     std :: copy ( __first, __mid, begin ( ) );
     insert ( end ( ), __mid, __last );
   }
      }





    template < typename _Integer >
      void
      _M_insert_dispatch ( iterator __pos, _Integer __n, _Integer __x,
    __true_type )
      { _M_fill_insert ( __pos, __n, __x ); }

    template < typename _InputIterator >
      void
      _M_insert_dispatch ( iterator __pos,
    _InputIterator __first, _InputIterator __last,
    __false_type )
      { _M_insert_range ( __pos, __first, __last,
   std :: __iterator_category ( __first ) ); }

    void
    _M_fill_insert ( iterator __position, size_type __n, bool __x );

    template < typename _InputIterator >
      void
      _M_insert_range ( iterator __pos, _InputIterator __first,
        _InputIterator __last, std :: input_iterator_tag )
      {
 for (; __first != __last; ++ __first )
   {
     __pos = insert ( __pos, * __first );
     ++ __pos;
   }
      }

    template < typename _ForwardIterator >
      void
      _M_insert_range ( iterator __position, _ForwardIterator __first,
        _ForwardIterator __last, std :: forward_iterator_tag );

    void
    _M_insert_aux ( iterator __position, bool __x );

    size_type
    _M_check_len ( size_type __n, const char * __s ) const
    {
      if ( max_size ( ) - size ( ) < __n )
 __throw_length_error ( ( __s ) );

      const size_type __len = size ( ) + std :: max ( size ( ), __n );
      return ( __len < size ( ) || __len > max_size ( ) ) ? max_size ( ) : __len;
    }

    void
    _M_erase_at_end ( iterator __pos )
    { this -> _M_impl . _M_finish = __pos; }
  };
# 1022 "/usr/include/c++/4.4/bits/stl_bvector.h" 3
}
# 60 "/usr/include/c++/4.4/bits/vector.tcc" 3
namespace std __attribute((__visibility__("default"))) {
# 62 "/usr/include/c++/4.4/bits/vector.tcc" 3
template < typename _Tp, typename _Alloc >
    void
    vector < _Tp, _Alloc > ::
    reserve ( size_type __n )
    {
      if ( __n > this -> max_size ( ) )
 __throw_length_error ( ( "vector::reserve" ) );
      if ( this -> capacity ( ) < __n )
 {
   const size_type __old_size = size ( );
   pointer __tmp = _M_allocate_and_copy ( __n,
   ( this -> _M_impl . _M_start ),
   ( this -> _M_impl . _M_finish ) );
   std :: _Destroy ( this -> _M_impl . _M_start, this -> _M_impl . _M_finish,
   _M_get_Tp_allocator ( ) );
   _M_deallocate ( this -> _M_impl . _M_start,
   this -> _M_impl . _M_end_of_storage
   - this -> _M_impl . _M_start );
   this -> _M_impl . _M_start = __tmp;
   this -> _M_impl . _M_finish = __tmp + __old_size;
   this -> _M_impl . _M_end_of_storage = this -> _M_impl . _M_start + __n;
 }
    }
# 104 "/usr/include/c++/4.4/bits/vector.tcc" 3
template < typename _Tp, typename _Alloc >
    typename vector < _Tp, _Alloc > :: iterator
    vector < _Tp, _Alloc > ::
    insert ( iterator __position, const value_type & __x )
    {
      const size_type __n = __position - begin ( );
      if ( this -> _M_impl . _M_finish != this -> _M_impl . _M_end_of_storage
   && __position == end ( ) )
 {
   this -> _M_impl . construct ( this -> _M_impl . _M_finish, __x );
   ++ this -> _M_impl . _M_finish;
 }
      else
 {

     _M_insert_aux ( __position, __x );
 }
      return iterator ( this -> _M_impl . _M_start + __n );
    }
# 131 "/usr/include/c++/4.4/bits/vector.tcc" 3
template < typename _Tp, typename _Alloc >
    typename vector < _Tp, _Alloc > :: iterator
    vector < _Tp, _Alloc > ::
    erase ( iterator __position )
    {
      if ( __position + 1 != end ( ) )
 std :: copy ( __position + 1, end ( ), __position );
      -- this -> _M_impl . _M_finish;
      this -> _M_impl . destroy ( this -> _M_impl . _M_finish );
      return __position;
    }
# 143 "/usr/include/c++/4.4/bits/vector.tcc" 3
template < typename _Tp, typename _Alloc >
    typename vector < _Tp, _Alloc > :: iterator
    vector < _Tp, _Alloc > ::
    erase ( iterator __first, iterator __last )
    {
      if ( __last != end ( ) )
 std :: copy ( __last, end ( ), __first );
      _M_erase_at_end ( __first . base ( ) + ( end ( ) - __last ) );
      return __first;
    }
# 154 "/usr/include/c++/4.4/bits/vector.tcc" 3
template < typename _Tp, typename _Alloc >
    vector < _Tp, _Alloc > &
    vector < _Tp, _Alloc > ::
    operator = ( const vector < _Tp, _Alloc > & __x )
    {
      if ( & __x != this )
 {
   const size_type __xlen = __x . size ( );
   if ( __xlen > capacity ( ) )
     {
       pointer __tmp = _M_allocate_and_copy ( __xlen, __x . begin ( ),
         __x . end ( ) );
       std :: _Destroy ( this -> _M_impl . _M_start, this -> _M_impl . _M_finish,
       _M_get_Tp_allocator ( ) );
       _M_deallocate ( this -> _M_impl . _M_start,
       this -> _M_impl . _M_end_of_storage
       - this -> _M_impl . _M_start );
       this -> _M_impl . _M_start = __tmp;
       this -> _M_impl . _M_end_of_storage = this -> _M_impl . _M_start + __xlen;
     }
   else if ( size ( ) >= __xlen )
     {
       std :: _Destroy ( std :: copy ( __x . begin ( ), __x . end ( ), begin ( ) ),
       end ( ), _M_get_Tp_allocator ( ) );
     }
   else
     {
       std :: copy ( __x . _M_impl . _M_start, __x . _M_impl . _M_start + size ( ),
   this -> _M_impl . _M_start );
       std :: __uninitialized_copy_a ( __x . _M_impl . _M_start + size ( ),
       __x . _M_impl . _M_finish,
       this -> _M_impl . _M_finish,
       _M_get_Tp_allocator ( ) );
     }
   this -> _M_impl . _M_finish = this -> _M_impl . _M_start + __xlen;
 }
      return * this;
    }
# 193 "/usr/include/c++/4.4/bits/vector.tcc" 3
template < typename _Tp, typename _Alloc >
    void
    vector < _Tp, _Alloc > ::
    _M_fill_assign ( size_t __n, const value_type & __val )
    {
      if ( __n > capacity ( ) )
 {
   vector __tmp ( __n, __val, _M_get_Tp_allocator ( ) );
   __tmp . swap ( * this );
 }
      else if ( __n > size ( ) )
 {
   std :: fill ( begin ( ), end ( ), __val );
   std :: __uninitialized_fill_n_a ( this -> _M_impl . _M_finish,
     __n - size ( ), __val,
     _M_get_Tp_allocator ( ) );
   this -> _M_impl . _M_finish += __n - size ( );
 }
      else
        _M_erase_at_end ( std :: fill_n ( this -> _M_impl . _M_start, __n, __val ) );
    }
# 215 "/usr/include/c++/4.4/bits/vector.tcc" 3
template < typename _Tp, typename _Alloc >
    template < typename _InputIterator >
      void
      vector < _Tp, _Alloc > ::
      _M_assign_aux ( _InputIterator __first, _InputIterator __last,
      std :: input_iterator_tag )
      {
 pointer __cur ( this -> _M_impl . _M_start );
 for (; __first != __last && __cur != this -> _M_impl . _M_finish;
      ++ __cur, ++ __first )
   * __cur = * __first;
 if ( __first == __last )
   _M_erase_at_end ( __cur );
 else
   insert ( end ( ), __first, __last );
      }
# 232 "/usr/include/c++/4.4/bits/vector.tcc" 3
template < typename _Tp, typename _Alloc >
    template < typename _ForwardIterator >
      void
      vector < _Tp, _Alloc > ::
      _M_assign_aux ( _ForwardIterator __first, _ForwardIterator __last,
      std :: forward_iterator_tag )
      {
 const size_type __len = std :: distance ( __first, __last );

 if ( __len > capacity ( ) )
   {
     pointer __tmp ( _M_allocate_and_copy ( __len, __first, __last ) );
     std :: _Destroy ( this -> _M_impl . _M_start, this -> _M_impl . _M_finish,
     _M_get_Tp_allocator ( ) );
     _M_deallocate ( this -> _M_impl . _M_start,
     this -> _M_impl . _M_end_of_storage
     - this -> _M_impl . _M_start );
     this -> _M_impl . _M_start = __tmp;
     this -> _M_impl . _M_finish = this -> _M_impl . _M_start + __len;
     this -> _M_impl . _M_end_of_storage = this -> _M_impl . _M_finish;
   }
 else if ( size ( ) >= __len )
   _M_erase_at_end ( std :: copy ( __first, __last, this -> _M_impl . _M_start ) );
 else
   {
     _ForwardIterator __mid = __first;
     std :: advance ( __mid, size ( ) );
     std :: copy ( __first, __mid, this -> _M_impl . _M_start );
     this -> _M_impl . _M_finish =
       std :: __uninitialized_copy_a ( __mid, __last,
       this -> _M_impl . _M_finish,
       _M_get_Tp_allocator ( ) );
   }
      }
# 293 "/usr/include/c++/4.4/bits/vector.tcc" 3
template < typename _Tp, typename _Alloc >
    void
    vector < _Tp, _Alloc > ::
    _M_insert_aux ( iterator __position, const _Tp & __x )

    {
      if ( this -> _M_impl . _M_finish != this -> _M_impl . _M_end_of_storage )
 {
   this -> _M_impl . construct ( this -> _M_impl . _M_finish,
      ( * ( this -> _M_impl . _M_finish - 1 ) ) );

   ++ this -> _M_impl . _M_finish;

   _Tp __x_copy = __x;

   std :: copy_backward ( __position . base ( ), this -> _M_impl . _M_finish - 2, this -> _M_impl . _M_finish - 1 );



   * __position = __x_copy;



 }
      else
 {
   const size_type __len =
     _M_check_len ( size_type ( 1 ), "vector::_M_insert_aux" );
   const size_type __elems_before = __position - begin ( );
   pointer __new_start ( this -> _M_allocate ( __len ) );
   pointer __new_finish ( __new_start );
   try
     {




       this -> _M_impl . construct ( __new_start + __elems_before,



                               __x );

       __new_finish = 0;

       __new_finish =
  std :: __uninitialized_move_a ( this -> _M_impl . _M_start,
         __position . base ( ), __new_start,
         _M_get_Tp_allocator ( ) );
       ++ __new_finish;

       __new_finish =
  std :: __uninitialized_move_a ( __position . base ( ),
         this -> _M_impl . _M_finish,
         __new_finish,
         _M_get_Tp_allocator ( ) );
     }
          catch ( ... )
     {
       if ( ! __new_finish )
  this -> _M_impl . destroy ( __new_start + __elems_before );
       else
  std :: _Destroy ( __new_start, __new_finish, _M_get_Tp_allocator ( ) );
       _M_deallocate ( __new_start, __len );
       throw;
     }
   std :: _Destroy ( this -> _M_impl . _M_start, this -> _M_impl . _M_finish,
   _M_get_Tp_allocator ( ) );
   _M_deallocate ( this -> _M_impl . _M_start,
   this -> _M_impl . _M_end_of_storage
   - this -> _M_impl . _M_start );
   this -> _M_impl . _M_start = __new_start;
   this -> _M_impl . _M_finish = __new_finish;
   this -> _M_impl . _M_end_of_storage = __new_start + __len;
 }
    }
# 370 "/usr/include/c++/4.4/bits/vector.tcc" 3
template < typename _Tp, typename _Alloc >
    void
    vector < _Tp, _Alloc > ::
    _M_fill_insert ( iterator __position, size_type __n, const value_type & __x )
    {
      if ( __n != 0 )
 {
   if ( size_type ( this -> _M_impl . _M_end_of_storage
   - this -> _M_impl . _M_finish ) >= __n )
     {
       value_type __x_copy = __x;
       const size_type __elems_after = end ( ) - __position;
       pointer __old_finish ( this -> _M_impl . _M_finish );
       if ( __elems_after > __n )
  {
    std :: __uninitialized_move_a ( this -> _M_impl . _M_finish - __n,
           this -> _M_impl . _M_finish,
           this -> _M_impl . _M_finish,
           _M_get_Tp_allocator ( ) );
    this -> _M_impl . _M_finish += __n;
    std :: copy_backward ( __position . base ( ), __old_finish - __n, __old_finish );

    std :: fill ( __position . base ( ), __position . base ( ) + __n,
       __x_copy );
  }
       else
  {
    std :: __uninitialized_fill_n_a ( this -> _M_impl . _M_finish,
      __n - __elems_after,
      __x_copy,
      _M_get_Tp_allocator ( ) );
    this -> _M_impl . _M_finish += __n - __elems_after;
    std :: __uninitialized_move_a ( __position . base ( ), __old_finish,
           this -> _M_impl . _M_finish,
           _M_get_Tp_allocator ( ) );
    this -> _M_impl . _M_finish += __elems_after;
    std :: fill ( __position . base ( ), __old_finish, __x_copy );
  }
     }
   else
     {
       const size_type __len =
  _M_check_len ( __n, "vector::_M_fill_insert" );
       const size_type __elems_before = __position - begin ( );
       pointer __new_start ( this -> _M_allocate ( __len ) );
       pointer __new_finish ( __new_start );
       try
  {

    std :: __uninitialized_fill_n_a ( __new_start + __elems_before,
      __n, __x,
      _M_get_Tp_allocator ( ) );
    __new_finish = 0;

    __new_finish =
      std :: __uninitialized_move_a ( this -> _M_impl . _M_start,
      __position . base ( ),
      __new_start,
      _M_get_Tp_allocator ( ) );
    __new_finish += __n;

    __new_finish =
      std :: __uninitialized_move_a ( __position . base ( ),
      this -> _M_impl . _M_finish,
      __new_finish,
      _M_get_Tp_allocator ( ) );
  }
       catch ( ... )
  {
    if ( ! __new_finish )
      std :: _Destroy ( __new_start + __elems_before,
      __new_start + __elems_before + __n,
      _M_get_Tp_allocator ( ) );
    else
      std :: _Destroy ( __new_start, __new_finish,
      _M_get_Tp_allocator ( ) );
    _M_deallocate ( __new_start, __len );
    throw;
  }
       std :: _Destroy ( this -> _M_impl . _M_start, this -> _M_impl . _M_finish,
       _M_get_Tp_allocator ( ) );
       _M_deallocate ( this -> _M_impl . _M_start,
       this -> _M_impl . _M_end_of_storage
       - this -> _M_impl . _M_start );
       this -> _M_impl . _M_start = __new_start;
       this -> _M_impl . _M_finish = __new_finish;
       this -> _M_impl . _M_end_of_storage = __new_start + __len;
     }
 }
    }
# 461 "/usr/include/c++/4.4/bits/vector.tcc" 3
template < typename _Tp, typename _Alloc >
    template < typename _InputIterator >
      void
      vector < _Tp, _Alloc > ::
      _M_range_insert ( iterator __pos, _InputIterator __first,
        _InputIterator __last, std :: input_iterator_tag )
      {
 for (; __first != __last; ++ __first )
   {
     __pos = insert ( __pos, * __first );
     ++ __pos;
   }
      }
# 475 "/usr/include/c++/4.4/bits/vector.tcc" 3
template < typename _Tp, typename _Alloc >
    template < typename _ForwardIterator >
      void
      vector < _Tp, _Alloc > ::
      _M_range_insert ( iterator __position, _ForwardIterator __first,
        _ForwardIterator __last, std :: forward_iterator_tag )
      {
 if ( __first != __last )
   {
     const size_type __n = std :: distance ( __first, __last );
     if ( size_type ( this -> _M_impl . _M_end_of_storage
     - this -> _M_impl . _M_finish ) >= __n )
       {
  const size_type __elems_after = end ( ) - __position;
  pointer __old_finish ( this -> _M_impl . _M_finish );
  if ( __elems_after > __n )
    {
      std :: __uninitialized_move_a ( this -> _M_impl . _M_finish - __n,
      this -> _M_impl . _M_finish,
      this -> _M_impl . _M_finish,
      _M_get_Tp_allocator ( ) );
      this -> _M_impl . _M_finish += __n;
      std :: copy_backward ( __position . base ( ), __old_finish - __n, __old_finish );

      std :: copy ( __first, __last, __position );
    }
  else
    {
      _ForwardIterator __mid = __first;
      std :: advance ( __mid, __elems_after );
      std :: __uninitialized_copy_a ( __mid, __last,
      this -> _M_impl . _M_finish,
      _M_get_Tp_allocator ( ) );
      this -> _M_impl . _M_finish += __n - __elems_after;
      std :: __uninitialized_move_a ( __position . base ( ),
      __old_finish,
      this -> _M_impl . _M_finish,
      _M_get_Tp_allocator ( ) );
      this -> _M_impl . _M_finish += __elems_after;
      std :: copy ( __first, __mid, __position );
    }
       }
     else
       {
  const size_type __len =
    _M_check_len ( __n, "vector::_M_range_insert" );
  pointer __new_start ( this -> _M_allocate ( __len ) );
  pointer __new_finish ( __new_start );
  try
    {
      __new_finish =
        std :: __uninitialized_move_a ( this -> _M_impl . _M_start,
        __position . base ( ),
        __new_start,
        _M_get_Tp_allocator ( ) );
      __new_finish =
        std :: __uninitialized_copy_a ( __first, __last,
        __new_finish,
        _M_get_Tp_allocator ( ) );
      __new_finish =
        std :: __uninitialized_move_a ( __position . base ( ),
        this -> _M_impl . _M_finish,
        __new_finish,
        _M_get_Tp_allocator ( ) );
    }
  catch ( ... )
    {
      std :: _Destroy ( __new_start, __new_finish,
      _M_get_Tp_allocator ( ) );
      _M_deallocate ( __new_start, __len );
      throw;
    }
  std :: _Destroy ( this -> _M_impl . _M_start, this -> _M_impl . _M_finish,
         _M_get_Tp_allocator ( ) );
  _M_deallocate ( this -> _M_impl . _M_start,
         this -> _M_impl . _M_end_of_storage
         - this -> _M_impl . _M_start );
  this -> _M_impl . _M_start = __new_start;
  this -> _M_impl . _M_finish = __new_finish;
  this -> _M_impl . _M_end_of_storage = __new_start + __len;
       }
   }
      }
# 562 "/usr/include/c++/4.4/bits/vector.tcc" 3
template < typename _Alloc >
    void
    vector < bool, _Alloc > ::
    reserve ( size_type __n )
    {
      if ( __n > this -> max_size ( ) )
 __throw_length_error ( ( "vector::reserve" ) );
      if ( this -> capacity ( ) < __n )
 {
   _Bit_type * __q = this -> _M_allocate ( __n );
   this -> _M_impl . _M_finish = _M_copy_aligned ( begin ( ), end ( ),
          iterator ( __q, 0 ) );
   this -> _M_deallocate ( );
   this -> _M_impl . _M_start = iterator ( __q, 0 );
   this -> _M_impl . _M_end_of_storage = ( __q + ( __n + int ( _S_word_bit ) - 1 )
          / int ( _S_word_bit ) );
 }
    }
# 581 "/usr/include/c++/4.4/bits/vector.tcc" 3
template < typename _Alloc >
    void
    vector < bool, _Alloc > ::
    _M_fill_insert ( iterator __position, size_type __n, bool __x )
    {
      if ( __n == 0 )
 return;
      if ( capacity ( ) - size ( ) >= __n )
 {
   std :: copy_backward ( __position, end ( ),
        this -> _M_impl . _M_finish + difference_type ( __n ) );
   std :: fill ( __position, __position + difference_type ( __n ), __x );
   this -> _M_impl . _M_finish += difference_type ( __n );
 }
      else
 {
   const size_type __len =
     _M_check_len ( __n, "vector<bool>::_M_fill_insert" );
   _Bit_type * __q = this -> _M_allocate ( __len );
   iterator __i = _M_copy_aligned ( begin ( ), __position,
      iterator ( __q, 0 ) );
   std :: fill ( __i, __i + difference_type ( __n ), __x );
   this -> _M_impl . _M_finish = std :: copy ( __position, end ( ),
           __i + difference_type ( __n ) );
   this -> _M_deallocate ( );
   this -> _M_impl . _M_end_of_storage = ( __q + ( ( __len
           + int ( _S_word_bit ) - 1 )
          / int ( _S_word_bit ) ) );
   this -> _M_impl . _M_start = iterator ( __q, 0 );
 }
    }
# 613 "/usr/include/c++/4.4/bits/vector.tcc" 3
template < typename _Alloc >
    template < typename _ForwardIterator >
      void
      vector < bool, _Alloc > ::
      _M_insert_range ( iterator __position, _ForwardIterator __first,
        _ForwardIterator __last, std :: forward_iterator_tag )
      {
 if ( __first != __last )
   {
     size_type __n = std :: distance ( __first, __last );
     if ( capacity ( ) - size ( ) >= __n )
       {
  std :: copy_backward ( __position, end ( ),
       this -> _M_impl . _M_finish
       + difference_type ( __n ) );
  std :: copy ( __first, __last, __position );
  this -> _M_impl . _M_finish += difference_type ( __n );
       }
     else
       {
  const size_type __len =
    _M_check_len ( __n, "vector<bool>::_M_insert_range" );
  _Bit_type * __q = this -> _M_allocate ( __len );
  iterator __i = _M_copy_aligned ( begin ( ), __position,
            iterator ( __q, 0 ) );
  __i = std :: copy ( __first, __last, __i );
  this -> _M_impl . _M_finish = std :: copy ( __position, end ( ), __i );
  this -> _M_deallocate ( );
  this -> _M_impl . _M_end_of_storage = ( __q
         + ( ( __len
             + int ( _S_word_bit ) - 1 )
            / int ( _S_word_bit ) ) );
  this -> _M_impl . _M_start = iterator ( __q, 0 );
       }
   }
      }
# 650 "/usr/include/c++/4.4/bits/vector.tcc" 3
template < typename _Alloc >
    void
    vector < bool, _Alloc > ::
    _M_insert_aux ( iterator __position, bool __x )
    {
      if ( this -> _M_impl . _M_finish . _M_p != this -> _M_impl . _M_end_of_storage )
 {
   std :: copy_backward ( __position, this -> _M_impl . _M_finish,
        this -> _M_impl . _M_finish + 1 );
   * __position = __x;
   ++ this -> _M_impl . _M_finish;
 }
      else
 {
   const size_type __len =
     _M_check_len ( size_type ( 1 ), "vector<bool>::_M_insert_aux" );
   _Bit_type * __q = this -> _M_allocate ( __len );
   iterator __i = _M_copy_aligned ( begin ( ), __position,
      iterator ( __q, 0 ) );
   * __i ++ = __x;
   this -> _M_impl . _M_finish = std :: copy ( __position, end ( ), __i );
   this -> _M_deallocate ( );
   this -> _M_impl . _M_end_of_storage = ( __q + ( ( __len
           + int ( _S_word_bit ) - 1 )
          / int ( _S_word_bit ) ) );
   this -> _M_impl . _M_start = iterator ( __q, 0 );
 }
    }
# 679 "/usr/include/c++/4.4/bits/vector.tcc" 3
}
# 149 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef unsigned long long CUdeviceptr; }
# 156 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef int CUdevice; }
# 157 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUctx_st *CUcontext; }
# 158 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUmod_st *CUmodule; }
# 159 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUfunc_st *CUfunction; }
# 160 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUarray_st *CUarray; }
# 161 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUtexref_st *CUtexref; }
# 162 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUsurfref_st *CUsurfref; }
# 163 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef CUevent_st *CUevent; }
# 164 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef CUstream_st *CUstream; }
# 165 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef struct CUgraphicsResource_st *CUgraphicsResource; }
# 169 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 167 "/usr/local/cuda/bin/../include/cuda.h"
struct CUuuid_st {
# 168 "/usr/local/cuda/bin/../include/cuda.h"
char bytes[16];
# 169 "/usr/local/cuda/bin/../include/cuda.h"
} CUuuid; }
# 184 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 174 "/usr/local/cuda/bin/../include/cuda.h"
enum CUctx_flags_enum {
# 175 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_SCHED_AUTO,
# 176 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_SCHED_SPIN,
# 177 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_SCHED_YIELD,
# 178 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_SCHED_BLOCKING_SYNC = 4,
# 179 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_BLOCKING_SYNC = 4,
# 180 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_SCHED_MASK = 7,
# 181 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_MAP_HOST,
# 182 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_LMEM_RESIZE_TO_MAX = 16,
# 183 "/usr/local/cuda/bin/../include/cuda.h"
CU_CTX_FLAGS_MASK = 31
# 184 "/usr/local/cuda/bin/../include/cuda.h"
} CUctx_flags; }
# 193 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 189 "/usr/local/cuda/bin/../include/cuda.h"
enum CUevent_flags_enum {
# 190 "/usr/local/cuda/bin/../include/cuda.h"
CU_EVENT_DEFAULT,
# 191 "/usr/local/cuda/bin/../include/cuda.h"
CU_EVENT_BLOCKING_SYNC,
# 192 "/usr/local/cuda/bin/../include/cuda.h"
CU_EVENT_DISABLE_TIMING
# 193 "/usr/local/cuda/bin/../include/cuda.h"
} CUevent_flags; }
# 207 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 198 "/usr/local/cuda/bin/../include/cuda.h"
enum CUarray_format_enum {
# 199 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT8 = 1,
# 200 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT16,
# 201 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT32,
# 202 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_SIGNED_INT8 = 8,
# 203 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_SIGNED_INT16,
# 204 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_SIGNED_INT32,
# 205 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_HALF = 16,
# 206 "/usr/local/cuda/bin/../include/cuda.h"
CU_AD_FORMAT_FLOAT = 32
# 207 "/usr/local/cuda/bin/../include/cuda.h"
} CUarray_format; }
# 217 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 212 "/usr/local/cuda/bin/../include/cuda.h"
enum CUaddress_mode_enum {
# 213 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_ADDRESS_MODE_WRAP,
# 214 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_ADDRESS_MODE_CLAMP,
# 215 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_ADDRESS_MODE_MIRROR,
# 216 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_ADDRESS_MODE_BORDER
# 217 "/usr/local/cuda/bin/../include/cuda.h"
} CUaddress_mode; }
# 225 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 222 "/usr/local/cuda/bin/../include/cuda.h"
enum CUfilter_mode_enum {
# 223 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_FILTER_MODE_POINT,
# 224 "/usr/local/cuda/bin/../include/cuda.h"
CU_TR_FILTER_MODE_LINEAR
# 225 "/usr/local/cuda/bin/../include/cuda.h"
} CUfilter_mode; }
# 280 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 230 "/usr/local/cuda/bin/../include/cuda.h"
enum CUdevice_attribute_enum {
# 231 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK = 1,
# 232 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_X,
# 233 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Y,
# 234 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Z,
# 235 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_X,
# 236 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Y,
# 237 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Z,
# 238 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK,
# 239 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_SHARED_MEMORY_PER_BLOCK = 8,
# 240 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_TOTAL_CONSTANT_MEMORY,
# 241 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_WARP_SIZE,
# 242 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_PITCH,
# 243 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_BLOCK,
# 244 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_REGISTERS_PER_BLOCK = 12,
# 245 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_CLOCK_RATE,
# 246 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_TEXTURE_ALIGNMENT,
# 247 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_GPU_OVERLAP,
# 248 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT,
# 249 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_KERNEL_EXEC_TIMEOUT,
# 250 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_INTEGRATED,
# 251 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_CAN_MAP_HOST_MEMORY,
# 252 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_COMPUTE_MODE,
# 253 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_WIDTH,
# 254 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_WIDTH,
# 255 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_HEIGHT,
# 256 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_WIDTH,
# 257 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_HEIGHT,
# 258 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_DEPTH,
# 259 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_WIDTH,
# 260 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_HEIGHT,
# 261 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_LAYERS,
# 262 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_WIDTH = 27,
# 263 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_HEIGHT,
# 264 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_NUMSLICES,
# 265 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_SURFACE_ALIGNMENT,
# 266 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_CONCURRENT_KERNELS,
# 267 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_ECC_ENABLED,
# 268 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_PCI_BUS_ID,
# 269 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_PCI_DEVICE_ID,
# 270 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_TCC_DRIVER,
# 271 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MEMORY_CLOCK_RATE,
# 272 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_GLOBAL_MEMORY_BUS_WIDTH,
# 273 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_L2_CACHE_SIZE,
# 274 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_MULTIPROCESSOR,
# 275 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_ASYNC_ENGINE_COUNT,
# 276 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_UNIFIED_ADDRESSING,
# 277 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_LAYERED_WIDTH,
# 278 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_LAYERED_LAYERS,
# 279 "/usr/local/cuda/bin/../include/cuda.h"
CU_DEVICE_ATTRIBUTE_PCI_DOMAIN_ID = 50
# 280 "/usr/local/cuda/bin/../include/cuda.h"
} CUdevice_attribute; }
# 296 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 285 "/usr/local/cuda/bin/../include/cuda.h"
struct CUdevprop_st {
# 286 "/usr/local/cuda/bin/../include/cuda.h"
int maxThreadsPerBlock;
# 287 "/usr/local/cuda/bin/../include/cuda.h"
int maxThreadsDim[3];
# 288 "/usr/local/cuda/bin/../include/cuda.h"
int maxGridSize[3];
# 289 "/usr/local/cuda/bin/../include/cuda.h"
int sharedMemPerBlock;
# 290 "/usr/local/cuda/bin/../include/cuda.h"
int totalConstantMemory;
# 291 "/usr/local/cuda/bin/../include/cuda.h"
int SIMDWidth;
# 292 "/usr/local/cuda/bin/../include/cuda.h"
int memPitch;
# 293 "/usr/local/cuda/bin/../include/cuda.h"
int regsPerBlock;
# 294 "/usr/local/cuda/bin/../include/cuda.h"
int clockRate;
# 295 "/usr/local/cuda/bin/../include/cuda.h"
int textureAlign;
# 296 "/usr/local/cuda/bin/../include/cuda.h"
} CUdevprop; }
# 306 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 301 "/usr/local/cuda/bin/../include/cuda.h"
enum CUpointer_attribute_enum {
# 302 "/usr/local/cuda/bin/../include/cuda.h"
CU_POINTER_ATTRIBUTE_CONTEXT = 1,
# 303 "/usr/local/cuda/bin/../include/cuda.h"
CU_POINTER_ATTRIBUTE_MEMORY_TYPE,
# 304 "/usr/local/cuda/bin/../include/cuda.h"
CU_POINTER_ATTRIBUTE_DEVICE_POINTER,
# 305 "/usr/local/cuda/bin/../include/cuda.h"
CU_POINTER_ATTRIBUTE_HOST_POINTER
# 306 "/usr/local/cuda/bin/../include/cuda.h"
} CUpointer_attribute; }
# 361 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 311 "/usr/local/cuda/bin/../include/cuda.h"
enum CUfunction_attribute_enum {
# 317 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_MAX_THREADS_PER_BLOCK,
# 324 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_SHARED_SIZE_BYTES,
# 330 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_CONST_SIZE_BYTES,
# 335 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_LOCAL_SIZE_BYTES,
# 340 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_NUM_REGS,
# 349 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_PTX_VERSION,
# 358 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_BINARY_VERSION,
# 360 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_ATTRIBUTE_MAX
# 361 "/usr/local/cuda/bin/../include/cuda.h"
} CUfunction_attribute; }
# 370 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 366 "/usr/local/cuda/bin/../include/cuda.h"
enum CUfunc_cache_enum {
# 367 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_CACHE_PREFER_NONE,
# 368 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_CACHE_PREFER_SHARED,
# 369 "/usr/local/cuda/bin/../include/cuda.h"
CU_FUNC_CACHE_PREFER_L1
# 370 "/usr/local/cuda/bin/../include/cuda.h"
} CUfunc_cache; }
# 380 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 375 "/usr/local/cuda/bin/../include/cuda.h"
enum CUmemorytype_enum {
# 376 "/usr/local/cuda/bin/../include/cuda.h"
CU_MEMORYTYPE_HOST = 1,
# 377 "/usr/local/cuda/bin/../include/cuda.h"
CU_MEMORYTYPE_DEVICE,
# 378 "/usr/local/cuda/bin/../include/cuda.h"
CU_MEMORYTYPE_ARRAY,
# 379 "/usr/local/cuda/bin/../include/cuda.h"
CU_MEMORYTYPE_UNIFIED
# 380 "/usr/local/cuda/bin/../include/cuda.h"
} CUmemorytype; }
# 390 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 385 "/usr/local/cuda/bin/../include/cuda.h"
enum CUcomputemode_enum {
# 386 "/usr/local/cuda/bin/../include/cuda.h"
CU_COMPUTEMODE_DEFAULT,
# 387 "/usr/local/cuda/bin/../include/cuda.h"
CU_COMPUTEMODE_EXCLUSIVE,
# 388 "/usr/local/cuda/bin/../include/cuda.h"
CU_COMPUTEMODE_PROHIBITED,
# 389 "/usr/local/cuda/bin/../include/cuda.h"
CU_COMPUTEMODE_EXCLUSIVE_PROCESS
# 390 "/usr/local/cuda/bin/../include/cuda.h"
} CUcomputemode; }
# 482 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 395 "/usr/local/cuda/bin/../include/cuda.h"
enum CUjit_option_enum {
# 401 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_MAX_REGISTERS,
# 414 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_THREADS_PER_BLOCK,
# 421 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_WALL_TIME,
# 429 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_INFO_LOG_BUFFER,
# 437 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_INFO_LOG_BUFFER_SIZE_BYTES,
# 445 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER,
# 453 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES,
# 460 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_OPTIMIZATION_LEVEL,
# 467 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_TARGET_FROM_CUCONTEXT,
# 473 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_TARGET,
# 480 "/usr/local/cuda/bin/../include/cuda.h"
CU_JIT_FALLBACK_STRATEGY
# 482 "/usr/local/cuda/bin/../include/cuda.h"
} CUjit_option; }
# 495 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 487 "/usr/local/cuda/bin/../include/cuda.h"
enum CUjit_target_enum {
# 489 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_10,
# 490 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_11,
# 491 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_12,
# 492 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_13,
# 493 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_20,
# 494 "/usr/local/cuda/bin/../include/cuda.h"
CU_TARGET_COMPUTE_21
# 495 "/usr/local/cuda/bin/../include/cuda.h"
} CUjit_target; }
# 506 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 500 "/usr/local/cuda/bin/../include/cuda.h"
enum CUjit_fallback_enum {
# 502 "/usr/local/cuda/bin/../include/cuda.h"
CU_PREFER_PTX,
# 504 "/usr/local/cuda/bin/../include/cuda.h"
CU_PREFER_BINARY
# 506 "/usr/local/cuda/bin/../include/cuda.h"
} CUjit_fallback; }
# 516 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 511 "/usr/local/cuda/bin/../include/cuda.h"
enum CUgraphicsRegisterFlags_enum {
# 512 "/usr/local/cuda/bin/../include/cuda.h"
CU_GRAPHICS_REGISTER_FLAGS_NONE,
# 513 "/usr/local/cuda/bin/../include/cuda.h"
CU_GRAPHICS_REGISTER_FLAGS_READ_ONLY,
# 514 "/usr/local/cuda/bin/../include/cuda.h"
CU_GRAPHICS_REGISTER_FLAGS_WRITE_DISCARD,
# 515 "/usr/local/cuda/bin/../include/cuda.h"
CU_GRAPHICS_REGISTER_FLAGS_SURFACE_LDST = 4
# 516 "/usr/local/cuda/bin/../include/cuda.h"
} CUgraphicsRegisterFlags; }
# 525 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 521 "/usr/local/cuda/bin/../include/cuda.h"
enum CUgraphicsMapResourceFlags_enum {
# 522 "/usr/local/cuda/bin/../include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_NONE,
# 523 "/usr/local/cuda/bin/../include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_READ_ONLY,
# 524 "/usr/local/cuda/bin/../include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_WRITE_DISCARD
# 525 "/usr/local/cuda/bin/../include/cuda.h"
} CUgraphicsMapResourceFlags; }
# 537 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 530 "/usr/local/cuda/bin/../include/cuda.h"
enum CUarray_cubemap_face_enum {
# 531 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_X,
# 532 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_X,
# 533 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_Y,
# 534 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_Y,
# 535 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_Z,
# 536 "/usr/local/cuda/bin/../include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_Z
# 537 "/usr/local/cuda/bin/../include/cuda.h"
} CUarray_cubemap_face; }
# 546 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 542 "/usr/local/cuda/bin/../include/cuda.h"
enum CUlimit_enum {
# 543 "/usr/local/cuda/bin/../include/cuda.h"
CU_LIMIT_STACK_SIZE,
# 544 "/usr/local/cuda/bin/../include/cuda.h"
CU_LIMIT_PRINTF_FIFO_SIZE,
# 545 "/usr/local/cuda/bin/../include/cuda.h"
CU_LIMIT_MALLOC_HEAP_SIZE
# 546 "/usr/local/cuda/bin/../include/cuda.h"
} CUlimit; }
# 828 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 551 "/usr/local/cuda/bin/../include/cuda.h"
enum cudaError_enum {
# 557 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_SUCCESS,
# 563 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_VALUE,
# 569 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_OUT_OF_MEMORY,
# 575 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_INITIALIZED,
# 580 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_DEINITIALIZED,
# 586 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_PROFILER_DISABLED,
# 591 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_PROFILER_NOT_INITIALIZED,
# 596 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_PROFILER_ALREADY_STARTED,
# 601 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_PROFILER_ALREADY_STOPPED,
# 606 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NO_DEVICE = 100,
# 612 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_DEVICE,
# 619 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_IMAGE = 200,
# 629 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_CONTEXT,
# 638 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_CONTEXT_ALREADY_CURRENT,
# 643 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_MAP_FAILED = 205,
# 648 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_UNMAP_FAILED,
# 654 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_ARRAY_IS_MAPPED,
# 659 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_ALREADY_MAPPED,
# 667 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NO_BINARY_FOR_GPU,
# 672 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_ALREADY_ACQUIRED,
# 677 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_MAPPED,
# 683 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_MAPPED_AS_ARRAY,
# 689 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_MAPPED_AS_POINTER,
# 695 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_ECC_UNCORRECTABLE,
# 701 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_UNSUPPORTED_LIMIT,
# 708 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_CONTEXT_ALREADY_IN_USE,
# 713 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_SOURCE = 300,
# 718 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_FILE_NOT_FOUND,
# 723 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_SHARED_OBJECT_SYMBOL_NOT_FOUND,
# 728 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_SHARED_OBJECT_INIT_FAILED,
# 733 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_OPERATING_SYSTEM,
# 740 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_INVALID_HANDLE = 400,
# 747 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_FOUND = 500,
# 756 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_NOT_READY = 600,
# 767 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_LAUNCH_FAILED = 700,
# 778 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_LAUNCH_OUT_OF_RESOURCES,
# 789 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_LAUNCH_TIMEOUT,
# 795 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_LAUNCH_INCOMPATIBLE_TEXTURING,
# 802 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_PEER_ACCESS_ALREADY_ENABLED,
# 809 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_PEER_ACCESS_NOT_ENABLED,
# 815 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_PRIMARY_CONTEXT_ACTIVE = 708,
# 822 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_CONTEXT_IS_DESTROYED,
# 827 "/usr/local/cuda/bin/../include/cuda.h"
CUDA_ERROR_UNKNOWN = 999
# 828 "/usr/local/cuda/bin/../include/cuda.h"
} CUresult; }
# 890 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 869 "/usr/local/cuda/bin/../include/cuda.h"
struct CUDA_MEMCPY2D_st {
# 870 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcXInBytes;
# 871 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcY;
# 873 "/usr/local/cuda/bin/../include/cuda.h"
CUmemorytype srcMemoryType;
# 874 "/usr/local/cuda/bin/../include/cuda.h"
const void *srcHost;
# 875 "/usr/local/cuda/bin/../include/cuda.h"
CUdeviceptr srcDevice;
# 876 "/usr/local/cuda/bin/../include/cuda.h"
CUarray srcArray;
# 877 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcPitch;
# 879 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstXInBytes;
# 880 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstY;
# 882 "/usr/local/cuda/bin/../include/cuda.h"
CUmemorytype dstMemoryType;
# 883 "/usr/local/cuda/bin/../include/cuda.h"
void *dstHost;
# 884 "/usr/local/cuda/bin/../include/cuda.h"
CUdeviceptr dstDevice;
# 885 "/usr/local/cuda/bin/../include/cuda.h"
CUarray dstArray;
# 886 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstPitch;
# 888 "/usr/local/cuda/bin/../include/cuda.h"
size_t WidthInBytes;
# 889 "/usr/local/cuda/bin/../include/cuda.h"
size_t Height;
# 890 "/usr/local/cuda/bin/../include/cuda.h"
} CUDA_MEMCPY2D; }
# 923 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 895 "/usr/local/cuda/bin/../include/cuda.h"
struct CUDA_MEMCPY3D_st {
# 896 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcXInBytes;
# 897 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcY;
# 898 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcZ;
# 899 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcLOD;
# 900 "/usr/local/cuda/bin/../include/cuda.h"
CUmemorytype srcMemoryType;
# 901 "/usr/local/cuda/bin/../include/cuda.h"
const void *srcHost;
# 902 "/usr/local/cuda/bin/../include/cuda.h"
CUdeviceptr srcDevice;
# 903 "/usr/local/cuda/bin/../include/cuda.h"
CUarray srcArray;
# 904 "/usr/local/cuda/bin/../include/cuda.h"
void *reserved0;
# 905 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcPitch;
# 906 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcHeight;
# 908 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstXInBytes;
# 909 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstY;
# 910 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstZ;
# 911 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstLOD;
# 912 "/usr/local/cuda/bin/../include/cuda.h"
CUmemorytype dstMemoryType;
# 913 "/usr/local/cuda/bin/../include/cuda.h"
void *dstHost;
# 914 "/usr/local/cuda/bin/../include/cuda.h"
CUdeviceptr dstDevice;
# 915 "/usr/local/cuda/bin/../include/cuda.h"
CUarray dstArray;
# 916 "/usr/local/cuda/bin/../include/cuda.h"
void *reserved1;
# 917 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstPitch;
# 918 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstHeight;
# 920 "/usr/local/cuda/bin/../include/cuda.h"
size_t WidthInBytes;
# 921 "/usr/local/cuda/bin/../include/cuda.h"
size_t Height;
# 922 "/usr/local/cuda/bin/../include/cuda.h"
size_t Depth;
# 923 "/usr/local/cuda/bin/../include/cuda.h"
} CUDA_MEMCPY3D; }
# 956 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 928 "/usr/local/cuda/bin/../include/cuda.h"
struct CUDA_MEMCPY3D_PEER_st {
# 929 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcXInBytes;
# 930 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcY;
# 931 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcZ;
# 932 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcLOD;
# 933 "/usr/local/cuda/bin/../include/cuda.h"
CUmemorytype srcMemoryType;
# 934 "/usr/local/cuda/bin/../include/cuda.h"
const void *srcHost;
# 935 "/usr/local/cuda/bin/../include/cuda.h"
CUdeviceptr srcDevice;
# 936 "/usr/local/cuda/bin/../include/cuda.h"
CUarray srcArray;
# 937 "/usr/local/cuda/bin/../include/cuda.h"
CUcontext srcContext;
# 938 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcPitch;
# 939 "/usr/local/cuda/bin/../include/cuda.h"
size_t srcHeight;
# 941 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstXInBytes;
# 942 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstY;
# 943 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstZ;
# 944 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstLOD;
# 945 "/usr/local/cuda/bin/../include/cuda.h"
CUmemorytype dstMemoryType;
# 946 "/usr/local/cuda/bin/../include/cuda.h"
void *dstHost;
# 947 "/usr/local/cuda/bin/../include/cuda.h"
CUdeviceptr dstDevice;
# 948 "/usr/local/cuda/bin/../include/cuda.h"
CUarray dstArray;
# 949 "/usr/local/cuda/bin/../include/cuda.h"
CUcontext dstContext;
# 950 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstPitch;
# 951 "/usr/local/cuda/bin/../include/cuda.h"
size_t dstHeight;
# 953 "/usr/local/cuda/bin/../include/cuda.h"
size_t WidthInBytes;
# 954 "/usr/local/cuda/bin/../include/cuda.h"
size_t Height;
# 955 "/usr/local/cuda/bin/../include/cuda.h"
size_t Depth;
# 956 "/usr/local/cuda/bin/../include/cuda.h"
} CUDA_MEMCPY3D_PEER; }
# 968 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 961 "/usr/local/cuda/bin/../include/cuda.h"
struct CUDA_ARRAY_DESCRIPTOR_st {
# 963 "/usr/local/cuda/bin/../include/cuda.h"
size_t Width;
# 964 "/usr/local/cuda/bin/../include/cuda.h"
size_t Height;
# 966 "/usr/local/cuda/bin/../include/cuda.h"
CUarray_format Format;
# 967 "/usr/local/cuda/bin/../include/cuda.h"
unsigned NumChannels;
# 968 "/usr/local/cuda/bin/../include/cuda.h"
} CUDA_ARRAY_DESCRIPTOR; }
# 982 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" { typedef
# 973 "/usr/local/cuda/bin/../include/cuda.h"
struct CUDA_ARRAY3D_DESCRIPTOR_st {
# 975 "/usr/local/cuda/bin/../include/cuda.h"
size_t Width;
# 976 "/usr/local/cuda/bin/../include/cuda.h"
size_t Height;
# 977 "/usr/local/cuda/bin/../include/cuda.h"
size_t Depth;
# 979 "/usr/local/cuda/bin/../include/cuda.h"
CUarray_format Format;
# 980 "/usr/local/cuda/bin/../include/cuda.h"
unsigned NumChannels;
# 981 "/usr/local/cuda/bin/../include/cuda.h"
unsigned Flags;
# 982 "/usr/local/cuda/bin/../include/cuda.h"
} CUDA_ARRAY3D_DESCRIPTOR; }
# 1095 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuInit(unsigned );
# 1122 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDriverGetVersion(int * );
# 1160 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGet(CUdevice * , int );
# 1186 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGetCount(int * );
# 1215 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGetName(char * , int , CUdevice );
# 1244 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceComputeCapability(int * , int * , CUdevice );
# 1272 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceTotalMem_v2(size_t * , CUdevice );
# 1332 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGetProperties(CUdevprop * , CUdevice );
# 1444 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceGetAttribute(int * , CUdevice_attribute , CUdevice );
# 1544 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxCreate_v2(CUcontext * , unsigned , CUdevice );
# 1583 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxDestroy_v2(CUcontext );
# 1633 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxAttach(CUcontext * , unsigned );
# 1668 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxDetach(CUcontext );
# 1704 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxPushCurrent_v2(CUcontext );
# 1737 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxPopCurrent_v2(CUcontext * );
# 1763 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxSetCurrent(CUcontext );
# 1782 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxGetCurrent(CUcontext * );
# 1811 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxGetDevice(CUdevice * );
# 1839 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxSynchronize();
# 1900 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxSetLimit(CUlimit , size_t );
# 1933 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxGetLimit(size_t * , CUlimit );
# 1974 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxGetCacheConfig(CUfunc_cache * );
# 2022 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxSetCacheConfig(CUfunc_cache );
# 2057 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxGetApiVersion(CUcontext , unsigned * );
# 2106 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoad(CUmodule * , const char * );
# 2140 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoadData(CUmodule * , const void * );
# 2219 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoadDataEx(CUmodule * , const void * , unsigned , CUjit_option * , void ** );
# 2259 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleLoadFatBinary(CUmodule * , const void * );
# 2284 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleUnload(CUmodule );
# 2314 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleGetFunction(CUfunction * , CUmodule , const char * );
# 2348 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleGetGlobal_v2(CUdeviceptr * , size_t * , CUmodule , const char * );
# 2382 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleGetTexRef(CUtexref * , CUmodule , const char * );
# 2413 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuModuleGetSurfRef(CUsurfref * , CUmodule , const char * );
# 2456 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemGetInfo_v2(size_t * , size_t * );
# 2489 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemAlloc_v2(CUdeviceptr * , size_t );
# 2550 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemAllocPitch_v2(CUdeviceptr * , size_t * , size_t , size_t , unsigned );
# 2579 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemFree_v2(CUdeviceptr );
# 2612 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemGetAddressRange_v2(CUdeviceptr * , size_t * , CUdeviceptr );
# 2658 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemAllocHost_v2(void ** , size_t );
# 2688 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemFreeHost(void * );
# 2770 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemHostAlloc(void ** , size_t , unsigned );
# 2808 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemHostGetDevicePointer_v2(CUdeviceptr * , void * , unsigned );
# 2833 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemHostGetFlags(unsigned * , void * );
# 2896 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemHostRegister(void * , size_t , unsigned );
# 2919 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemHostUnregister(void * );
# 2955 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy(CUdeviceptr , CUdeviceptr , size_t );
# 2988 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyPeer(CUdeviceptr , CUcontext , CUdeviceptr , CUcontext , size_t );
# 3026 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoD_v2(CUdeviceptr , const void * , size_t );
# 3059 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoH_v2(void * , CUdeviceptr , size_t );
# 3092 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoD_v2(CUdeviceptr , CUdeviceptr , size_t );
# 3126 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoA_v2(CUarray , size_t , CUdeviceptr , size_t );
# 3162 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyAtoD_v2(CUdeviceptr , CUarray , size_t , size_t );
# 3196 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoA_v2(CUarray , size_t , const void * , size_t );
# 3230 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyAtoH_v2(void * , CUarray , size_t , size_t );
# 3268 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyAtoA_v2(CUarray , size_t , CUarray , size_t , size_t );
# 3428 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy2D_v2(const CUDA_MEMCPY2D * );
# 3586 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy2DUnaligned_v2(const CUDA_MEMCPY2D * );
# 3753 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy3D_v2(const CUDA_MEMCPY3D * );
# 3784 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy3DPeer(const CUDA_MEMCPY3D_PEER * );
# 3824 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyAsync(CUdeviceptr , CUdeviceptr , size_t , CUstream );
# 3855 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyPeerAsync(CUdeviceptr , CUcontext , CUdeviceptr , CUcontext , size_t , CUstream );
# 3897 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoDAsync_v2(CUdeviceptr , const void * , size_t , CUstream );
# 3937 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoHAsync_v2(void * , CUdeviceptr , size_t , CUstream );
# 3974 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyDtoDAsync_v2(CUdeviceptr , CUdeviceptr , size_t , CUstream );
# 4016 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyHtoAAsync_v2(CUarray , size_t , const void * , size_t , CUstream );
# 4058 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpyAtoHAsync_v2(void * , CUarray , size_t , size_t , CUstream );
# 4229 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy2DAsync_v2(const CUDA_MEMCPY2D * , CUstream );
# 4404 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy3DAsync_v2(const CUDA_MEMCPY3D * , CUstream );
# 4429 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemcpy3DPeerAsync(const CUDA_MEMCPY3D_PEER * , CUstream );
# 4464 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD8_v2(CUdeviceptr , unsigned char , size_t );
# 4497 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD16_v2(CUdeviceptr , unsigned short , size_t );
# 4530 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD32_v2(CUdeviceptr , unsigned , size_t );
# 4568 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D8_v2(CUdeviceptr , size_t , unsigned char , size_t , size_t );
# 4606 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D16_v2(CUdeviceptr , size_t , unsigned short , size_t , size_t );
# 4644 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D32_v2(CUdeviceptr , size_t , unsigned , size_t , size_t );
# 4681 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD8Async(CUdeviceptr , unsigned char , size_t , CUstream );
# 4718 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD16Async(CUdeviceptr , unsigned short , size_t , CUstream );
# 4754 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD32Async(CUdeviceptr , unsigned , size_t , CUstream );
# 4796 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D8Async(CUdeviceptr , size_t , unsigned char , size_t , size_t , CUstream );
# 4838 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D16Async(CUdeviceptr , size_t , unsigned short , size_t , size_t , CUstream );
# 4880 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuMemsetD2D32Async(CUdeviceptr , size_t , unsigned , size_t , size_t , CUstream );
# 4983 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArrayCreate_v2(CUarray * , const CUDA_ARRAY_DESCRIPTOR * );
# 5016 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArrayGetDescriptor_v2(CUDA_ARRAY_DESCRIPTOR * , CUarray );
# 5047 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArrayDestroy(CUarray );
# 5155 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArray3DCreate_v2(CUarray * , const CUDA_ARRAY3D_DESCRIPTOR * );
# 5191 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuArray3DGetDescriptor_v2(CUDA_ARRAY3D_DESCRIPTOR * , CUarray );
# 5398 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuPointerGetAttribute(void * , CUpointer_attribute , CUdeviceptr );
# 5435 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamCreate(CUstream * , unsigned );
# 5477 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamWaitEvent(CUstream , CUevent , unsigned );
# 5501 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamQuery(CUstream );
# 5526 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamSynchronize(CUstream );
# 5554 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuStreamDestroy_v2(CUstream );
# 5603 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventCreate(CUevent * , unsigned );
# 5641 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventRecord(CUevent , CUstream );
# 5672 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventQuery(CUevent );
# 5706 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventSynchronize(CUevent );
# 5735 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventDestroy_v2(CUevent );
# 5779 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuEventElapsedTime(float * , CUevent , CUevent );
# 5842 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncGetAttribute(int * , CUfunction_attribute , CUfunction );
# 5883 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncSetCacheConfig(CUfunction , CUfunc_cache );
# 5999 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuLaunchKernel(CUfunction , unsigned , unsigned , unsigned , unsigned , unsigned , unsigned , unsigned , CUstream , void ** , void ** );
# 6055 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncSetBlockShape(CUfunction , int , int , int );
# 6089 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuFuncSetSharedSize(CUfunction , unsigned );
# 6121 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetSize(CUfunction , unsigned );
# 6154 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSeti(CUfunction , int , unsigned );
# 6187 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetf(CUfunction , int , float );
# 6222 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetv(CUfunction , int , void * , unsigned );
# 6259 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuLaunch(CUfunction );
# 6298 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuLaunchGrid(CUfunction , int , int );
# 6342 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuLaunchGridAsync(CUfunction , int , int , CUstream );
# 6367 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuParamSetTexRef(CUfunction , int , CUtexref );
# 6408 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetArray(CUtexref , CUarray , unsigned );
# 6446 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetAddress_v2(size_t * , CUtexref , CUdeviceptr , size_t );
# 6487 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetAddress2D_v2(CUtexref , const CUDA_ARRAY_DESCRIPTOR * , CUdeviceptr , size_t );
# 6516 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetFormat(CUtexref , CUarray_format , int );
# 6556 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetAddressMode(CUtexref , int , CUaddress_mode );
# 6589 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetFilterMode(CUtexref , CUfilter_mode );
# 6621 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefSetFlags(CUtexref , unsigned );
# 6647 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetAddress_v2(CUdeviceptr * , CUtexref );
# 6673 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetArray(CUarray * , CUtexref );
# 6699 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetAddressMode(CUaddress_mode * , CUtexref , int );
# 6723 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetFilterMode(CUfilter_mode * , CUtexref );
# 6749 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetFormat(CUarray_format * , int * , CUtexref );
# 6772 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefGetFlags(unsigned * , CUtexref );
# 6806 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefCreate(CUtexref * );
# 6826 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuTexRefDestroy(CUtexref );
# 6864 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuSurfRefSetArray(CUsurfref , CUarray , unsigned );
# 6885 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuSurfRefGetArray(CUarray * , CUsurfref );
# 6923 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuDeviceCanAccessPeer(int * , CUdevice , CUdevice );
# 6966 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxEnablePeerAccess(CUcontext , unsigned );
# 6991 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuCtxDisablePeerAccess(CUcontext );
# 7032 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsUnregisterResource(CUgraphicsResource );
# 7070 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsSubResourceGetMappedArray(CUarray * , CUgraphicsResource , unsigned , unsigned );
# 7104 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsResourceGetMappedPointer_v2(CUdeviceptr * , size_t * , CUgraphicsResource );
# 7145 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsResourceSetMapFlags(CUgraphicsResource , unsigned );
# 7183 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsMapResources(unsigned , CUgraphicsResource * , CUstream );
# 7218 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGraphicsUnmapResources(unsigned , CUgraphicsResource * , CUstream );
# 7222 "/usr/local/cuda/bin/../include/cuda.h"
extern "C" CUresult cuGetExportTable(const void ** , const CUuuid * );
# 30 "nn_cuda.cu"
typedef
# 26 "nn_cuda.cu"
struct latLong {
# 28 "nn_cuda.cu"
float lat;
# 29 "nn_cuda.cu"
float lng;
# 30 "nn_cuda.cu"
} LatLong;
# 36 "nn_cuda.cu"
typedef
# 32 "nn_cuda.cu"
struct record {
# 34 "nn_cuda.cu"
char recString[53];
# 35 "nn_cuda.cu"
float distance;
# 36 "nn_cuda.cu"
} Record;
# 38 "nn_cuda.cu"
int loadData(char * , std::vector< record, std::allocator< record> > & , std::vector< latLong, std::allocator< latLong> > & );
# 39 "nn_cuda.cu"
void findLowest(std::vector< record, std::allocator< record> > & , float * , int , int );
# 40 "nn_cuda.cu"
void printUsage();
# 41 "nn_cuda.cu"
int parseCommandline(int , char * [], char * , int * , float * , float * , int * , int * , int * , int * );
# 49 "nn_cuda.cu"
void euclid(LatLong *d_locations, float *d_distances, int numRecords, float lat, float lng) ;
# 64 "nn_cuda.cu"
int main(int argc, char *argv[])
# 65 "nn_cuda.cu"
{
# 66 "nn_cuda.cu"
int i = 0;
# 67 "nn_cuda.cu"
float lat, lng;
# 68 "nn_cuda.cu"
int quiet = 0, timing = 0, platform = 0, device = 0;
# 70 "nn_cuda.cu"
std::vector< record, std::allocator< record> > records;
# 71 "nn_cuda.cu"
std::vector< latLong, std::allocator< latLong> > locations;
# 72 "nn_cuda.cu"
char filename[100];
# 73 "nn_cuda.cu"
int resultsCount = 10;
# 76 "nn_cuda.cu"
if (parseCommandline(argc, argv, filename, &resultsCount, &lat, &lng, &quiet, &timing, &platform, &device))
# 77 "nn_cuda.cu"
{
# 78 "nn_cuda.cu"
printUsage();
# 79 "nn_cuda.cu"
return 0;
# 80 "nn_cuda.cu"
}
# 82 "nn_cuda.cu"
int numRecords = loadData(filename, records, locations);
# 83 "nn_cuda.cu"
if (resultsCount > numRecords) { resultsCount = numRecords; }
# 90 "nn_cuda.cu"
float *distances;
# 92 "nn_cuda.cu"
LatLong *d_locations;
# 93 "nn_cuda.cu"
float *d_distances;
# 97 "nn_cuda.cu"
cudaDeviceProp deviceProp;
# 98 "nn_cuda.cu"
cudaGetDeviceProperties(&deviceProp, 0);
# 99 "nn_cuda.cu"
cudaThreadSynchronize();
# 100 "nn_cuda.cu"
unsigned long maxGridX = ((deviceProp.maxGridSize)[0]);
# 101 "nn_cuda.cu"
unsigned long threadsPerBlock = (((deviceProp.maxThreadsPerBlock) > 256) ? 256 : (deviceProp.maxThreadsPerBlock));
# 102 "nn_cuda.cu"
size_t totalDeviceMemory;
# 103 "nn_cuda.cu"
size_t freeDeviceMemory;
# 104 "nn_cuda.cu"
cudaMemGetInfo(&freeDeviceMemory, &totalDeviceMemory);
# 105 "nn_cuda.cu"
cudaThreadSynchronize();
# 106 "nn_cuda.cu"
unsigned long usableDeviceMemory = ((freeDeviceMemory * (85)) / (100));
# 107 "nn_cuda.cu"
unsigned long maxThreads = (usableDeviceMemory / (12));
# 108 "nn_cuda.cu"
if (numRecords > maxThreads)
# 109 "nn_cuda.cu"
{
# 110 "nn_cuda.cu"
fprintf(stderr, "Error: Input too large.\n");
# 111 "nn_cuda.cu"
exit(1);
# 112 "nn_cuda.cu"
}
# 113 "nn_cuda.cu"
unsigned long blocks = (((numRecords + threadsPerBlock) - (1)) / threadsPerBlock);
# 114 "nn_cuda.cu"
unsigned long gridY = (((blocks + maxGridX) - (1)) / maxGridX);
# 115 "nn_cuda.cu"
unsigned long gridX = (((blocks + gridY) - (1)) / gridY);
# 117 "nn_cuda.cu"
dim3 gridDim(gridX, gridY);
# 119 "nn_cuda.cu"
if (false)
# 120 "nn_cuda.cu"
{
# 121 "nn_cuda.cu"
printf("totalDeviceMemory: %lu\n", (unsigned long)totalDeviceMemory);
# 122 "nn_cuda.cu"
printf("freeDeviceMemory: %lu\n", (unsigned long)freeDeviceMemory);
# 123 "nn_cuda.cu"
printf("usableDeviceMemory: %lu\n", (unsigned long)usableDeviceMemory);
# 124 "nn_cuda.cu"
printf("maxGridX: %lu\n", (unsigned long)maxGridX);
# 125 "nn_cuda.cu"
printf("deviceProp.maxThreadsPerBlock: %lu\n", (unsigned long)(deviceProp.maxThreadsPerBlock));
# 126 "nn_cuda.cu"
printf("threadsPerBlock: %lu\n", (unsigned long)threadsPerBlock);
# 127 "nn_cuda.cu"
printf("maxThreads: %lu\n", (unsigned long)maxThreads);
# 128 "nn_cuda.cu"
printf("blocks: %lu\n", (unsigned long)blocks);
# 129 "nn_cuda.cu"
printf("gridY: %lu\n", (unsigned long)gridY);
# 130 "nn_cuda.cu"
printf("gridX: %lu\n", (unsigned long)gridX);
# 131 "nn_cuda.cu"
}
# 136 "nn_cuda.cu"
distances = ((float *)malloc(sizeof(float) * numRecords));
# 137 "nn_cuda.cu"
cudaMalloc((void **)(&d_locations), sizeof(LatLong) * numRecords);
# 138 "nn_cuda.cu"
cudaMalloc((void **)(&d_distances), sizeof(float) * numRecords);
# 143 "nn_cuda.cu"
cudaMemcpy(d_locations, &locations[(0)], sizeof(LatLong) * numRecords, cudaMemcpyHostToDevice);
# 148 "nn_cuda.cu"
cudaConfigureCall(gridDim, threadsPerBlock) ? ((void)0) : euclid(d_locations, d_distances, numRecords, lat, lng);
# 149 "nn_cuda.cu"
cudaThreadSynchronize();
# 152 "nn_cuda.cu"
cudaMemcpy(distances, d_distances, sizeof(float) * numRecords, cudaMemcpyDeviceToHost);
# 155 "nn_cuda.cu"
findLowest(records, distances, numRecords, resultsCount);
# 158 "nn_cuda.cu"
if (!(quiet)) {
# 159 "nn_cuda.cu"
for (i = 0; i < resultsCount; i++) {
# 160 "nn_cuda.cu"
printf("%s --> Distance=%f\n", records[(i)].recString, records[(i)].distance);
# 161 "nn_cuda.cu"
} }
# 162 "nn_cuda.cu"
free(distances);
# 164 "nn_cuda.cu"
cudaFree(d_locations);
# 165 "nn_cuda.cu"
cudaFree(d_distances); return 0;
# 167 "nn_cuda.cu"
}
# 169 "nn_cuda.cu"
int loadData(char *filename, std::vector< record, std::allocator< record> > &records, std::vector< latLong, std::allocator< latLong> > &locations) {
# 170 "nn_cuda.cu"
FILE *flist, *fp;
# 171 "nn_cuda.cu"
int i = 0;
# 172 "nn_cuda.cu"
char dbname[64];
# 173 "nn_cuda.cu"
int recNum = 0;
# 177 "nn_cuda.cu"
flist = fopen(filename, "r");
# 178 "nn_cuda.cu"
while (!(feof(flist))) {
# 184 "nn_cuda.cu"
if (fscanf(flist, "%s\n", dbname) != 1) {
# 185 "nn_cuda.cu"
fprintf(stderr, "error reading filelist\n");
# 186 "nn_cuda.cu"
exit(0);
# 187 "nn_cuda.cu"
}
# 188 "nn_cuda.cu"
fp = fopen(dbname, "r");
# 189 "nn_cuda.cu"
if (!(fp)) {
# 190 "nn_cuda.cu"
printf("error opening a db\n");
# 191 "nn_cuda.cu"
exit(1);
# 192 "nn_cuda.cu"
}
# 194 "nn_cuda.cu"
while (!(feof(fp))) {
# 195 "nn_cuda.cu"
Record record;
# 196 "nn_cuda.cu"
LatLong latLong;
# 197 "nn_cuda.cu"
fgets(record.recString, 49, fp);
# 198 "nn_cuda.cu"
fgetc(fp);
# 199 "nn_cuda.cu"
if (feof(fp)) { break; }
# 202 "nn_cuda.cu"
char substr[6];
# 204 "nn_cuda.cu"
for (i = 0; i < 5; i++) { ((substr)[i]) = (*(((record.recString) + i) + 28)); }
# 205 "nn_cuda.cu"
((substr)[5]) = '\000';
# 206 "nn_cuda.cu"
(latLong.lat) = (atof(substr));
# 208 "nn_cuda.cu"
for (i = 0; i < 5; i++) { ((substr)[i]) = (*(((record.recString) + i) + 33)); }
# 209 "nn_cuda.cu"
((substr)[5]) = '\000';
# 210 "nn_cuda.cu"
(latLong.lng) = (atof(substr));
# 212 "nn_cuda.cu"
locations.push_back(latLong);
# 213 "nn_cuda.cu"
records.push_back(record);
# 214 "nn_cuda.cu"
recNum++;
# 215 "nn_cuda.cu"
}
# 216 "nn_cuda.cu"
fclose(fp);
# 217 "nn_cuda.cu"
}
# 218 "nn_cuda.cu"
fclose(flist);
# 220 "nn_cuda.cu"
return recNum;
# 221 "nn_cuda.cu"
}
# 223 "nn_cuda.cu"
void findLowest(std::vector< record, std::allocator< record> > &records, float *distances, int numRecords, int topN) {
# 224 "nn_cuda.cu"
int i, j;
# 225 "nn_cuda.cu"
float val;
# 226 "nn_cuda.cu"
int minLoc;
# 227 "nn_cuda.cu"
Record *tempRec;
# 228 "nn_cuda.cu"
float tempDist;
# 230 "nn_cuda.cu"
for (i = 0; i < topN; i++) {
# 231 "nn_cuda.cu"
minLoc = i;
# 232 "nn_cuda.cu"
for (j = i; j < numRecords; j++) {
# 233 "nn_cuda.cu"
val = (distances[j]);
# 234 "nn_cuda.cu"
if (val < (distances[minLoc])) { minLoc = j; }
# 235 "nn_cuda.cu"
}
# 237 "nn_cuda.cu"
tempRec = (&records[(i)]);
# 238 "nn_cuda.cu"
records[(i)] = records[(minLoc)];
# 239 "nn_cuda.cu"
records[(minLoc)] = (*tempRec);
# 241 "nn_cuda.cu"
tempDist = (distances[i]);
# 242 "nn_cuda.cu"
(distances[i]) = (distances[minLoc]);
# 243 "nn_cuda.cu"
(distances[minLoc]) = tempDist;
# 246 "nn_cuda.cu"
(records[(i)].distance) = (distances[i]);
# 247 "nn_cuda.cu"
}
# 248 "nn_cuda.cu"
}
# 250 "nn_cuda.cu"
int parseCommandline(int argc, char *argv[], char *filename, int *r, float *lat, float *lng, int *
# 251 "nn_cuda.cu"
q, int *t, int *p, int *d) {
# 252 "nn_cuda.cu"
int i;
# 253 "nn_cuda.cu"
if (argc < 2) { return 1; }
# 254 "nn_cuda.cu"
strncpy(filename, argv[1], 100);
# 255 "nn_cuda.cu"
char flag;
# 257 "nn_cuda.cu"
for (i = 1; i < argc; i++) {
# 258 "nn_cuda.cu"
if (((argv[i])[0]) == ('-')) {
# 259 "nn_cuda.cu"
flag = ((argv[i])[1]);
# 260 "nn_cuda.cu"
switch (flag) {
# 261 "nn_cuda.cu"
case 'r':
# 262 "nn_cuda.cu"
i++;
# 263 "nn_cuda.cu"
(*r) = atoi(argv[i]);
# 264 "nn_cuda.cu"
break;
# 265 "nn_cuda.cu"
case 'l':
# 266 "nn_cuda.cu"
if (((argv[i])[2]) == ('a')) {
# 267 "nn_cuda.cu"
(*lat) = (atof(argv[i + 1]));
# 268 "nn_cuda.cu"
} else
# 269 "nn_cuda.cu"
{
# 270 "nn_cuda.cu"
(*lng) = (atof(argv[i + 1]));
# 271 "nn_cuda.cu"
}
# 272 "nn_cuda.cu"
i++;
# 273 "nn_cuda.cu"
break;
# 274 "nn_cuda.cu"
case 'h':
# 275 "nn_cuda.cu"
return 1;
# 276 "nn_cuda.cu"
case 'q':
# 277 "nn_cuda.cu"
(*q) = 1;
# 278 "nn_cuda.cu"
break;
# 279 "nn_cuda.cu"
case 't':
# 280 "nn_cuda.cu"
(*t) = 1;
# 281 "nn_cuda.cu"
break;
# 282 "nn_cuda.cu"
case 'p':
# 283 "nn_cuda.cu"
i++;
# 284 "nn_cuda.cu"
(*p) = atoi(argv[i]);
# 285 "nn_cuda.cu"
break;
# 286 "nn_cuda.cu"
case 'd':
# 287 "nn_cuda.cu"
i++;
# 288 "nn_cuda.cu"
(*d) = atoi(argv[i]);
# 289 "nn_cuda.cu"
break;
# 290 "nn_cuda.cu"
}
# 291 "nn_cuda.cu"
}
# 292 "nn_cuda.cu"
}
# 293 "nn_cuda.cu"
if ((((*d) >= 0) && ((*p) < 0)) || (((*p) >= 0) && ((*d) < 0))) {
# 294 "nn_cuda.cu"
return 1; }
# 295 "nn_cuda.cu"
return 0;
# 296 "nn_cuda.cu"
}
# 298 "nn_cuda.cu"
void printUsage() {
# 299 "nn_cuda.cu"
printf("Nearest Neighbor Usage\n");
# 300 "nn_cuda.cu"
printf("\n");
# 301 "nn_cuda.cu"
printf("nearestNeighbor [filename] -r [int] -lat [float] -lng [float] [-hqt] [-p [int] -d [int]]\n");
# 302 "nn_cuda.cu"
printf("\n");
# 303 "nn_cuda.cu"
printf("example:\n");
# 304 "nn_cuda.cu"
printf("$ ./nearestNeighbor filelist.txt -r 5 -lat 30 -lng 90\n");
# 305 "nn_cuda.cu"
printf("\n");
# 306 "nn_cuda.cu"
printf("filename     the filename that lists the data input files\n");
# 307 "nn_cuda.cu"
printf("-r [int]     the number of records to return (default: 10)\n");
# 308 "nn_cuda.cu"
printf("-lat [float] the latitude for nearest neighbors (default: 0)\n");
# 309 "nn_cuda.cu"
printf("-lng [float] the longitude for nearest neighbors (default: 0)\n");
# 310 "nn_cuda.cu"
printf("\n");
# 311 "nn_cuda.cu"
printf("-h, --help   Display the help file\n");
# 312 "nn_cuda.cu"
printf("-q           Quiet mode. Suppress all text output.\n");
# 313 "nn_cuda.cu"
printf("-t           Print timing information.\n");
# 314 "nn_cuda.cu"
printf("\n");
# 315 "nn_cuda.cu"
printf("-p [int]     Choose the platform (must choose both platform and device)\n");
# 316 "nn_cuda.cu"
printf("-d [int]     Choose the device (must choose both platform and device)\n");
# 317 "nn_cuda.cu"
printf("\n");
# 318 "nn_cuda.cu"
printf("\n");
# 319 "nn_cuda.cu"
printf("Notes: 1. The filename is required as the first parameter.\n");
# 320 "nn_cuda.cu"
printf("       2. If you declare either the device or the platform,\n");
# 321 "nn_cuda.cu"
printf("          you must declare both.\n\n");
# 322 "nn_cuda.cu"
}
# 1 "/tmp/tmpxft_00006b7a_00000000-1_nn_cuda.cudafe1.stub.c"
# 1 "/tmp/tmpxft_00006b7a_00000000-1_nn_cuda.cudafe1.stub.c" 1
# 1 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 1
# 74 "/usr/local/cuda/bin/../include/crt/host_runtime.h"
template <typename T>
static inline void *__cudaAddressOf(T &val)
{
    return (void *)(&(const_cast<char &>(reinterpret_cast<const volatile char &>(val))));
}
# 103 "/usr/local/cuda/bin/../include/crt/host_runtime.h"
extern "C" {

extern void** __cudaRegisterFatBinary(
  void *fatCubin
);

extern void __cudaUnregisterFatBinary(
  void **fatCubinHandle
);

extern void __cudaRegisterVar(
        void **fatCubinHandle,
        char *hostVar,
        char *deviceAddress,
  const char *deviceName,
        int ext,
        int size,
        int constant,
        int global
);

extern void __cudaRegisterTexture(
        void **fatCubinHandle,
  const struct textureReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int norm,
        int ext
);

extern void __cudaRegisterSurface(
        void **fatCubinHandle,
  const struct surfaceReference *hostVar,
  const void **deviceAddress,
  const char *deviceName,
        int dim,
        int ext
);

extern void __cudaRegisterFunction(
        void **fatCubinHandle,
  const char *hostFun,
        char *deviceFun,
  const char *deviceName,
        int thread_limit,
        uint3 *tid,
        uint3 *bid,
        dim3 *bDim,
        dim3 *gDim,
        int *wSize
);



extern int atexit(void(*)(void)) throw();







}

static void **__cudaFatCubinHandle;

static void __cudaUnregisterBinaryUtil(void)
{
  __cudaUnregisterFatBinary(__cudaFatCubinHandle);
}

# 1 "/usr/local/cuda/bin/../include/common_functions.h" 1
# 147 "/usr/local/cuda/bin/../include/common_functions.h"
# 1 "/usr/local/cuda/bin/../include/math_functions.h" 1 3
# 1064 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/math_constants.h" 1 3
# 1065 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 3135 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/crt/func_macro.h" 1 3
# 3136 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 4849 "/usr/local/cuda/bin/../include/math_functions.h" 3
inline double rsqrt(double a)
{
  return 1.0 / sqrt(a);
}

inline double rcbrt(double a)
{
  double s, t;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return 1.0 / a;
  }
  s = fabs(a);
  t = exp2(-3.3333333333333333e-1 * log2(s));
  t = ((t*t) * (-s*t) + 1.0) * (3.3333333333333333e-1*t) + t;



  if (__signbit(a))

  {
    t = -t;
  }
  return t;
}

inline double sinpi(double a)
{
  int n;

  if (__isnan(a)) {
    return a + a;
  }
  if (a == 0.0 || __isinf(a)) {
    return sin (a);
  }
  if (a == floor(a)) {
    return ((a / 1.0e308) / 1.0e308) / 1.0e308;
  }
  a = remquo (a, 0.5, &n);
  a = a * 3.1415926535897931e+0;
  if (n & 1) {
    a = cos (a);
  } else {
    a = sin (a);
  }
  if (n & 2) {
    a = -a;
  }
  return a;
}

inline double cospi(double a)
{
  int n;

  if (__isnan(a)) {
    return a + a;
  }
  if (__isinf(a)) {
    return cos (a);
  }
  if (fabs(a) > 9.0071992547409920e+015) {
    a = 0.0;
  }
  a = remquo (a, 0.5, &n);
  a = a * 3.1415926535897931e+0;
  n++;
  if (n & 1) {
    a = cos (a);
  } else {
    a = sin (a);
  }
  if (n & 2) {
    a = -a;
  }
  if (a == 0.0) {
    a = fabs(a);
  }
  return a;
}

inline double erfinv(double a)
{
  double p, q, t, fa;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  fa = fabs(a);
  if (fa >= 1.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;
    if (fa == 1.0) {
      t = a * exp(1000.0);
    }
  } else if (fa >= 0.9375) {




    t = log1p(-fa);
    t = 1.0 / sqrt(-t);
    p = 2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q = t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
    if (a < 0.0) t = -t;
  } else if (fa >= 0.75) {




    t = a * a - .87890625;
    p = .21489185007307062000e+0;
    p = p * t - .64200071507209448655e+1;
    p = p * t + .29631331505876308123e+2;
    p = p * t - .47644367129787181803e+2;
    p = p * t + .34810057749357500873e+2;
    p = p * t - .12954198980646771502e+2;
    p = p * t + .25349389220714893917e+1;
    p = p * t - .24758242362823355486e+0;
    p = p * t + .94897362808681080020e-2;
    q = t - .12831383833953226499e+2;
    q = q * t + .41409991778428888716e+2;
    q = q * t - .53715373448862143349e+2;
    q = q * t + .33880176779595142685e+2;
    q = q * t - .11315360624238054876e+2;
    q = q * t + .20369295047216351160e+1;
    q = q * t - .18611650627372178511e+0;
    q = q * t + .67544512778850945940e-2;
    p = p / q;
    t = a * p;
  } else {




    t = a * a - .5625;
    p = - .23886240104308755900e+2;
    p = p * t + .45560204272689128170e+3;
    p = p * t - .22977467176607144887e+4;
    p = p * t + .46631433533434331287e+4;
    p = p * t - .43799652308386926161e+4;
    p = p * t + .19007153590528134753e+4;
    p = p * t - .30786872642313695280e+3;
    q = t - .83288327901936570000e+2;
    q = q * t + .92741319160935318800e+3;
    q = q * t - .35088976383877264098e+4;
    q = q * t + .59039348134843665626e+4;
    q = q * t - .48481635430048872102e+4;
    q = q * t + .18997769186453057810e+4;
    q = q * t - .28386514725366621129e+3;
    p = p / q;
    t = a * p;
  }
  return t;
}

inline double erfcinv(double a)
{
  double t;
  volatile union {
    double d;
    unsigned long long int l;
  } cvt;

  if (__isnan(a)) {
    return a + a;
  }
  if (a <= 0.0) {
    cvt.l = 0xfff8000000000000ull;
    t = cvt.d;
    if (a == 0.0) {
        t = (1.0 - a) * exp(1000.0);
    }
  }
  else if (a >= 0.0625) {
    t = erfinv (1.0 - a);
  }
  else if (a >= 1e-100) {




    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p = 2.7834010353747001060e-3;
    p = p * t + 8.6030097526280260580e-1;
    p = p * t + 2.1371214997265515515e+0;
    p = p * t + 3.1598519601132090206e+0;
    p = p * t + 3.5780402569085996758e+0;
    p = p * t + 1.5335297523989890804e+0;
    p = p * t + 3.4839207139657522572e-1;
    p = p * t + 5.3644861147153648366e-2;
    p = p * t + 4.3836709877126095665e-3;
    p = p * t + 1.3858518113496718808e-4;
    p = p * t + 1.1738352509991666680e-6;
    q = t + 2.2859981272422905412e+0;
    q = q * t + 4.3859045256449554654e+0;
    q = q * t + 4.6632960348736635331e+0;
    q = q * t + 3.9846608184671757296e+0;
    q = q * t + 1.6068377709719017609e+0;
    q = q * t + 3.5609087305900265560e-1;
    q = q * t + 5.3963550303200816744e-2;
    q = q * t + 4.3873424022706935023e-3;
    q = q * t + 1.3858762165532246059e-4;
    q = q * t + 1.1738313872397777529e-6;
    t = p / (q * t);
  }
  else {




    double p, q;
    t = log(a);
    t = 1.0 / sqrt(-t);
    p = 6.9952990607058154858e-1;
    p = p * t + 1.9507620287580568829e+0;
    p = p * t + 8.2810030904462690216e-1;
    p = p * t + 1.1279046353630280005e-1;
    p = p * t + 6.0537914739162189689e-3;
    p = p * t + 1.3714329569665128933e-4;
    p = p * t + 1.2964481560643197452e-6;
    p = p * t + 4.6156006321345332510e-9;
    p = p * t + 4.5344689563209398450e-12;
    q = t + 1.5771922386662040546e+0;
    q = q * t + 2.1238242087454993542e+0;
    q = q * t + 8.4001814918178042919e-1;
    q = q * t + 1.1311889334355782065e-1;
    q = q * t + 6.0574830550097140404e-3;
    q = q * t + 1.3715891988350205065e-4;
    q = q * t + 1.2964671850944981713e-6;
    q = q * t + 4.6156017600933592558e-9;
    q = q * t + 4.5344687377088206783e-12;
    t = p / (q * t);
  }
  return t;
}

inline float rsqrtf(float a)
{
  return (float)rsqrt((double)a);
}

inline float rcbrtf(float a)
{
  return (float)rcbrt((double)a);
}

inline float sinpif(float a)
{
  return (float)sinpi((double)a);
}

inline float cospif(float a)
{
  return (float)cospi((double)a);
}

inline float erfinvf(float a)
{
  return (float)erfinv((double)a);
}

inline float erfcinvf(float a)
{
  return (float)erfcinv((double)a);
}







inline int min(int a, int b)
{
  return a < b ? a : b;
}

inline unsigned int umin(unsigned int a, unsigned int b)
{
  return a < b ? a : b;
}

inline long long int llmin(long long int a, long long int b)
{
  return a < b ? a : b;
}

inline unsigned long long int ullmin(unsigned long long int a, unsigned long long int b)
{
  return a < b ? a : b;
}

inline int max(int a, int b)
{
  return a > b ? a : b;
}

inline unsigned int umax(unsigned int a, unsigned int b)
{
  return a > b ? a : b;
}

inline long long int llmax(long long int a, long long int b)
{
  return a > b ? a : b;
}

inline unsigned long long int ullmax(unsigned long long int a, unsigned long long int b)
{
  return a > b ? a : b;
}
# 5201 "/usr/local/cuda/bin/../include/math_functions.h" 3
# 1 "/usr/local/cuda/bin/../include/math_functions_dbl_ptx1.h" 1 3
# 5202 "/usr/local/cuda/bin/../include/math_functions.h" 2 3
# 148 "/usr/local/cuda/bin/../include/common_functions.h" 2
# 176 "/usr/local/cuda/bin/../include/crt/host_runtime.h" 2







#pragma pack()
# 2 "/tmp/tmpxft_00006b7a_00000000-1_nn_cuda.cudafe1.stub.c" 2
# 1 "/tmp/tmpxft_00006b7a_00000000-3_nn_cuda.fatbin.c" 1
asm(
".section .rodata\n"
".align 32\n"
"fatbinData:\n"
".quad 0x00100001ba55ed50,0x0000000000001552,0x0000005001000001,0x0000000000000f46\n"
".quad 0x0000003800000000,0x0000000a00010004,0x0000000a00000040,0x0000000000000015\n"
".quad 0x0000000000000000,0x0000000000000000,0x2e616475635f6e6e,0x0000000000007563\n"
".quad 0x6f69737265762e09,0x2e090a342e31206e,0x7320746567726174,0x616d202c30315f6d\n"
".quad 0x6f745f3436665f70,0x2f2f090a3233665f,0x656c69706d6f6320,0x2f20687469772064\n"
".quad 0x61636f6c2f727375,0x6f2f616475632f6c,0x696c2f34366e6570,0x2f090a65622f2f62\n"
".quad 0x6e65706f766e202f,0x6220302e34206363,0x206e6f20746c6975,0x2d35302d31313032\n"
".quad 0x2d2f2f090a0a3231,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x43202f2f090a2d2d,0x676e696c69706d6f,0x6d742f706d742f20,0x3030305f74667870\n"
".quad 0x30305f6137623630,0x372d303030303030,0x616475635f6e6e5f,0x20692e337070632e\n"
".quad 0x63632f706d742f28,0x365873692e234942,0x2d2f2f090a29335a,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2f2f090a0a2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x4f202f2f090a2d2d,0x0a3a736e6f697470\n"
".quad 0x2d2d2d2d2d2f2f09,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x090a2d2d2d2d2d2d\n"
".quad 0x6772615420202f2f,0x202c7874703a7465,0x315f6d733a415349,0x6169646e45202c30\n"
".quad 0x656c7474696c3a6e,0x65746e696f50202c,0x363a657a69532072,0x2d20202f2f090a34\n"
".quad 0x6974704f2809334f,0x6e6f6974617a696d,0x0a296c6576656c20,0x30672d20202f2f09\n"
".quad 0x2067756265442809,0x090a296c6576656c,0x09326d2d20202f2f,0x2074726f70655228\n"
".quad 0x69726f7369766461,0x2d2f2f090a297365,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d,0x2d2d2d2d2d2d2d2d\n"
".quad 0x2d2d2d2d2d2d2d2d,0x69662e090a0a2d2d,0x633c22093109656c,0x6c2d646e616d6d6f\n"
".quad 0x2e090a223e656e69,0x22093209656c6966,0x706d742f706d742f,0x303030305f746678\n"
".quad 0x3030305f61376236,0x5f362d3030303030,0x2e616475635f6e6e,0x2e32656661647563\n"
".quad 0x662e090a22757067,0x6e22093309656c69,0x632e616475635f6e,0x6c69662e090a2275\n"
".quad 0x73752f2209340965,0x63672f62696c2f72,0x34365f3638782f63,0x672d78756e696c2d\n"
".quad 0x372e342e342f756e,0x6564756c636e692f,0x2e6665646474732f,0x6c69662e090a2268\n"
".quad 0x73752f2209350965,0x2f6c61636f6c2f72,0x6e69622f61647563,0x6c636e692f2e2e2f\n"
".quad 0x2f7472632f656475,0x725f656369766564,0x682e656d69746e75,0x656c69662e090a22\n"
".quad 0x7273752f22093609,0x632f6c61636f6c2f,0x2f6e69622f616475,0x756c636e692f2e2e\n"
".quad 0x5f74736f682f6564,0x2e73656e69666564,0x6c69662e090a2268,0x73752f2209370965\n"
".quad 0x2f6c61636f6c2f72,0x6e69622f61647563,0x6c636e692f2e2e2f,0x6c6975622f656475\n"
".quad 0x657079745f6e6974,0x662e090a22682e73,0x2f22093809656c69,0x61636f6c2f727375\n"
".quad 0x622f616475632f6c,0x6e692f2e2e2f6e69,0x65642f6564756c63,0x7079745f65636976\n"
".quad 0x2e090a22682e7365,0x22093909656c6966,0x636f6c2f7273752f,0x2f616475632f6c61\n"
".quad 0x692f2e2e2f6e6962,0x642f6564756c636e,0x79745f7265766972,0x090a22682e736570\n"
".quad 0x303109656c69662e,0x6c2f7273752f2209,0x6475632f6c61636f,0x2e2e2f6e69622f61\n"
".quad 0x6564756c636e692f,0x656361667275732f,0x682e73657079745f,0x656c69662e090a22\n"
".quad 0x73752f2209313109,0x2f6c61636f6c2f72,0x6e69622f61647563,0x6c636e692f2e2e2f\n"
".quad 0x747865742f656475,0x657079745f657275,0x662e090a22682e73,0x2209323109656c69\n"
".quad 0x636f6c2f7273752f,0x2f616475632f6c61,0x692f2e2e2f6e6962,0x762f6564756c636e\n"
".quad 0x79745f726f746365,0x090a22682e736570,0x333109656c69662e,0x6c2f7273752f2209\n"
".quad 0x6475632f6c61636f,0x2e2e2f6e69622f61,0x6564756c636e692f,0x5f6563697665642f\n"
".quad 0x705f68636e75616c,0x726574656d617261,0x662e090a22682e73,0x2209343109656c69\n"
".quad 0x636f6c2f7273752f,0x2f616475632f6c61,0x692f2e2e2f6e6962,0x632f6564756c636e\n"
".quad 0x61726f74732f7472,0x7373616c635f6567,0x69662e090a22682e,0x2f2209353109656c\n"
".quad 0x6c636e692f727375,0x5f3638782f656475,0x78756e696c2d3436,0x7469622f756e672d\n"
".quad 0x2e73657079742f73,0x6c69662e090a2268,0x752f220936310965,0x756c636e692f7273\n"
".quad 0x2e656d69742f6564,0x6c69662e090a2268,0x752f220937310965,0x6c61636f6c2f7273\n"
".quad 0x69622f616475632f,0x636e692f2e2e2f6e,0x6d6f632f6564756c,0x636e75665f6e6f6d\n"
".quad 0x22682e736e6f6974,0x09656c69662e090a,0x7273752f22093831,0x632f6c61636f6c2f\n"
".quad 0x2f6e69622f616475,0x756c636e692f2e2e,0x5f6874616d2f6564,0x6e6f6974636e7566\n"
".quad 0x662e090a22682e73,0x2209393109656c69,0x636f6c2f7273752f,0x2f616475632f6c61\n"
".quad 0x692f2e2e2f6e6962,0x6d2f6564756c636e,0x736e6f635f687461,0x22682e73746e6174\n"
".quad 0x09656c69662e090a,0x7273752f22093032,0x632f6c61636f6c2f,0x2f6e69622f616475\n"
".quad 0x756c636e692f2e2e,0x63697665642f6564,0x6974636e75665f65,0x090a22682e736e6f\n"
".quad 0x313209656c69662e,0x6c2f7273752f2209,0x6475632f6c61636f,0x2e2e2f6e69622f61\n"
".quad 0x6564756c636e692f,0x615f31315f6d732f,0x75665f63696d6f74,0x2e736e6f6974636e\n"
".quad 0x6c69662e090a2268,0x752f220932320965,0x6c61636f6c2f7273,0x69622f616475632f\n"
".quad 0x636e692f2e2e2f6e,0x5f6d732f6564756c,0x696d6f74615f3231,0x6974636e75665f63\n"
".quad 0x090a22682e736e6f,0x333209656c69662e,0x6c2f7273752f2209,0x6475632f6c61636f\n"
".quad 0x2e2e2f6e69622f61,0x6564756c636e692f,0x645f33315f6d732f,0x75665f656c62756f\n"
".quad 0x2e736e6f6974636e,0x6c69662e090a2268,0x752f220934320965,0x6c61636f6c2f7273\n"
".quad 0x69622f616475632f,0x636e692f2e2e2f6e,0x5f6d732f6564756c,0x696d6f74615f3032\n"
".quad 0x6974636e75665f63,0x090a22682e736e6f,0x353209656c69662e,0x6c2f7273752f2209\n"
".quad 0x6475632f6c61636f,0x2e2e2f6e69622f61,0x6564756c636e692f,0x695f30325f6d732f\n"
".quad 0x6369736e6972746e,0x662e090a22682e73,0x2209363209656c69,0x636f6c2f7273752f\n"
".quad 0x2f616475632f6c61,0x692f2e2e2f6e6962,0x732f6564756c636e,0x665f656361667275\n"
".quad 0x736e6f6974636e75,0x69662e090a22682e,0x2f2209373209656c,0x61636f6c2f727375\n"
".quad 0x622f616475632f6c,0x6e692f2e2e2f6e69,0x65742f6564756c63,0x65665f6572757478\n"
".quad 0x636e75665f686374,0x22682e736e6f6974,0x09656c69662e090a,0x7273752f22093832\n"
".quad 0x632f6c61636f6c2f,0x2f6e69622f616475,0x756c636e692f2e2e,0x5f6874616d2f6564\n"
".quad 0x6e6f6974636e7566,0x74705f6c62645f73,0x0a0a0a22682e3178,0x207972746e652e09\n"
".quad 0x696c637565365a5f,0x6f4c74616c375064,0x206666696650676e,0x7261702e09090a28\n"
".quad 0x203436752e206d61,0x6170616475635f5f,0x7565365a5f5f6d72,0x616c375064696c63\n"
".quad 0x696650676e6f4c74,0x636f6c5f645f6666,0x0a2c736e6f697461,0x6d617261702e0909\n"
".quad 0x5f5f203436752e20,0x6d72617061647563,0x6c637565365a5f5f,0x4c74616c37506469\n"
".quad 0x6666696650676e6f,0x61747369645f645f,0x09090a2c7365636e,0x2e206d617261702e\n"
".quad 0x75635f5f20323373,0x5f5f6d7261706164,0x64696c637565365a,0x6e6f4c74616c3750\n"
".quad 0x6e5f666669665067,0x64726f6365526d75,0x61702e09090a2c73,0x3233662e206d6172\n"
".quad 0x70616475635f5f20,0x65365a5f5f6d7261,0x6c375064696c6375,0x6650676e6f4c7461\n"
".quad 0x2c74616c5f666669,0x617261702e09090a,0x5f203233662e206d,0x726170616475635f\n"
".quad 0x637565365a5f5f6d,0x74616c375064696c,0x66696650676e6f4c,0x090a29676e6c5f66\n"
".quad 0x206765722e090a7b,0x687225203631752e,0x722e090a3b3e343c,0x203233752e206765\n"
".quad 0x0a3b3e30313c7225,0x752e206765722e09,0x393c647225203436,0x6765722e090a3b3e\n"
".quad 0x6625203233662e20,0x2e090a3b3e31313c,0x6572702e20676572,0x3b3e333c70252064\n"
".quad 0x3309636f6c2e090a,0x4c240a3009393409,0x5f6e696765625744,0x696c637565365a5f\n"
".quad 0x6f4c74616c375064,0x3a6666696650676e,0x31752e766f6d090a,0x2c31687225092036\n"
".quad 0x64696174636e2520,0x766f6d090a3b782e,0x722509203631752e,0x61746325202c3268\n"
".quad 0x6d090a3b792e6469,0x2e656469772e6c75,0x3172250920363175,0x202c31687225202c\n"
".quad 0x63090a3b32687225,0x752e3233752e7476,0x2c32722509203631,0x2e64696174632520\n"
".quad 0x2e646461090a3b78,0x3372250920323375,0x25202c327225202c,0x747663090a3b3172\n"
".quad 0x3631752e3233752e,0x25202c3472250920,0x0a3b782e6469746e,0x2e6f6c2e6c756d09\n"
".quad 0x3572250920323375,0x25202c347225202c,0x747663090a3b3372,0x3631752e3233752e\n"
".quad 0x25202c3672250920,0x090a3b782e646974,0x203233752e646461,0x7225202c37722509\n"
".quad 0x0a3b357225202c36,0x617261702e646c09,0x2509203233732e6d,0x635f5f5b202c3872\n"
".quad 0x5f6d726170616475,0x696c637565365a5f,0x6f4c74616c375064,0x5f6666696650676e\n"
".quad 0x726f6365526d756e,0x6573090a3b5d7364,0x33732e656c2e7074,0x202c317025092032\n"
".quad 0x377225202c387225,0x2031702540090a3b,0x744c240920617262,0x3b363230315f305f\n"
".quad 0x3309636f6c2e090a,0x63090a3009363509,0x732e3436732e7476,0x3164722509203233\n"
".quad 0x090a3b377225202c,0x6d617261702e646c,0x722509203436752e,0x635f5f5b202c3264\n"
".quad 0x5f6d726170616475,0x696c637565365a5f,0x6f4c74616c375064,0x5f6666696650676e\n"
".quad 0x697461636f6c5f64,0x6d090a3b5d736e6f,0x2e656469772e6c75,0x6472250920323373\n"
".quad 0x202c377225202c33,0x2e646461090a3b38,0x6472250920343675,0x2c32647225202c34\n"
".quad 0x090a3b3364722520,0x61626f6c672e646c,0x2509203233662e6c,0x6472255b202c3166\n"
".quad 0x6c090a3b5d342b34,0x6c61626f6c672e64,0x662509203233662e,0x346472255b202c32\n"
".quad 0x646c090a3b5d302b,0x662e6d617261702e,0x2c33662509203233,0x616475635f5f5b20\n"
".quad 0x365a5f5f6d726170,0x375064696c637565,0x50676e6f4c74616c,0x676e6c5f66666966\n"
".quad 0x2e627573090a3b5d,0x3466250920323366,0x25202c336625202c,0x2e646c090a3b3166\n"
".quad 0x33662e6d61726170,0x202c356625092032,0x70616475635f5f5b,0x65365a5f5f6d7261\n"
".quad 0x6c375064696c6375,0x6650676e6f4c7461,0x5d74616c5f666669,0x662e627573090a3b\n"
".quad 0x2c36662509203233,0x6625202c35662520,0x2e6c756d090a3b32,0x3766250920323366\n"
".quad 0x25202c346625202c,0x64616d090a3b3466,0x662509203233662e,0x202c366625202c38\n"
".quad 0x376625202c366625,0x2e74727173090a3b,0x662e786f72707061,0x2c39662509203233\n"
".quad 0x6c090a3b38662520,0x2e6d617261702e64,0x6472250920343675,0x75635f5f5b202c35\n"
".quad 0x5f5f6d7261706164,0x64696c637565365a,0x6e6f4c74616c3750,0x645f666669665067\n"
".quad 0x636e61747369645f,0x756d090a3b5d7365,0x732e656469772e6c,0x3664722509203233\n"
".quad 0x34202c377225202c,0x752e646461090a3b,0x3764722509203436,0x202c35647225202c\n"
".quad 0x73090a3b36647225,0x6c61626f6c672e74,0x255b09203233662e,0x202c5d302b376472\n"
".quad 0x744c240a3b396625,0x3a363230315f305f,0x3309636f6c2e090a,0x65090a3009383509\n"
".quad 0x444c240a3b746978,0x365a5f5f646e6557,0x375064696c637565,0x50676e6f4c74616c\n"
".quad 0x7d090a3a66666966,0x65365a5f202f2f20,0x6c375064696c6375,0x6650676e6f4c7461\n"
".quad 0x0002000a0a666669,0x0574000000480100,0x0000000000000000,0x0002000000000000\n"
".quad 0x00380000000a0001,0x00150000000a0000,0x0000000000000000,0x6e6e000000000000\n"
".quad 0x75632e616475635f,0x457f000000000000,0x000233010102464c,0x0002000000000000\n"
".quad 0x00000000000100be,0x04cc000000000000,0x0040000000000000,0x010a000000000000\n"
".quad 0x000300380040000a,0x0000000100070040,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0001000000000000,0x0000000000030000,0x0000000000000000\n"
".quad 0x0200000000000000,0x0098000000000000,0x0000000000000000,0x0004000000000000\n"
".quad 0x0000000000000000,0x000b000000000000,0x0000000000030000,0x0000000000000000\n"
".quad 0x0298000000000000,0x0019000000000000,0x0000000000000000,0x0001000000000000\n"
".quad 0x0000000000000000,0x0013000000000000,0x0000000000020000,0x0000000000000000\n"
".quad 0x02b1000000000000,0x00f0000000000000,0x0002000000000000,0x0001000000090000\n"
".quad 0x0018000000000000,0x0036000000000000,0x0006000000010000,0x0000000000000000\n"
".quad 0x03a1000000000000,0x00b0000000000000,0x0003000000000000,0x0004030000060000\n"
".quad 0x0000000000000000,0x0054000000000000,0x0002000000010000,0x0000000000000000\n"
".quad 0x0451000000000000,0x0078000000000000,0x0000000000000000,0x0001000000040000\n"
".quad 0x0000000000000000,0x0075000000000000,0x0003000000080000,0x0000000000000000\n"
".quad 0x04c9000000000000,0x002c000000000000,0x0000000000000000,0x0004000000040000\n"
".quad 0x0000000000000000,0x2e00000000000000,0x6261747274736873,0x6261747274732e00\n"
".quad 0x6261746d79732e00,0x6f6c672e766e2e00,0x74696e692e6c6162,0x6f6c672e766e2e00\n"
".quad 0x7865742e006c6162,0x637565365a5f2e74,0x74616c375064696c,0x66696650676e6f4c\n"
".quad 0x6e692e766e2e0066,0x7565365a5f2e6f66,0x616c375064696c63,0x696650676e6f4c74\n"
".quad 0x732e766e2e006666,0x5a5f2e6465726168,0x5064696c63756536,0x676e6f4c74616c37\n"
".quad 0x5f00006666696650,0x64696c637565365a,0x6e6f4c74616c3750,0x0000666669665067\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000010003000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000020003000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000030003000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000003000000,0x0000000000000000,0x0000000000000000,0x0000000003000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000040003000000,0xb000000000000000\n"
".quad 0x0000000000000000,0x0000050003000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000060003000000,0x0000000000000000,0x0100000000000000,0x0000041012000000\n"
".quad 0x0000000000000000,0x0900000000000000,0x0904200780a0004c,0x050023c78010004e\n"
".quad 0x0900208780600248,0x0900200780400342,0x05c4100780301004,0x0100208780600242\n"
".quad 0x0104000780a00000,0xfd04000780200002,0x036c20c7c83000d1,0x0500000280300000\n"
".quad 0x05c4100780300300,0x09042047802000c8,0x0900000003200482,0x0580c00780d00e04\n"
".quad 0x0880c00780d00e02,0x09b1417204b14274,0x0500000780c00204,0x0100008780e00102\n"
".quad 0x05c4100780300200,0x0040000780900002,0x05900002042100ec,0x04a0c00781d00e00\n"
".quad 0x080000000000140b,0x1400000010000000,0x0300000018000000,0xff000c1704001c18\n"
".quad 0x0000180004ffffff,0xff000c17040013f0,0x0000140003ffffff,0xff000c17040013f0\n"
".quad 0x0000100002ffffff,0xff000c17040013f0,0x0000080001ffffff,0xff000c17040023f0\n"
".quad 0x0000000000ffffff,0x0800080d040023f0,0x0000000001000100,0x0005000000060000\n"
".quad 0x0000000004cc0000,0x0000000000000000,0x0000000000000000,0x0000000000a80000\n"
".quad 0x0000000000a80000,0x0000000000040000,0x0905600000000000,0x0000000003a10000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000001280000,0x0000000001280000\n"
".quad 0x0000000000040000,0x0906600000000000,0x0000000004c90000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x00000000002c0000,0x0000000000040000\n"
".quad 0x0000000000000000\n"
".text");

extern "C" {

extern const unsigned long long fatbinData[685];

}


static struct {int m; int v; const unsigned long long* d; char* f;} __fatDeviceText __attribute__ ((aligned (8))) __attribute__ ((section (".nvFatBinSegment")))=
 { 0x466243b1, 1, fatbinData, 0 };
# 3 "/tmp/tmpxft_00006b7a_00000000-1_nn_cuda.cudafe1.stub.c" 2
extern void __device_stub__Z6euclidP7latLongPfiff(LatLong *, float *, int, float, float);
static void __sti____cudaRegisterAll_42_tmpxft_00006b7a_00000000_4_nn_cuda_cpp1_ii_4c3be9ae(void) __attribute__((__constructor__));
void __device_stub__Z6euclidP7latLongPfiff(LatLong *__par0, float *__par1, int __par2, float __par3, float __par4){if (cudaSetupArgument((void *)(char *)&__par0, sizeof(__par0), (size_t)0UL) != cudaSuccess) return;if (cudaSetupArgument((void *)(char *)&__par1, sizeof(__par1), (size_t)8UL) != cudaSuccess) return;if (cudaSetupArgument((void *)(char *)&__par2, sizeof(__par2), (size_t)16UL) != cudaSuccess) return;if (cudaSetupArgument((void *)(char *)&__par3, sizeof(__par3), (size_t)20UL) != cudaSuccess) return;if (cudaSetupArgument((void *)(char *)&__par4, sizeof(__par4), (size_t)24UL) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(LatLong *, float *, int, float, float))euclid)); (void)cudaLaunch(((char *)((void ( *)(LatLong *, float *, int, float, float))euclid))); };}
void euclid( LatLong *__cuda_0,float *__cuda_1,int __cuda_2,float __cuda_3,float __cuda_4)
# 50 "nn_cuda.cu"
{__device_stub__Z6euclidP7latLongPfiff( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 58 "nn_cuda.cu"
}
# 1 "/tmp/tmpxft_00006b7a_00000000-1_nn_cuda.cudafe1.stub.c"
static void __sti____cudaRegisterAll_42_tmpxft_00006b7a_00000000_4_nn_cuda_cpp1_ii_4c3be9ae(void) { __cudaFatCubinHandle = __cudaRegisterFatBinary((void*)&__fatDeviceText); atexit(__cudaUnregisterBinaryUtil); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(LatLong *, float *, int, float, float))euclid), (char*)"_Z6euclidP7latLongPfiff", "_Z6euclidP7latLongPfiff", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); }
# 1 "/tmp/tmpxft_00006b7a_00000000-1_nn_cuda.cudafe1.stub.c" 2
