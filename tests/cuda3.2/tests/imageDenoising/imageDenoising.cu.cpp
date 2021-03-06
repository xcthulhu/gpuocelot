# 1 "/tmp/tmpxft_00006ea3_00000000-1_imageDenoising.cudafe1.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/tmp/tmpxft_00006ea3_00000000-1_imageDenoising.cudafe1.cpp"
# 1 "tests/imageDenoising/imageDenoising.cu"
# 61 "/usr/local/cuda4.1/cuda/include/device_types.h"
# 149 "/usr/lib/x86_64-linux-gnu/gcc/x86_64-linux-gnu/4.5.2/include/stddef.h" 3
typedef long ptrdiff_t;
# 211 "/usr/lib/x86_64-linux-gnu/gcc/x86_64-linux-gnu/4.5.2/include/stddef.h" 3
typedef unsigned long size_t;
# 1 "/usr/local/cuda4.1/cuda/include/crt/host_runtime.h" 1 3
# 69 "/usr/local/cuda4.1/cuda/include/crt/host_runtime.h" 3
# 1 "/usr/local/cuda4.1/cuda/include/builtin_types.h" 1 3
# 56 "/usr/local/cuda4.1/cuda/include/builtin_types.h" 3
# 1 "/usr/local/cuda4.1/cuda/include/device_types.h" 1 3
# 53 "/usr/local/cuda4.1/cuda/include/device_types.h" 3
# 1 "/usr/local/cuda4.1/cuda/include/host_defines.h" 1 3
# 54 "/usr/local/cuda4.1/cuda/include/device_types.h" 2 3







enum cudaRoundMode
{
    cudaRoundNearest,
    cudaRoundZero,
    cudaRoundPosInf,
    cudaRoundMinInf
};
# 57 "/usr/local/cuda4.1/cuda/include/builtin_types.h" 2 3
# 1 "/usr/local/cuda4.1/cuda/include/driver_types.h" 1 3
# 125 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
enum cudaError
{





    cudaSuccess = 0,





    cudaErrorMissingConfiguration = 1,





    cudaErrorMemoryAllocation = 2,





    cudaErrorInitializationError = 3,
# 160 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorLaunchFailure = 4,
# 169 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorPriorLaunchFailure = 5,
# 179 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorLaunchTimeout = 6,
# 188 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorLaunchOutOfResources = 7,





    cudaErrorInvalidDeviceFunction = 8,
# 203 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
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
# 284 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorAddressOfConstant = 22,
# 293 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorTextureFetchFailed = 23,
# 302 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorTextureNotBound = 24,
# 311 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorSynchronizationError = 25,





    cudaErrorInvalidFilterSetting = 26,





    cudaErrorInvalidNormSetting = 27,







    cudaErrorMixedDeviceExecution = 28,






    cudaErrorCudartUnloading = 29,




    cudaErrorUnknown = 30,







    cudaErrorNotYetImplemented = 31,
# 360 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorMemoryValueTooLarge = 32,






    cudaErrorInvalidResourceHandle = 33,







    cudaErrorNotReady = 34,






    cudaErrorInsufficientDriver = 35,
# 395 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
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
# 457 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorDevicesUnavailable = 46,




    cudaErrorInvalidKernelImage = 47,







    cudaErrorNoKernelImageForDevice = 48,
# 483 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
    cudaErrorIncompatibleDriverContext = 49,






    cudaErrorPeerAccessAlreadyEnabled = 50,






    cudaErrorPeerAccessNotEnabled = 51,





    cudaErrorDeviceAlreadyInUse = 54,







    cudaErrorProfilerDisabled = 55,






    cudaErrorProfilerNotInitialized = 56,






    cudaErrorProfilerAlreadyStarted = 57,





     cudaErrorProfilerAlreadyStopped = 58,







    cudaErrorAssert = 59,






    cudaErrorTooManyPeers = 60,





    cudaErrorHostMemoryAlreadyRegistered = 61,





    cudaErrorHostMemoryNotRegistered = 62,




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
    cudaGraphicsRegisterFlagsSurfaceLoadStore = 4,
    cudaGraphicsRegisterFlagsTextureGather = 8
};




enum cudaGraphicsMapFlags
{
    cudaGraphicsMapFlagsNone = 0,
    cudaGraphicsMapFlagsReadOnly = 1,
    cudaGraphicsMapFlagsWriteDiscard = 2
};




enum cudaGraphicsCubeFace
{
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
# 752 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
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
    cudaFuncCachePreferL1 = 2,
    cudaFuncCachePreferEqual = 3
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
    size_t texturePitchAlignment;
    int deviceOverlap;
    int multiProcessorCount;
    int kernelExecTimeoutEnabled;
    int integrated;
    int canMapHostMemory;
    int computeMode;
    int maxTexture1D;
    int maxTexture1DLinear;
    int maxTexture2D[2];
    int maxTexture2DLinear[3];
    int maxTexture2DGather[2];
    int maxTexture3D[3];
    int maxTextureCubemap;
    int maxTexture1DLayered[2];
    int maxTexture2DLayered[3];
    int maxTextureCubemapLayered[2];
    int maxSurface1D;
    int maxSurface2D[2];
    int maxSurface3D[3];
    int maxSurface1DLayered[2];
    int maxSurface2DLayered[3];
    int maxSurfaceCubemap;
    int maxSurfaceCubemapLayered[2];
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
# 976 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
struct cudaIpcEventHandle_st
{
    char reserved[64];
};

struct cudaIpcMemHandle_st
{
    char reserved[64];
};
# 995 "/usr/local/cuda4.1/cuda/include/driver_types.h" 3
typedef enum cudaError cudaError_t;




typedef struct CUstream_st *cudaStream_t;




typedef struct CUevent_st *cudaEvent_t;




typedef struct cudaGraphicsResource *cudaGraphicsResource_t;




typedef struct CUuuid_st cudaUUID_t;




typedef struct cudaIpcEventHandle_st cudaIpcEventHandle_t;
typedef struct cudaIpcMemHandle_st cudaIpcMemHandle_t;




typedef enum cudaOutputMode cudaOutputMode_t;
# 58 "/usr/local/cuda4.1/cuda/include/builtin_types.h" 2 3
# 1 "/usr/local/cuda4.1/cuda/include/surface_types.h" 1 3
# 84 "/usr/local/cuda4.1/cuda/include/surface_types.h" 3
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
# 59 "/usr/local/cuda4.1/cuda/include/builtin_types.h" 2 3
# 1 "/usr/local/cuda4.1/cuda/include/texture_types.h" 1 3
# 84 "/usr/local/cuda4.1/cuda/include/texture_types.h" 3
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
# 60 "/usr/local/cuda4.1/cuda/include/builtin_types.h" 2 3
# 1 "/usr/local/cuda4.1/cuda/include/vector_types.h" 1 3
# 59 "/usr/local/cuda4.1/cuda/include/vector_types.h" 3
# 1 "/usr/local/cuda4.1/cuda/include/builtin_types.h" 1 3
# 60 "/usr/local/cuda4.1/cuda/include/builtin_types.h" 3
# 1 "/usr/local/cuda4.1/cuda/include/vector_types.h" 1 3
# 60 "/usr/local/cuda4.1/cuda/include/builtin_types.h" 2 3
# 60 "/usr/local/cuda4.1/cuda/include/vector_types.h" 2 3
# 94 "/usr/local/cuda4.1/cuda/include/vector_types.h" 3
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
# 338 "/usr/local/cuda4.1/cuda/include/vector_types.h" 3
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







struct dim3
{
    unsigned int x, y, z;

    dim3(unsigned int vx = 1, unsigned int vy = 1, unsigned int vz = 1) : x(vx), y(vy), z(vz) {}
    dim3(uint3 v) : x(v.x), y(v.y), z(v.z) {}
    operator uint3(void) { uint3 t; t.x = x; t.y = y; t.z = z; return t; }

};

typedef struct dim3 dim3;
# 60 "/usr/local/cuda4.1/cuda/include/builtin_types.h" 2 3
# 70 "/usr/local/cuda4.1/cuda/include/crt/host_runtime.h" 2 3
# 1 "/usr/local/cuda4.1/cuda/include/crt/storage_class.h" 1 3
# 71 "/usr/local/cuda4.1/cuda/include/crt/host_runtime.h" 2 3
# 213 "/usr/lib/x86_64-linux-gnu/gcc/x86_64-linux-gnu/4.5.2/include/stddef.h" 2 3
# 125 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 577 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 588 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 600 "/usr/local/cuda4.1/cuda/include/driver_types.h"
struct cudaArray;
# 605 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 614 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 627 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 639 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 650 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 660 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 677 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 695 "/usr/local/cuda4.1/cuda/include/driver_types.h"
struct cudaGraphicsResource;
# 700 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 712 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 722 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 735 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 770 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 820 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 831 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 842 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 852 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 861 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 976 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 981 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 995 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 1000 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 1005 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 1010 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 1015 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 1020 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 1021 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 1026 "/usr/local/cuda4.1/cuda/include/driver_types.h"
# 84 "/usr/local/cuda4.1/cuda/include/surface_types.h"
# 94 "/usr/local/cuda4.1/cuda/include/surface_types.h"
# 103 "/usr/local/cuda4.1/cuda/include/surface_types.h"
# 84 "/usr/local/cuda4.1/cuda/include/texture_types.h"
# 95 "/usr/local/cuda4.1/cuda/include/texture_types.h"
# 104 "/usr/local/cuda4.1/cuda/include/texture_types.h"
# 113 "/usr/local/cuda4.1/cuda/include/texture_types.h"
# 94 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 99 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 105 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 110 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 115 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 120 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 125 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 130 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 135 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 140 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 145 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 150 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 155 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 160 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 165 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 166 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 168 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 173 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 178 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 179 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 181 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 186 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 191 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 196 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 201 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 206 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 216 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 221 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 228 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 233 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 238 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 243 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 248 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 253 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 255 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 260 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 265 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 270 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 275 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 280 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 285 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 290 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 295 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 300 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 305 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 310 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 315 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 320 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 338 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 339 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 340 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 341 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 342 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 343 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 344 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 345 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 346 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 347 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 348 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 349 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 350 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 351 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 352 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 353 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 354 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 355 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 356 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 357 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 358 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 359 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 360 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 361 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 362 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 363 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 364 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 365 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 366 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 367 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 368 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 369 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 370 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 371 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 372 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 373 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 374 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 375 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 376 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 377 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 378 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 379 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 380 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 381 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 382 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 383 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 384 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 385 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 393 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 403 "/usr/local/cuda4.1/cuda/include/vector_types.h"
# 134 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceReset();
# 151 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceSynchronize();
# 203 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceSetLimit(cudaLimit , size_t );
# 227 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceGetLimit(size_t * , cudaLimit );
# 257 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceGetCacheConfig(cudaFuncCache * );
# 298 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceSetCacheConfig(cudaFuncCache );
# 321 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceGetByPCIBusId(int * , char * );
# 348 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceGetPCIBusId(char * , int , int );
# 387 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaIpcGetEventHandle(cudaIpcEventHandle_t * , cudaEvent_t );
# 419 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaIpcOpenEventHandle(cudaEvent_t * , cudaIpcEventHandle_t );
# 454 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaIpcGetMemHandle(cudaIpcMemHandle_t * , void * );
# 492 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaIpcOpenMemHandle(void ** , cudaIpcMemHandle_t );
# 519 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaIpcCloseMemHandle(void * );
# 553 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadExit();
# 577 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSynchronize();
# 636 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetLimit(cudaLimit , size_t );
# 667 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetLimit(size_t * , cudaLimit );
# 702 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadGetCacheConfig(cudaFuncCache * );
# 748 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaThreadSetCacheConfig(cudaFuncCache );
# 800 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetLastError();
# 841 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaPeekAtLastError();
# 855 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" const char *cudaGetErrorString(cudaError_t );
# 885 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceCount(int * );
# 1088 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDeviceProperties(cudaDeviceProp * , int );
# 1107 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaChooseDevice(int * , const cudaDeviceProp * );
# 1140 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDevice(int );
# 1157 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetDevice(int * );
# 1186 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetValidDevices(int * , int );
# 1246 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDeviceFlags(unsigned );
# 1272 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamCreate(cudaStream_t * );
# 1293 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamDestroy(cudaStream_t );
# 1329 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamWaitEvent(cudaStream_t , cudaEvent_t , unsigned );
# 1348 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamSynchronize(cudaStream_t );
# 1366 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaStreamQuery(cudaStream_t );
# 1398 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreate(cudaEvent_t * );
# 1429 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventCreateWithFlags(cudaEvent_t * , unsigned );
# 1462 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventRecord(cudaEvent_t , cudaStream_t = 0);
# 1491 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventQuery(cudaEvent_t );
# 1523 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventSynchronize(cudaEvent_t );
# 1548 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventDestroy(cudaEvent_t );
# 1589 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaEventElapsedTime(float * , cudaEvent_t , cudaEvent_t );
# 1628 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaConfigureCall(dim3 , dim3 , size_t = (0), cudaStream_t = 0);
# 1655 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetupArgument(const void * , size_t , size_t );
# 1701 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncSetCacheConfig(const char * , cudaFuncCache );
# 1736 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaLaunch(const char * );
# 1769 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * , const char * );
# 1791 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForDevice(double * );
# 1813 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaSetDoubleForHost(double * );
# 1845 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc(void ** , size_t );
# 1874 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocHost(void ** , size_t );
# 1913 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocPitch(void ** , size_t * , size_t , size_t );
# 1955 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMallocArray(cudaArray ** , const cudaChannelFormatDesc * , size_t , size_t = (0), unsigned = (0));
# 1979 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFree(void * );
# 1999 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeHost(void * );
# 2021 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaFreeArray(cudaArray * );
# 2080 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostAlloc(void ** , size_t , unsigned );
# 2136 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostRegister(void * , size_t , unsigned );
# 2155 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostUnregister(void * );
# 2182 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetDevicePointer(void ** , void * , unsigned );
# 2201 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaHostGetFlags(unsigned * , void * );
# 2236 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3D(cudaPitchedPtr * , cudaExtent );
# 2336 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMalloc3DArray(cudaArray ** , const cudaChannelFormatDesc * , cudaExtent , unsigned = (0));
# 2433 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms * );
# 2460 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DPeer(const cudaMemcpy3DPeerParms * );
# 2565 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms * , cudaStream_t = 0);
# 2586 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy3DPeerAsync(const cudaMemcpy3DPeerParms * , cudaStream_t = 0);
# 2605 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemGetInfo(size_t * , size_t * );
# 2638 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy(void * , const void * , size_t , cudaMemcpyKind );
# 2669 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyPeer(void * , int , const void * , int , size_t );
# 2702 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArray(cudaArray * , size_t , size_t , const void * , size_t , cudaMemcpyKind );
# 2735 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArray(void * , const cudaArray * , size_t , size_t , size_t , cudaMemcpyKind );
# 2770 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyArrayToArray(cudaArray * , size_t , size_t , const cudaArray * , size_t , size_t , size_t , cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2812 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2D(void * , size_t , const void * , size_t , size_t , size_t , cudaMemcpyKind );
# 2853 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArray(cudaArray * , size_t , size_t , const void * , size_t , size_t , size_t , cudaMemcpyKind );
# 2894 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArray(void * , size_t , const cudaArray * , size_t , size_t , size_t , size_t , cudaMemcpyKind );
# 2933 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DArrayToArray(cudaArray * , size_t , size_t , const cudaArray * , size_t , size_t , size_t , size_t , cudaMemcpyKind = cudaMemcpyDeviceToDevice);
# 2968 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbol(const char * , const void * , size_t , size_t = (0), cudaMemcpyKind = cudaMemcpyHostToDevice);
# 3002 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbol(void * , const char * , size_t , size_t = (0), cudaMemcpyKind = cudaMemcpyDeviceToHost);
# 3045 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyAsync(void * , const void * , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3075 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyPeerAsync(void * , int , const void * , int , size_t , cudaStream_t = 0);
# 3117 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToArrayAsync(cudaArray * , size_t , size_t , const void * , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3159 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromArrayAsync(void * , const cudaArray * , size_t , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3210 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DAsync(void * , size_t , const void * , size_t , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3260 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DToArrayAsync(cudaArray * , size_t , size_t , const void * , size_t , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3310 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpy2DFromArrayAsync(void * , size_t , const cudaArray * , size_t , size_t , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3354 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyToSymbolAsync(const char * , const void * , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3397 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemcpyFromSymbolAsync(void * , const char * , size_t , size_t , cudaMemcpyKind , cudaStream_t = 0);
# 3419 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset(void * , int , size_t );
# 3445 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2D(void * , size_t , int , size_t , size_t );
# 3484 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3D(cudaPitchedPtr , int , cudaExtent );
# 3511 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemsetAsync(void * , int , size_t , cudaStream_t = 0);
# 3543 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset2DAsync(void * , size_t , int , size_t , size_t , cudaStream_t = 0);
# 3588 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaMemset3DAsync(cudaPitchedPtr , int , cudaExtent , cudaStream_t = 0);
# 3615 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolAddress(void ** , const char * );
# 3638 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSymbolSize(size_t * , const char * );
# 3783 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaPointerGetAttributes(cudaPointerAttributes * , void * );
# 3817 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceCanAccessPeer(int * , int , int );
# 3858 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceEnablePeerAccess(int , unsigned );
# 3883 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDeviceDisablePeerAccess(int );
# 3929 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t );
# 3961 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t , unsigned );
# 3996 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsMapResources(int , cudaGraphicsResource_t * , cudaStream_t = 0);
# 4027 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsUnmapResources(int , cudaGraphicsResource_t * , cudaStream_t = 0);
# 4056 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsResourceGetMappedPointer(void ** , size_t * , cudaGraphicsResource_t );
# 4090 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray ** , cudaGraphicsResource_t , unsigned , unsigned );
# 4123 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc * , const cudaArray * );
# 4158 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaChannelFormatDesc cudaCreateChannelDesc(int , int , int , int , cudaChannelFormatKind );
# 4205 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture(size_t * , const textureReference * , const void * , const cudaChannelFormatDesc * , size_t = (((2147483647) * 2U) + 1U));
# 4256 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTexture2D(size_t * , const textureReference * , const void * , const cudaChannelFormatDesc * , size_t , size_t , size_t );
# 4284 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindTextureToArray(const textureReference * , const cudaArray * , const cudaChannelFormatDesc * );
# 4305 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaUnbindTexture(const textureReference * );
# 4330 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureAlignmentOffset(size_t * , const textureReference * );
# 4354 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetTextureReference(const textureReference ** , const char * );
# 4387 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaBindSurfaceToArray(const surfaceReference * , const cudaArray * , const cudaChannelFormatDesc * );
# 4405 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetSurfaceReference(const surfaceReference ** , const char * );
# 4432 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaDriverGetVersion(int * );
# 4449 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaRuntimeGetVersion(int * );
# 4454 "/usr/local/cuda4.1/cuda/include/cuda_runtime_api.h"
extern "C" cudaError_t cudaGetExportTable(const void ** , const cudaUUID_t * );
# 107 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc()
# 108 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 109 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone);
# 110 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 112 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf()
# 113 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 114 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 116 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 117 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 119 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1()
# 120 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 121 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 123 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 124 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 126 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2()
# 127 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 128 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 130 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 131 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 133 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4()
# 134 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 135 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 137 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 138 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 140 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> ()
# 141 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 142 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(char)) * 8);
# 147 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 149 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 151 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> ()
# 152 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 153 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 155 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 156 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 158 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> ()
# 159 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 160 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 162 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 163 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 165 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> ()
# 166 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 167 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 169 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 170 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 172 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> ()
# 173 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 174 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 176 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 177 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 179 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> ()
# 180 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 181 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 183 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 184 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 186 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> ()
# 187 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 188 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 190 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 191 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 193 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> ()
# 194 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 195 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(signed char)) * 8);
# 197 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 198 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 200 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> ()
# 201 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 202 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned char)) * 8);
# 204 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 205 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 207 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> ()
# 208 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 209 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 211 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 212 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 214 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> ()
# 215 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 216 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 218 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 219 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 221 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> ()
# 222 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 223 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 225 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 226 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 228 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> ()
# 229 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 230 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 232 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 233 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 235 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> ()
# 236 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 237 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 239 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 240 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 242 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> ()
# 243 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 244 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 246 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 247 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 249 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> ()
# 250 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 251 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(short)) * 8);
# 253 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 254 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 256 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> ()
# 257 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 258 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned short)) * 8);
# 260 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 261 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 263 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> ()
# 264 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 265 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 267 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 268 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 270 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> ()
# 271 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 272 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 274 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 275 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 277 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> ()
# 278 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 279 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 281 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned);
# 282 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 284 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> ()
# 285 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 286 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 288 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned);
# 289 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 291 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> ()
# 292 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 293 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 295 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned);
# 296 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 298 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> ()
# 299 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 300 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 302 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned);
# 303 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 305 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> ()
# 306 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 307 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(int)) * 8);
# 309 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned);
# 310 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 312 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> ()
# 313 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 314 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(unsigned)) * 8);
# 316 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned);
# 317 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 379 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> ()
# 380 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 381 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 383 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 384 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 386 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> ()
# 387 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 388 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 390 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat);
# 391 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 393 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> ()
# 394 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 395 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 397 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat);
# 398 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 400 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> ()
# 401 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
{
# 402 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
int e = (((int)sizeof(float)) * 8);
# 404 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat);
# 405 "/usr/local/cuda4.1/cuda/include/channel_descriptor.h"
}
# 79 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz)
# 80 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
{
# 81 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
cudaPitchedPtr s;
# 83 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
(s.ptr) = d;
# 84 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
(s.pitch) = p;
# 85 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
(s.xsize) = xsz;
# 86 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
(s.ysize) = ysz;
# 88 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
return s;
# 89 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
}
# 106 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z)
# 107 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
{
# 108 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
cudaPos p;
# 110 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
(p.x) = x;
# 111 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
(p.y) = y;
# 112 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
(p.z) = z;
# 114 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
return p;
# 115 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
}
# 132 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d)
# 133 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
{
# 134 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
cudaExtent e;
# 136 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
(e.width) = w;
# 137 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
(e.height) = h;
# 138 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
(e.depth) = d;
# 140 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
return e;
# 141 "/usr/local/cuda4.1/cuda/include/driver_functions.h"
}
# 69 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline char1 make_char1(signed char x)
# 70 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 71 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
char1 t; (t.x) = x; return t;
# 72 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 74 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline uchar1 make_uchar1(unsigned char x)
# 75 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 76 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
uchar1 t; (t.x) = x; return t;
# 77 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 79 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline char2 make_char2(signed char x, signed char y)
# 80 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 81 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
char2 t; (t.x) = x; (t.y) = y; return t;
# 82 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 84 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline uchar2 make_uchar2(unsigned char x, unsigned char y)
# 85 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 86 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
uchar2 t; (t.x) = x; (t.y) = y; return t;
# 87 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 89 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline char3 make_char3(signed char x, signed char y, signed char z)
# 90 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 91 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 92 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 94 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z)
# 95 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 96 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 97 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 99 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w)
# 100 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 101 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 102 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 104 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w)
# 105 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 106 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 107 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 109 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline short1 make_short1(short x)
# 110 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 111 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
short1 t; (t.x) = x; return t;
# 112 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 114 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ushort1 make_ushort1(unsigned short x)
# 115 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 116 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ushort1 t; (t.x) = x; return t;
# 117 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 119 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline short2 make_short2(short x, short y)
# 120 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 121 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
short2 t; (t.x) = x; (t.y) = y; return t;
# 122 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 124 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ushort2 make_ushort2(unsigned short x, unsigned short y)
# 125 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 126 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ushort2 t; (t.x) = x; (t.y) = y; return t;
# 127 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 129 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline short3 make_short3(short x, short y, short z)
# 130 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 131 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 132 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 134 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z)
# 135 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 136 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 137 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 139 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline short4 make_short4(short x, short y, short z, short w)
# 140 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 141 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 142 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 144 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w)
# 145 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 146 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 147 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 149 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline int1 make_int1(int x)
# 150 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 151 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
int1 t; (t.x) = x; return t;
# 152 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 154 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline uint1 make_uint1(unsigned x)
# 155 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 156 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
uint1 t; (t.x) = x; return t;
# 157 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 159 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline int2 make_int2(int x, int y)
# 160 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 161 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
int2 t; (t.x) = x; (t.y) = y; return t;
# 162 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 164 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline uint2 make_uint2(unsigned x, unsigned y)
# 165 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 166 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
uint2 t; (t.x) = x; (t.y) = y; return t;
# 167 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 169 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline int3 make_int3(int x, int y, int z)
# 170 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 171 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 172 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 174 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z)
# 175 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 176 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 177 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 179 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline int4 make_int4(int x, int y, int z, int w)
# 180 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 181 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 182 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 184 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w)
# 185 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 186 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 187 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 189 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline long1 make_long1(long x)
# 190 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 191 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
long1 t; (t.x) = x; return t;
# 192 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 194 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ulong1 make_ulong1(unsigned long x)
# 195 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 196 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ulong1 t; (t.x) = x; return t;
# 197 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 199 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline long2 make_long2(long x, long y)
# 200 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 201 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
long2 t; (t.x) = x; (t.y) = y; return t;
# 202 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 204 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ulong2 make_ulong2(unsigned long x, unsigned long y)
# 205 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 206 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ulong2 t; (t.x) = x; (t.y) = y; return t;
# 207 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 209 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline long3 make_long3(long x, long y, long z)
# 210 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 211 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 212 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 214 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z)
# 215 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 216 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 217 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 219 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline long4 make_long4(long x, long y, long z, long w)
# 220 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 221 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 222 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 224 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w)
# 225 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 226 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 227 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 229 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline float1 make_float1(float x)
# 230 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 231 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
float1 t; (t.x) = x; return t;
# 232 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 234 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline float2 make_float2(float x, float y)
# 235 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 236 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
float2 t; (t.x) = x; (t.y) = y; return t;
# 237 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 239 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline float3 make_float3(float x, float y, float z)
# 240 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 241 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 242 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 244 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline float4 make_float4(float x, float y, float z, float w)
# 245 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 246 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 247 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 249 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline longlong1 make_longlong1(long long x)
# 250 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 251 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
longlong1 t; (t.x) = x; return t;
# 252 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 254 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ulonglong1 make_ulonglong1(unsigned long long x)
# 255 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 256 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ulonglong1 t; (t.x) = x; return t;
# 257 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 259 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline longlong2 make_longlong2(long long x, long long y)
# 260 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 261 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
longlong2 t; (t.x) = x; (t.y) = y; return t;
# 262 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 264 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y)
# 265 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 266 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ulonglong2 t; (t.x) = x; (t.y) = y; return t;
# 267 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 269 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline longlong3 make_longlong3(long long x, long long y, long long z)
# 270 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 271 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 272 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 274 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z)
# 275 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 276 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 277 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 279 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w)
# 280 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 281 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 282 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 284 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w)
# 285 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 286 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 287 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 289 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline double1 make_double1(double x)
# 290 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 291 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
double1 t; (t.x) = x; return t;
# 292 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 294 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline double2 make_double2(double x, double y)
# 295 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 296 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
double2 t; (t.x) = x; (t.y) = y; return t;
# 297 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 299 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline double3 make_double3(double x, double y, double z)
# 300 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 301 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t;
# 302 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 304 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
static inline double4 make_double4(double x, double y, double z, double w)
# 305 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
{
# 306 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t;
# 307 "/usr/local/cuda4.1/cuda/include/vector_functions.h"
}
# 44 "/usr/include/string.h" 3
extern "C" void *memcpy(void *__restrict__ , const void *__restrict__ , size_t ) throw()
# 46 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 49 "/usr/include/string.h" 3
extern "C" void *memmove(void * , const void * , size_t ) throw()
# 50 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 57 "/usr/include/string.h" 3
extern "C" void *memccpy(void *__restrict__ , const void *__restrict__ , int , size_t ) throw()
# 59 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 65 "/usr/include/string.h" 3
extern "C" void *memset(void * , int , size_t ) throw() __attribute((__nonnull__(1)));
# 68 "/usr/include/string.h" 3
extern "C" int memcmp(const void * , const void * , size_t ) throw()
# 69 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 75 "/usr/include/string.h" 3
extern void *memchr(void * , int , size_t ) throw() __asm__("memchr")
# 76 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 77 "/usr/include/string.h" 3
extern const void *memchr(const void * , int , size_t ) throw() __asm__("memchr")
# 78 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 104 "/usr/include/string.h" 3
void *rawmemchr(void * , int ) throw() __asm__("rawmemchr")
# 105 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 106 "/usr/include/string.h" 3
const void *rawmemchr(const void * , int ) throw() __asm__("rawmemchr")
# 107 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 115 "/usr/include/string.h" 3
void *memrchr(void * , int , size_t ) throw() __asm__("memrchr")
# 116 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 117 "/usr/include/string.h" 3
const void *memrchr(const void * , int , size_t ) throw() __asm__("memrchr")
# 118 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 128 "/usr/include/string.h" 3
extern "C" char *strcpy(char *__restrict__ , const char *__restrict__ ) throw()
# 129 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 131 "/usr/include/string.h" 3
extern "C" char *strncpy(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 133 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 136 "/usr/include/string.h" 3
extern "C" char *strcat(char *__restrict__ , const char *__restrict__ ) throw()
# 137 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 139 "/usr/include/string.h" 3
extern "C" char *strncat(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 140 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 143 "/usr/include/string.h" 3
extern "C" int strcmp(const char * , const char * ) throw()
# 144 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 146 "/usr/include/string.h" 3
extern "C" int strncmp(const char * , const char * , size_t ) throw()
# 147 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 150 "/usr/include/string.h" 3
extern "C" int strcoll(const char * , const char * ) throw()
# 151 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 153 "/usr/include/string.h" 3
extern "C" size_t strxfrm(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 155 "/usr/include/string.h" 3
 __attribute((__nonnull__(2)));
# 40 "/usr/include/xlocale.h" 3
extern "C" { typedef
# 28 "/usr/include/xlocale.h" 3
struct __locale_struct {
# 31 "/usr/include/xlocale.h" 3
struct __locale_data *__locales[13];
# 34 "/usr/include/xlocale.h" 3
const unsigned short *__ctype_b;
# 35 "/usr/include/xlocale.h" 3
const int *__ctype_tolower;
# 36 "/usr/include/xlocale.h" 3
const int *__ctype_toupper;
# 39 "/usr/include/xlocale.h" 3
const char *__names[13];
# 40 "/usr/include/xlocale.h" 3
} *__locale_t; }
# 43 "/usr/include/xlocale.h" 3
extern "C" { typedef __locale_t locale_t; }
# 165 "/usr/include/string.h" 3
extern "C" int strcoll_l(const char * , const char * , __locale_t ) throw()
# 166 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3)));
# 168 "/usr/include/string.h" 3
extern "C" size_t strxfrm_l(char * , const char * , size_t , __locale_t ) throw()
# 169 "/usr/include/string.h" 3
 __attribute((__nonnull__(2, 4)));
# 175 "/usr/include/string.h" 3
extern "C" char *strdup(const char * ) throw()
# 176 "/usr/include/string.h" 3
 __attribute((__malloc__)) __attribute((__nonnull__(1)));
# 183 "/usr/include/string.h" 3
extern "C" char *strndup(const char * , size_t ) throw()
# 184 "/usr/include/string.h" 3
 __attribute((__malloc__)) __attribute((__nonnull__(1)));
# 215 "/usr/include/string.h" 3
extern char *strchr(char * , int ) throw() __asm__("strchr")
# 216 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 217 "/usr/include/string.h" 3
extern const char *strchr(const char * , int ) throw() __asm__("strchr")
# 218 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 242 "/usr/include/string.h" 3
extern char *strrchr(char * , int ) throw() __asm__("strrchr")
# 243 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 244 "/usr/include/string.h" 3
extern const char *strrchr(const char * , int ) throw() __asm__("strrchr")
# 245 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 271 "/usr/include/string.h" 3
char *strchrnul(char * , int ) throw() __asm__("strchrnul")
# 272 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 273 "/usr/include/string.h" 3
const char *strchrnul(const char * , int ) throw() __asm__("strchrnul")
# 274 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 284 "/usr/include/string.h" 3
extern "C" size_t strcspn(const char * , const char * ) throw()
# 285 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 288 "/usr/include/string.h" 3
extern "C" size_t strspn(const char * , const char * ) throw()
# 289 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 294 "/usr/include/string.h" 3
extern char *strpbrk(char * , const char * ) throw() __asm__("strpbrk")
# 295 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 296 "/usr/include/string.h" 3
extern const char *strpbrk(const char * , const char * ) throw() __asm__("strpbrk")
# 297 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 321 "/usr/include/string.h" 3
extern char *strstr(char * , const char * ) throw() __asm__("strstr")
# 322 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 323 "/usr/include/string.h" 3
extern const char *strstr(const char * , const char * ) throw() __asm__("strstr")
# 325 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 348 "/usr/include/string.h" 3
extern "C" char *strtok(char *__restrict__ , const char *__restrict__ ) throw()
# 349 "/usr/include/string.h" 3
 __attribute((__nonnull__(2)));
# 354 "/usr/include/string.h" 3
extern "C" char *__strtok_r(char *__restrict__ , const char *__restrict__ , char **__restrict__ ) throw()
# 357 "/usr/include/string.h" 3
 __attribute((__nonnull__(2, 3)));
# 359 "/usr/include/string.h" 3
extern "C" char *strtok_r(char *__restrict__ , const char *__restrict__ , char **__restrict__ ) throw()
# 361 "/usr/include/string.h" 3
 __attribute((__nonnull__(2, 3)));
# 367 "/usr/include/string.h" 3
char *strcasestr(char * , const char * ) throw() __asm__("strcasestr")
# 368 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 369 "/usr/include/string.h" 3
const char *strcasestr(const char * , const char * ) throw() __asm__("strcasestr")
# 371 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 382 "/usr/include/string.h" 3
extern "C" void *memmem(const void * , size_t , const void * , size_t ) throw()
# 384 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 3)));
# 388 "/usr/include/string.h" 3
extern "C" void *__mempcpy(void *__restrict__ , const void *__restrict__ , size_t ) throw()
# 390 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 391 "/usr/include/string.h" 3
extern "C" void *mempcpy(void *__restrict__ , const void *__restrict__ , size_t ) throw()
# 393 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 399 "/usr/include/string.h" 3
extern "C" size_t strlen(const char * ) throw()
# 400 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 406 "/usr/include/string.h" 3
extern "C" size_t strnlen(const char * , size_t ) throw()
# 407 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 413 "/usr/include/string.h" 3
extern "C" char *strerror(int ) throw();
# 438 "/usr/include/string.h" 3
extern "C" char *strerror_r(int , char * , size_t ) throw()
# 439 "/usr/include/string.h" 3
 __attribute((__nonnull__(2)));
# 445 "/usr/include/string.h" 3
extern "C" char *strerror_l(int , __locale_t ) throw();
# 451 "/usr/include/string.h" 3
extern "C" void __bzero(void * , size_t ) throw() __attribute((__nonnull__(1)));
# 455 "/usr/include/string.h" 3
extern "C" void bcopy(const void * , void * , size_t ) throw()
# 456 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 459 "/usr/include/string.h" 3
extern "C" void bzero(void * , size_t ) throw() __attribute((__nonnull__(1)));
# 462 "/usr/include/string.h" 3
extern "C" int bcmp(const void * , const void * , size_t ) throw()
# 463 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 469 "/usr/include/string.h" 3
extern char *index(char * , int ) throw() __asm__("index")
# 470 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 471 "/usr/include/string.h" 3
extern const char *index(const char * , int ) throw() __asm__("index")
# 472 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 497 "/usr/include/string.h" 3
extern char *rindex(char * , int ) throw() __asm__("rindex")
# 498 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 499 "/usr/include/string.h" 3
extern const char *rindex(const char * , int ) throw() __asm__("rindex")
# 500 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 523 "/usr/include/string.h" 3
extern "C" int ffs(int ) throw() __attribute((const));
# 528 "/usr/include/string.h" 3
extern "C" int ffsl(long ) throw() __attribute((const));
# 530 "/usr/include/string.h" 3
extern "C" int ffsll(long long ) throw()
# 531 "/usr/include/string.h" 3
 __attribute((const));
# 536 "/usr/include/string.h" 3
extern "C" int strcasecmp(const char * , const char * ) throw()
# 537 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 540 "/usr/include/string.h" 3
extern "C" int strncasecmp(const char * , const char * , size_t ) throw()
# 541 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 547 "/usr/include/string.h" 3
extern "C" int strcasecmp_l(const char * , const char * , __locale_t ) throw()
# 549 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3)));
# 551 "/usr/include/string.h" 3
extern "C" int strncasecmp_l(const char * , const char * , size_t , __locale_t ) throw()
# 553 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 4)));
# 559 "/usr/include/string.h" 3
extern "C" char *strsep(char **__restrict__ , const char *__restrict__ ) throw()
# 561 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 566 "/usr/include/string.h" 3
extern "C" char *strsignal(int ) throw();
# 569 "/usr/include/string.h" 3
extern "C" char *__stpcpy(char *__restrict__ , const char *__restrict__ ) throw()
# 570 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 571 "/usr/include/string.h" 3
extern "C" char *stpcpy(char *__restrict__ , const char *__restrict__ ) throw()
# 572 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 576 "/usr/include/string.h" 3
extern "C" char *__stpncpy(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 578 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 579 "/usr/include/string.h" 3
extern "C" char *stpncpy(char *__restrict__ , const char *__restrict__ , size_t ) throw()
# 581 "/usr/include/string.h" 3
 __attribute((__nonnull__(1, 2)));
# 586 "/usr/include/string.h" 3
extern "C" int strverscmp(const char * , const char * ) throw()
# 587 "/usr/include/string.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1, 2)));
# 590 "/usr/include/string.h" 3
extern "C" char *strfry(char * ) throw() __attribute((__nonnull__(1)));
# 593 "/usr/include/string.h" 3
extern "C" void *memfrob(void * , size_t ) throw() __attribute((__nonnull__(1)));
# 601 "/usr/include/string.h" 3
char *basename(char * ) throw() __asm__("basename")
# 602 "/usr/include/string.h" 3
 __attribute((__nonnull__(1)));
# 603 "/usr/include/string.h" 3
const char *basename(const char * ) throw() __asm__("basename")
# 604 "/usr/include/string.h" 3
 __attribute((__nonnull__(1)));
# 31 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __u_char; }
# 32 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned short __u_short; }
# 33 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __u_int; }
# 34 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __u_long; }
# 37 "/usr/include/bits/types.h" 3
extern "C" { typedef signed char __int8_t; }
# 38 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned char __uint8_t; }
# 39 "/usr/include/bits/types.h" 3
extern "C" { typedef signed short __int16_t; }
# 40 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned short __uint16_t; }
# 41 "/usr/include/bits/types.h" 3
extern "C" { typedef signed int __int32_t; }
# 42 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __uint32_t; }
# 44 "/usr/include/bits/types.h" 3
extern "C" { typedef signed long __int64_t; }
# 45 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __uint64_t; }
# 53 "/usr/include/bits/types.h" 3
extern "C" { typedef long __quad_t; }
# 54 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __u_quad_t; }
# 134 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __dev_t; }
# 135 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __uid_t; }
# 136 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __gid_t; }
# 137 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __ino_t; }
# 138 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __ino64_t; }
# 139 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __mode_t; }
# 140 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __nlink_t; }
# 141 "/usr/include/bits/types.h" 3
extern "C" { typedef long __off_t; }
# 142 "/usr/include/bits/types.h" 3
extern "C" { typedef long __off64_t; }
# 143 "/usr/include/bits/types.h" 3
extern "C" { typedef int __pid_t; }
# 144 "/usr/include/bits/types.h" 3
extern "C" { typedef struct { int __val[2]; } __fsid_t; }
# 145 "/usr/include/bits/types.h" 3
extern "C" { typedef long __clock_t; }
# 146 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __rlim_t; }
# 147 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __rlim64_t; }
# 148 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __id_t; }
# 149 "/usr/include/bits/types.h" 3
extern "C" { typedef long __time_t; }
# 150 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __useconds_t; }
# 151 "/usr/include/bits/types.h" 3
extern "C" { typedef long __suseconds_t; }
# 153 "/usr/include/bits/types.h" 3
extern "C" { typedef int __daddr_t; }
# 154 "/usr/include/bits/types.h" 3
extern "C" { typedef long __swblk_t; }
# 155 "/usr/include/bits/types.h" 3
extern "C" { typedef int __key_t; }
# 158 "/usr/include/bits/types.h" 3
extern "C" { typedef int __clockid_t; }
# 161 "/usr/include/bits/types.h" 3
extern "C" { typedef void *__timer_t; }
# 164 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blksize_t; }
# 169 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blkcnt_t; }
# 170 "/usr/include/bits/types.h" 3
extern "C" { typedef long __blkcnt64_t; }
# 173 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt_t; }
# 174 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsblkcnt64_t; }
# 177 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt_t; }
# 178 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned long __fsfilcnt64_t; }
# 180 "/usr/include/bits/types.h" 3
extern "C" { typedef long __ssize_t; }
# 184 "/usr/include/bits/types.h" 3
extern "C" { typedef __off64_t __loff_t; }
# 185 "/usr/include/bits/types.h" 3
extern "C" { typedef __quad_t *__qaddr_t; }
# 186 "/usr/include/bits/types.h" 3
extern "C" { typedef char *__caddr_t; }
# 189 "/usr/include/bits/types.h" 3
extern "C" { typedef long __intptr_t; }
# 192 "/usr/include/bits/types.h" 3
extern "C" { typedef unsigned __socklen_t; }
# 60 "/usr/include/time.h" 3
extern "C" { typedef __clock_t clock_t; }
# 76 "/usr/include/time.h" 3
extern "C" { typedef __time_t time_t; }
# 92 "/usr/include/time.h" 3
extern "C" { typedef __clockid_t clockid_t; }
# 104 "/usr/include/time.h" 3
extern "C" { typedef __timer_t timer_t; }
# 120 "/usr/include/time.h" 3
extern "C" { struct timespec {
# 122 "/usr/include/time.h" 3
__time_t tv_sec;
# 123 "/usr/include/time.h" 3
long tv_nsec;
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
# 183 "/usr/include/time.h" 3
extern "C" clock_t clock() throw();
# 186 "/usr/include/time.h" 3
extern "C" time_t time(time_t * ) throw();
# 189 "/usr/include/time.h" 3
extern "C" double difftime(time_t , time_t ) throw()
# 190 "/usr/include/time.h" 3
 __attribute((const));
# 193 "/usr/include/time.h" 3
extern "C" time_t mktime(tm * ) throw();
# 199 "/usr/include/time.h" 3
extern "C" size_t strftime(char *__restrict__ , size_t , const char *__restrict__ , const tm *__restrict__ ) throw();
# 207 "/usr/include/time.h" 3
extern "C" char *strptime(const char *__restrict__ , const char *__restrict__ , tm * ) throw();
# 217 "/usr/include/time.h" 3
extern "C" size_t strftime_l(char *__restrict__ , size_t , const char *__restrict__ , const tm *__restrict__ , __locale_t ) throw();
# 224 "/usr/include/time.h" 3
extern "C" char *strptime_l(const char *__restrict__ , const char *__restrict__ , tm * , __locale_t ) throw();
# 233 "/usr/include/time.h" 3
extern "C" tm *gmtime(const time_t * ) throw();
# 237 "/usr/include/time.h" 3
extern "C" tm *localtime(const time_t * ) throw();
# 243 "/usr/include/time.h" 3
extern "C" tm *gmtime_r(const time_t *__restrict__ , tm *__restrict__ ) throw();
# 248 "/usr/include/time.h" 3
extern "C" tm *localtime_r(const time_t *__restrict__ , tm *__restrict__ ) throw();
# 255 "/usr/include/time.h" 3
extern "C" char *asctime(const tm * ) throw();
# 258 "/usr/include/time.h" 3
extern "C" char *ctime(const time_t * ) throw();
# 266 "/usr/include/time.h" 3
extern "C" char *asctime_r(const tm *__restrict__ , char *__restrict__ ) throw();
# 270 "/usr/include/time.h" 3
extern "C" char *ctime_r(const time_t *__restrict__ , char *__restrict__ ) throw();
# 276 "/usr/include/time.h" 3
extern "C" { extern char *__tzname[2]; }
# 277 "/usr/include/time.h" 3
extern "C" { extern int __daylight; }
# 278 "/usr/include/time.h" 3
extern "C" { extern long __timezone; }
# 283 "/usr/include/time.h" 3
extern "C" { extern char *tzname[2]; }
# 287 "/usr/include/time.h" 3
extern "C" void tzset() throw();
# 291 "/usr/include/time.h" 3
extern "C" { extern int daylight; }
# 292 "/usr/include/time.h" 3
extern "C" { extern long timezone; }
# 298 "/usr/include/time.h" 3
extern "C" int stime(const time_t * ) throw();
# 313 "/usr/include/time.h" 3
extern "C" time_t timegm(tm * ) throw();
# 316 "/usr/include/time.h" 3
extern "C" time_t timelocal(tm * ) throw();
# 319 "/usr/include/time.h" 3
extern "C" int dysize(int ) throw() __attribute((const));
# 328 "/usr/include/time.h" 3
extern "C" int nanosleep(const timespec * , timespec * );
# 333 "/usr/include/time.h" 3
extern "C" int clock_getres(clockid_t , timespec * ) throw();
# 336 "/usr/include/time.h" 3
extern "C" int clock_gettime(clockid_t , timespec * ) throw();
# 339 "/usr/include/time.h" 3
extern "C" int clock_settime(clockid_t , const timespec * ) throw();
# 347 "/usr/include/time.h" 3
extern "C" int clock_nanosleep(clockid_t , int , const timespec * , timespec * );
# 352 "/usr/include/time.h" 3
extern "C" int clock_getcpuclockid(pid_t , clockid_t * ) throw();
# 357 "/usr/include/time.h" 3
extern "C" int timer_create(clockid_t , sigevent *__restrict__ , timer_t *__restrict__ ) throw();
# 362 "/usr/include/time.h" 3
extern "C" int timer_delete(timer_t ) throw();
# 365 "/usr/include/time.h" 3
extern "C" int timer_settime(timer_t , int , const itimerspec *__restrict__ , itimerspec *__restrict__ ) throw();
# 370 "/usr/include/time.h" 3
extern "C" int timer_gettime(timer_t , itimerspec * ) throw();
# 374 "/usr/include/time.h" 3
extern "C" int timer_getoverrun(timer_t ) throw();
# 390 "/usr/include/time.h" 3
extern "C" { extern int getdate_err; }
# 399 "/usr/include/time.h" 3
extern "C" tm *getdate(const char * );
# 413 "/usr/include/time.h" 3
extern "C" int getdate_r(const char *__restrict__ , tm *__restrict__ );
# 69 "/usr/local/cuda4.1/cuda/include/common_functions.h"
extern "C" clock_t clock() throw();
# 70 "/usr/local/cuda4.1/cuda/include/common_functions.h"
extern "C" void *memset(void *, int, size_t) throw();
# 71 "/usr/local/cuda4.1/cuda/include/common_functions.h"
extern "C" void *memcpy(void *, const void *, size_t) throw();
# 160 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int abs(int) throw();
# 161 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long labs(long) throw();
# 162 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long long llabs(long long) throw();
# 175 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double fabs(double ) throw();
# 188 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float fabsf(float ) throw();
# 189 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int min(int, int);
# 190 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" unsigned umin(unsigned, unsigned);
# 191 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long long llmin(long long, long long);
# 192 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" unsigned long long ullmin(unsigned long long, unsigned long long);
# 208 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float fminf(float , float ) throw();
# 224 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double fmin(double , double ) throw();
# 225 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int max(int, int);
# 226 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" unsigned umax(unsigned, unsigned);
# 227 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long long llmax(long long, long long);
# 228 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" unsigned long long ullmax(unsigned long long, unsigned long long);
# 244 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float fmaxf(float , float ) throw();
# 260 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double fmax(double, double) throw();
# 273 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double sin(double ) throw();
# 286 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double cos(double ) throw();
# 301 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" void sincos(double , double * , double * ) throw();
# 317 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" void sincosf(float , float * , float * ) throw();
# 330 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double tan(double ) throw();
# 345 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double sqrt(double ) throw();
# 360 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double rsqrt(double );
# 375 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float rsqrtf(float );
# 390 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double log2(double ) throw();
# 401 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double exp2(double ) throw();
# 412 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float exp2f(float ) throw();
# 423 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double exp10(double ) throw();
# 435 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float exp10f(float ) throw();
# 446 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double expm1(double ) throw();
# 457 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float expm1f(float ) throw();
# 472 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float log2f(float ) throw();
# 487 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double log10(double ) throw();
# 502 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double log(double ) throw();
# 517 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double log1p(double ) throw();
# 532 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float log1pf(float ) throw();
# 546 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double floor(double ) throw();
# 557 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double exp(double ) throw();
# 570 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double cosh(double ) throw();
# 582 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double sinh(double ) throw();
# 594 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double tanh(double ) throw();
# 608 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double acosh(double ) throw();
# 622 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float acoshf(float ) throw();
# 634 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double asinh(double ) throw();
# 646 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float asinhf(float ) throw();
# 660 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double atanh(double ) throw();
# 674 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float atanhf(float ) throw();
# 686 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double ldexp(double , int ) throw();
# 698 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float ldexpf(float , int ) throw();
# 711 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double logb(double ) throw();
# 724 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float logbf(float ) throw();
# 742 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int ilogb(double ) throw();
# 760 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int ilogbf(float ) throw();
# 774 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double scalbn(double , int ) throw();
# 788 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float scalbnf(float , int ) throw();
# 802 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double scalbln(double , long ) throw();
# 816 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float scalblnf(float , long ) throw();
# 837 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double frexp(double , int * ) throw();
# 858 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float frexpf(float , int * ) throw();
# 871 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double round(double ) throw();
# 884 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float roundf(float ) throw();
# 898 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long lround(double ) throw();
# 912 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long lroundf(float ) throw();
# 926 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long long llround(double ) throw();
# 940 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long long llroundf(float ) throw();
# 951 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double rint(double ) throw();
# 962 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float rintf(float ) throw();
# 974 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long lrint(double ) throw();
# 986 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long lrintf(float ) throw();
# 998 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long long llrint(double ) throw();
# 1010 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" long long llrintf(float ) throw();
# 1023 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double nearbyint(double ) throw();
# 1036 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float nearbyintf(float ) throw();
# 1048 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double ceil(double ) throw();
# 1059 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double trunc(double ) throw();
# 1070 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float truncf(float ) throw();
# 1084 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double fdim(double , double ) throw();
# 1098 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float fdimf(float , float ) throw();
# 1113 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double atan2(double , double ) throw();
# 1126 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double atan(double ) throw();
# 1140 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double acos(double ) throw();
# 1154 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double asin(double ) throw();
# 1169 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double hypot(double , double ) throw();
# 1186 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float hypotf(float , float ) throw();
# 1200 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double cbrt(double ) throw();
# 1214 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float cbrtf(float ) throw();
# 1227 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double rcbrt(double );
# 1240 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float rcbrtf(float );
# 1254 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double sinpi(double );
# 1268 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float sinpif(float );
# 1282 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double cospi(double );
# 1296 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float cospif(float );
# 1324 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double pow(double , double ) throw();
# 1341 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double modf(double , double * ) throw();
# 1361 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double fmod(double , double ) throw();
# 1379 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double remainder(double , double ) throw();
# 1398 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float remainderf(float , float ) throw();
# 1417 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double remquo(double , double , int * ) throw();
# 1436 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float remquof(float , float , int * ) throw();
# 1451 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double j0(double ) throw();
# 1466 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float j0f(float ) throw();
# 1482 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double j1(double ) throw();
# 1498 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float j1f(float ) throw();
# 1514 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double jn(int , double ) throw();
# 1530 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float jnf(int , float ) throw();
# 1547 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double y0(double ) throw();
# 1564 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float y0f(float ) throw();
# 1581 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double y1(double ) throw();
# 1598 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float y1f(float ) throw();
# 1616 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double yn(int , double ) throw();
# 1634 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float ynf(int , float ) throw();
# 1648 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double erf(double ) throw();
# 1662 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float erff(float ) throw();
# 1677 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double erfinv(double );
# 1692 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float erfinvf(float );
# 1706 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double erfc(double ) throw();
# 1720 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float erfcf(float ) throw();
# 1738 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double lgamma(double ) throw();
# 1753 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double erfcinv(double );
# 1768 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float erfcinvf(float );
# 1778 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double erfcx(double );
# 1788 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float erfcxf(float );
# 1806 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float lgammaf(float ) throw();
# 1824 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double tgamma(double ) throw();
# 1842 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float tgammaf(float ) throw();
# 1851 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double copysign(double , double ) throw();
# 1860 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float copysignf(float , float ) throw();
# 1875 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double nextafter(double , double ) throw();
# 1890 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float nextafterf(float , float ) throw();
# 1902 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double nan(const char * ) throw();
# 1914 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float nanf(const char * ) throw();
# 1915 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __isinff(float) throw();
# 1916 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __isnanf(float) throw();
# 1925 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __finite(double) throw();
# 1926 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __finitef(float) throw();
# 1927 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __signbit(double) throw();
# 1928 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __isnan(double) throw();
# 1929 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __isinf(double) throw();
# 1932 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __signbitf(float) throw();
# 1949 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" double fma(double , double , double ) throw();
# 1966 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float fmaf(float , float , float ) throw();
# 1971 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __signbitl(long double) throw();
# 1977 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __finitel(long double) throw();
# 1978 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __isinfl(long double) throw();
# 1979 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" int __isnanl(long double) throw();
# 2017 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float acosf(float ) throw();
# 2031 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float asinf(float ) throw();
# 2045 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float atanf(float ) throw();
# 2060 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float atan2f(float , float ) throw();
# 2074 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float cosf(float ) throw();
# 2088 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float sinf(float ) throw();
# 2102 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float tanf(float ) throw();
# 2116 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float coshf(float ) throw();
# 2129 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float sinhf(float ) throw();
# 2141 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float tanhf(float ) throw();
# 2156 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float logf(float ) throw();
# 2168 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float expf(float ) throw();
# 2183 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float log10f(float ) throw();
# 2199 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float modff(float , float * ) throw();
# 2227 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float powf(float , float ) throw();
# 2242 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float sqrtf(float ) throw();
# 2254 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float ceilf(float ) throw();
# 2268 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float floorf(float ) throw();
# 2288 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern "C" float fmodf(float , float ) throw();
# 31 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef float float_t; }
# 32 "/usr/include/bits/mathdef.h" 3
extern "C" { typedef double double_t; }
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" double acos(double ) throw(); extern "C" double __acos(double ) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" double asin(double ) throw(); extern "C" double __asin(double ) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" double atan(double ) throw(); extern "C" double __atan(double ) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" double atan2(double , double ) throw(); extern "C" double __atan2(double , double ) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" double cos(double ) throw(); extern "C" double __cos(double ) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" double sin(double ) throw(); extern "C" double __sin(double ) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" double tan(double ) throw(); extern "C" double __tan(double ) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" double cosh(double ) throw(); extern "C" double __cosh(double ) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" double sinh(double ) throw(); extern "C" double __sinh(double ) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" double tanh(double ) throw(); extern "C" double __tanh(double ) throw();
# 82 "/usr/include/bits/mathcalls.h" 3
extern "C" void sincos(double , double * , double * ) throw(); extern "C" void __sincos(double , double * , double * ) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" double acosh(double ) throw(); extern "C" double __acosh(double ) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" double asinh(double ) throw(); extern "C" double __asinh(double ) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" double atanh(double ) throw(); extern "C" double __atanh(double ) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" double exp(double ) throw(); extern "C" double __exp(double ) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" double frexp(double , int * ) throw(); extern "C" double __frexp(double , int * ) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" double ldexp(double , int ) throw(); extern "C" double __ldexp(double , int ) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" double log(double ) throw(); extern "C" double __log(double ) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" double log10(double ) throw(); extern "C" double __log10(double ) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" double modf(double , double * ) throw(); extern "C" double __modf(double , double * ) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" double exp10(double ) throw(); extern "C" double __exp10(double ) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" double pow10(double ) throw(); extern "C" double __pow10(double ) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" double expm1(double ) throw(); extern "C" double __expm1(double ) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" double log1p(double ) throw(); extern "C" double __log1p(double ) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" double logb(double ) throw(); extern "C" double __logb(double ) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" double exp2(double ) throw(); extern "C" double __exp2(double ) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" double log2(double ) throw(); extern "C" double __log2(double ) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" double pow(double , double ) throw(); extern "C" double __pow(double , double ) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" double sqrt(double ) throw(); extern "C" double __sqrt(double ) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" double hypot(double , double ) throw(); extern "C" double __hypot(double , double ) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" double cbrt(double ) throw(); extern "C" double __cbrt(double ) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" double ceil(double ) throw() __attribute((const)); extern "C" double __ceil(double ) throw() __attribute((const));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" double fabs(double ) throw() __attribute((const)); extern "C" double __fabs(double ) throw() __attribute((const));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" double floor(double ) throw() __attribute((const)); extern "C" double __floor(double ) throw() __attribute((const));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" double fmod(double , double ) throw(); extern "C" double __fmod(double , double ) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" int __isinf(double ) throw() __attribute((const));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" int __finite(double ) throw() __attribute((const));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinf(double ) throw() __attribute((const));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finite(double ) throw() __attribute((const));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" double drem(double , double ) throw(); extern "C" double __drem(double , double ) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" double significand(double ) throw(); extern "C" double __significand(double ) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" double copysign(double , double ) throw() __attribute((const)); extern "C" double __copysign(double , double ) throw() __attribute((const));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" double nan(const char * ) throw() __attribute((const)); extern "C" double __nan(const char * ) throw() __attribute((const));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" int __isnan(double ) throw() __attribute((const));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnan(double ) throw() __attribute((const));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" double j0(double) throw(); extern "C" double __j0(double) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" double j1(double) throw(); extern "C" double __j1(double) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" double jn(int, double) throw(); extern "C" double __jn(int, double) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" double y0(double) throw(); extern "C" double __y0(double) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" double y1(double) throw(); extern "C" double __y1(double) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" double yn(int, double) throw(); extern "C" double __yn(int, double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" double erf(double) throw(); extern "C" double __erf(double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" double erfc(double) throw(); extern "C" double __erfc(double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" double lgamma(double) throw(); extern "C" double __lgamma(double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" double tgamma(double) throw(); extern "C" double __tgamma(double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" double gamma(double) throw(); extern "C" double __gamma(double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" double lgamma_r(double, int * ) throw(); extern "C" double __lgamma_r(double, int * ) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" double rint(double ) throw(); extern "C" double __rint(double ) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" double nextafter(double , double ) throw() __attribute((const)); extern "C" double __nextafter(double , double ) throw() __attribute((const));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" double nexttoward(double , long double ) throw() __attribute((const)); extern "C" double __nexttoward(double , long double ) throw() __attribute((const));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" double remainder(double , double ) throw(); extern "C" double __remainder(double , double ) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" double scalbn(double , int ) throw(); extern "C" double __scalbn(double , int ) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" int ilogb(double ) throw(); extern "C" int __ilogb(double ) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" double scalbln(double , long ) throw(); extern "C" double __scalbln(double , long ) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" double nearbyint(double ) throw(); extern "C" double __nearbyint(double ) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" double round(double ) throw() __attribute((const)); extern "C" double __round(double ) throw() __attribute((const));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" double trunc(double ) throw() __attribute((const)); extern "C" double __trunc(double ) throw() __attribute((const));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" double remquo(double , double , int * ) throw(); extern "C" double __remquo(double , double , int * ) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" long lrint(double ) throw(); extern "C" long __lrint(double ) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llrint(double ) throw(); extern "C" long long __llrint(double ) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" long lround(double ) throw(); extern "C" long __lround(double ) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llround(double ) throw(); extern "C" long long __llround(double ) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" double fdim(double , double ) throw(); extern "C" double __fdim(double , double ) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" double fmax(double , double ) throw(); extern "C" double __fmax(double , double ) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" double fmin(double , double ) throw(); extern "C" double __fmin(double , double ) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassify(double ) throw()
# 347 "/usr/include/bits/mathcalls.h" 3
 __attribute((const));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" int __signbit(double ) throw()
# 351 "/usr/include/bits/mathcalls.h" 3
 __attribute((const));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" double fma(double , double , double ) throw(); extern "C" double __fma(double , double , double ) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" double scalb(double , double ) throw(); extern "C" double __scalb(double , double ) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" float acosf(float ) throw(); extern "C" float __acosf(float ) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" float asinf(float ) throw(); extern "C" float __asinf(float ) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" float atanf(float ) throw(); extern "C" float __atanf(float ) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" float atan2f(float , float ) throw(); extern "C" float __atan2f(float , float ) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" float cosf(float ) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" float sinf(float ) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" float tanf(float ) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" float coshf(float ) throw(); extern "C" float __coshf(float ) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" float sinhf(float ) throw(); extern "C" float __sinhf(float ) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" float tanhf(float ) throw(); extern "C" float __tanhf(float ) throw();
# 83 "/usr/include/bits/mathcalls.h" 3
extern "C" void sincosf(float , float * , float * ) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" float acoshf(float ) throw(); extern "C" float __acoshf(float ) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" float asinhf(float ) throw(); extern "C" float __asinhf(float ) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" float atanhf(float ) throw(); extern "C" float __atanhf(float ) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" float expf(float ) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" float frexpf(float , int * ) throw(); extern "C" float __frexpf(float , int * ) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" float ldexpf(float , int ) throw(); extern "C" float __ldexpf(float , int ) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" float logf(float ) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" float log10f(float ) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" float modff(float , float * ) throw(); extern "C" float __modff(float , float * ) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" float exp10f(float ) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" float pow10f(float ) throw(); extern "C" float __pow10f(float ) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" float expm1f(float ) throw(); extern "C" float __expm1f(float ) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" float log1pf(float ) throw(); extern "C" float __log1pf(float ) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" float logbf(float ) throw(); extern "C" float __logbf(float ) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" float exp2f(float ) throw(); extern "C" float __exp2f(float ) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" float log2f(float ) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" float powf(float , float ) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" float sqrtf(float ) throw(); extern "C" float __sqrtf(float ) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" float hypotf(float , float ) throw(); extern "C" float __hypotf(float , float ) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" float cbrtf(float ) throw(); extern "C" float __cbrtf(float ) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" float ceilf(float ) throw() __attribute((const)); extern "C" float __ceilf(float ) throw() __attribute((const));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" float fabsf(float ) throw() __attribute((const)); extern "C" float __fabsf(float ) throw() __attribute((const));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" float floorf(float ) throw() __attribute((const)); extern "C" float __floorf(float ) throw() __attribute((const));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" float fmodf(float , float ) throw(); extern "C" float __fmodf(float , float ) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" int __isinff(float ) throw() __attribute((const));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" int __finitef(float ) throw() __attribute((const));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinff(float ) throw() __attribute((const));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitef(float ) throw() __attribute((const));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" float dremf(float , float ) throw(); extern "C" float __dremf(float , float ) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" float significandf(float ) throw(); extern "C" float __significandf(float ) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" float copysignf(float , float ) throw() __attribute((const)); extern "C" float __copysignf(float , float ) throw() __attribute((const));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" float nanf(const char * ) throw() __attribute((const)); extern "C" float __nanf(const char * ) throw() __attribute((const));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" int __isnanf(float ) throw() __attribute((const));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanf(float ) throw() __attribute((const));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" float j0f(float) throw(); extern "C" float __j0f(float) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" float j1f(float) throw(); extern "C" float __j1f(float) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" float jnf(int, float) throw(); extern "C" float __jnf(int, float) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" float y0f(float) throw(); extern "C" float __y0f(float) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" float y1f(float) throw(); extern "C" float __y1f(float) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" float ynf(int, float) throw(); extern "C" float __ynf(int, float) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" float erff(float) throw(); extern "C" float __erff(float) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" float erfcf(float) throw(); extern "C" float __erfcf(float) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" float lgammaf(float) throw(); extern "C" float __lgammaf(float) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" float tgammaf(float) throw(); extern "C" float __tgammaf(float) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" float gammaf(float) throw(); extern "C" float __gammaf(float) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" float lgammaf_r(float, int * ) throw(); extern "C" float __lgammaf_r(float, int * ) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" float rintf(float ) throw(); extern "C" float __rintf(float ) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" float nextafterf(float , float ) throw() __attribute((const)); extern "C" float __nextafterf(float , float ) throw() __attribute((const));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" float nexttowardf(float , long double ) throw() __attribute((const)); extern "C" float __nexttowardf(float , long double ) throw() __attribute((const));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" float remainderf(float , float ) throw(); extern "C" float __remainderf(float , float ) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" float scalbnf(float , int ) throw(); extern "C" float __scalbnf(float , int ) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" int ilogbf(float ) throw(); extern "C" int __ilogbf(float ) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" float scalblnf(float , long ) throw(); extern "C" float __scalblnf(float , long ) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" float nearbyintf(float ) throw(); extern "C" float __nearbyintf(float ) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" float roundf(float ) throw() __attribute((const)); extern "C" float __roundf(float ) throw() __attribute((const));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" float truncf(float ) throw() __attribute((const)); extern "C" float __truncf(float ) throw() __attribute((const));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" float remquof(float , float , int * ) throw(); extern "C" float __remquof(float , float , int * ) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" long lrintf(float ) throw(); extern "C" long __lrintf(float ) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llrintf(float ) throw(); extern "C" long long __llrintf(float ) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" long lroundf(float ) throw(); extern "C" long __lroundf(float ) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llroundf(float ) throw(); extern "C" long long __llroundf(float ) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" float fdimf(float , float ) throw(); extern "C" float __fdimf(float , float ) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" float fmaxf(float , float ) throw(); extern "C" float __fmaxf(float , float ) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" float fminf(float , float ) throw(); extern "C" float __fminf(float , float ) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyf(float ) throw()
# 347 "/usr/include/bits/mathcalls.h" 3
 __attribute((const));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" int __signbitf(float ) throw()
# 351 "/usr/include/bits/mathcalls.h" 3
 __attribute((const));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" float fmaf(float , float , float ) throw(); extern "C" float __fmaf(float , float , float ) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" float scalbf(float , float ) throw(); extern "C" float __scalbf(float , float ) throw();
# 55 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acosl(long double ) throw(); extern "C" long double __acosl(long double ) throw();
# 57 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinl(long double ) throw(); extern "C" long double __asinl(long double ) throw();
# 59 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanl(long double ) throw(); extern "C" long double __atanl(long double ) throw();
# 61 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atan2l(long double , long double ) throw(); extern "C" long double __atan2l(long double , long double ) throw();
# 64 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cosl(long double ) throw(); extern "C" long double __cosl(long double ) throw();
# 66 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinl(long double ) throw(); extern "C" long double __sinl(long double ) throw();
# 68 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanl(long double ) throw(); extern "C" long double __tanl(long double ) throw();
# 73 "/usr/include/bits/mathcalls.h" 3
extern "C" long double coshl(long double ) throw(); extern "C" long double __coshl(long double ) throw();
# 75 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sinhl(long double ) throw(); extern "C" long double __sinhl(long double ) throw();
# 77 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tanhl(long double ) throw(); extern "C" long double __tanhl(long double ) throw();
# 83 "/usr/include/bits/mathcalls.h" 3
extern "C" void sincosl(long double , long double * , long double * ) throw();
# 83 "/usr/include/bits/mathcalls.h" 3
extern "C" void __sincosl(long double , long double * , long double * ) throw();
# 89 "/usr/include/bits/mathcalls.h" 3
extern "C" long double acoshl(long double ) throw(); extern "C" long double __acoshl(long double ) throw();
# 91 "/usr/include/bits/mathcalls.h" 3
extern "C" long double asinhl(long double ) throw(); extern "C" long double __asinhl(long double ) throw();
# 93 "/usr/include/bits/mathcalls.h" 3
extern "C" long double atanhl(long double ) throw(); extern "C" long double __atanhl(long double ) throw();
# 101 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expl(long double ) throw(); extern "C" long double __expl(long double ) throw();
# 104 "/usr/include/bits/mathcalls.h" 3
extern "C" long double frexpl(long double , int * ) throw(); extern "C" long double __frexpl(long double , int * ) throw();
# 107 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ldexpl(long double , int ) throw(); extern "C" long double __ldexpl(long double , int ) throw();
# 110 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logl(long double ) throw(); extern "C" long double __logl(long double ) throw();
# 113 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log10l(long double ) throw(); extern "C" long double __log10l(long double ) throw();
# 116 "/usr/include/bits/mathcalls.h" 3
extern "C" long double modfl(long double , long double * ) throw(); extern "C" long double __modfl(long double , long double * ) throw();
# 121 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp10l(long double ) throw(); extern "C" long double __exp10l(long double ) throw();
# 123 "/usr/include/bits/mathcalls.h" 3
extern "C" long double pow10l(long double ) throw(); extern "C" long double __pow10l(long double ) throw();
# 129 "/usr/include/bits/mathcalls.h" 3
extern "C" long double expm1l(long double ) throw(); extern "C" long double __expm1l(long double ) throw();
# 132 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log1pl(long double ) throw(); extern "C" long double __log1pl(long double ) throw();
# 135 "/usr/include/bits/mathcalls.h" 3
extern "C" long double logbl(long double ) throw(); extern "C" long double __logbl(long double ) throw();
# 142 "/usr/include/bits/mathcalls.h" 3
extern "C" long double exp2l(long double ) throw(); extern "C" long double __exp2l(long double ) throw();
# 145 "/usr/include/bits/mathcalls.h" 3
extern "C" long double log2l(long double ) throw(); extern "C" long double __log2l(long double ) throw();
# 154 "/usr/include/bits/mathcalls.h" 3
extern "C" long double powl(long double , long double ) throw(); extern "C" long double __powl(long double , long double ) throw();
# 157 "/usr/include/bits/mathcalls.h" 3
extern "C" long double sqrtl(long double ) throw(); extern "C" long double __sqrtl(long double ) throw();
# 163 "/usr/include/bits/mathcalls.h" 3
extern "C" long double hypotl(long double , long double ) throw(); extern "C" long double __hypotl(long double , long double ) throw();
# 170 "/usr/include/bits/mathcalls.h" 3
extern "C" long double cbrtl(long double ) throw(); extern "C" long double __cbrtl(long double ) throw();
# 179 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ceill(long double ) throw() __attribute((const)); extern "C" long double __ceill(long double ) throw() __attribute((const));
# 182 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fabsl(long double ) throw() __attribute((const)); extern "C" long double __fabsl(long double ) throw() __attribute((const));
# 185 "/usr/include/bits/mathcalls.h" 3
extern "C" long double floorl(long double ) throw() __attribute((const)); extern "C" long double __floorl(long double ) throw() __attribute((const));
# 188 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmodl(long double , long double ) throw(); extern "C" long double __fmodl(long double , long double ) throw();
# 193 "/usr/include/bits/mathcalls.h" 3
extern "C" int __isinfl(long double ) throw() __attribute((const));
# 196 "/usr/include/bits/mathcalls.h" 3
extern "C" int __finitel(long double ) throw() __attribute((const));
# 202 "/usr/include/bits/mathcalls.h" 3
extern "C" int isinfl(long double ) throw() __attribute((const));
# 205 "/usr/include/bits/mathcalls.h" 3
extern "C" int finitel(long double ) throw() __attribute((const));
# 208 "/usr/include/bits/mathcalls.h" 3
extern "C" long double dreml(long double , long double ) throw(); extern "C" long double __dreml(long double , long double ) throw();
# 212 "/usr/include/bits/mathcalls.h" 3
extern "C" long double significandl(long double ) throw(); extern "C" long double __significandl(long double ) throw();
# 218 "/usr/include/bits/mathcalls.h" 3
extern "C" long double copysignl(long double , long double ) throw() __attribute((const)); extern "C" long double __copysignl(long double , long double ) throw() __attribute((const));
# 225 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nanl(const char * ) throw() __attribute((const)); extern "C" long double __nanl(const char * ) throw() __attribute((const));
# 231 "/usr/include/bits/mathcalls.h" 3
extern "C" int __isnanl(long double ) throw() __attribute((const));
# 235 "/usr/include/bits/mathcalls.h" 3
extern "C" int isnanl(long double ) throw() __attribute((const));
# 238 "/usr/include/bits/mathcalls.h" 3
extern "C" long double j0l(long double) throw(); extern "C" long double __j0l(long double) throw();
# 239 "/usr/include/bits/mathcalls.h" 3
extern "C" long double j1l(long double) throw(); extern "C" long double __j1l(long double) throw();
# 240 "/usr/include/bits/mathcalls.h" 3
extern "C" long double jnl(int, long double) throw(); extern "C" long double __jnl(int, long double) throw();
# 241 "/usr/include/bits/mathcalls.h" 3
extern "C" long double y0l(long double) throw(); extern "C" long double __y0l(long double) throw();
# 242 "/usr/include/bits/mathcalls.h" 3
extern "C" long double y1l(long double) throw(); extern "C" long double __y1l(long double) throw();
# 243 "/usr/include/bits/mathcalls.h" 3
extern "C" long double ynl(int, long double) throw(); extern "C" long double __ynl(int, long double) throw();
# 250 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfl(long double) throw(); extern "C" long double __erfl(long double) throw();
# 251 "/usr/include/bits/mathcalls.h" 3
extern "C" long double erfcl(long double) throw(); extern "C" long double __erfcl(long double) throw();
# 252 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal(long double) throw(); extern "C" long double __lgammal(long double) throw();
# 259 "/usr/include/bits/mathcalls.h" 3
extern "C" long double tgammal(long double) throw(); extern "C" long double __tgammal(long double) throw();
# 265 "/usr/include/bits/mathcalls.h" 3
extern "C" long double gammal(long double) throw(); extern "C" long double __gammal(long double) throw();
# 272 "/usr/include/bits/mathcalls.h" 3
extern "C" long double lgammal_r(long double, int * ) throw(); extern "C" long double __lgammal_r(long double, int * ) throw();
# 280 "/usr/include/bits/mathcalls.h" 3
extern "C" long double rintl(long double ) throw(); extern "C" long double __rintl(long double ) throw();
# 283 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nextafterl(long double , long double ) throw() __attribute((const)); extern "C" long double __nextafterl(long double , long double ) throw() __attribute((const));
# 285 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nexttowardl(long double , long double ) throw() __attribute((const)); extern "C" long double __nexttowardl(long double , long double ) throw() __attribute((const));
# 289 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remainderl(long double , long double ) throw(); extern "C" long double __remainderl(long double , long double ) throw();
# 293 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbnl(long double , int ) throw(); extern "C" long double __scalbnl(long double , int ) throw();
# 297 "/usr/include/bits/mathcalls.h" 3
extern "C" int ilogbl(long double ) throw(); extern "C" int __ilogbl(long double ) throw();
# 302 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalblnl(long double , long ) throw(); extern "C" long double __scalblnl(long double , long ) throw();
# 306 "/usr/include/bits/mathcalls.h" 3
extern "C" long double nearbyintl(long double ) throw(); extern "C" long double __nearbyintl(long double ) throw();
# 310 "/usr/include/bits/mathcalls.h" 3
extern "C" long double roundl(long double ) throw() __attribute((const)); extern "C" long double __roundl(long double ) throw() __attribute((const));
# 314 "/usr/include/bits/mathcalls.h" 3
extern "C" long double truncl(long double ) throw() __attribute((const)); extern "C" long double __truncl(long double ) throw() __attribute((const));
# 319 "/usr/include/bits/mathcalls.h" 3
extern "C" long double remquol(long double , long double , int * ) throw(); extern "C" long double __remquol(long double , long double , int * ) throw();
# 326 "/usr/include/bits/mathcalls.h" 3
extern "C" long lrintl(long double ) throw(); extern "C" long __lrintl(long double ) throw();
# 327 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llrintl(long double ) throw(); extern "C" long long __llrintl(long double ) throw();
# 331 "/usr/include/bits/mathcalls.h" 3
extern "C" long lroundl(long double ) throw(); extern "C" long __lroundl(long double ) throw();
# 332 "/usr/include/bits/mathcalls.h" 3
extern "C" long long llroundl(long double ) throw(); extern "C" long long __llroundl(long double ) throw();
# 336 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fdiml(long double , long double ) throw(); extern "C" long double __fdiml(long double , long double ) throw();
# 339 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmaxl(long double , long double ) throw(); extern "C" long double __fmaxl(long double , long double ) throw();
# 342 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fminl(long double , long double ) throw(); extern "C" long double __fminl(long double , long double ) throw();
# 346 "/usr/include/bits/mathcalls.h" 3
extern "C" int __fpclassifyl(long double ) throw()
# 347 "/usr/include/bits/mathcalls.h" 3
 __attribute((const));
# 350 "/usr/include/bits/mathcalls.h" 3
extern "C" int __signbitl(long double ) throw()
# 351 "/usr/include/bits/mathcalls.h" 3
 __attribute((const));
# 355 "/usr/include/bits/mathcalls.h" 3
extern "C" long double fmal(long double , long double , long double ) throw(); extern "C" long double __fmal(long double , long double , long double ) throw();
# 364 "/usr/include/bits/mathcalls.h" 3
extern "C" long double scalbl(long double , long double ) throw(); extern "C" long double __scalbl(long double , long double ) throw();
# 161 "/usr/include/math.h" 3
extern "C" { extern int signgam; }
# 203 "/usr/include/math.h" 3
enum {
# 204 "/usr/include/math.h" 3
FP_NAN,
# 206 "/usr/include/math.h" 3
FP_INFINITE,
# 208 "/usr/include/math.h" 3
FP_ZERO,
# 210 "/usr/include/math.h" 3
FP_SUBNORMAL,
# 212 "/usr/include/math.h" 3
FP_NORMAL
# 214 "/usr/include/math.h" 3
};
# 302 "/usr/include/math.h" 3
extern "C" { typedef
# 296 "/usr/include/math.h" 3
enum {
# 297 "/usr/include/math.h" 3
_IEEE_ = (-1),
# 298 "/usr/include/math.h" 3
_SVID_ = 0,
# 299 "/usr/include/math.h" 3
_XOPEN_,
# 300 "/usr/include/math.h" 3
_POSIX_,
# 301 "/usr/include/math.h" 3
_ISOC_
# 302 "/usr/include/math.h" 3
} _LIB_VERSION_TYPE; }
# 307 "/usr/include/math.h" 3
extern "C" { extern _LIB_VERSION_TYPE _LIB_VERSION; }
# 318 "/usr/include/math.h" 3
extern "C" { struct __exception {
# 323 "/usr/include/math.h" 3
int type;
# 324 "/usr/include/math.h" 3
char *name;
# 325 "/usr/include/math.h" 3
double arg1;
# 326 "/usr/include/math.h" 3
double arg2;
# 327 "/usr/include/math.h" 3
double retval;
# 328 "/usr/include/math.h" 3
}; }
# 331 "/usr/include/math.h" 3
extern "C" int matherr(__exception * ) throw();
# 67 "/usr/include/bits/waitstatus.h" 3
extern "C" { union wait {
# 69 "/usr/include/bits/waitstatus.h" 3
int w_status;
# 71 "/usr/include/bits/waitstatus.h" 3
struct {
# 73 "/usr/include/bits/waitstatus.h" 3
unsigned __w_termsig:7;
# 74 "/usr/include/bits/waitstatus.h" 3
unsigned __w_coredump:1;
# 75 "/usr/include/bits/waitstatus.h" 3
unsigned __w_retcode:8;
# 76 "/usr/include/bits/waitstatus.h" 3
unsigned:16;
# 84 "/usr/include/bits/waitstatus.h" 3
} __wait_terminated;
# 86 "/usr/include/bits/waitstatus.h" 3
struct {
# 88 "/usr/include/bits/waitstatus.h" 3
unsigned __w_stopval:8;
# 89 "/usr/include/bits/waitstatus.h" 3
unsigned __w_stopsig:8;
# 90 "/usr/include/bits/waitstatus.h" 3
unsigned:16;
# 97 "/usr/include/bits/waitstatus.h" 3
} __wait_stopped;
# 98 "/usr/include/bits/waitstatus.h" 3
}; }
# 102 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 99 "/usr/include/stdlib.h" 3
struct {
# 100 "/usr/include/stdlib.h" 3
int quot;
# 101 "/usr/include/stdlib.h" 3
int rem;
# 102 "/usr/include/stdlib.h" 3
} div_t; }
# 110 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 107 "/usr/include/stdlib.h" 3
struct {
# 108 "/usr/include/stdlib.h" 3
long quot;
# 109 "/usr/include/stdlib.h" 3
long rem;
# 110 "/usr/include/stdlib.h" 3
} ldiv_t; }
# 122 "/usr/include/stdlib.h" 3
extern "C" { typedef
# 119 "/usr/include/stdlib.h" 3
struct {
# 120 "/usr/include/stdlib.h" 3
long long quot;
# 121 "/usr/include/stdlib.h" 3
long long rem;
# 122 "/usr/include/stdlib.h" 3
} lldiv_t; }
# 140 "/usr/include/stdlib.h" 3
extern "C" size_t __ctype_get_mb_cur_max() throw();
# 145 "/usr/include/stdlib.h" 3
extern "C" double atof(const char * ) throw()
# 146 "/usr/include/stdlib.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 148 "/usr/include/stdlib.h" 3
extern "C" int atoi(const char * ) throw()
# 149 "/usr/include/stdlib.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 151 "/usr/include/stdlib.h" 3
extern "C" long atol(const char * ) throw()
# 152 "/usr/include/stdlib.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 158 "/usr/include/stdlib.h" 3
extern "C" long long atoll(const char * ) throw()
# 159 "/usr/include/stdlib.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 165 "/usr/include/stdlib.h" 3
extern "C" double strtod(const char *__restrict__ , char **__restrict__ ) throw()
# 167 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 173 "/usr/include/stdlib.h" 3
extern "C" float strtof(const char *__restrict__ , char **__restrict__ ) throw()
# 174 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 176 "/usr/include/stdlib.h" 3
extern "C" long double strtold(const char *__restrict__ , char **__restrict__ ) throw()
# 178 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 184 "/usr/include/stdlib.h" 3
extern "C" long strtol(const char *__restrict__ , char **__restrict__ , int ) throw()
# 186 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 188 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul(const char *__restrict__ , char **__restrict__ , int ) throw()
# 190 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 196 "/usr/include/stdlib.h" 3
extern "C" long long strtoq(const char *__restrict__ , char **__restrict__ , int ) throw()
# 198 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 201 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtouq(const char *__restrict__ , char **__restrict__ , int ) throw()
# 203 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 210 "/usr/include/stdlib.h" 3
extern "C" long long strtoll(const char *__restrict__ , char **__restrict__ , int ) throw()
# 212 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 215 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull(const char *__restrict__ , char **__restrict__ , int ) throw()
# 217 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 240 "/usr/include/stdlib.h" 3
extern "C" long strtol_l(const char *__restrict__ , char **__restrict__ , int , __locale_t ) throw()
# 242 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 244 "/usr/include/stdlib.h" 3
extern "C" unsigned long strtoul_l(const char *__restrict__ , char **__restrict__ , int , __locale_t ) throw()
# 247 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 250 "/usr/include/stdlib.h" 3
extern "C" long long strtoll_l(const char *__restrict__ , char **__restrict__ , int , __locale_t ) throw()
# 253 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 256 "/usr/include/stdlib.h" 3
extern "C" unsigned long long strtoull_l(const char *__restrict__ , char **__restrict__ , int , __locale_t ) throw()
# 259 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 261 "/usr/include/stdlib.h" 3
extern "C" double strtod_l(const char *__restrict__ , char **__restrict__ , __locale_t ) throw()
# 263 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 3)));
# 265 "/usr/include/stdlib.h" 3
extern "C" float strtof_l(const char *__restrict__ , char **__restrict__ , __locale_t ) throw()
# 267 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 3)));
# 269 "/usr/include/stdlib.h" 3
extern "C" long double strtold_l(const char *__restrict__ , char **__restrict__ , __locale_t ) throw()
# 272 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 3)));
# 311 "/usr/include/stdlib.h" 3
extern "C" char *l64a(long ) throw();
# 314 "/usr/include/stdlib.h" 3
extern "C" long a64l(const char * ) throw()
# 315 "/usr/include/stdlib.h" 3
 __attribute((__pure__)) __attribute((__nonnull__(1)));
# 34 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_char u_char; }
# 35 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_short u_short; }
# 36 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_int u_int; }
# 37 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_long u_long; }
# 38 "/usr/include/sys/types.h" 3
extern "C" { typedef __quad_t quad_t; }
# 39 "/usr/include/sys/types.h" 3
extern "C" { typedef __u_quad_t u_quad_t; }
# 40 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsid_t fsid_t; }
# 45 "/usr/include/sys/types.h" 3
extern "C" { typedef __loff_t loff_t; }
# 49 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino_t ino_t; }
# 56 "/usr/include/sys/types.h" 3
extern "C" { typedef __ino64_t ino64_t; }
# 61 "/usr/include/sys/types.h" 3
extern "C" { typedef __dev_t dev_t; }
# 66 "/usr/include/sys/types.h" 3
extern "C" { typedef __gid_t gid_t; }
# 71 "/usr/include/sys/types.h" 3
extern "C" { typedef __mode_t mode_t; }
# 76 "/usr/include/sys/types.h" 3
extern "C" { typedef __nlink_t nlink_t; }
# 81 "/usr/include/sys/types.h" 3
extern "C" { typedef __uid_t uid_t; }
# 87 "/usr/include/sys/types.h" 3
extern "C" { typedef __off_t off_t; }
# 94 "/usr/include/sys/types.h" 3
extern "C" { typedef __off64_t off64_t; }
# 105 "/usr/include/sys/types.h" 3
extern "C" { typedef __id_t id_t; }
# 110 "/usr/include/sys/types.h" 3
extern "C" { typedef __ssize_t ssize_t; }
# 116 "/usr/include/sys/types.h" 3
extern "C" { typedef __daddr_t daddr_t; }
# 117 "/usr/include/sys/types.h" 3
extern "C" { typedef __caddr_t caddr_t; }
# 123 "/usr/include/sys/types.h" 3
extern "C" { typedef __key_t key_t; }
# 137 "/usr/include/sys/types.h" 3
extern "C" { typedef __useconds_t useconds_t; }
# 141 "/usr/include/sys/types.h" 3
extern "C" { typedef __suseconds_t suseconds_t; }
# 151 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long ulong; }
# 152 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short ushort; }
# 153 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned uint; }
# 195 "/usr/include/sys/types.h" 3
extern "C" { typedef signed char int8_t __attribute((__mode__(__QI__))); }
# 196 "/usr/include/sys/types.h" 3
extern "C" { typedef short int16_t __attribute((__mode__(__HI__))); }
# 197 "/usr/include/sys/types.h" 3
extern "C" { typedef int int32_t __attribute((__mode__(__SI__))); }
# 198 "/usr/include/sys/types.h" 3
extern "C" { typedef long int64_t __attribute((__mode__(__DI__))); }
# 201 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned char u_int8_t __attribute((__mode__(__QI__))); }
# 202 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned short u_int16_t __attribute((__mode__(__HI__))); }
# 203 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned u_int32_t __attribute((__mode__(__SI__))); }
# 204 "/usr/include/sys/types.h" 3
extern "C" { typedef unsigned long u_int64_t __attribute((__mode__(__DI__))); }
# 206 "/usr/include/sys/types.h" 3
extern "C" { typedef long register_t __attribute((__mode__(__word__))); }
# 24 "/usr/include/bits/sigset.h" 3
extern "C" { typedef int __sig_atomic_t; }
# 32 "/usr/include/bits/sigset.h" 3
extern "C" { typedef
# 30 "/usr/include/bits/sigset.h" 3
struct {
# 31 "/usr/include/bits/sigset.h" 3
unsigned long __val[(1024) / ((8) * sizeof(unsigned long))];
# 32 "/usr/include/bits/sigset.h" 3
} __sigset_t; }
# 38 "/usr/include/sys/select.h" 3
extern "C" { typedef __sigset_t sigset_t; }
# 75 "/usr/include/bits/time.h" 3
extern "C" { struct timeval {
# 77 "/usr/include/bits/time.h" 3
__time_t tv_sec;
# 78 "/usr/include/bits/time.h" 3
__suseconds_t tv_usec;
# 79 "/usr/include/bits/time.h" 3
}; }
# 55 "/usr/include/sys/select.h" 3
extern "C" { typedef long __fd_mask; }
# 78 "/usr/include/sys/select.h" 3
extern "C" { typedef
# 68 "/usr/include/sys/select.h" 3
struct {
# 72 "/usr/include/sys/select.h" 3
__fd_mask fds_bits[1024 / (8 * ((int)sizeof(__fd_mask)))];
# 78 "/usr/include/sys/select.h" 3
} fd_set; }
# 85 "/usr/include/sys/select.h" 3
extern "C" { typedef __fd_mask fd_mask; }
# 109 "/usr/include/sys/select.h" 3
extern "C" int select(int , fd_set *__restrict__ , fd_set *__restrict__ , fd_set *__restrict__ , timeval *__restrict__ );
# 121 "/usr/include/sys/select.h" 3
extern "C" int pselect(int , fd_set *__restrict__ , fd_set *__restrict__ , fd_set *__restrict__ , const timespec *__restrict__ , const __sigset_t *__restrict__ );
# 31 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_major(unsigned long long ) throw();
# 34 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned gnu_dev_minor(unsigned long long ) throw();
# 37 "/usr/include/sys/sysmacros.h" 3
extern "C" unsigned long long gnu_dev_makedev(unsigned , unsigned ) throw();
# 229 "/usr/include/sys/types.h" 3
extern "C" { typedef __blksize_t blksize_t; }
# 236 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt_t blkcnt_t; }
# 240 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt_t fsblkcnt_t; }
# 244 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt_t fsfilcnt_t; }
# 263 "/usr/include/sys/types.h" 3
extern "C" { typedef __blkcnt64_t blkcnt64_t; }
# 264 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsblkcnt64_t fsblkcnt64_t; }
# 265 "/usr/include/sys/types.h" 3
extern "C" { typedef __fsfilcnt64_t fsfilcnt64_t; }
# 50 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned long pthread_t; }
# 57 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 54 "/usr/include/bits/pthreadtypes.h" 3
union {
# 55 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
# 56 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 57 "/usr/include/bits/pthreadtypes.h" 3
} pthread_attr_t; }
# 65 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 61 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_internal_list {
# 63 "/usr/include/bits/pthreadtypes.h" 3
__pthread_internal_list *__prev;
# 64 "/usr/include/bits/pthreadtypes.h" 3
__pthread_internal_list *__next;
# 65 "/usr/include/bits/pthreadtypes.h" 3
} __pthread_list_t; }
# 104 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 77 "/usr/include/bits/pthreadtypes.h" 3
union {
# 78 "/usr/include/bits/pthreadtypes.h" 3
struct __pthread_mutex_s {
# 80 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 81 "/usr/include/bits/pthreadtypes.h" 3
unsigned __count;
# 82 "/usr/include/bits/pthreadtypes.h" 3
int __owner;
# 84 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nusers;
# 88 "/usr/include/bits/pthreadtypes.h" 3
int __kind;
# 90 "/usr/include/bits/pthreadtypes.h" 3
int __spins;
# 91 "/usr/include/bits/pthreadtypes.h" 3
__pthread_list_t __list;
# 101 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 102 "/usr/include/bits/pthreadtypes.h" 3
char __size[40];
# 103 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 104 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutex_t; }
# 110 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 107 "/usr/include/bits/pthreadtypes.h" 3
union {
# 108 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 109 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 110 "/usr/include/bits/pthreadtypes.h" 3
} pthread_mutexattr_t; }
# 130 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 116 "/usr/include/bits/pthreadtypes.h" 3
union {
# 118 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 119 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 120 "/usr/include/bits/pthreadtypes.h" 3
unsigned __futex;
# 121 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __total_seq;
# 122 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __wakeup_seq;
# 123 "/usr/include/bits/pthreadtypes.h" 3
__extension__ unsigned long long __woken_seq;
# 124 "/usr/include/bits/pthreadtypes.h" 3
void *__mutex;
# 125 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nwaiters;
# 126 "/usr/include/bits/pthreadtypes.h" 3
unsigned __broadcast_seq;
# 127 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 128 "/usr/include/bits/pthreadtypes.h" 3
char __size[48];
# 129 "/usr/include/bits/pthreadtypes.h" 3
__extension__ long long __align;
# 130 "/usr/include/bits/pthreadtypes.h" 3
} pthread_cond_t; }
# 136 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 133 "/usr/include/bits/pthreadtypes.h" 3
union {
# 134 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 135 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 136 "/usr/include/bits/pthreadtypes.h" 3
} pthread_condattr_t; }
# 140 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef unsigned pthread_key_t; }
# 144 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef int pthread_once_t; }
# 189 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 151 "/usr/include/bits/pthreadtypes.h" 3
union {
# 154 "/usr/include/bits/pthreadtypes.h" 3
struct {
# 155 "/usr/include/bits/pthreadtypes.h" 3
int __lock;
# 156 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_readers;
# 157 "/usr/include/bits/pthreadtypes.h" 3
unsigned __readers_wakeup;
# 158 "/usr/include/bits/pthreadtypes.h" 3
unsigned __writer_wakeup;
# 159 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_readers_queued;
# 160 "/usr/include/bits/pthreadtypes.h" 3
unsigned __nr_writers_queued;
# 161 "/usr/include/bits/pthreadtypes.h" 3
int __writer;
# 162 "/usr/include/bits/pthreadtypes.h" 3
int __shared;
# 163 "/usr/include/bits/pthreadtypes.h" 3
unsigned long __pad1;
# 164 "/usr/include/bits/pthreadtypes.h" 3
unsigned long __pad2;
# 167 "/usr/include/bits/pthreadtypes.h" 3
unsigned __flags;
# 168 "/usr/include/bits/pthreadtypes.h" 3
} __data;
# 187 "/usr/include/bits/pthreadtypes.h" 3
char __size[56];
# 188 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 189 "/usr/include/bits/pthreadtypes.h" 3
} pthread_rwlock_t; }
# 195 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 192 "/usr/include/bits/pthreadtypes.h" 3
union {
# 193 "/usr/include/bits/pthreadtypes.h" 3
char __size[8];
# 194 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 195 "/usr/include/bits/pthreadtypes.h" 3
} pthread_rwlockattr_t; }
# 201 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef volatile int pthread_spinlock_t; }
# 210 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 207 "/usr/include/bits/pthreadtypes.h" 3
union {
# 208 "/usr/include/bits/pthreadtypes.h" 3
char __size[32];
# 209 "/usr/include/bits/pthreadtypes.h" 3
long __align;
# 210 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrier_t; }
# 216 "/usr/include/bits/pthreadtypes.h" 3
extern "C" { typedef
# 213 "/usr/include/bits/pthreadtypes.h" 3
union {
# 214 "/usr/include/bits/pthreadtypes.h" 3
char __size[4];
# 215 "/usr/include/bits/pthreadtypes.h" 3
int __align;
# 216 "/usr/include/bits/pthreadtypes.h" 3
} pthread_barrierattr_t; }
# 327 "/usr/include/stdlib.h" 3
extern "C" long random() throw();
# 330 "/usr/include/stdlib.h" 3
extern "C" void srandom(unsigned ) throw();
# 336 "/usr/include/stdlib.h" 3
extern "C" char *initstate(unsigned , char * , size_t ) throw()
# 337 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2)));
# 341 "/usr/include/stdlib.h" 3
extern "C" char *setstate(char * ) throw() __attribute((__nonnull__(1)));
# 349 "/usr/include/stdlib.h" 3
extern "C" { struct random_data {
# 351 "/usr/include/stdlib.h" 3
int32_t *fptr;
# 352 "/usr/include/stdlib.h" 3
int32_t *rptr;
# 353 "/usr/include/stdlib.h" 3
int32_t *state;
# 354 "/usr/include/stdlib.h" 3
int rand_type;
# 355 "/usr/include/stdlib.h" 3
int rand_deg;
# 356 "/usr/include/stdlib.h" 3
int rand_sep;
# 357 "/usr/include/stdlib.h" 3
int32_t *end_ptr;
# 358 "/usr/include/stdlib.h" 3
}; }
# 360 "/usr/include/stdlib.h" 3
extern "C" int random_r(random_data *__restrict__ , int32_t *__restrict__ ) throw()
# 361 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 363 "/usr/include/stdlib.h" 3
extern "C" int srandom_r(unsigned , random_data * ) throw()
# 364 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2)));
# 366 "/usr/include/stdlib.h" 3
extern "C" int initstate_r(unsigned , char *__restrict__ , size_t , random_data *__restrict__ ) throw()
# 369 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2, 4)));
# 371 "/usr/include/stdlib.h" 3
extern "C" int setstate_r(char *__restrict__ , random_data *__restrict__ ) throw()
# 373 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 380 "/usr/include/stdlib.h" 3
extern "C" int rand() throw();
# 382 "/usr/include/stdlib.h" 3
extern "C" void srand(unsigned ) throw();
# 387 "/usr/include/stdlib.h" 3
extern "C" int rand_r(unsigned * ) throw();
# 395 "/usr/include/stdlib.h" 3
extern "C" double drand48() throw();
# 396 "/usr/include/stdlib.h" 3
extern "C" double erand48(unsigned short [3]) throw() __attribute((__nonnull__(1)));
# 399 "/usr/include/stdlib.h" 3
extern "C" long lrand48() throw();
# 400 "/usr/include/stdlib.h" 3
extern "C" long nrand48(unsigned short [3]) throw()
# 401 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 404 "/usr/include/stdlib.h" 3
extern "C" long mrand48() throw();
# 405 "/usr/include/stdlib.h" 3
extern "C" long jrand48(unsigned short [3]) throw()
# 406 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 409 "/usr/include/stdlib.h" 3
extern "C" void srand48(long ) throw();
# 410 "/usr/include/stdlib.h" 3
extern "C" unsigned short *seed48(unsigned short [3]) throw()
# 411 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 412 "/usr/include/stdlib.h" 3
extern "C" void lcong48(unsigned short [7]) throw() __attribute((__nonnull__(1)));
# 418 "/usr/include/stdlib.h" 3
extern "C" { struct drand48_data {
# 420 "/usr/include/stdlib.h" 3
unsigned short __x[3];
# 421 "/usr/include/stdlib.h" 3
unsigned short __old_x[3];
# 422 "/usr/include/stdlib.h" 3
unsigned short __c;
# 423 "/usr/include/stdlib.h" 3
unsigned short __init;
# 424 "/usr/include/stdlib.h" 3
unsigned long long __a;
# 425 "/usr/include/stdlib.h" 3
}; }
# 428 "/usr/include/stdlib.h" 3
extern "C" int drand48_r(drand48_data *__restrict__ , double *__restrict__ ) throw()
# 429 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 430 "/usr/include/stdlib.h" 3
extern "C" int erand48_r(unsigned short [3], drand48_data *__restrict__ , double *__restrict__ ) throw()
# 432 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 435 "/usr/include/stdlib.h" 3
extern "C" int lrand48_r(drand48_data *__restrict__ , long *__restrict__ ) throw()
# 437 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 438 "/usr/include/stdlib.h" 3
extern "C" int nrand48_r(unsigned short [3], drand48_data *__restrict__ , long *__restrict__ ) throw()
# 441 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 444 "/usr/include/stdlib.h" 3
extern "C" int mrand48_r(drand48_data *__restrict__ , long *__restrict__ ) throw()
# 446 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 447 "/usr/include/stdlib.h" 3
extern "C" int jrand48_r(unsigned short [3], drand48_data *__restrict__ , long *__restrict__ ) throw()
# 450 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 453 "/usr/include/stdlib.h" 3
extern "C" int srand48_r(long , drand48_data * ) throw()
# 454 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2)));
# 456 "/usr/include/stdlib.h" 3
extern "C" int seed48_r(unsigned short [3], drand48_data * ) throw()
# 457 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 459 "/usr/include/stdlib.h" 3
extern "C" int lcong48_r(unsigned short [7], drand48_data * ) throw()
# 461 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2)));
# 471 "/usr/include/stdlib.h" 3
extern "C" void *malloc(size_t ) throw() __attribute((__malloc__));
# 473 "/usr/include/stdlib.h" 3
extern "C" void *calloc(size_t , size_t ) throw()
# 474 "/usr/include/stdlib.h" 3
 __attribute((__malloc__));
# 485 "/usr/include/stdlib.h" 3
extern "C" void *realloc(void * , size_t ) throw()
# 486 "/usr/include/stdlib.h" 3
 __attribute((__warn_unused_result__));
# 488 "/usr/include/stdlib.h" 3
extern "C" void free(void * ) throw();
# 493 "/usr/include/stdlib.h" 3
extern "C" void cfree(void * ) throw();
# 33 "/usr/include/alloca.h" 3
extern "C" void *alloca(size_t ) throw();
# 503 "/usr/include/stdlib.h" 3
extern "C" void *valloc(size_t ) throw() __attribute((__malloc__));
# 508 "/usr/include/stdlib.h" 3
extern "C" int posix_memalign(void ** , size_t , size_t ) throw()
# 509 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 514 "/usr/include/stdlib.h" 3
extern "C" void abort() throw() __attribute((__noreturn__));
# 518 "/usr/include/stdlib.h" 3
extern "C" int atexit(void (* )(void)) throw() __attribute((__nonnull__(1)));
# 525 "/usr/include/stdlib.h" 3
int at_quick_exit(void (* )(void)) throw() __asm__("at_quick_exit")
# 526 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 536 "/usr/include/stdlib.h" 3
extern "C" int on_exit(void (* )(int , void * ), void * ) throw()
# 537 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 544 "/usr/include/stdlib.h" 3
extern "C" void exit(int ) throw() __attribute((__noreturn__));
# 552 "/usr/include/stdlib.h" 3
extern "C" void quick_exit(int ) throw() __attribute((__noreturn__));
# 560 "/usr/include/stdlib.h" 3
extern "C" void _Exit(int ) throw() __attribute((__noreturn__));
# 567 "/usr/include/stdlib.h" 3
extern "C" char *getenv(const char * ) throw() __attribute((__nonnull__(1)));
# 572 "/usr/include/stdlib.h" 3
extern "C" char *__secure_getenv(const char * ) throw()
# 573 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 579 "/usr/include/stdlib.h" 3
extern "C" int putenv(char * ) throw() __attribute((__nonnull__(1)));
# 585 "/usr/include/stdlib.h" 3
extern "C" int setenv(const char * , const char * , int ) throw()
# 586 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2)));
# 589 "/usr/include/stdlib.h" 3
extern "C" int unsetenv(const char * ) throw() __attribute((__nonnull__(1)));
# 596 "/usr/include/stdlib.h" 3
extern "C" int clearenv() throw();
# 606 "/usr/include/stdlib.h" 3
extern "C" char *mktemp(char * ) throw() __attribute((__nonnull__(1)));
# 620 "/usr/include/stdlib.h" 3
extern "C" int mkstemp(char * ) __attribute((__nonnull__(1)));
# 630 "/usr/include/stdlib.h" 3
extern "C" int mkstemp64(char * ) __attribute((__nonnull__(1)));
# 642 "/usr/include/stdlib.h" 3
extern "C" int mkstemps(char * , int ) __attribute((__nonnull__(1)));
# 652 "/usr/include/stdlib.h" 3
extern "C" int mkstemps64(char * , int )
# 653 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 663 "/usr/include/stdlib.h" 3
extern "C" char *mkdtemp(char * ) throw() __attribute((__nonnull__(1)));
# 674 "/usr/include/stdlib.h" 3
extern "C" int mkostemp(char * , int ) __attribute((__nonnull__(1)));
# 684 "/usr/include/stdlib.h" 3
extern "C" int mkostemp64(char * , int ) __attribute((__nonnull__(1)));
# 694 "/usr/include/stdlib.h" 3
extern "C" int mkostemps(char * , int , int )
# 695 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 706 "/usr/include/stdlib.h" 3
extern "C" int mkostemps64(char * , int , int )
# 707 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 717 "/usr/include/stdlib.h" 3
extern "C" int system(const char * );
# 724 "/usr/include/stdlib.h" 3
extern "C" char *canonicalize_file_name(const char * ) throw()
# 725 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 734 "/usr/include/stdlib.h" 3
extern "C" char *realpath(const char *__restrict__ , char *__restrict__ ) throw();
# 742 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_fn_t)(const void *, const void *); }
# 745 "/usr/include/stdlib.h" 3
extern "C" { typedef __compar_fn_t comparison_fn_t; }
# 749 "/usr/include/stdlib.h" 3
extern "C" { typedef int (*__compar_d_fn_t)(const void *, const void *, void *); }
# 755 "/usr/include/stdlib.h" 3
extern "C" void *bsearch(const void * , const void * , size_t , size_t , __compar_fn_t )
# 757 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2, 5)));
# 761 "/usr/include/stdlib.h" 3
extern "C" void qsort(void * , size_t , size_t , __compar_fn_t )
# 762 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 764 "/usr/include/stdlib.h" 3
extern "C" void qsort_r(void * , size_t , size_t , __compar_d_fn_t , void * )
# 766 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 4)));
# 771 "/usr/include/stdlib.h" 3
extern "C" int abs(int ) throw() __attribute((const));
# 772 "/usr/include/stdlib.h" 3
extern "C" long labs(long ) throw() __attribute((const));
# 776 "/usr/include/stdlib.h" 3
extern "C" long long llabs(long long ) throw()
# 777 "/usr/include/stdlib.h" 3
 __attribute((const));
# 785 "/usr/include/stdlib.h" 3
extern "C" div_t div(int , int ) throw()
# 786 "/usr/include/stdlib.h" 3
 __attribute((const));
# 787 "/usr/include/stdlib.h" 3
extern "C" ldiv_t ldiv(long , long ) throw()
# 788 "/usr/include/stdlib.h" 3
 __attribute((const));
# 793 "/usr/include/stdlib.h" 3
extern "C" lldiv_t lldiv(long long , long long ) throw()
# 795 "/usr/include/stdlib.h" 3
 __attribute((const));
# 808 "/usr/include/stdlib.h" 3
extern "C" char *ecvt(double , int , int *__restrict__ , int *__restrict__ ) throw()
# 809 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4)));
# 814 "/usr/include/stdlib.h" 3
extern "C" char *fcvt(double , int , int *__restrict__ , int *__restrict__ ) throw()
# 815 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4)));
# 820 "/usr/include/stdlib.h" 3
extern "C" char *gcvt(double , int , char * ) throw()
# 821 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3)));
# 826 "/usr/include/stdlib.h" 3
extern "C" char *qecvt(long double , int , int *__restrict__ , int *__restrict__ ) throw()
# 828 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4)));
# 829 "/usr/include/stdlib.h" 3
extern "C" char *qfcvt(long double , int , int *__restrict__ , int *__restrict__ ) throw()
# 831 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4)));
# 832 "/usr/include/stdlib.h" 3
extern "C" char *qgcvt(long double , int , char * ) throw()
# 833 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3)));
# 838 "/usr/include/stdlib.h" 3
extern "C" int ecvt_r(double , int , int *__restrict__ , int *__restrict__ , char *__restrict__ , size_t ) throw()
# 840 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4, 5)));
# 841 "/usr/include/stdlib.h" 3
extern "C" int fcvt_r(double , int , int *__restrict__ , int *__restrict__ , char *__restrict__ , size_t ) throw()
# 843 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4, 5)));
# 845 "/usr/include/stdlib.h" 3
extern "C" int qecvt_r(long double , int , int *__restrict__ , int *__restrict__ , char *__restrict__ , size_t ) throw()
# 848 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4, 5)));
# 849 "/usr/include/stdlib.h" 3
extern "C" int qfcvt_r(long double , int , int *__restrict__ , int *__restrict__ , char *__restrict__ , size_t ) throw()
# 852 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(3, 4, 5)));
# 860 "/usr/include/stdlib.h" 3
extern "C" int mblen(const char * , size_t ) throw();
# 863 "/usr/include/stdlib.h" 3
extern "C" int mbtowc(wchar_t *__restrict__ , const char *__restrict__ , size_t ) throw();
# 867 "/usr/include/stdlib.h" 3
extern "C" int wctomb(char * , wchar_t ) throw();
# 871 "/usr/include/stdlib.h" 3
extern "C" size_t mbstowcs(wchar_t *__restrict__ , const char *__restrict__ , size_t ) throw();
# 874 "/usr/include/stdlib.h" 3
extern "C" size_t wcstombs(char *__restrict__ , const wchar_t *__restrict__ , size_t ) throw();
# 885 "/usr/include/stdlib.h" 3
extern "C" int rpmatch(const char * ) throw() __attribute((__nonnull__(1)));
# 896 "/usr/include/stdlib.h" 3
extern "C" int getsubopt(char **__restrict__ , char *const *__restrict__ , char **__restrict__ ) throw()
# 899 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1, 2, 3)));
# 905 "/usr/include/stdlib.h" 3
extern "C" void setkey(const char * ) throw() __attribute((__nonnull__(1)));
# 913 "/usr/include/stdlib.h" 3
extern "C" int posix_openpt(int );
# 921 "/usr/include/stdlib.h" 3
extern "C" int grantpt(int ) throw();
# 925 "/usr/include/stdlib.h" 3
extern "C" int unlockpt(int ) throw();
# 930 "/usr/include/stdlib.h" 3
extern "C" char *ptsname(int ) throw();
# 937 "/usr/include/stdlib.h" 3
extern "C" int ptsname_r(int , char * , size_t ) throw()
# 938 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(2)));
# 941 "/usr/include/stdlib.h" 3
extern "C" int getpt();
# 948 "/usr/include/stdlib.h" 3
extern "C" int getloadavg(double [], int ) throw()
# 949 "/usr/include/stdlib.h" 3
 __attribute((__nonnull__(1)));
# 69 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) {
# 71 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container> class __normal_iterator;
# 74 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
}
# 76 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
namespace std __attribute((__visibility__("default"))) {
# 78 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __true_type { };
# 79 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __false_type { };
# 81 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< bool __T0>
# 82 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __truth_type {
# 83 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __false_type __type; };
# 86 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __truth_type< true> {
# 87 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type; };
# 91 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Sp, class _Tp>
# 92 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __traitor {
# 94 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = ((bool)_Sp::__value) || ((bool)_Tp::__value)};
# 95 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef typename __truth_type< __value> ::__type __type;
# 96 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 99 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class , class >
# 100 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __are_same {
# 102 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value};
# 103 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 104 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 106 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 107 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __are_same< _Tp, _Tp> {
# 109 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 110 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 111 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 114 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 115 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_void {
# 117 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value};
# 118 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 119 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 122 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_void< void> {
# 124 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 125 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 126 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 131 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 132 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_integer {
# 134 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value};
# 135 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 136 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 142 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< bool> {
# 144 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 145 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 146 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 149 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< char> {
# 151 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 152 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 153 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 156 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< signed char> {
# 158 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 159 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 160 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 163 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned char> {
# 165 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 166 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 167 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 171 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< wchar_t> {
# 173 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 174 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 175 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 195 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< short> {
# 197 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 198 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 199 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 202 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned short> {
# 204 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 205 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 206 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 209 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< int> {
# 211 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 212 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 213 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 216 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned> {
# 218 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 219 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 220 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 223 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long> {
# 225 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 226 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 227 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 230 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long> {
# 232 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 233 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 234 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 237 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< long long> {
# 239 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 240 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 241 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 244 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< unsigned long long> {
# 246 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 247 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 248 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 253 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 254 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_floating {
# 256 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value};
# 257 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 258 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 262 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_floating< float> {
# 264 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 265 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 266 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 269 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_floating< double> {
# 271 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 272 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 273 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 276 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_floating< long double> {
# 278 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 279 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 280 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 285 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 286 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_pointer {
# 288 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value};
# 289 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 290 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 292 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 293 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_pointer< _Tp *> {
# 295 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 296 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 297 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 302 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 303 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_normal_iterator {
# 305 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value};
# 306 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 307 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 309 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Iterator, class _Container>
# 310 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> > {
# 313 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 314 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 315 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 320 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 321 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> > {
# 323 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 328 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 329 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_fundamental : public __traitor< __is_void< _Tp> , __is_arithmetic< _Tp> > {
# 331 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 336 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 337 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> > {
# 339 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 344 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 345 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_char {
# 347 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value};
# 348 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 349 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 352 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_char< char> {
# 354 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 355 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 356 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 360 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_char< wchar_t> {
# 362 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 363 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 364 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 367 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 368 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_byte {
# 370 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value};
# 371 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 372 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 375 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_byte< char> {
# 377 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 378 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 379 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 382 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_byte< signed char> {
# 384 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 385 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 386 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 389 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template<> struct __is_byte< unsigned char> {
# 391 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = 1};
# 392 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __true_type __type;
# 393 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 398 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 399 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_move_iterator {
# 401 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value};
# 402 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef __false_type __type;
# 403 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 417 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 418 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
class __is_iterator_helper {
# 420 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef char __one;
# 421 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef struct { char __arr[2]; } __two;
# 423 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Up>
# 424 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct _Wrap_type {
# 425 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 427 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Up> static __one __test(_Wrap_type< typename _Up::iterator_category> *);
# 430 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Up> static __two __test(...);
# 434 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
public: static const bool __value = ((sizeof(__test< _Tp> (0)) == (1)) || __is_pointer< _Tp> ::__value);
# 436 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 438 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
template< class _Tp>
# 439 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
struct __is_iterator {
# 441 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
enum { __value = __is_iterator_helper< _Tp> ::__value};
# 442 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
typedef typename __truth_type< __value> ::__type __type;
# 443 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
};
# 445 "/usr/include/c++/4.5/bits/cpp_type_traits.h" 3
}
# 37 "/usr/include/c++/4.5/ext/type_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) {
# 40 "/usr/include/c++/4.5/ext/type_traits.h" 3
template< bool __T1, class >
# 41 "/usr/include/c++/4.5/ext/type_traits.h" 3
struct __enable_if {
# 42 "/usr/include/c++/4.5/ext/type_traits.h" 3
};
# 44 "/usr/include/c++/4.5/ext/type_traits.h" 3
template< class _Tp>
# 45 "/usr/include/c++/4.5/ext/type_traits.h" 3
struct __enable_if< true, _Tp> {
# 46 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef _Tp __type; };
# 50 "/usr/include/c++/4.5/ext/type_traits.h" 3
template< bool _Cond, class _Iftrue, class _Iffalse>
# 51 "/usr/include/c++/4.5/ext/type_traits.h" 3
struct __conditional_type {
# 52 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef _Iftrue __type; };
# 54 "/usr/include/c++/4.5/ext/type_traits.h" 3
template< class _Iftrue, class _Iffalse>
# 55 "/usr/include/c++/4.5/ext/type_traits.h" 3
struct __conditional_type< false, _Iftrue, _Iffalse> {
# 56 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef _Iffalse __type; };
# 60 "/usr/include/c++/4.5/ext/type_traits.h" 3
template< class _Tp>
# 61 "/usr/include/c++/4.5/ext/type_traits.h" 3
struct __add_unsigned {
# 64 "/usr/include/c++/4.5/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 67 "/usr/include/c++/4.5/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 68 "/usr/include/c++/4.5/ext/type_traits.h" 3
};
# 71 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __add_unsigned< char> {
# 72 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef unsigned char __type; };
# 75 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __add_unsigned< signed char> {
# 76 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef unsigned char __type; };
# 79 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __add_unsigned< short> {
# 80 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef unsigned short __type; };
# 83 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __add_unsigned< int> {
# 84 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef unsigned __type; };
# 87 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __add_unsigned< long> {
# 88 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef unsigned long __type; };
# 91 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __add_unsigned< long long> {
# 92 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef unsigned long long __type; };
# 96 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __add_unsigned< bool> ;
# 99 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __add_unsigned< wchar_t> ;
# 103 "/usr/include/c++/4.5/ext/type_traits.h" 3
template< class _Tp>
# 104 "/usr/include/c++/4.5/ext/type_traits.h" 3
struct __remove_unsigned {
# 107 "/usr/include/c++/4.5/ext/type_traits.h" 3
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp> __if_type;
# 110 "/usr/include/c++/4.5/ext/type_traits.h" 3
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type;
# 111 "/usr/include/c++/4.5/ext/type_traits.h" 3
};
# 114 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __remove_unsigned< char> {
# 115 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef signed char __type; };
# 118 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned char> {
# 119 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef signed char __type; };
# 122 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned short> {
# 123 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef short __type; };
# 126 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned> {
# 127 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef int __type; };
# 130 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long> {
# 131 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef long __type; };
# 134 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __remove_unsigned< unsigned long long> {
# 135 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef long long __type; };
# 139 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __remove_unsigned< bool> ;
# 142 "/usr/include/c++/4.5/ext/type_traits.h" 3
template<> struct __remove_unsigned< wchar_t> ;
# 146 "/usr/include/c++/4.5/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type * __ptr )
    { return __ptr == 0; }
# 151 "/usr/include/c++/4.5/ext/type_traits.h" 3
template < typename _Type >
    inline bool
    __is_null_pointer ( _Type )
    { return false; }
# 158 "/usr/include/c++/4.5/ext/type_traits.h" 3
template< class _Tp, bool __T2 = std::__is_integer< _Tp> ::__value>
# 159 "/usr/include/c++/4.5/ext/type_traits.h" 3
struct __promote {
# 160 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef double __type; };
# 162 "/usr/include/c++/4.5/ext/type_traits.h" 3
template< class _Tp>
# 163 "/usr/include/c++/4.5/ext/type_traits.h" 3
struct __promote< _Tp, false> {
# 164 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef _Tp __type; };
# 166 "/usr/include/c++/4.5/ext/type_traits.h" 3
template< class _Tp, class _Up>
# 167 "/usr/include/c++/4.5/ext/type_traits.h" 3
struct __promote_2 {
# 170 "/usr/include/c++/4.5/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 171 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 174 "/usr/include/c++/4.5/ext/type_traits.h" 3
public: typedef __typeof__(__type1() + __type2()) __type;
# 175 "/usr/include/c++/4.5/ext/type_traits.h" 3
};
# 177 "/usr/include/c++/4.5/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp>
# 178 "/usr/include/c++/4.5/ext/type_traits.h" 3
struct __promote_3 {
# 181 "/usr/include/c++/4.5/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 182 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 183 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 186 "/usr/include/c++/4.5/ext/type_traits.h" 3
public: typedef __typeof__((__type1() + __type2()) + __type3()) __type;
# 187 "/usr/include/c++/4.5/ext/type_traits.h" 3
};
# 189 "/usr/include/c++/4.5/ext/type_traits.h" 3
template< class _Tp, class _Up, class _Vp, class _Wp>
# 190 "/usr/include/c++/4.5/ext/type_traits.h" 3
struct __promote_4 {
# 193 "/usr/include/c++/4.5/ext/type_traits.h" 3
private: typedef typename __promote< _Tp, std::__is_integer< _Tp> ::__value> ::__type __type1;
# 194 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef typename __promote< _Up, std::__is_integer< _Up> ::__value> ::__type __type2;
# 195 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef typename __promote< _Vp, std::__is_integer< _Vp> ::__value> ::__type __type3;
# 196 "/usr/include/c++/4.5/ext/type_traits.h" 3
typedef typename __promote< _Wp, std::__is_integer< _Wp> ::__value> ::__type __type4;
# 199 "/usr/include/c++/4.5/ext/type_traits.h" 3
public: typedef __typeof__(((__type1() + __type2()) + __type3()) + __type4()) __type;
# 200 "/usr/include/c++/4.5/ext/type_traits.h" 3
};
# 202 "/usr/include/c++/4.5/ext/type_traits.h" 3
}
# 77 "/usr/include/c++/4.5/cmath" 3
namespace std __attribute((__visibility__("default"))) {
# 81 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    _Tp __cmath_power ( _Tp, unsigned int );
# 84 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline _Tp
    __pow_helper ( _Tp __x, int __n )
    {
      return __n < 0
        ? _Tp ( 1 ) / __cmath_power ( __x, - __n )
        : __cmath_power ( __x, __n );
    }
# 94 "/usr/include/c++/4.5/cmath" 3
inline double abs(double __x)
# 95 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_fabs(__x); }
# 98 "/usr/include/c++/4.5/cmath" 3
inline float abs(float __x)
# 99 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_fabsf(__x); }
# 102 "/usr/include/c++/4.5/cmath" 3
inline long double abs(long double __x)
# 103 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_fabsl(__x); }
# 105 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    abs ( _Tp __x )
    { return __builtin_fabs ( __x ); }
# 111 "/usr/include/c++/4.5/cmath" 3
using ::acos;
# 114 "/usr/include/c++/4.5/cmath" 3
inline float acos(float __x)
# 115 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_acosf(__x); }
# 118 "/usr/include/c++/4.5/cmath" 3
inline long double acos(long double __x)
# 119 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_acosl(__x); }
# 121 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    acos ( _Tp __x )
    { return __builtin_acos ( __x ); }
# 127 "/usr/include/c++/4.5/cmath" 3
using ::asin;
# 130 "/usr/include/c++/4.5/cmath" 3
inline float asin(float __x)
# 131 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_asinf(__x); }
# 134 "/usr/include/c++/4.5/cmath" 3
inline long double asin(long double __x)
# 135 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_asinl(__x); }
# 137 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    asin ( _Tp __x )
    { return __builtin_asin ( __x ); }
# 143 "/usr/include/c++/4.5/cmath" 3
using ::atan;
# 146 "/usr/include/c++/4.5/cmath" 3
inline float atan(float __x)
# 147 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_atanf(__x); }
# 150 "/usr/include/c++/4.5/cmath" 3
inline long double atan(long double __x)
# 151 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_atanl(__x); }
# 153 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    atan ( _Tp __x )
    { return __builtin_atan ( __x ); }
# 159 "/usr/include/c++/4.5/cmath" 3
using ::atan2;
# 162 "/usr/include/c++/4.5/cmath" 3
inline float atan2(float __y, float __x)
# 163 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_atan2f(__y, __x); }
# 166 "/usr/include/c++/4.5/cmath" 3
inline long double atan2(long double __y, long double __x)
# 167 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_atan2l(__y, __x); }
# 169 "/usr/include/c++/4.5/cmath" 3
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
# 181 "/usr/include/c++/4.5/cmath" 3
using ::ceil;
# 184 "/usr/include/c++/4.5/cmath" 3
inline float ceil(float __x)
# 185 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_ceilf(__x); }
# 188 "/usr/include/c++/4.5/cmath" 3
inline long double ceil(long double __x)
# 189 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_ceill(__x); }
# 191 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    ceil ( _Tp __x )
    { return __builtin_ceil ( __x ); }
# 197 "/usr/include/c++/4.5/cmath" 3
using ::cos;
# 200 "/usr/include/c++/4.5/cmath" 3
inline float cos(float __x)
# 201 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_cosf(__x); }
# 204 "/usr/include/c++/4.5/cmath" 3
inline long double cos(long double __x)
# 205 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_cosl(__x); }
# 207 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cos ( _Tp __x )
    { return __builtin_cos ( __x ); }
# 213 "/usr/include/c++/4.5/cmath" 3
using ::cosh;
# 216 "/usr/include/c++/4.5/cmath" 3
inline float cosh(float __x)
# 217 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_coshf(__x); }
# 220 "/usr/include/c++/4.5/cmath" 3
inline long double cosh(long double __x)
# 221 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_coshl(__x); }
# 223 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    cosh ( _Tp __x )
    { return __builtin_cosh ( __x ); }
# 229 "/usr/include/c++/4.5/cmath" 3
using ::exp;
# 232 "/usr/include/c++/4.5/cmath" 3
inline float exp(float __x)
# 233 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_expf(__x); }
# 236 "/usr/include/c++/4.5/cmath" 3
inline long double exp(long double __x)
# 237 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_expl(__x); }
# 239 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    exp ( _Tp __x )
    { return __builtin_exp ( __x ); }
# 245 "/usr/include/c++/4.5/cmath" 3
using ::fabs;
# 248 "/usr/include/c++/4.5/cmath" 3
inline float fabs(float __x)
# 249 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_fabsf(__x); }
# 252 "/usr/include/c++/4.5/cmath" 3
inline long double fabs(long double __x)
# 253 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_fabsl(__x); }
# 255 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    fabs ( _Tp __x )
    { return __builtin_fabs ( __x ); }
# 261 "/usr/include/c++/4.5/cmath" 3
using ::floor;
# 264 "/usr/include/c++/4.5/cmath" 3
inline float floor(float __x)
# 265 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_floorf(__x); }
# 268 "/usr/include/c++/4.5/cmath" 3
inline long double floor(long double __x)
# 269 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_floorl(__x); }
# 271 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    floor ( _Tp __x )
    { return __builtin_floor ( __x ); }
# 277 "/usr/include/c++/4.5/cmath" 3
using ::fmod;
# 280 "/usr/include/c++/4.5/cmath" 3
inline float fmod(float __x, float __y)
# 281 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_fmodf(__x, __y); }
# 284 "/usr/include/c++/4.5/cmath" 3
inline long double fmod(long double __x, long double __y)
# 285 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_fmodl(__x, __y); }
# 287 "/usr/include/c++/4.5/cmath" 3
using ::frexp;
# 290 "/usr/include/c++/4.5/cmath" 3
inline float frexp(float __x, int *__exp)
# 291 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_frexpf(__x, __exp); }
# 294 "/usr/include/c++/4.5/cmath" 3
inline long double frexp(long double __x, int *__exp)
# 295 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_frexpl(__x, __exp); }
# 297 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    frexp ( _Tp __x, int * __exp )
    { return __builtin_frexp ( __x, __exp ); }
# 303 "/usr/include/c++/4.5/cmath" 3
using ::ldexp;
# 306 "/usr/include/c++/4.5/cmath" 3
inline float ldexp(float __x, int __exp)
# 307 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_ldexpf(__x, __exp); }
# 310 "/usr/include/c++/4.5/cmath" 3
inline long double ldexp(long double __x, int __exp)
# 311 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_ldexpl(__x, __exp); }
# 313 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
  ldexp ( _Tp __x, int __exp )
  { return __builtin_ldexp ( __x, __exp ); }
# 319 "/usr/include/c++/4.5/cmath" 3
using ::log;
# 322 "/usr/include/c++/4.5/cmath" 3
inline float log(float __x)
# 323 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_logf(__x); }
# 326 "/usr/include/c++/4.5/cmath" 3
inline long double log(long double __x)
# 327 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_logl(__x); }
# 329 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log ( _Tp __x )
    { return __builtin_log ( __x ); }
# 335 "/usr/include/c++/4.5/cmath" 3
using ::log10;
# 338 "/usr/include/c++/4.5/cmath" 3
inline float log10(float __x)
# 339 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_log10f(__x); }
# 342 "/usr/include/c++/4.5/cmath" 3
inline long double log10(long double __x)
# 343 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_log10l(__x); }
# 345 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    log10 ( _Tp __x )
    { return __builtin_log10 ( __x ); }
# 351 "/usr/include/c++/4.5/cmath" 3
using ::modf;
# 354 "/usr/include/c++/4.5/cmath" 3
inline float modf(float __x, float *__iptr)
# 355 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_modff(__x, __iptr); }
# 358 "/usr/include/c++/4.5/cmath" 3
inline long double modf(long double __x, long double *__iptr)
# 359 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_modfl(__x, __iptr); }
# 361 "/usr/include/c++/4.5/cmath" 3
using ::pow;
# 364 "/usr/include/c++/4.5/cmath" 3
inline float pow(float __x, float __y)
# 365 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_powf(__x, __y); }
# 368 "/usr/include/c++/4.5/cmath" 3
inline long double pow(long double __x, long double __y)
# 369 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_powl(__x, __y); }
# 375 "/usr/include/c++/4.5/cmath" 3
inline double pow(double __x, int __i)
# 376 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_powi(__x, __i); }
# 379 "/usr/include/c++/4.5/cmath" 3
inline float pow(float __x, int __n)
# 380 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_powif(__x, __n); }
# 383 "/usr/include/c++/4.5/cmath" 3
inline long double pow(long double __x, int __n)
# 384 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_powil(__x, __n); }
# 387 "/usr/include/c++/4.5/cmath" 3
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
# 399 "/usr/include/c++/4.5/cmath" 3
using ::sin;
# 402 "/usr/include/c++/4.5/cmath" 3
inline float sin(float __x)
# 403 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_sinf(__x); }
# 406 "/usr/include/c++/4.5/cmath" 3
inline long double sin(long double __x)
# 407 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_sinl(__x); }
# 409 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sin ( _Tp __x )
    { return __builtin_sin ( __x ); }
# 415 "/usr/include/c++/4.5/cmath" 3
using ::sinh;
# 418 "/usr/include/c++/4.5/cmath" 3
inline float sinh(float __x)
# 419 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_sinhf(__x); }
# 422 "/usr/include/c++/4.5/cmath" 3
inline long double sinh(long double __x)
# 423 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_sinhl(__x); }
# 425 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sinh ( _Tp __x )
    { return __builtin_sinh ( __x ); }
# 431 "/usr/include/c++/4.5/cmath" 3
using ::sqrt;
# 434 "/usr/include/c++/4.5/cmath" 3
inline float sqrt(float __x)
# 435 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_sqrtf(__x); }
# 438 "/usr/include/c++/4.5/cmath" 3
inline long double sqrt(long double __x)
# 439 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_sqrtl(__x); }
# 441 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    sqrt ( _Tp __x )
    { return __builtin_sqrt ( __x ); }
# 447 "/usr/include/c++/4.5/cmath" 3
using ::tan;
# 450 "/usr/include/c++/4.5/cmath" 3
inline float tan(float __x)
# 451 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_tanf(__x); }
# 454 "/usr/include/c++/4.5/cmath" 3
inline long double tan(long double __x)
# 455 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_tanl(__x); }
# 457 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tan ( _Tp __x )
    { return __builtin_tan ( __x ); }
# 463 "/usr/include/c++/4.5/cmath" 3
using ::tanh;
# 466 "/usr/include/c++/4.5/cmath" 3
inline float tanh(float __x)
# 467 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_tanhf(__x); }
# 470 "/usr/include/c++/4.5/cmath" 3
inline long double tanh(long double __x)
# 471 "/usr/include/c++/4.5/cmath" 3
{ return __builtin_tanhl(__x); }
# 473 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_integer < _Tp > :: __value,
        double > :: __type
    tanh ( _Tp __x )
    { return __builtin_tanh ( __x ); }
# 479 "/usr/include/c++/4.5/cmath" 3
}
# 498 "/usr/include/c++/4.5/cmath" 3
namespace std __attribute((__visibility__("default"))) {
# 500 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    fpclassify ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_fpclassify ( FP_NAN, FP_INFINITE, FP_NORMAL,
      FP_SUBNORMAL, FP_ZERO, __type ( __f ) );
    }
# 510 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isfinite ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isfinite ( __type ( __f ) );
    }
# 519 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isinf ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isinf ( __type ( __f ) );
    }
# 528 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnan ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnan ( __type ( __f ) );
    }
# 537 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isnormal ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isnormal ( __type ( __f ) );
    }
# 546 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    signbit ( _Tp __f )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_signbit ( __type ( __f ) );
    }
# 555 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 564 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isgreaterequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isgreaterequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 573 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isless ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isless ( __type ( __f1 ), __type ( __f2 ) );
    }
# 582 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessequal ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessequal ( __type ( __f1 ), __type ( __f2 ) );
    }
# 591 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    islessgreater ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_islessgreater ( __type ( __f1 ), __type ( __f2 ) );
    }
# 600 "/usr/include/c++/4.5/cmath" 3
template < typename _Tp >
    inline typename __gnu_cxx :: __enable_if < __is_arithmetic < _Tp > :: __value,
        int > :: __type
    isunordered ( _Tp __f1, _Tp __f2 )
    {
      typedef typename __gnu_cxx :: __promote < _Tp > :: __type __type;
      return __builtin_isunordered ( __type ( __f1 ), __type ( __f2 ) );
    }
# 609 "/usr/include/c++/4.5/cmath" 3
}
# 35 "/usr/include/c++/4.5/bits/cmath.tcc" 3
namespace std __attribute((__visibility__("default"))) {
# 37 "/usr/include/c++/4.5/bits/cmath.tcc" 3
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
# 53 "/usr/include/c++/4.5/bits/cmath.tcc" 3
}
# 49 "/usr/include/c++/4.5/cstddef" 3
namespace std __attribute((__visibility__("default"))) {
# 51 "/usr/include/c++/4.5/cstddef" 3
using ::ptrdiff_t;
# 52 "/usr/include/c++/4.5/cstddef" 3
using ::size_t;
# 54 "/usr/include/c++/4.5/cstddef" 3
}
# 100 "/usr/include/c++/4.5/cstdlib" 3
namespace std __attribute((__visibility__("default"))) {
# 102 "/usr/include/c++/4.5/cstdlib" 3
using ::div_t;
# 103 "/usr/include/c++/4.5/cstdlib" 3
using ::ldiv_t;
# 105 "/usr/include/c++/4.5/cstdlib" 3
using ::abort;
# 106 "/usr/include/c++/4.5/cstdlib" 3
using ::abs;
# 107 "/usr/include/c++/4.5/cstdlib" 3
using ::atexit;
# 108 "/usr/include/c++/4.5/cstdlib" 3
using ::atof;
# 109 "/usr/include/c++/4.5/cstdlib" 3
using ::atoi;
# 110 "/usr/include/c++/4.5/cstdlib" 3
using ::atol;
# 111 "/usr/include/c++/4.5/cstdlib" 3
using ::bsearch;
# 112 "/usr/include/c++/4.5/cstdlib" 3
using ::calloc;
# 113 "/usr/include/c++/4.5/cstdlib" 3
using ::div;
# 114 "/usr/include/c++/4.5/cstdlib" 3
using ::exit;
# 115 "/usr/include/c++/4.5/cstdlib" 3
using ::free;
# 116 "/usr/include/c++/4.5/cstdlib" 3
using ::getenv;
# 117 "/usr/include/c++/4.5/cstdlib" 3
using ::labs;
# 118 "/usr/include/c++/4.5/cstdlib" 3
using ::ldiv;
# 119 "/usr/include/c++/4.5/cstdlib" 3
using ::malloc;
# 121 "/usr/include/c++/4.5/cstdlib" 3
using ::mblen;
# 122 "/usr/include/c++/4.5/cstdlib" 3
using ::mbstowcs;
# 123 "/usr/include/c++/4.5/cstdlib" 3
using ::mbtowc;
# 125 "/usr/include/c++/4.5/cstdlib" 3
using ::qsort;
# 126 "/usr/include/c++/4.5/cstdlib" 3
using ::rand;
# 127 "/usr/include/c++/4.5/cstdlib" 3
using ::realloc;
# 128 "/usr/include/c++/4.5/cstdlib" 3
using ::srand;
# 129 "/usr/include/c++/4.5/cstdlib" 3
using ::strtod;
# 130 "/usr/include/c++/4.5/cstdlib" 3
using ::strtol;
# 131 "/usr/include/c++/4.5/cstdlib" 3
using ::strtoul;
# 132 "/usr/include/c++/4.5/cstdlib" 3
using ::system;
# 134 "/usr/include/c++/4.5/cstdlib" 3
using ::wcstombs;
# 135 "/usr/include/c++/4.5/cstdlib" 3
using ::wctomb;
# 139 "/usr/include/c++/4.5/cstdlib" 3
inline long abs(long __i) { return labs(__i); }
# 142 "/usr/include/c++/4.5/cstdlib" 3
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); }
# 144 "/usr/include/c++/4.5/cstdlib" 3
}
# 157 "/usr/include/c++/4.5/cstdlib" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) {
# 160 "/usr/include/c++/4.5/cstdlib" 3
using ::lldiv_t;
# 166 "/usr/include/c++/4.5/cstdlib" 3
using ::_Exit;
# 170 "/usr/include/c++/4.5/cstdlib" 3
inline long long abs(long long __x) { return (__x >= (0)) ? __x : (-__x); }
# 173 "/usr/include/c++/4.5/cstdlib" 3
using ::llabs;
# 176 "/usr/include/c++/4.5/cstdlib" 3
inline lldiv_t div(long long __n, long long __d)
# 177 "/usr/include/c++/4.5/cstdlib" 3
{ lldiv_t __q; (__q.quot) = (__n / __d); (__q.rem) = (__n % __d); return __q; }
# 179 "/usr/include/c++/4.5/cstdlib" 3
using ::lldiv;
# 190 "/usr/include/c++/4.5/cstdlib" 3
using ::atoll;
# 191 "/usr/include/c++/4.5/cstdlib" 3
using ::strtoll;
# 192 "/usr/include/c++/4.5/cstdlib" 3
using ::strtoull;
# 194 "/usr/include/c++/4.5/cstdlib" 3
using ::strtof;
# 195 "/usr/include/c++/4.5/cstdlib" 3
using ::strtold;
# 197 "/usr/include/c++/4.5/cstdlib" 3
}
# 199 "/usr/include/c++/4.5/cstdlib" 3
namespace std __attribute((__visibility__("default"))) {
# 202 "/usr/include/c++/4.5/cstdlib" 3
using __gnu_cxx::lldiv_t;
# 204 "/usr/include/c++/4.5/cstdlib" 3
using __gnu_cxx::_Exit;
# 205 "/usr/include/c++/4.5/cstdlib" 3
using __gnu_cxx::abs;
# 207 "/usr/include/c++/4.5/cstdlib" 3
using __gnu_cxx::llabs;
# 208 "/usr/include/c++/4.5/cstdlib" 3
using __gnu_cxx::div;
# 209 "/usr/include/c++/4.5/cstdlib" 3
using __gnu_cxx::lldiv;
# 211 "/usr/include/c++/4.5/cstdlib" 3
using __gnu_cxx::atoll;
# 212 "/usr/include/c++/4.5/cstdlib" 3
using __gnu_cxx::strtof;
# 213 "/usr/include/c++/4.5/cstdlib" 3
using __gnu_cxx::strtoll;
# 214 "/usr/include/c++/4.5/cstdlib" 3
using __gnu_cxx::strtoull;
# 215 "/usr/include/c++/4.5/cstdlib" 3
using __gnu_cxx::strtold;
# 217 "/usr/include/c++/4.5/cstdlib" 3
}
# 2335 "/usr/local/cuda4.1/cuda/include/math_functions.h"
namespace __gnu_cxx {
# 2337 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline long long abs(long long);
# 2338 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2340 "/usr/local/cuda4.1/cuda/include/math_functions.h"
namespace std {
# 2342 "/usr/local/cuda4.1/cuda/include/math_functions.h"
template< class T> extern inline T __pow_helper(T, int);
# 2343 "/usr/local/cuda4.1/cuda/include/math_functions.h"
template< class T> extern inline T __cmath_power(T, unsigned);
# 2344 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2346 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::abs;
# 2347 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::fabs;
# 2348 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::ceil;
# 2349 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::floor;
# 2350 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::sqrt;
# 2351 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::pow;
# 2352 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::log;
# 2353 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::log10;
# 2354 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::fmod;
# 2355 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::modf;
# 2356 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::exp;
# 2357 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::frexp;
# 2358 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::ldexp;
# 2359 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::asin;
# 2360 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::sin;
# 2361 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::sinh;
# 2362 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::acos;
# 2363 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::cos;
# 2364 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::cosh;
# 2365 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::atan;
# 2366 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::atan2;
# 2367 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::tan;
# 2368 "/usr/local/cuda4.1/cuda/include/math_functions.h"
using std::tanh;
# 2531 "/usr/local/cuda4.1/cuda/include/math_functions.h"
namespace std {
# 2534 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline long abs(long);
# 2535 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float abs(float);
# 2536 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline double abs(double);
# 2537 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float fabs(float);
# 2538 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float ceil(float);
# 2539 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float floor(float);
# 2540 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float sqrt(float);
# 2541 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float pow(float, float);
# 2542 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float pow(float, int);
# 2543 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline double pow(double, int);
# 2544 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float log(float);
# 2545 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float log10(float);
# 2546 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float fmod(float, float);
# 2547 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float modf(float, float *);
# 2548 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float exp(float);
# 2549 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float frexp(float, int *);
# 2550 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float ldexp(float, int);
# 2551 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float asin(float);
# 2552 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float sin(float);
# 2553 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float sinh(float);
# 2554 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float acos(float);
# 2555 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float cos(float);
# 2556 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float cosh(float);
# 2557 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float atan(float);
# 2558 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float atan2(float, float);
# 2559 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float tan(float);
# 2560 "/usr/local/cuda4.1/cuda/include/math_functions.h"
extern inline float tanh(float);
# 2563 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2566 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float logb(float a)
# 2567 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2568 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return logbf(a);
# 2569 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2571 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline int ilogb(float a)
# 2572 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2573 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return ilogbf(a);
# 2574 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2576 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float scalbn(float a, int b)
# 2577 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2578 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return scalbnf(a, b);
# 2579 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2581 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float scalbln(float a, long b)
# 2582 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2583 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return scalblnf(a, b);
# 2584 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2586 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float exp2(float a)
# 2587 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2588 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return exp2f(a);
# 2589 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2591 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float exp10(float a)
# 2592 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2593 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return exp10f(a);
# 2594 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2596 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float expm1(float a)
# 2597 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2598 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return expm1f(a);
# 2599 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2601 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float log2(float a)
# 2602 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2603 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return log2f(a);
# 2604 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2606 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float log1p(float a)
# 2607 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2608 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return log1pf(a);
# 2609 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2611 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float rsqrt(float a)
# 2612 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2613 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return rsqrtf(a);
# 2614 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2616 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float acosh(float a)
# 2617 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2618 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return acoshf(a);
# 2619 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2621 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float asinh(float a)
# 2622 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2623 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return asinhf(a);
# 2624 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2626 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float atanh(float a)
# 2627 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2628 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return atanhf(a);
# 2629 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2631 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float hypot(float a, float b)
# 2632 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2633 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return hypotf(a, b);
# 2634 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2636 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float cbrt(float a)
# 2637 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2638 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return cbrtf(a);
# 2639 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2641 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float rcbrt(float a)
# 2642 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2643 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return rcbrtf(a);
# 2644 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2646 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float sinpi(float a)
# 2647 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2648 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return sinpif(a);
# 2649 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2651 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float cospi(float a)
# 2652 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2653 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return cospif(a);
# 2654 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2656 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline void sincos(float a, float *sptr, float *cptr)
# 2657 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2658 "/usr/local/cuda4.1/cuda/include/math_functions.h"
sincosf(a, sptr, cptr);
# 2659 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2661 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float j0(float a)
# 2662 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2663 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return j0f(a);
# 2664 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2666 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float j1(float a)
# 2667 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2668 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return j1f(a);
# 2669 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2671 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float jn(int n, float a)
# 2672 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2673 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return jnf(n, a);
# 2674 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2676 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float y0(float a)
# 2677 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2678 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return y0f(a);
# 2679 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2681 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float y1(float a)
# 2682 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2683 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return y1f(a);
# 2684 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2686 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float yn(int n, float a)
# 2687 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2688 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return ynf(n, a);
# 2689 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2691 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float erf(float a)
# 2692 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2693 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return erff(a);
# 2694 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2696 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float erfinv(float a)
# 2697 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2698 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return erfinvf(a);
# 2699 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2701 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float erfc(float a)
# 2702 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2703 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return erfcf(a);
# 2704 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2706 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float erfcinv(float a)
# 2707 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2708 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return erfcinvf(a);
# 2709 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2711 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float erfcx(float a)
# 2712 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2713 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return erfcxf(a);
# 2714 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2716 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float lgamma(float a)
# 2717 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2718 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return lgammaf(a);
# 2719 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2721 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float tgamma(float a)
# 2722 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2723 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return tgammaf(a);
# 2724 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2726 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float copysign(float a, float b)
# 2727 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2728 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return copysignf(a, b);
# 2729 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2731 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline double copysign(double a, float b)
# 2732 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2733 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return copysign(a, (double)b);
# 2734 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2736 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float copysign(float a, double b)
# 2737 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2738 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return copysignf(a, (float)b);
# 2739 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2741 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float nextafter(float a, float b)
# 2742 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2743 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return nextafterf(a, b);
# 2744 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2746 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float remainder(float a, float b)
# 2747 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2748 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return remainderf(a, b);
# 2749 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2751 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float remquo(float a, float b, int *quo)
# 2752 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2753 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return remquof(a, b, quo);
# 2754 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2756 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float round(float a)
# 2757 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2758 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return roundf(a);
# 2759 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2761 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline long lround(float a)
# 2762 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2763 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return lroundf(a);
# 2764 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2766 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline long long llround(float a)
# 2767 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2768 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return llroundf(a);
# 2769 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2771 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float trunc(float a)
# 2772 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2773 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return truncf(a);
# 2774 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2776 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float rint(float a)
# 2777 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2778 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return rintf(a);
# 2779 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2781 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline long lrint(float a)
# 2782 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2783 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return lrintf(a);
# 2784 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2786 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline long long llrint(float a)
# 2787 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2788 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return llrintf(a);
# 2789 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2791 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float nearbyint(float a)
# 2792 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2793 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return nearbyintf(a);
# 2794 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2796 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float fdim(float a, float b)
# 2797 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2798 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fdimf(a, b);
# 2799 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2801 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float fma(float a, float b, float c)
# 2802 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2803 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fmaf(a, b, c);
# 2804 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2806 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float fmax(float a, float b)
# 2807 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2808 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fmaxf(a, b);
# 2809 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2811 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float fmin(float a, float b)
# 2812 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2813 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fminf(a, b);
# 2814 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2816 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned min(unsigned a, unsigned b)
# 2817 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2818 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return umin(a, b);
# 2819 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2821 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned min(int a, unsigned b)
# 2822 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2823 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return umin((unsigned)a, b);
# 2824 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2826 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned min(unsigned a, int b)
# 2827 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2828 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return umin(a, (unsigned)b);
# 2829 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2831 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline long long min(long long a, long long b)
# 2832 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2833 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return llmin(a, b);
# 2834 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2836 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned long long min(unsigned long long a, unsigned long long b)
# 2837 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2838 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return ullmin(a, b);
# 2839 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2841 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned long long min(long long a, unsigned long long b)
# 2842 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2843 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return ullmin((unsigned long long)a, b);
# 2844 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2846 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned long long min(unsigned long long a, long long b)
# 2847 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2848 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return ullmin(a, (unsigned long long)b);
# 2849 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2851 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float min(float a, float b)
# 2852 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2853 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fminf(a, b);
# 2854 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2856 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline double min(double a, double b)
# 2857 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2858 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fmin(a, b);
# 2859 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2861 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline double min(float a, double b)
# 2862 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2863 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fmin((double)a, b);
# 2864 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2866 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline double min(double a, float b)
# 2867 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2868 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fmin(a, (double)b);
# 2869 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2871 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned max(unsigned a, unsigned b)
# 2872 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2873 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return umax(a, b);
# 2874 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2876 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned max(int a, unsigned b)
# 2877 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2878 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return umax((unsigned)a, b);
# 2879 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2881 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned max(unsigned a, int b)
# 2882 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2883 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return umax(a, (unsigned)b);
# 2884 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2886 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline long long max(long long a, long long b)
# 2887 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2888 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return llmax(a, b);
# 2889 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2891 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned long long max(unsigned long long a, unsigned long long b)
# 2892 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2893 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return ullmax(a, b);
# 2894 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2896 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned long long max(long long a, unsigned long long b)
# 2897 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2898 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return ullmax((unsigned long long)a, b);
# 2899 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2901 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline unsigned long long max(unsigned long long a, long long b)
# 2902 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2903 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return ullmax(a, (unsigned long long)b);
# 2904 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2906 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline float max(float a, float b)
# 2907 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2908 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fmaxf(a, b);
# 2909 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2911 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline double max(double a, double b)
# 2912 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2913 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fmax(a, b);
# 2914 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2916 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline double max(float a, double b)
# 2917 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2918 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fmax((double)a, b);
# 2919 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 2921 "/usr/local/cuda4.1/cuda/include/math_functions.h"
static inline double max(double a, float b)
# 2922 "/usr/local/cuda4.1/cuda/include/math_functions.h"
{
# 2923 "/usr/local/cuda4.1/cuda/include/math_functions.h"
return fmax(a, (double)b);
# 2924 "/usr/local/cuda4.1/cuda/include/math_functions.h"
}
# 73 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
template< class T, int dim = 1>
# 74 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
struct surface : public surfaceReference {
# 76 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
surface()
# 77 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
{
# 78 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 79 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
}
# 81 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
surface(cudaChannelFormatDesc desc)
# 82 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
{
# 83 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
(channelDesc) = desc;
# 84 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
}
# 85 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
};
# 87 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
template< int dim>
# 88 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
struct surface< void, dim> : public surfaceReference {
# 90 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
surface()
# 91 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
{
# 92 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
(channelDesc) = cudaCreateChannelDesc< void> ();
# 93 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
}
# 94 "/usr/local/cuda4.1/cuda/include/cuda_surface_types.h"
};
# 73 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
template< class T, int texType = 1, cudaTextureReadMode mode = cudaReadModeElementType>
# 74 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
struct texture : public textureReference {
# 76 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
texture(int norm = 0, cudaTextureFilterMode
# 77 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
fMode = cudaFilterModePoint, cudaTextureAddressMode
# 78 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
aMode = cudaAddressModeClamp)
# 79 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
{
# 80 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
(normalized) = norm;
# 81 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
(filterMode) = fMode;
# 82 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 83 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 84 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 85 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
(channelDesc) = cudaCreateChannelDesc< T> ();
# 86 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
(sRGB) = 0;
# 87 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
}
# 89 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
texture(int norm, cudaTextureFilterMode
# 90 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
fMode, cudaTextureAddressMode
# 91 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
aMode, cudaChannelFormatDesc
# 92 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
desc)
# 93 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
{
# 94 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
(normalized) = norm;
# 95 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
(filterMode) = fMode;
# 96 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
((addressMode)[0]) = aMode;
# 97 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
((addressMode)[1]) = aMode;
# 98 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
((addressMode)[2]) = aMode;
# 99 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
(channelDesc) = desc;
# 100 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
(sRGB) = 0;
# 101 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
}
# 102 "/usr/local/cuda4.1/cuda/include/cuda_texture_types.h"
};
# 1103 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline int mulhi(int a, int b)
# 1104 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 1106 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1108 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b)
# 1109 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 1111 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1113 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b)
# 1114 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 1116 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1118 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b)
# 1119 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 1121 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1123 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline long long mul64hi(long long a, long long b)
# 1124 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 1126 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1128 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b)
# 1129 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 1131 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1133 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b)
# 1134 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 1136 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1138 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b)
# 1139 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 1141 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1143 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline int float_as_int(float a)
# 1144 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;
# 1146 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1148 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline float int_as_float(int a)
# 1149 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;
# 1151 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1153 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline float saturate(float a)
# 1154 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;
# 1156 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1158 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline int mul24(int a, int b)
# 1159 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 1161 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1163 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b)
# 1164 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)b;
# 1166 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1168 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline void trap()
# 1169 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;
# 1171 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1174 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline void brkpt(int c = 0)
# 1175 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)c;
# 1177 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1179 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline void syncthreads()
# 1180 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;
# 1182 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1184 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline void prof_trigger(int e)
# 1185 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)e;
# 1202 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1204 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline void threadfence(bool global = true)
# 1205 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)global;
# 1207 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1209 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode = cudaRoundZero)
# 1210 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 1215 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1217 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode = cudaRoundZero)
# 1218 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 1223 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1225 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode = cudaRoundNearest)
# 1226 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 1231 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 1233 "/usr/local/cuda4.1/cuda/include/device_functions.h"
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 1234 "/usr/local/cuda4.1/cuda/include/device_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 1239 "/usr/local/cuda4.1/cuda/include/device_functions.h"
exit(___);}
# 96 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd(int *address, int val)
# 97 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 99 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 101 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val)
# 102 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 104 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 106 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub(int *address, int val)
# 107 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 109 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 111 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val)
# 112 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 114 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 116 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch(int *address, int val)
# 117 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 119 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 121 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val)
# 122 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 124 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 126 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch(float *address, float val)
# 127 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 129 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 131 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin(int *address, int val)
# 132 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 134 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 136 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val)
# 137 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 139 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 141 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax(int *address, int val)
# 142 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 144 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 146 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val)
# 147 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 149 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 151 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val)
# 152 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 154 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 156 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val)
# 157 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 159 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 161 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd(int *address, int val)
# 162 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 164 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 166 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val)
# 167 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 169 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 171 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr(int *address, int val)
# 172 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 174 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 176 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val)
# 177 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 179 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 181 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor(int *address, int val)
# 182 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 184 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 186 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val)
# 187 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 189 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 191 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val)
# 192 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)compare;(void)val;
# 194 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 196 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val)
# 197 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)compare;(void)val;
# 199 "/usr/local/cuda4.1/cuda/include/sm_11_atomic_functions.h"
exit(___);}
# 81 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val)
# 82 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 84 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
exit(___);}
# 86 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val)
# 87 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 89 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
exit(___);}
# 91 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val)
# 92 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)compare;(void)val;
# 94 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
exit(___);}
# 96 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool any(bool cond)
# 97 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
{int volatile ___ = 1;(void)cond;
# 99 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
exit(___);}
# 101 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
__attribute__((unused)) static inline bool all(bool cond)
# 102 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
{int volatile ___ = 1;(void)cond;
# 104 "/usr/local/cuda4.1/cuda/include/sm_12_atomic_functions.h"
exit(___);}
# 521 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode)
# 522 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)b;(void)c;(void)mode;
# 527 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 529 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 530 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 535 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 537 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest)
# 538 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 543 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 545 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero)
# 546 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 551 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 553 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero)
# 554 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 559 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 561 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero)
# 562 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 567 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 569 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero)
# 570 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 575 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 577 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest)
# 578 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 583 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 585 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest)
# 586 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 591 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 593 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest)
# 594 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 596 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 598 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest)
# 599 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 601 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 603 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest)
# 604 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
{int volatile ___ = 1;(void)a;(void)mode;
# 606 "/usr/local/cuda4.1/cuda/include/sm_13_double_functions.h"
exit(___);}
# 77 "/usr/local/cuda4.1/cuda/include/sm_20_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd(float *address, float val)
# 78 "/usr/local/cuda4.1/cuda/include/sm_20_atomic_functions.h"
{int volatile ___ = 1;(void)address;(void)val;
# 80 "/usr/local/cuda4.1/cuda/include/sm_20_atomic_functions.h"
exit(___);}
# 239 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned ballot(bool pred)
# 240 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
{int volatile ___ = 1;(void)pred;
# 242 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
exit(___);}
# 244 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline int syncthreads_count(bool pred)
# 245 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
{int volatile ___ = 1;(void)pred;
# 247 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
exit(___);}
# 249 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_and(bool pred)
# 250 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
{int volatile ___ = 1;(void)pred;
# 252 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
exit(___);}
# 254 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_or(bool pred)
# 255 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
{int volatile ___ = 1;(void)pred;
# 257 "/usr/local/cuda4.1/cuda/include/sm_20_intrinsics.h"
exit(___);}
# 99 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 100 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 101 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)s;(void)mode;
# 108 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 110 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 111 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 112 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 118 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 120 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 121 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf1Dread(T *res, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 122 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)mode;
# 124 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 127 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 128 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 130 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 133 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 134 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 136 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 139 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 140 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 142 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 145 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 146 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 148 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 151 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 152 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 154 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 157 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 158 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 162 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 165 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 166 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 168 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 171 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 172 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 176 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 179 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 180 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 182 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 185 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 186 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 188 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 191 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 192 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 194 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 197 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 198 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 200 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 203 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 204 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 206 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 209 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 210 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 214 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 217 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 218 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 220 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 223 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 224 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 228 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 231 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 232 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 234 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 237 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 238 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 240 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 243 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 244 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 246 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 249 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 250 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 252 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 255 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 256 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 258 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 261 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 262 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 266 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 269 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 270 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 272 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 275 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 276 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 280 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 283 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 284 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 286 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 289 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 290 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 292 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 295 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 296 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 298 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 301 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 302 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 304 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 307 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 308 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 310 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 313 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 314 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 318 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 321 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 322 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 324 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 387 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 388 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 390 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 393 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 394 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 396 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 399 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 400 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 404 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 407 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf1Dread(surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode)
# 408 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 412 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 447 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 448 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 449 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)s;(void)mode;
# 456 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 458 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 459 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 460 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 466 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 468 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 469 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf2Dread(T *res, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 470 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)mode;
# 472 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 475 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 476 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 478 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 481 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 482 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 484 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 487 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 488 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 490 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 493 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 494 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 496 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 499 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 500 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 502 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 505 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 506 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 510 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 513 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 514 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 516 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 519 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 520 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 524 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 527 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 528 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 530 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 533 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 534 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 536 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 539 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 540 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 542 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 545 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 546 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 548 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 551 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 552 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 554 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 557 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 558 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 562 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 565 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 566 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 568 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 571 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 572 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 576 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 579 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 580 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 582 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 585 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 586 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 588 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 591 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 592 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 594 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 597 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 598 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 600 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 603 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 604 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 606 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 609 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 610 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 614 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 617 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 618 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 620 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 623 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 624 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 628 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 631 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 632 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 634 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 637 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 638 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 640 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 643 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 644 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 646 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 649 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 650 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 652 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 655 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 656 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 658 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 661 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 662 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 666 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 669 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 670 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 672 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 735 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 736 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 738 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 741 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 742 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 744 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 747 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 748 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 752 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 755 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf2Dread(surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode)
# 756 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 760 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 795 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 796 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf3Dread(T *res, surface< void, 3> surf, int x, int y, int z, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 797 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;
# 804 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 806 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 807 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 808 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 814 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 816 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 817 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf3Dread(T *res, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 818 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 820 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 823 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 824 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 826 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 829 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 830 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 832 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 835 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 836 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 838 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 841 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 842 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 844 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 847 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 848 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 850 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 853 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 854 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 858 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 861 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 862 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 864 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 867 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 868 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 872 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 875 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 876 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 878 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 881 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 882 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 884 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 887 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 888 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 890 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 893 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 894 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 896 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 899 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 900 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 902 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 905 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 906 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 910 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 913 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 914 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 916 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 919 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 920 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 924 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 927 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 928 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 930 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 933 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 934 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 936 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 939 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 940 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 942 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 945 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 946 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 948 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 951 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 952 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 954 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 957 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 958 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 962 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 965 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 966 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 968 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 971 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 972 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 976 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 979 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 980 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 982 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 985 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 986 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 988 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 991 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 992 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 994 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 997 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 998 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1000 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1003 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 1004 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1006 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1009 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 1010 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1014 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1017 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 1018 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1020 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1083 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 1084 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1086 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1089 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 1090 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1092 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1095 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 1096 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1100 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1103 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf3Dread(surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode)
# 1104 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1108 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1143 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1144 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf1DLayeredread(T *res, surface< void, 241> surf, int x, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1145 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)s;(void)mode;
# 1152 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1154 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 1155 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1156 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1162 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1164 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1165 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf1DLayeredread(T *res, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1166 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)mode;
# 1168 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1171 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1172 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1174 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1177 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1178 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1180 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1183 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1184 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1186 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1189 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1190 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1192 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1195 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1196 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1198 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1201 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1202 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1206 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1209 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1210 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1212 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1215 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1216 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1220 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1223 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1224 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1226 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1229 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1230 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1232 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1235 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1236 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1238 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1241 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1242 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1244 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1247 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1248 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1250 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1253 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1254 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1258 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1261 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1262 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1264 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1267 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1268 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1272 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1275 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1276 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1278 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1281 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1282 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1284 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1287 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1288 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1290 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1293 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1294 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1296 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1299 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1300 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1302 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1305 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1306 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1310 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1313 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1314 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1316 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1319 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1320 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1324 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1327 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1328 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1330 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1333 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1334 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1336 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1339 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1340 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1342 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1345 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1346 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1348 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1351 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1352 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1354 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1357 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1358 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1362 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1365 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1366 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1368 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1431 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1432 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1434 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1437 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1438 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1440 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1443 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1444 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1448 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1451 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf1DLayeredread(surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode)
# 1452 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 1456 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1491 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1492 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf2DLayeredread(T *res, surface< void, 242> surf, int x, int y, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1493 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;
# 1500 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1502 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 1503 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1504 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1510 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1512 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1513 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf2DLayeredread(T *res, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1514 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1516 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1519 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1520 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1522 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1525 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1526 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1528 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1531 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1532 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1534 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1537 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1538 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1540 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1543 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1544 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1546 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1549 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1550 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1554 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1557 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1558 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1560 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1563 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1564 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1568 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1571 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1572 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1574 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1577 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1578 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1580 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1583 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1584 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1586 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1589 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1590 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1592 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1595 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1596 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1598 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1601 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1602 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1606 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1609 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1610 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1612 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1615 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1616 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1620 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1623 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1624 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1626 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1629 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1630 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1632 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1635 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1636 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1638 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1641 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1642 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1644 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1647 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1648 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1650 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1653 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1654 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1658 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1661 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1662 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1664 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1667 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1668 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1672 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1675 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1676 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1678 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1681 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline long long surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1682 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1684 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1687 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1688 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1690 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1693 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1694 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1696 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1699 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1700 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1702 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1705 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1706 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1710 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1713 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1714 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1716 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1779 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1780 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1782 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1785 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1786 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1788 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1791 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1792 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1796 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1799 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surf2DLayeredread(surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode)
# 1800 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1804 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1839 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1840 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surfCubemapread(T *res, surface< void, 12> surf, int x, int y, int face, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1841 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;
# 1848 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1850 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 1851 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1852 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1858 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1860 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 1861 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surfCubemapread(T *res, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 1862 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1864 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1867 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1868 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1870 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1873 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1874 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1876 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1879 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1880 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1882 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1885 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1886 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1888 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1891 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1892 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1894 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1897 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1898 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1902 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1905 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1906 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1908 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1911 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1912 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1916 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1919 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1920 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1922 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1925 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1926 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1928 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1931 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1932 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1934 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1937 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1938 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1940 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1943 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1944 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1946 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1949 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1950 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1954 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1957 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1958 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1960 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1963 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1964 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1968 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1971 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1972 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1974 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1977 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1978 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1980 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1983 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1984 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1986 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1989 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1990 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1992 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 1995 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 1996 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1998 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2001 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2002 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2006 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2009 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2010 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2012 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2015 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2016 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2020 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2023 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2024 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2026 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2029 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline long long surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2030 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2032 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2035 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2036 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2038 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2041 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2042 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2044 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2047 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2048 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2050 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2053 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2054 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2058 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2061 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2062 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2064 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2127 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2128 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2130 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2133 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2134 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2136 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2139 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2140 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2144 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2147 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surfCubemapread(surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode)
# 2148 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 2152 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2188 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 2189 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surfCubemapLayeredread(T *res, surface< void, 252> surf, int x, int y, int layerFace, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2190 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;
# 2197 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2199 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline T
# 2200 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2201 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2207 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2209 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 2210 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surfCubemapLayeredread(T *res, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2211 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2213 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2216 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2217 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2219 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2222 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline signed char surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2223 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2225 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2228 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned char surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2229 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2231 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2234 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char1 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2235 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2237 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2240 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar1 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2241 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2243 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2246 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char2 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2247 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2251 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2254 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar2 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2255 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2257 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2260 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline char4 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2261 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2265 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2268 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uchar4 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2269 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2271 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2274 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2275 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2277 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2280 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned short surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2281 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2283 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2286 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short1 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2287 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2289 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2292 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort1 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2293 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2295 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2298 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short2 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2299 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2303 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2306 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort2 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2307 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2309 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2312 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline short4 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2313 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2317 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2320 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ushort4 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2321 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2323 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2326 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2327 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2329 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2332 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2333 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2335 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2338 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int1 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2339 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2341 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2344 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint1 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2345 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2347 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2350 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int2 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2351 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2355 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2358 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint2 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2359 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2361 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2364 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline int4 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2365 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2369 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2372 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline uint4 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2373 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2375 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2378 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline long long surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2379 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2381 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2384 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline unsigned long long surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2385 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2387 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2390 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong1 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2391 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2393 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2396 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong1 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2397 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2399 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2402 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline longlong2 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2403 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2407 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2410 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline ulonglong2 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2411 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2413 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2476 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2477 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2479 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2482 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float1 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2483 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2485 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2488 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float2 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2489 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2493 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2496 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template<> __attribute__((unused)) inline float4 surfCubemapLayeredread(surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode)
# 2497 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2501 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2537 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 2538 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2539 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)s;(void)mode;
# 2557 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2559 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 2560 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf1Dwrite(T val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2561 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2563 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2566 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2567 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2569 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2571 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(signed char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2572 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2574 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2576 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned char val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2577 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2579 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2581 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2582 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2584 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2586 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2587 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2589 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2591 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2592 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2594 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2596 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2597 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2599 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2601 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(char4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2602 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2604 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2606 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uchar4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2607 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2609 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2611 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2612 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2614 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2616 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned short val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2617 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2619 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2621 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2622 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2624 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2626 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2627 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2629 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2631 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2632 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2634 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2636 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2637 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2639 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2641 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(short4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2642 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2644 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2646 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ushort4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2647 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2649 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2651 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2652 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2654 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2656 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2657 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2659 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2661 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2662 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2664 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2666 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2667 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2669 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2671 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2672 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2674 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2676 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2677 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2679 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2681 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(int4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2682 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2684 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2686 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(uint4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2687 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2689 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2691 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2692 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2694 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2696 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(unsigned long long val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2697 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2699 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2701 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2702 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2704 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2706 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2707 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2709 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2711 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(longlong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2712 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2714 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2716 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(ulonglong2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2717 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2719 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2765 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2766 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2768 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2770 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float1 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2771 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2773 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2775 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float2 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2776 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2778 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2780 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1Dwrite(float4 val, surface< void, 1> surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2781 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 2783 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2819 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 2820 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2821 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)s;(void)mode;
# 2839 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2841 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 2842 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf2Dwrite(T val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2843 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2845 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2848 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2849 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2851 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2853 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(signed char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2854 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2856 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2858 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned char val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2859 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2861 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2863 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2864 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2866 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2868 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2869 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2871 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2873 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2874 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2876 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2878 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2879 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2881 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2883 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(char4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2884 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2886 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2888 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uchar4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2889 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2891 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2893 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2894 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2896 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2898 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned short val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2899 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2901 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2903 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2904 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2906 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2908 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2909 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2911 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2913 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2914 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2916 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2918 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2919 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2921 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2923 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(short4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2924 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2926 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2928 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ushort4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2929 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2931 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2933 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2934 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2936 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2938 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2939 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2941 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2943 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2944 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2946 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2948 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2949 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2951 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2953 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2954 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2956 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2958 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2959 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2961 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2963 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(int4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2964 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2966 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2968 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(uint4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2969 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2971 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2973 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2974 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2976 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2978 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(unsigned long long val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2979 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2981 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2983 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2984 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2986 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2988 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2989 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2991 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2993 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(longlong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2994 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 2996 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 2998 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(ulonglong2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 2999 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 3001 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3047 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3048 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 3050 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3052 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float1 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3053 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 3055 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3057 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float2 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3058 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 3060 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3062 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2Dwrite(float4 val, surface< void, 2> surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3063 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 3065 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3101 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 3102 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf3Dwrite(T val, surface< void, 3> surf, int x, int y, int z, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3103 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;
# 3121 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3123 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 3124 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf3Dwrite(T val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3125 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3127 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3130 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(char val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3131 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3133 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3135 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(signed char val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3136 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3138 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3140 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(unsigned char val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3141 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3143 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3145 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(char1 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3146 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3148 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3150 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(uchar1 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3151 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3153 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3155 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(char2 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3156 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3158 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3160 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(uchar2 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3161 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3163 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3165 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(char4 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3166 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3168 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3170 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(uchar4 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3171 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3173 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3175 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(short val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3176 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3178 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3180 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(unsigned short val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3181 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3183 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3185 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(short1 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3186 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3188 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3190 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(ushort1 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3191 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3193 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3195 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(short2 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3196 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3198 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3200 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(ushort2 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3201 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3203 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3205 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(short4 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3206 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3208 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3210 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(ushort4 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3211 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3213 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3215 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(int val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3216 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3218 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3220 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(unsigned val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3221 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3223 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3225 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(int1 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3226 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3228 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3230 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(uint1 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3231 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3233 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3235 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(int2 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3236 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3238 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3240 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(uint2 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3241 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3243 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3245 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(int4 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3246 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3248 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3250 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(uint4 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3251 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3253 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3255 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(long long val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3256 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3258 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3260 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(unsigned long long val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3261 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3263 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3265 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(longlong1 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3266 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3268 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3270 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(ulonglong1 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3271 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3273 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3275 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(longlong2 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3276 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3278 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3280 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(ulonglong2 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3281 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3283 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3329 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(float val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3330 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3332 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3334 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(float1 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3335 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3337 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3339 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(float2 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3340 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3342 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3344 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf3Dwrite(float4 val, surface< void, 3> surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3345 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 3347 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3383 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 3384 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf1DLayeredwrite(T val, surface< void, 241> surf, int x, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3385 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)s;(void)mode;
# 3403 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3405 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 3406 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf1DLayeredwrite(T val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3407 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3409 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3412 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(char val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3413 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3415 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3417 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(signed char val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3418 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3420 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3422 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(unsigned char val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3423 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3425 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3427 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(char1 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3428 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3430 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3432 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(uchar1 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3433 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3435 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3437 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(char2 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3438 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3440 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3442 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(uchar2 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3443 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3445 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3447 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(char4 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3448 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3450 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3452 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(uchar4 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3453 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3455 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3457 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(short val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3458 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3460 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3462 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(unsigned short val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3463 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3465 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3467 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(short1 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3468 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3470 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3472 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(ushort1 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3473 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3475 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3477 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(short2 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3478 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3480 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3482 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(ushort2 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3483 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3485 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3487 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(short4 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3488 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3490 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3492 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(ushort4 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3493 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3495 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3497 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(int val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3498 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3500 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3502 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(unsigned val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3503 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3505 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3507 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(int1 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3508 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3510 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3512 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(uint1 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3513 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3515 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3517 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(int2 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3518 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3520 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3522 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(uint2 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3523 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3525 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3527 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(int4 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3528 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3530 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3532 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(uint4 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3533 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3535 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3537 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(long long val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3538 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3540 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3542 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(unsigned long long val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3543 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3545 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3547 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(longlong1 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3548 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3550 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3552 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(ulonglong1 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3553 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3555 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3557 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(longlong2 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3558 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3560 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3562 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(ulonglong2 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3563 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3565 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3611 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(float val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3612 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3614 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3616 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(float1 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3617 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3619 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3621 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(float2 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3622 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3624 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3626 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf1DLayeredwrite(float4 val, surface< void, 241> surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3627 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 3629 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3665 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 3666 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf2DLayeredwrite(T val, surface< void, 242> surf, int x, int y, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3667 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;
# 3685 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3687 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 3688 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surf2DLayeredwrite(T val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3689 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3691 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3694 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(char val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3695 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3697 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3699 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(signed char val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3700 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3702 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3704 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(unsigned char val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3705 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3707 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3709 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(char1 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3710 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3712 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3714 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(uchar1 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3715 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3717 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3719 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(char2 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3720 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3722 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3724 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(uchar2 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3725 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3727 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3729 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(char4 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3730 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3732 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3734 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(uchar4 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3735 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3737 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3739 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(short val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3740 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3742 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3744 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(unsigned short val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3745 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3747 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3749 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(short1 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3750 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3752 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3754 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(ushort1 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3755 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3757 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3759 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(short2 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3760 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3762 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3764 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(ushort2 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3765 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3767 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3769 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(short4 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3770 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3772 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3774 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(ushort4 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3775 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3777 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3779 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(int val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3780 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3782 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3784 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(unsigned val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3785 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3787 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3789 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(int1 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3790 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3792 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3794 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(uint1 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3795 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3797 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3799 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(int2 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3800 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3802 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3804 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(uint2 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3805 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3807 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3809 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(int4 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3810 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3812 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3814 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(uint4 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3815 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3817 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3819 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(long long val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3820 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3822 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3824 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(unsigned long long val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3825 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3827 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3829 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(longlong1 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3830 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3832 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3834 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(ulonglong1 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3835 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3837 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3839 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(longlong2 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3840 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3842 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3844 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(ulonglong2 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3845 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3847 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3893 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(float val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3894 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3896 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3898 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(float1 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3899 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3901 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3903 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(float2 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3904 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3906 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3908 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surf2DLayeredwrite(float4 val, surface< void, 242> surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3909 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 3911 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3947 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 3948 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surfCubemapwrite(T val, surface< void, 12> surf, int x, int y, int face, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3949 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;
# 3967 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3969 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 3970 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surfCubemapwrite(T val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3971 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 3973 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3976 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(char val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3977 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 3979 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3981 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(signed char val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3982 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 3984 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3986 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(unsigned char val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3987 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 3989 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3991 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(char1 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3992 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 3994 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 3996 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(uchar1 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 3997 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 3999 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4001 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(char2 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4002 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4004 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4006 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(uchar2 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4007 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4009 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4011 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(char4 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4012 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4014 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4016 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(uchar4 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4017 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4019 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4021 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(short val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4022 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4024 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4026 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(unsigned short val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4027 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4029 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4031 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(short1 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4032 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4034 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4036 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(ushort1 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4037 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4039 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4041 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(short2 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4042 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4044 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4046 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(ushort2 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4047 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4049 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4051 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(short4 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4052 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4054 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4056 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(ushort4 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4057 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4059 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4061 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(int val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4062 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4064 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4066 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(unsigned val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4067 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4069 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4071 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(int1 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4072 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4074 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4076 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(uint1 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4077 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4079 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4081 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(int2 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4082 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4084 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4086 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(uint2 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4087 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4089 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4091 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(int4 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4092 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4094 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4096 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(uint4 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4097 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4099 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4101 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(long long val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4102 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4104 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4106 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(unsigned long long val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4107 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4109 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4111 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(longlong1 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4112 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4114 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4116 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(ulonglong1 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4117 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4119 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4121 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(longlong2 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4122 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4124 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4126 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(ulonglong2 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4127 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4129 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4175 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(float val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4176 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4178 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4180 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(float1 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4181 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4183 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4185 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(float2 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4186 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4188 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4190 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapwrite(float4 val, surface< void, 12> surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4191 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 4193 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4229 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 4230 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surfCubemapLayeredwrite(T val, surface< void, 252> surf, int x, int y, int layerFace, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4231 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;
# 4249 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4251 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
template< class T> __attribute__((unused)) static inline void
# 4252 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
surfCubemapLayeredwrite(T val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4253 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4255 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4258 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(char val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4259 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4261 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4263 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(signed char val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4264 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4266 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4268 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(unsigned char val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4269 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4271 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4273 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(char1 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4274 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4276 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4278 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(uchar1 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4279 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4281 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4283 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(char2 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4284 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4286 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4288 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(uchar2 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4289 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4291 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4293 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(char4 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4294 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4296 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4298 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(uchar4 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4299 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4301 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4303 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(short val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4304 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4306 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4308 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(unsigned short val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4309 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4311 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4313 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(short1 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4314 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4316 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4318 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(ushort1 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4319 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4321 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4323 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(short2 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4324 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4326 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4328 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(ushort2 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4329 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4331 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4333 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(short4 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4334 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4336 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4338 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(ushort4 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4339 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4341 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4343 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(int val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4344 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4346 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4348 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(unsigned val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4349 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4351 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4353 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(int1 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4354 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4356 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4358 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(uint1 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4359 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4361 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4363 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(int2 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4364 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4366 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4368 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(uint2 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4369 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4371 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4373 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(int4 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4374 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4376 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4378 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(uint4 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4379 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4381 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4383 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(long long val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4384 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4386 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4388 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(unsigned long long val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4389 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4391 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4393 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(longlong1 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4394 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4396 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4398 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(ulonglong1 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4399 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4401 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4403 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(longlong2 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4404 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4406 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4408 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(ulonglong2 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4409 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4411 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4457 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(float val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4458 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4460 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4462 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(float1 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4463 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4465 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4467 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(float2 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4468 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4470 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 4472 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
__attribute__((unused)) static inline void surfCubemapLayeredwrite(float4 val, surface< void, 252> surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap)
# 4473 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 4475 "/usr/local/cuda4.1/cuda/include/surface_functions.h"
exit(___);}
# 96 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1Dfetch(texture< char, 1, cudaReadModeElementType> t, int x)
# 97 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 105 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 107 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1Dfetch(texture< signed char, 1, cudaReadModeElementType> t, int x)
# 108 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 112 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 114 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1Dfetch(texture< unsigned char, 1, cudaReadModeElementType> t, int x)
# 115 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 119 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 121 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1Dfetch(texture< char1, 1, cudaReadModeElementType> t, int x)
# 122 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 126 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 128 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1Dfetch(texture< uchar1, 1, cudaReadModeElementType> t, int x)
# 129 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 133 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 135 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1Dfetch(texture< char2, 1, cudaReadModeElementType> t, int x)
# 136 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 140 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 142 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1Dfetch(texture< uchar2, 1, cudaReadModeElementType> t, int x)
# 143 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 147 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 149 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1Dfetch(texture< char4, 1, cudaReadModeElementType> t, int x)
# 150 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 154 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 156 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1Dfetch(texture< uchar4, 1, cudaReadModeElementType> t, int x)
# 157 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 161 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 169 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1Dfetch(texture< short, 1, cudaReadModeElementType> t, int x)
# 170 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 174 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 176 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1Dfetch(texture< unsigned short, 1, cudaReadModeElementType> t, int x)
# 177 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 181 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 183 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1Dfetch(texture< short1, 1, cudaReadModeElementType> t, int x)
# 184 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 188 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 190 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1Dfetch(texture< ushort1, 1, cudaReadModeElementType> t, int x)
# 191 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 195 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 197 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1Dfetch(texture< short2, 1, cudaReadModeElementType> t, int x)
# 198 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 202 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 204 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1Dfetch(texture< ushort2, 1, cudaReadModeElementType> t, int x)
# 205 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 209 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 211 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1Dfetch(texture< short4, 1, cudaReadModeElementType> t, int x)
# 212 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 216 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 218 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1Dfetch(texture< ushort4, 1, cudaReadModeElementType> t, int x)
# 219 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 223 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 231 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1Dfetch(texture< int, 1, cudaReadModeElementType> t, int x)
# 232 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 236 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 238 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1Dfetch(texture< unsigned, 1, cudaReadModeElementType> t, int x)
# 239 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 243 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 245 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1Dfetch(texture< int1, 1, cudaReadModeElementType> t, int x)
# 246 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 250 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 252 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1Dfetch(texture< uint1, 1, cudaReadModeElementType> t, int x)
# 253 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 257 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 259 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1Dfetch(texture< int2, 1, cudaReadModeElementType> t, int x)
# 260 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 264 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 266 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1Dfetch(texture< uint2, 1, cudaReadModeElementType> t, int x)
# 267 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 271 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 273 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1Dfetch(texture< int4, 1, cudaReadModeElementType> t, int x)
# 274 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 278 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 280 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1Dfetch(texture< uint4, 1, cudaReadModeElementType> t, int x)
# 281 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 285 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 359 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< float, 1, cudaReadModeElementType> t, int x)
# 360 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 364 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 366 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< float1, 1, cudaReadModeElementType> t, int x)
# 367 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 371 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 373 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< float2, 1, cudaReadModeElementType> t, int x)
# 374 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 378 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 380 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< float4, 1, cudaReadModeElementType> t, int x)
# 381 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 385 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 393 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< char, 1, cudaReadModeNormalizedFloat> t, int x)
# 394 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 403 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 405 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< signed char, 1, cudaReadModeNormalizedFloat> t, int x)
# 406 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 411 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 413 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, int x)
# 414 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 419 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 421 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< char1, 1, cudaReadModeNormalizedFloat> t, int x)
# 422 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 427 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 429 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, int x)
# 430 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 435 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 437 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< char2, 1, cudaReadModeNormalizedFloat> t, int x)
# 438 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 443 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 445 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, int x)
# 446 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 451 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 453 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< char4, 1, cudaReadModeNormalizedFloat> t, int x)
# 454 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 459 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 461 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, int x)
# 462 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 467 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 475 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< short, 1, cudaReadModeNormalizedFloat> t, int x)
# 476 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 481 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 483 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1Dfetch(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, int x)
# 484 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 489 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 491 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< short1, 1, cudaReadModeNormalizedFloat> t, int x)
# 492 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 497 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 499 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1Dfetch(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, int x)
# 500 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 505 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 507 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< short2, 1, cudaReadModeNormalizedFloat> t, int x)
# 508 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 513 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 515 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1Dfetch(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, int x)
# 516 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 521 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 523 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< short4, 1, cudaReadModeNormalizedFloat> t, int x)
# 524 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 529 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 531 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1Dfetch(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, int x)
# 532 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 537 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 545 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1D(texture< char, 1, cudaReadModeElementType> t, float x)
# 546 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 554 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 556 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1D(texture< signed char, 1, cudaReadModeElementType> t, float x)
# 557 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 561 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 563 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1D(texture< unsigned char, 1, cudaReadModeElementType> t, float x)
# 564 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 568 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 570 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1D(texture< char1, 1, cudaReadModeElementType> t, float x)
# 571 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 575 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 577 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1D(texture< uchar1, 1, cudaReadModeElementType> t, float x)
# 578 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 582 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 584 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1D(texture< char2, 1, cudaReadModeElementType> t, float x)
# 585 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 589 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 591 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1D(texture< uchar2, 1, cudaReadModeElementType> t, float x)
# 592 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 596 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 598 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1D(texture< char4, 1, cudaReadModeElementType> t, float x)
# 599 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 603 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 605 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1D(texture< uchar4, 1, cudaReadModeElementType> t, float x)
# 606 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 610 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 618 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1D(texture< short, 1, cudaReadModeElementType> t, float x)
# 619 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 623 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 625 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1D(texture< unsigned short, 1, cudaReadModeElementType> t, float x)
# 626 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 630 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 632 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1D(texture< short1, 1, cudaReadModeElementType> t, float x)
# 633 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 637 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 639 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1D(texture< ushort1, 1, cudaReadModeElementType> t, float x)
# 640 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 644 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 646 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1D(texture< short2, 1, cudaReadModeElementType> t, float x)
# 647 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 651 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 653 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1D(texture< ushort2, 1, cudaReadModeElementType> t, float x)
# 654 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 658 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 660 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1D(texture< short4, 1, cudaReadModeElementType> t, float x)
# 661 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 665 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 667 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1D(texture< ushort4, 1, cudaReadModeElementType> t, float x)
# 668 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 672 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 680 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1D(texture< int, 1, cudaReadModeElementType> t, float x)
# 681 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 685 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 687 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1D(texture< unsigned, 1, cudaReadModeElementType> t, float x)
# 688 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 692 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 694 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1D(texture< int1, 1, cudaReadModeElementType> t, float x)
# 695 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 699 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 701 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1D(texture< uint1, 1, cudaReadModeElementType> t, float x)
# 702 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 706 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 708 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1D(texture< int2, 1, cudaReadModeElementType> t, float x)
# 709 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 713 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 715 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1D(texture< uint2, 1, cudaReadModeElementType> t, float x)
# 716 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 720 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 722 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1D(texture< int4, 1, cudaReadModeElementType> t, float x)
# 723 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 727 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 729 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1D(texture< uint4, 1, cudaReadModeElementType> t, float x)
# 730 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 734 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 814 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< float, 1, cudaReadModeElementType> t, float x)
# 815 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 819 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 821 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< float1, 1, cudaReadModeElementType> t, float x)
# 822 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 826 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 828 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< float2, 1, cudaReadModeElementType> t, float x)
# 829 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 833 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 835 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< float4, 1, cudaReadModeElementType> t, float x)
# 836 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 840 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 848 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< char, 1, cudaReadModeNormalizedFloat> t, float x)
# 849 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 858 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 860 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< signed char, 1, cudaReadModeNormalizedFloat> t, float x)
# 861 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 866 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 868 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned char, 1, cudaReadModeNormalizedFloat> t, float x)
# 869 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 874 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 876 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< char1, 1, cudaReadModeNormalizedFloat> t, float x)
# 877 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 882 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 884 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< uchar1, 1, cudaReadModeNormalizedFloat> t, float x)
# 885 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 890 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 892 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< char2, 1, cudaReadModeNormalizedFloat> t, float x)
# 893 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 898 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 900 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< uchar2, 1, cudaReadModeNormalizedFloat> t, float x)
# 901 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 906 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 908 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< char4, 1, cudaReadModeNormalizedFloat> t, float x)
# 909 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 914 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 916 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< uchar4, 1, cudaReadModeNormalizedFloat> t, float x)
# 917 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 922 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 930 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< short, 1, cudaReadModeNormalizedFloat> t, float x)
# 931 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 936 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 938 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1D(texture< unsigned short, 1, cudaReadModeNormalizedFloat> t, float x)
# 939 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 944 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 946 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< short1, 1, cudaReadModeNormalizedFloat> t, float x)
# 947 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 952 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 954 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1D(texture< ushort1, 1, cudaReadModeNormalizedFloat> t, float x)
# 955 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 960 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 962 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< short2, 1, cudaReadModeNormalizedFloat> t, float x)
# 963 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 968 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 970 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1D(texture< ushort2, 1, cudaReadModeNormalizedFloat> t, float x)
# 971 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 976 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 978 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< short4, 1, cudaReadModeNormalizedFloat> t, float x)
# 979 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 984 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 986 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1D(texture< ushort4, 1, cudaReadModeNormalizedFloat> t, float x)
# 987 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;
# 992 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1000 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex2D(texture< char, 2, cudaReadModeElementType> t, float x, float y)
# 1001 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1009 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1011 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex2D(texture< signed char, 2, cudaReadModeElementType> t, float x, float y)
# 1012 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1016 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1018 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex2D(texture< unsigned char, 2, cudaReadModeElementType> t, float x, float y)
# 1019 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1023 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1025 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex2D(texture< char1, 2, cudaReadModeElementType> t, float x, float y)
# 1026 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1030 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1032 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex2D(texture< uchar1, 2, cudaReadModeElementType> t, float x, float y)
# 1033 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1037 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1039 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex2D(texture< char2, 2, cudaReadModeElementType> t, float x, float y)
# 1040 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1044 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1046 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex2D(texture< uchar2, 2, cudaReadModeElementType> t, float x, float y)
# 1047 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1051 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1053 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2D(texture< char4, 2, cudaReadModeElementType> t, float x, float y)
# 1054 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1058 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1060 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2D(texture< uchar4, 2, cudaReadModeElementType> t, float x, float y)
# 1061 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1065 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1073 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex2D(texture< short, 2, cudaReadModeElementType> t, float x, float y)
# 1074 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1078 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1080 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex2D(texture< unsigned short, 2, cudaReadModeElementType> t, float x, float y)
# 1081 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1085 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1087 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex2D(texture< short1, 2, cudaReadModeElementType> t, float x, float y)
# 1088 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1092 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1094 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex2D(texture< ushort1, 2, cudaReadModeElementType> t, float x, float y)
# 1095 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1099 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1101 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex2D(texture< short2, 2, cudaReadModeElementType> t, float x, float y)
# 1102 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1106 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1108 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex2D(texture< ushort2, 2, cudaReadModeElementType> t, float x, float y)
# 1109 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1113 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1115 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2D(texture< short4, 2, cudaReadModeElementType> t, float x, float y)
# 1116 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1120 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1122 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2D(texture< ushort4, 2, cudaReadModeElementType> t, float x, float y)
# 1123 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1127 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1135 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex2D(texture< int, 2, cudaReadModeElementType> t, float x, float y)
# 1136 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1140 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1142 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex2D(texture< unsigned, 2, cudaReadModeElementType> t, float x, float y)
# 1143 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1147 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1149 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex2D(texture< int1, 2, cudaReadModeElementType> t, float x, float y)
# 1150 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1154 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1156 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex2D(texture< uint1, 2, cudaReadModeElementType> t, float x, float y)
# 1157 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1161 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1163 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex2D(texture< int2, 2, cudaReadModeElementType> t, float x, float y)
# 1164 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1168 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1170 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex2D(texture< uint2, 2, cudaReadModeElementType> t, float x, float y)
# 1171 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1175 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1177 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2D(texture< int4, 2, cudaReadModeElementType> t, float x, float y)
# 1178 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1182 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1184 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2D(texture< uint4, 2, cudaReadModeElementType> t, float x, float y)
# 1185 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1189 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1263 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< float, 2, cudaReadModeElementType> t, float x, float y)
# 1264 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1268 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1270 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< float1, 2, cudaReadModeElementType> t, float x, float y)
# 1271 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1275 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1277 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< float2, 2, cudaReadModeElementType> t, float x, float y)
# 1278 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1282 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1284 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< float4, 2, cudaReadModeElementType> t, float x, float y)
# 1285 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1289 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1297 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1298 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1307 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1309 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< signed char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1310 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1315 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1317 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned char, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1318 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1323 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1325 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< char1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1326 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1331 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1333 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< uchar1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1334 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1339 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1341 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< char2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1342 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1347 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1349 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< uchar2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1350 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1355 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1357 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< char4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1358 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1363 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1365 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< uchar4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1366 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1371 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1379 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1380 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1385 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1387 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2D(texture< unsigned short, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1388 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1393 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1395 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< short1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1396 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1401 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1403 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2D(texture< ushort1, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1404 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1409 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1411 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< short2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1412 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1417 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1419 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2D(texture< ushort2, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1420 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1425 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1427 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< short4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1428 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1433 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1435 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2D(texture< ushort4, 2, cudaReadModeNormalizedFloat> t, float x, float y)
# 1436 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 1441 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1449 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex1DLayered(texture< char, 241, cudaReadModeElementType> t, float x, int layer)
# 1450 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1458 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1460 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex1DLayered(texture< signed char, 241, cudaReadModeElementType> t, float x, int layer)
# 1461 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1465 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1467 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex1DLayered(texture< unsigned char, 241, cudaReadModeElementType> t, float x, int layer)
# 1468 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1472 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1474 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex1DLayered(texture< char1, 241, cudaReadModeElementType> t, float x, int layer)
# 1475 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1479 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1481 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex1DLayered(texture< uchar1, 241, cudaReadModeElementType> t, float x, int layer)
# 1482 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1486 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1488 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex1DLayered(texture< char2, 241, cudaReadModeElementType> t, float x, int layer)
# 1489 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1493 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1495 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex1DLayered(texture< uchar2, 241, cudaReadModeElementType> t, float x, int layer)
# 1496 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1500 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1502 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex1DLayered(texture< char4, 241, cudaReadModeElementType> t, float x, int layer)
# 1503 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1507 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1509 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex1DLayered(texture< uchar4, 241, cudaReadModeElementType> t, float x, int layer)
# 1510 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1514 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1522 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex1DLayered(texture< short, 241, cudaReadModeElementType> t, float x, int layer)
# 1523 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1527 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1529 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex1DLayered(texture< unsigned short, 241, cudaReadModeElementType> t, float x, int layer)
# 1530 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1534 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1536 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex1DLayered(texture< short1, 241, cudaReadModeElementType> t, float x, int layer)
# 1537 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1541 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1543 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex1DLayered(texture< ushort1, 241, cudaReadModeElementType> t, float x, int layer)
# 1544 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1548 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1550 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex1DLayered(texture< short2, 241, cudaReadModeElementType> t, float x, int layer)
# 1551 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1555 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1557 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex1DLayered(texture< ushort2, 241, cudaReadModeElementType> t, float x, int layer)
# 1558 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1562 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1564 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex1DLayered(texture< short4, 241, cudaReadModeElementType> t, float x, int layer)
# 1565 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1569 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1571 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex1DLayered(texture< ushort4, 241, cudaReadModeElementType> t, float x, int layer)
# 1572 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1576 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1584 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex1DLayered(texture< int, 241, cudaReadModeElementType> t, float x, int layer)
# 1585 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1589 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1591 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex1DLayered(texture< unsigned, 241, cudaReadModeElementType> t, float x, int layer)
# 1592 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1596 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1598 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex1DLayered(texture< int1, 241, cudaReadModeElementType> t, float x, int layer)
# 1599 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1603 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1605 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex1DLayered(texture< uint1, 241, cudaReadModeElementType> t, float x, int layer)
# 1606 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1610 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1612 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex1DLayered(texture< int2, 241, cudaReadModeElementType> t, float x, int layer)
# 1613 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1617 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1619 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex1DLayered(texture< uint2, 241, cudaReadModeElementType> t, float x, int layer)
# 1620 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1624 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1626 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex1DLayered(texture< int4, 241, cudaReadModeElementType> t, float x, int layer)
# 1627 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1631 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1633 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex1DLayered(texture< uint4, 241, cudaReadModeElementType> t, float x, int layer)
# 1634 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1638 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1712 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< float, 241, cudaReadModeElementType> t, float x, int layer)
# 1713 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1717 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1719 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< float1, 241, cudaReadModeElementType> t, float x, int layer)
# 1720 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1724 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1726 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< float2, 241, cudaReadModeElementType> t, float x, int layer)
# 1727 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1731 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1733 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< float4, 241, cudaReadModeElementType> t, float x, int layer)
# 1734 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1738 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1746 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< char, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1747 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1756 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1758 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< signed char, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1759 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1764 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1766 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< unsigned char, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1767 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1772 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1774 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< char1, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1775 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1780 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1782 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< uchar1, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1783 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1788 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1790 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< char2, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1791 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1796 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1798 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< uchar2, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1799 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1804 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1806 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< char4, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1807 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1812 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1814 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< uchar4, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1815 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1820 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1828 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< short, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1829 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1834 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1836 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex1DLayered(texture< unsigned short, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1837 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1842 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1844 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< short1, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1845 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1850 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1852 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex1DLayered(texture< ushort1, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1853 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1858 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1860 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< short2, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1861 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1866 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1868 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex1DLayered(texture< ushort2, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1869 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1874 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1876 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< short4, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1877 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1882 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1884 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex1DLayered(texture< ushort4, 241, cudaReadModeNormalizedFloat> t, float x, int layer)
# 1885 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 1890 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1898 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex2DLayered(texture< char, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1899 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1907 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1909 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex2DLayered(texture< signed char, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1910 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1914 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1916 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex2DLayered(texture< unsigned char, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1917 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1921 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1923 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex2DLayered(texture< char1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1924 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1928 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1930 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex2DLayered(texture< uchar1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1931 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1935 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1937 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex2DLayered(texture< char2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1938 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1942 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1944 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex2DLayered(texture< uchar2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1945 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1949 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1951 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2DLayered(texture< char4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1952 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1956 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1958 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2DLayered(texture< uchar4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1959 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1963 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1971 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex2DLayered(texture< short, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1972 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1976 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1978 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex2DLayered(texture< unsigned short, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1979 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1983 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1985 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex2DLayered(texture< short1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1986 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1990 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1992 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex2DLayered(texture< ushort1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 1993 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 1997 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 1999 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex2DLayered(texture< short2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2000 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2004 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2006 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex2DLayered(texture< ushort2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2007 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2011 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2013 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2DLayered(texture< short4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2014 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2018 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2020 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2DLayered(texture< ushort4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2021 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2025 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2033 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex2DLayered(texture< int, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2034 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2038 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2040 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex2DLayered(texture< unsigned, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2041 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2045 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2047 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex2DLayered(texture< int1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2048 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2052 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2054 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex2DLayered(texture< uint1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2055 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2059 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2061 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex2DLayered(texture< int2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2062 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2066 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2068 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex2DLayered(texture< uint2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2069 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2073 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2075 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2DLayered(texture< int4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2076 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2080 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2082 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2DLayered(texture< uint4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2083 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2087 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2161 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< float, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2162 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2166 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2168 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< float1, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2169 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2173 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2175 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< float2, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2176 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2180 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2182 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< float4, 242, cudaReadModeElementType> t, float x, float y, int layer)
# 2183 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2187 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2195 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< char, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2196 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2205 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2207 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< signed char, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2208 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2213 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2215 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< unsigned char, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2216 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2221 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2223 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< char1, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2224 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2229 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2231 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< uchar1, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2232 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2237 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2239 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< char2, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2240 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2245 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2247 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< uchar2, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2248 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2253 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2255 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< char4, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2256 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2261 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2263 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< uchar4, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2264 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2269 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2277 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< short, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2278 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2283 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2285 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex2DLayered(texture< unsigned short, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2286 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2291 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2293 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< short1, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2294 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2299 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2301 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex2DLayered(texture< ushort1, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2302 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2307 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2309 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< short2, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2310 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2315 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2317 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex2DLayered(texture< ushort2, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2318 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2323 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2325 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< short4, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2326 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2331 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2333 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2DLayered(texture< ushort4, 242, cudaReadModeNormalizedFloat> t, float x, float y, int layer)
# 2334 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 2339 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2347 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char tex3D(texture< char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2348 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2356 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2358 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char tex3D(texture< signed char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2359 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2363 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2365 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char tex3D(texture< unsigned char, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2366 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2370 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2372 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 tex3D(texture< char1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2373 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2377 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2379 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 tex3D(texture< uchar1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2380 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2384 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2386 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 tex3D(texture< char2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2387 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2391 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2393 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 tex3D(texture< uchar2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2394 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2398 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2400 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex3D(texture< char4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2401 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2405 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2407 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex3D(texture< uchar4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2408 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2412 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2420 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short tex3D(texture< short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2421 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2425 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2427 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short tex3D(texture< unsigned short, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2428 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2432 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2434 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 tex3D(texture< short1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2435 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2439 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2441 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 tex3D(texture< ushort1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2442 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2446 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2448 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 tex3D(texture< short2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2449 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2453 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2455 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 tex3D(texture< ushort2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2456 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2460 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2462 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex3D(texture< short4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2463 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2467 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2469 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex3D(texture< ushort4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2470 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2474 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2482 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int tex3D(texture< int, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2483 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2487 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2489 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned tex3D(texture< unsigned, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2490 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2494 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2496 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 tex3D(texture< int1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2497 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2501 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2503 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 tex3D(texture< uint1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2504 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2508 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2510 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 tex3D(texture< int2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2511 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2515 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2517 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 tex3D(texture< uint2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2518 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2522 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2524 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex3D(texture< int4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2525 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2529 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2531 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex3D(texture< uint4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2532 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2536 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2610 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< float, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2611 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2615 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2617 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< float1, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2618 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2622 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2624 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< float2, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2625 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2629 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2631 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< float4, 3, cudaReadModeElementType> t, float x, float y, float z)
# 2632 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2636 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2644 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2645 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2654 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2656 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< signed char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2657 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2662 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2664 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned char, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2665 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2670 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2672 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< char1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2673 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2678 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2680 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< uchar1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2681 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2686 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2688 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< char2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2689 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2694 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2696 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< uchar2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2697 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2702 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2704 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< char4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2705 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2710 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2712 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< uchar4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2713 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2718 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2726 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2727 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2732 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2734 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float tex3D(texture< unsigned short, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2735 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2740 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2742 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< short1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2743 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2748 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2750 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 tex3D(texture< ushort1, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2751 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2756 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2758 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< short2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2759 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2764 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2766 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 tex3D(texture< ushort2, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2767 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2772 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2774 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< short4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2775 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2780 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2782 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex3D(texture< ushort4, 3, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 2783 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2788 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2796 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char texCubemap(texture< char, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2797 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2805 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2807 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char texCubemap(texture< signed char, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2808 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2812 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2814 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char texCubemap(texture< unsigned char, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2815 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2819 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2821 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 texCubemap(texture< char1, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2822 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2826 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2828 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 texCubemap(texture< uchar1, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2829 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2833 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2835 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 texCubemap(texture< char2, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2836 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2840 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2842 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 texCubemap(texture< uchar2, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2843 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2847 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2849 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 texCubemap(texture< char4, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2850 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2854 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2856 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 texCubemap(texture< uchar4, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2857 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2861 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2869 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short texCubemap(texture< short, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2870 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2874 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2876 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short texCubemap(texture< unsigned short, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2877 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2881 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2883 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 texCubemap(texture< short1, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2884 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2888 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2890 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 texCubemap(texture< ushort1, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2891 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2895 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2897 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 texCubemap(texture< short2, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2898 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2902 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2904 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 texCubemap(texture< ushort2, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2905 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2909 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2911 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 texCubemap(texture< short4, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2912 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2916 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2918 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 texCubemap(texture< ushort4, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2919 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2923 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2931 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int texCubemap(texture< int, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2932 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2936 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2938 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned texCubemap(texture< unsigned, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2939 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2943 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2945 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 texCubemap(texture< int1, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2946 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2950 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2952 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 texCubemap(texture< uint1, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2953 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2957 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2959 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 texCubemap(texture< int2, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2960 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2964 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2966 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 texCubemap(texture< uint2, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2967 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2971 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2973 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 texCubemap(texture< int4, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2974 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2978 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 2980 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 texCubemap(texture< uint4, 12, cudaReadModeElementType> t, float x, float y, float z)
# 2981 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 2985 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3059 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemap(texture< float, 12, cudaReadModeElementType> t, float x, float y, float z)
# 3060 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3064 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3066 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemap(texture< float1, 12, cudaReadModeElementType> t, float x, float y, float z)
# 3067 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3071 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3073 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemap(texture< float2, 12, cudaReadModeElementType> t, float x, float y, float z)
# 3074 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3078 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3080 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemap(texture< float4, 12, cudaReadModeElementType> t, float x, float y, float z)
# 3081 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3085 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3093 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemap(texture< char, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3094 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3103 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3105 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemap(texture< signed char, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3106 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3111 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3113 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemap(texture< unsigned char, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3114 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3119 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3121 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemap(texture< char1, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3122 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3127 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3129 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemap(texture< uchar1, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3130 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3135 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3137 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemap(texture< char2, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3138 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3143 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3145 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemap(texture< uchar2, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3146 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3151 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3153 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemap(texture< char4, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3154 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3159 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3161 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemap(texture< uchar4, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3162 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3167 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3175 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemap(texture< short, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3176 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3181 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3183 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemap(texture< unsigned short, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3184 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3189 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3191 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemap(texture< short1, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3192 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3197 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3199 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemap(texture< ushort1, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3200 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3205 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3207 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemap(texture< short2, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3208 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3213 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3215 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemap(texture< ushort2, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3216 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3221 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3223 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemap(texture< short4, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3224 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3229 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3231 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemap(texture< ushort4, 12, cudaReadModeNormalizedFloat> t, float x, float y, float z)
# 3232 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 3237 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3245 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char texCubemapLayered(texture< char, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3246 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3254 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3256 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline signed char texCubemapLayered(texture< signed char, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3257 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3261 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3263 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned char texCubemapLayered(texture< unsigned char, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3264 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3268 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3270 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char1 texCubemapLayered(texture< char1, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3271 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3275 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3277 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar1 texCubemapLayered(texture< uchar1, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3278 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3282 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3284 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char2 texCubemapLayered(texture< char2, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3285 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3289 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3291 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar2 texCubemapLayered(texture< uchar2, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3292 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3296 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3298 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 texCubemapLayered(texture< char4, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3299 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3303 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3305 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 texCubemapLayered(texture< uchar4, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3306 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3310 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3318 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short texCubemapLayered(texture< short, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3319 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3323 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3325 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned short texCubemapLayered(texture< unsigned short, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3326 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3330 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3332 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short1 texCubemapLayered(texture< short1, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3333 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3337 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3339 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort1 texCubemapLayered(texture< ushort1, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3340 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3344 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3346 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short2 texCubemapLayered(texture< short2, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3347 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3351 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3353 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort2 texCubemapLayered(texture< ushort2, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3354 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3358 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3360 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 texCubemapLayered(texture< short4, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3361 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3365 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3367 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 texCubemapLayered(texture< ushort4, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3368 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3372 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3380 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int texCubemapLayered(texture< int, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3381 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3385 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3387 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline unsigned texCubemapLayered(texture< unsigned, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3388 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3392 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3394 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int1 texCubemapLayered(texture< int1, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3395 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3399 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3401 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint1 texCubemapLayered(texture< uint1, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3402 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3406 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3408 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int2 texCubemapLayered(texture< int2, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3409 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3413 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3415 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint2 texCubemapLayered(texture< uint2, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3416 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3420 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3422 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 texCubemapLayered(texture< int4, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3423 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3427 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3429 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 texCubemapLayered(texture< uint4, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3430 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3434 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3508 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemapLayered(texture< float, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3509 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3513 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3515 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemapLayered(texture< float1, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3516 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3520 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3522 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemapLayered(texture< float2, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3523 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3527 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3529 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemapLayered(texture< float4, 252, cudaReadModeElementType> t, float x, float y, float z, int layer)
# 3530 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3534 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3542 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemapLayered(texture< char, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3543 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3552 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3554 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemapLayered(texture< signed char, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3555 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3560 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3562 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemapLayered(texture< unsigned char, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3563 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3568 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3570 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemapLayered(texture< char1, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3571 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3576 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3578 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemapLayered(texture< uchar1, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3579 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3584 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3586 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemapLayered(texture< char2, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3587 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3592 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3594 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemapLayered(texture< uchar2, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3595 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3600 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3602 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemapLayered(texture< char4, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3603 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3608 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3610 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemapLayered(texture< uchar4, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3611 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3616 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3624 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemapLayered(texture< short, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3625 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3630 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3632 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float texCubemapLayered(texture< unsigned short, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3633 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3638 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3640 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemapLayered(texture< short1, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3641 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3646 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3648 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float1 texCubemapLayered(texture< ushort1, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3649 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3654 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3656 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemapLayered(texture< short2, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3657 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3662 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3664 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float2 texCubemapLayered(texture< ushort2, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3665 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3670 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3672 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemapLayered(texture< short4, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3673 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3678 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3680 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 texCubemapLayered(texture< ushort4, 252, cudaReadModeNormalizedFloat> t, float x, float y, float z, int layer)
# 3681 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 3686 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3780 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3781 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3783 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3785 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< signed char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3786 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3788 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3790 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< unsigned char, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3791 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3793 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3795 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3796 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3798 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3800 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3801 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3803 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3805 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3806 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3808 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3810 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3811 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3813 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3815 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3816 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3818 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3820 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3821 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3823 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3825 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline char4 tex2Dgather(texture< char4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3826 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3828 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3830 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uchar4 tex2Dgather(texture< uchar4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3831 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3833 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3835 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3836 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3838 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3840 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< unsigned short, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3841 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3843 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3845 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3846 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3848 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3850 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3851 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3853 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3855 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3856 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3858 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3860 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3861 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3863 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3865 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3866 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3868 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3870 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3871 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3873 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3875 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline short4 tex2Dgather(texture< short4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3876 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3878 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3880 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline ushort4 tex2Dgather(texture< ushort4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3881 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3883 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3885 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3886 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3888 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3890 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< unsigned, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3891 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3893 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3895 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3896 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3898 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3900 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3901 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3903 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3905 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3906 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3908 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3910 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3911 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3913 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3915 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3916 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3918 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3920 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3921 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3923 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3925 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline int4 tex2Dgather(texture< int4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3926 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3928 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3930 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline uint4 tex2Dgather(texture< uint4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3931 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3933 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3935 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3936 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3938 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3940 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float1, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3941 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3943 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3945 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float2, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3946 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3948 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3950 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float3, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3951 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3953 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3955 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< float4, 2, cudaReadModeElementType> t, float x, float y, int comp = 0)
# 3956 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3958 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3967 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< char, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 3968 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3970 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3972 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< signed char, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 3973 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3975 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3977 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< unsigned char, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 3978 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3980 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3982 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< char1, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 3983 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3985 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3987 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< uchar1, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 3988 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3990 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3992 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< char2, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 3993 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 3995 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 3997 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< uchar2, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 3998 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4000 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4002 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< char3, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4003 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4005 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4007 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< uchar3, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4008 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4010 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4012 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< char4, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4013 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4015 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4017 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< uchar4, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4018 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4020 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4022 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< short, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4023 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4025 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4027 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< unsigned short, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4028 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4030 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4032 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< short1, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4033 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4035 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4037 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< ushort1, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4038 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4040 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4042 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< short2, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4043 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4045 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4047 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< ushort2, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4048 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4050 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4052 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< short3, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4053 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4055 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4057 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< ushort3, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4058 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4060 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4062 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< short4, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4063 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4065 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 4067 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
__attribute__((unused)) static inline float4 tex2Dgather(texture< ushort4, 2, cudaReadModeNormalizedFloat> t, float x, float y, int comp = 0)
# 4068 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 4070 "/usr/local/cuda4.1/cuda/include/texture_fetch_functions.h"
exit(___);}
# 66 "/usr/local/cuda4.1/cuda/include/device_launch_parameters.h"
extern "C" { extern const uint3 threadIdx; }
# 67 "/usr/local/cuda4.1/cuda/include/device_launch_parameters.h"
extern "C" { extern const uint3 blockIdx; }
# 68 "/usr/local/cuda4.1/cuda/include/device_launch_parameters.h"
extern "C" { extern const dim3 blockDim; }
# 69 "/usr/local/cuda4.1/cuda/include/device_launch_parameters.h"
extern "C" { extern const dim3 gridDim; }
# 70 "/usr/local/cuda4.1/cuda/include/device_launch_parameters.h"
extern "C" { extern const int warpSize; }
# 120 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 121 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaSetupArgument(T
# 122 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
arg, size_t
# 123 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset)
# 125 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 126 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaSetupArgument((const void *)(&arg), sizeof(T), offset);
# 127 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 159 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 160 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
event, unsigned
# 161 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
flags)
# 163 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 164 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaEventCreateWithFlags(event, flags);
# 165 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 222 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaMallocHost(void **
# 223 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
ptr, size_t
# 224 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
size, unsigned
# 225 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
flags)
# 227 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 228 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaHostAlloc(ptr, size, flags);
# 229 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 231 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 232 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaHostAlloc(T **
# 233 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
ptr, size_t
# 234 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
size, unsigned
# 235 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
flags)
# 237 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 238 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaHostAlloc((void **)((void *)ptr), size, flags);
# 239 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 241 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 242 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaHostGetDevicePointer(T **
# 243 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
pDevice, void *
# 244 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
pHost, unsigned
# 245 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
flags)
# 247 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 248 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags);
# 249 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 251 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 252 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaMalloc(T **
# 253 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
devPtr, size_t
# 254 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
size)
# 256 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 257 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaMalloc((void **)((void *)devPtr), size);
# 258 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 260 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 261 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaMallocHost(T **
# 262 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
ptr, size_t
# 263 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
size, unsigned
# 264 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
flags = (0))
# 266 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 267 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaMallocHost((void **)((void *)ptr), size, flags);
# 268 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 270 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 271 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaMallocPitch(T **
# 272 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
devPtr, size_t *
# 273 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
pitch, size_t
# 274 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
width, size_t
# 275 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
height)
# 277 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 278 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaMallocPitch((void **)((void *)devPtr), pitch, width, height);
# 279 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 289 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbol(char *
# 290 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol, const void *
# 291 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
src, size_t
# 292 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
count, size_t
# 293 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 294 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 296 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 297 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)symbol, src, count, offset, kind);
# 298 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 300 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 301 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaMemcpyToSymbol(const T &
# 302 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol, const void *
# 303 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
src, size_t
# 304 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
count, size_t
# 305 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 306 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice)
# 308 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 309 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaMemcpyToSymbol((const char *)(&symbol), src, count, offset, kind);
# 310 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 312 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyToSymbolAsync(char *
# 313 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol, const void *
# 314 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
src, size_t
# 315 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
count, size_t
# 316 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 317 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 318 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
stream = 0)
# 320 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 321 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)symbol, src, count, offset, kind, stream);
# 322 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 324 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 325 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaMemcpyToSymbolAsync(const T &
# 326 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol, const void *
# 327 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
src, size_t
# 328 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
count, size_t
# 329 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 330 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
kind = cudaMemcpyHostToDevice, cudaStream_t
# 331 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
stream = 0)
# 333 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 334 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaMemcpyToSymbolAsync((const char *)(&symbol), src, count, offset, kind, stream);
# 335 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 343 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbol(void *
# 344 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
dst, char *
# 345 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol, size_t
# 346 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
count, size_t
# 347 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 348 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 350 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 351 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)symbol, count, offset, kind);
# 352 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 354 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 355 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaMemcpyFromSymbol(void *
# 356 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
dst, const T &
# 357 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol, size_t
# 358 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
count, size_t
# 359 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 360 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost)
# 362 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 363 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaMemcpyFromSymbol(dst, (const char *)(&symbol), count, offset, kind);
# 364 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 366 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaMemcpyFromSymbolAsync(void *
# 367 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
dst, char *
# 368 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol, size_t
# 369 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
count, size_t
# 370 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 371 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 372 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
stream = 0)
# 374 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 375 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)symbol, count, offset, kind, stream);
# 376 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 378 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 379 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaMemcpyFromSymbolAsync(void *
# 380 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
dst, const T &
# 381 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol, size_t
# 382 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
count, size_t
# 383 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset = (0), cudaMemcpyKind
# 384 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
kind = cudaMemcpyDeviceToHost, cudaStream_t
# 385 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
stream = 0)
# 387 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 388 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaMemcpyFromSymbolAsync(dst, (const char *)(&symbol), count, offset, kind, stream);
# 389 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 391 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolAddress(void **
# 392 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
devPtr, char *
# 393 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol)
# 395 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 396 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)symbol);
# 397 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 424 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 425 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaGetSymbolAddress(void **
# 426 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
devPtr, const T &
# 427 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol)
# 429 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 430 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaGetSymbolAddress(devPtr, (const char *)(&symbol));
# 431 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 439 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
static inline cudaError_t cudaGetSymbolSize(size_t *
# 440 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
size, char *
# 441 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol)
# 443 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 444 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)symbol);
# 445 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 472 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 473 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaGetSymbolSize(size_t *
# 474 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
size, const T &
# 475 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
symbol)
# 477 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 478 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaGetSymbolSize(size, (const char *)(&symbol));
# 479 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 521 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 522 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaBindTexture(size_t *
# 523 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 524 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
tex, const void *
# 525 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 526 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
desc, size_t
# 527 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 529 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 530 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaBindTexture(offset, &tex, devPtr, &desc, size);
# 531 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 566 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 567 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaBindTexture(size_t *
# 568 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 569 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
tex, const void *
# 570 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
devPtr, size_t
# 571 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
size = (((2147483647) * 2U) + 1U))
# 573 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 574 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size);
# 575 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 622 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 623 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 624 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 625 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
tex, const void *
# 626 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
devPtr, const cudaChannelFormatDesc &
# 627 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
desc, size_t
# 628 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
width, size_t
# 629 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
height, size_t
# 630 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
pitch)
# 632 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 633 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch);
# 634 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 680 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 681 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaBindTexture2D(size_t *
# 682 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 683 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
tex, const void *
# 684 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
devPtr, size_t
# 685 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
width, size_t
# 686 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
height, size_t
# 687 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
pitch)
# 689 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 690 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaBindTexture2D(offset, &tex, devPtr, &(tex.texture< T, dim, readMode> ::channelDesc), width, height, pitch);
# 691 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 722 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 723 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 724 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
tex, const cudaArray *
# 725 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 726 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
desc)
# 728 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 729 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaBindTextureToArray(&tex, array, &desc);
# 730 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 760 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 761 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaBindTextureToArray(const texture< T, dim, readMode> &
# 762 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
tex, const cudaArray *
# 763 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
array)
# 765 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 766 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 767 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 769 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err;
# 770 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 799 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 800 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaUnbindTexture(const texture< T, dim, readMode> &
# 801 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
tex)
# 803 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 804 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaUnbindTexture(&tex);
# 805 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 839 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> inline cudaError_t
# 840 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaGetTextureAlignmentOffset(size_t *
# 841 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
offset, const texture< T, dim, readMode> &
# 842 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
tex)
# 844 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 845 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaGetTextureAlignmentOffset(offset, &tex);
# 846 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 900 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 901 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaFuncSetCacheConfig(T *
# 902 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
func, cudaFuncCache
# 903 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cacheConfig)
# 905 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 906 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaFuncSetCacheConfig((const char *)func, cacheConfig);
# 907 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 944 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 945 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaLaunch(T *
# 946 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
entry)
# 948 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 949 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaLaunch((const char *)entry);
# 950 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 984 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T> inline cudaError_t
# 985 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaFuncGetAttributes(cudaFuncAttributes *
# 986 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
attr, T *
# 987 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
entry)
# 989 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 990 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaFuncGetAttributes(attr, (const char *)entry);
# 991 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 1013 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1014 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1015 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
surf, const cudaArray *
# 1016 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
array, const cudaChannelFormatDesc &
# 1017 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
desc)
# 1019 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 1020 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return cudaBindSurfaceToArray(&surf, array, &desc);
# 1021 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 1042 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
template< class T, int dim> inline cudaError_t
# 1043 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaBindSurfaceToArray(const surface< T, dim> &
# 1044 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
surf, const cudaArray *
# 1045 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
array)
# 1047 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
{
# 1048 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaChannelFormatDesc desc;
# 1049 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
cudaError_t err = cudaGetChannelDesc(&desc, array);
# 1051 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err;
# 1052 "/usr/local/cuda4.1/cuda/include/cuda_runtime.h"
}
# 45 "/usr/include/stdio.h" 3
struct _IO_FILE;
# 49 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE FILE; }
# 65 "/usr/include/stdio.h" 3
extern "C" { typedef _IO_FILE __FILE; }
# 95 "/usr/include/wchar.h" 3
extern "C" { typedef
# 84 "/usr/include/wchar.h" 3
struct {
# 85 "/usr/include/wchar.h" 3
int __count;
# 87 "/usr/include/wchar.h" 3
union {
# 89 "/usr/include/wchar.h" 3
unsigned __wch;
# 93 "/usr/include/wchar.h" 3
char __wchb[4];
# 94 "/usr/include/wchar.h" 3
} __value;
# 95 "/usr/include/wchar.h" 3
} __mbstate_t; }
# 26 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 23 "/usr/include/_G_config.h" 3
struct {
# 24 "/usr/include/_G_config.h" 3
__off_t __pos;
# 25 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 26 "/usr/include/_G_config.h" 3
} _G_fpos_t; }
# 31 "/usr/include/_G_config.h" 3
extern "C" { typedef
# 28 "/usr/include/_G_config.h" 3
struct {
# 29 "/usr/include/_G_config.h" 3
__off64_t __pos;
# 30 "/usr/include/_G_config.h" 3
__mbstate_t __state;
# 31 "/usr/include/_G_config.h" 3
} _G_fpos64_t; }
# 53 "/usr/include/_G_config.h" 3
extern "C" { typedef short _G_int16_t __attribute((__mode__(__HI__))); }
# 54 "/usr/include/_G_config.h" 3
extern "C" { typedef int _G_int32_t __attribute((__mode__(__SI__))); }
# 55 "/usr/include/_G_config.h" 3
extern "C" { typedef unsigned short _G_uint16_t __attribute((__mode__(__HI__))); }
# 56 "/usr/include/_G_config.h" 3
extern "C" { typedef unsigned _G_uint32_t __attribute((__mode__(__SI__))); }
# 40 "/usr/lib/x86_64-linux-gnu/gcc/x86_64-linux-gnu/4.5.2/include/stdarg.h" 3
extern "C" { typedef __builtin_va_list __gnuc_va_list; }
# 170 "/usr/include/libio.h" 3
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3
extern "C" { typedef void _IO_lock_t; }
# 186 "/usr/include/libio.h" 3
extern "C" { struct _IO_marker {
# 187 "/usr/include/libio.h" 3
_IO_marker *_next;
# 188 "/usr/include/libio.h" 3
_IO_FILE *_sbuf;
# 192 "/usr/include/libio.h" 3
int _pos;
# 203 "/usr/include/libio.h" 3
}; }
# 206 "/usr/include/libio.h" 3
enum __codecvt_result {
# 208 "/usr/include/libio.h" 3
__codecvt_ok,
# 209 "/usr/include/libio.h" 3
__codecvt_partial,
# 210 "/usr/include/libio.h" 3
__codecvt_error,
# 211 "/usr/include/libio.h" 3
__codecvt_noconv
# 212 "/usr/include/libio.h" 3
};
# 271 "/usr/include/libio.h" 3
extern "C" { struct _IO_FILE {
# 272 "/usr/include/libio.h" 3
int _flags;
# 277 "/usr/include/libio.h" 3
char *_IO_read_ptr;
# 278 "/usr/include/libio.h" 3
char *_IO_read_end;
# 279 "/usr/include/libio.h" 3
char *_IO_read_base;
# 280 "/usr/include/libio.h" 3
char *_IO_write_base;
# 281 "/usr/include/libio.h" 3
char *_IO_write_ptr;
# 282 "/usr/include/libio.h" 3
char *_IO_write_end;
# 283 "/usr/include/libio.h" 3
char *_IO_buf_base;
# 284 "/usr/include/libio.h" 3
char *_IO_buf_end;
# 286 "/usr/include/libio.h" 3
char *_IO_save_base;
# 287 "/usr/include/libio.h" 3
char *_IO_backup_base;
# 288 "/usr/include/libio.h" 3
char *_IO_save_end;
# 290 "/usr/include/libio.h" 3
_IO_marker *_markers;
# 292 "/usr/include/libio.h" 3
_IO_FILE *_chain;
# 294 "/usr/include/libio.h" 3
int _fileno;
# 298 "/usr/include/libio.h" 3
int _flags2;
# 300 "/usr/include/libio.h" 3
__off_t _old_offset;
# 304 "/usr/include/libio.h" 3
unsigned short _cur_column;
# 305 "/usr/include/libio.h" 3
signed char _vtable_offset;
# 306 "/usr/include/libio.h" 3
char _shortbuf[1];
# 310 "/usr/include/libio.h" 3
_IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3
__off64_t _offset;
# 328 "/usr/include/libio.h" 3
void *__pad1;
# 329 "/usr/include/libio.h" 3
void *__pad2;
# 330 "/usr/include/libio.h" 3
void *__pad3;
# 331 "/usr/include/libio.h" 3
void *__pad4;
# 332 "/usr/include/libio.h" 3
size_t __pad5;
# 334 "/usr/include/libio.h" 3
int _mode;
# 336 "/usr/include/libio.h" 3
char _unused2[(((15) * sizeof(int)) - ((4) * sizeof(void *))) - sizeof(size_t)];
# 338 "/usr/include/libio.h" 3
}; }
# 344 "/usr/include/libio.h" 3
struct _IO_FILE_plus;
# 346 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdin_; }
# 347 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stdout_; }
# 348 "/usr/include/libio.h" 3
extern "C" { extern _IO_FILE_plus _IO_2_1_stderr_; }
# 364 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_read_fn(void * , char * , size_t ); }
# 372 "/usr/include/libio.h" 3
extern "C" { typedef __ssize_t __io_write_fn(void * , const char * , size_t ); }
# 381 "/usr/include/libio.h" 3
extern "C" { typedef int __io_seek_fn(void * , __off64_t * , int ); }
# 384 "/usr/include/libio.h" 3
extern "C" { typedef int __io_close_fn(void * ); }
# 389 "/usr/include/libio.h" 3
extern "C" { typedef __io_read_fn cookie_read_function_t; }
# 390 "/usr/include/libio.h" 3
extern "C" { typedef __io_write_fn cookie_write_function_t; }
# 391 "/usr/include/libio.h" 3
extern "C" { typedef __io_seek_fn cookie_seek_function_t; }
# 392 "/usr/include/libio.h" 3
extern "C" { typedef __io_close_fn cookie_close_function_t; }
# 401 "/usr/include/libio.h" 3
extern "C" { typedef
# 396 "/usr/include/libio.h" 3
struct {
# 397 "/usr/include/libio.h" 3
__io_read_fn *read;
# 398 "/usr/include/libio.h" 3
__io_write_fn *write;
# 399 "/usr/include/libio.h" 3
__io_seek_fn *seek;
# 400 "/usr/include/libio.h" 3
__io_close_fn *close;
# 401 "/usr/include/libio.h" 3
} _IO_cookie_io_functions_t; }
# 402 "/usr/include/libio.h" 3
extern "C" { typedef _IO_cookie_io_functions_t cookie_io_functions_t; }
# 404 "/usr/include/libio.h" 3
struct _IO_cookie_file;
# 407 "/usr/include/libio.h" 3
extern "C" void _IO_cookie_init(_IO_cookie_file * , int , void * , _IO_cookie_io_functions_t );
# 416 "/usr/include/libio.h" 3
extern "C" int __underflow(_IO_FILE *);
# 417 "/usr/include/libio.h" 3
extern "C" int __uflow(_IO_FILE *);
# 418 "/usr/include/libio.h" 3
extern "C" int __overflow(_IO_FILE *, int);
# 460 "/usr/include/libio.h" 3
extern "C" int _IO_getc(_IO_FILE * );
# 461 "/usr/include/libio.h" 3
extern "C" int _IO_putc(int , _IO_FILE * );
# 462 "/usr/include/libio.h" 3
extern "C" int _IO_feof(_IO_FILE * ) throw();
# 463 "/usr/include/libio.h" 3
extern "C" int _IO_ferror(_IO_FILE * ) throw();
# 465 "/usr/include/libio.h" 3
extern "C" int _IO_peekc_locked(_IO_FILE * );
# 471 "/usr/include/libio.h" 3
extern "C" void _IO_flockfile(_IO_FILE *) throw();
# 472 "/usr/include/libio.h" 3
extern "C" void _IO_funlockfile(_IO_FILE *) throw();
# 473 "/usr/include/libio.h" 3
extern "C" int _IO_ftrylockfile(_IO_FILE *) throw();
# 490 "/usr/include/libio.h" 3
extern "C" int _IO_vfscanf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list, int *__restrict__);
# 492 "/usr/include/libio.h" 3
extern "C" int _IO_vfprintf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list);
# 494 "/usr/include/libio.h" 3
extern "C" __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t);
# 495 "/usr/include/libio.h" 3
extern "C" size_t _IO_sgetn(_IO_FILE *, void *, size_t);
# 497 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int);
# 498 "/usr/include/libio.h" 3
extern "C" __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int);
# 500 "/usr/include/libio.h" 3
extern "C" void _IO_free_backup_area(_IO_FILE *) throw();
# 80 "/usr/include/stdio.h" 3
extern "C" { typedef __gnuc_va_list va_list; }
# 111 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos_t fpos_t; }
# 117 "/usr/include/stdio.h" 3
extern "C" { typedef _G_fpos64_t fpos64_t; }
# 165 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdin; }
# 166 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stdout; }
# 167 "/usr/include/stdio.h" 3
extern "C" { extern _IO_FILE *stderr; }
# 175 "/usr/include/stdio.h" 3
extern "C" int remove(const char * ) throw();
# 177 "/usr/include/stdio.h" 3
extern "C" int rename(const char * , const char * ) throw();
# 182 "/usr/include/stdio.h" 3
extern "C" int renameat(int , const char * , int , const char * ) throw();
# 192 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile();
# 202 "/usr/include/stdio.h" 3
extern "C" FILE *tmpfile64();
# 206 "/usr/include/stdio.h" 3
extern "C" char *tmpnam(char * ) throw();
# 212 "/usr/include/stdio.h" 3
extern "C" char *tmpnam_r(char * ) throw();
# 224 "/usr/include/stdio.h" 3
extern "C" char *tempnam(const char * , const char * ) throw()
# 225 "/usr/include/stdio.h" 3
 __attribute((__malloc__));
# 234 "/usr/include/stdio.h" 3
extern "C" int fclose(FILE * );
# 239 "/usr/include/stdio.h" 3
extern "C" int fflush(FILE * );
# 249 "/usr/include/stdio.h" 3
extern "C" int fflush_unlocked(FILE * );
# 259 "/usr/include/stdio.h" 3
extern "C" int fcloseall();
# 269 "/usr/include/stdio.h" 3
extern "C" FILE *fopen(const char *__restrict__ , const char *__restrict__ );
# 275 "/usr/include/stdio.h" 3
extern "C" FILE *freopen(const char *__restrict__ , const char *__restrict__ , FILE *__restrict__ );
# 294 "/usr/include/stdio.h" 3
extern "C" FILE *fopen64(const char *__restrict__ , const char *__restrict__ );
# 296 "/usr/include/stdio.h" 3
extern "C" FILE *freopen64(const char *__restrict__ , const char *__restrict__ , FILE *__restrict__ );
# 303 "/usr/include/stdio.h" 3
extern "C" FILE *fdopen(int , const char * ) throw();
# 309 "/usr/include/stdio.h" 3
extern "C" FILE *fopencookie(void *__restrict__ , const char *__restrict__ , _IO_cookie_io_functions_t ) throw();
# 316 "/usr/include/stdio.h" 3
extern "C" FILE *fmemopen(void * , size_t , const char * ) throw();
# 322 "/usr/include/stdio.h" 3
extern "C" FILE *open_memstream(char ** , size_t * ) throw();
# 329 "/usr/include/stdio.h" 3
extern "C" void setbuf(FILE *__restrict__ , char *__restrict__ ) throw();
# 333 "/usr/include/stdio.h" 3
extern "C" int setvbuf(FILE *__restrict__ , char *__restrict__ , int , size_t ) throw();
# 340 "/usr/include/stdio.h" 3
extern "C" void setbuffer(FILE *__restrict__ , char *__restrict__ , size_t ) throw();
# 344 "/usr/include/stdio.h" 3
extern "C" void setlinebuf(FILE * ) throw();
# 353 "/usr/include/stdio.h" 3
extern "C" int fprintf(FILE *__restrict__ , const char *__restrict__ , ...);
# 359 "/usr/include/stdio.h" 3
extern "C" int printf(const char *__restrict__ , ...);
# 361 "/usr/include/stdio.h" 3
extern "C" int sprintf(char *__restrict__ , const char *__restrict__ , ...) throw();
# 368 "/usr/include/stdio.h" 3
extern "C" int vfprintf(FILE *__restrict__ , const char *__restrict__ , __gnuc_va_list );
# 374 "/usr/include/stdio.h" 3
extern "C" int vprintf(const char *__restrict__ , __gnuc_va_list );
# 376 "/usr/include/stdio.h" 3
extern "C" int vsprintf(char *__restrict__ , const char *__restrict__ , __gnuc_va_list ) throw();
# 383 "/usr/include/stdio.h" 3
extern "C" int snprintf(char *__restrict__ , size_t , const char *__restrict__ , ...) throw()
# 385 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 3, 4)));
# 387 "/usr/include/stdio.h" 3
extern "C" int vsnprintf(char *__restrict__ , size_t , const char *__restrict__ , __gnuc_va_list ) throw()
# 389 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 3, 0)));
# 396 "/usr/include/stdio.h" 3
extern "C" int vasprintf(char **__restrict__ , const char *__restrict__ , __gnuc_va_list ) throw()
# 398 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 2, 0)));
# 399 "/usr/include/stdio.h" 3
extern "C" int __asprintf(char **__restrict__ , const char *__restrict__ , ...) throw()
# 401 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 2, 3)));
# 402 "/usr/include/stdio.h" 3
extern "C" int asprintf(char **__restrict__ , const char *__restrict__ , ...) throw()
# 404 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 2, 3)));
# 414 "/usr/include/stdio.h" 3
extern "C" int vdprintf(int , const char *__restrict__ , __gnuc_va_list )
# 416 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 2, 0)));
# 417 "/usr/include/stdio.h" 3
extern "C" int dprintf(int , const char *__restrict__ , ...)
# 418 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 2, 3)));
# 427 "/usr/include/stdio.h" 3
extern "C" int fscanf(FILE *__restrict__ , const char *__restrict__ , ...);
# 433 "/usr/include/stdio.h" 3
extern "C" int scanf(const char *__restrict__ , ...);
# 435 "/usr/include/stdio.h" 3
extern "C" int sscanf(const char *__restrict__ , const char *__restrict__ , ...) throw();
# 473 "/usr/include/stdio.h" 3
extern "C" int vfscanf(FILE *__restrict__ , const char *__restrict__ , __gnuc_va_list )
# 475 "/usr/include/stdio.h" 3
 __attribute((__format__(__scanf__, 2, 0)));
# 481 "/usr/include/stdio.h" 3
extern "C" int vscanf(const char *__restrict__ , __gnuc_va_list )
# 482 "/usr/include/stdio.h" 3
 __attribute((__format__(__scanf__, 1, 0)));
# 485 "/usr/include/stdio.h" 3
extern "C" int vsscanf(const char *__restrict__ , const char *__restrict__ , __gnuc_va_list ) throw()
# 487 "/usr/include/stdio.h" 3
 __attribute((__format__(__scanf__, 2, 0)));
# 533 "/usr/include/stdio.h" 3
extern "C" int fgetc(FILE * );
# 534 "/usr/include/stdio.h" 3
extern "C" int getc(FILE * );
# 540 "/usr/include/stdio.h" 3
extern "C" int getchar();
# 552 "/usr/include/stdio.h" 3
extern "C" int getc_unlocked(FILE * );
# 553 "/usr/include/stdio.h" 3
extern "C" int getchar_unlocked();
# 563 "/usr/include/stdio.h" 3
extern "C" int fgetc_unlocked(FILE * );
# 575 "/usr/include/stdio.h" 3
extern "C" int fputc(int , FILE * );
# 576 "/usr/include/stdio.h" 3
extern "C" int putc(int , FILE * );
# 582 "/usr/include/stdio.h" 3
extern "C" int putchar(int );
# 596 "/usr/include/stdio.h" 3
extern "C" int fputc_unlocked(int , FILE * );
# 604 "/usr/include/stdio.h" 3
extern "C" int putc_unlocked(int , FILE * );
# 605 "/usr/include/stdio.h" 3
extern "C" int putchar_unlocked(int );
# 612 "/usr/include/stdio.h" 3
extern "C" int getw(FILE * );
# 615 "/usr/include/stdio.h" 3
extern "C" int putw(int , FILE * );
# 624 "/usr/include/stdio.h" 3
extern "C" char *fgets(char *__restrict__ , int , FILE *__restrict__ );
# 632 "/usr/include/stdio.h" 3
extern "C" char *gets(char * );
# 642 "/usr/include/stdio.h" 3
extern "C" char *fgets_unlocked(char *__restrict__ , int , FILE *__restrict__ );
# 658 "/usr/include/stdio.h" 3
extern "C" __ssize_t __getdelim(char **__restrict__ , size_t *__restrict__ , int , FILE *__restrict__ );
# 661 "/usr/include/stdio.h" 3
extern "C" __ssize_t getdelim(char **__restrict__ , size_t *__restrict__ , int , FILE *__restrict__ );
# 671 "/usr/include/stdio.h" 3
extern "C" __ssize_t getline(char **__restrict__ , size_t *__restrict__ , FILE *__restrict__ );
# 682 "/usr/include/stdio.h" 3
extern "C" int fputs(const char *__restrict__ , FILE *__restrict__ );
# 688 "/usr/include/stdio.h" 3
extern "C" int puts(const char * );
# 695 "/usr/include/stdio.h" 3
extern "C" int ungetc(int , FILE * );
# 702 "/usr/include/stdio.h" 3
extern "C" size_t fread(void *__restrict__ , size_t , size_t , FILE *__restrict__ );
# 708 "/usr/include/stdio.h" 3
extern "C" size_t fwrite(const void *__restrict__ , size_t , size_t , FILE *__restrict__ );
# 719 "/usr/include/stdio.h" 3
extern "C" int fputs_unlocked(const char *__restrict__ , FILE *__restrict__ );
# 730 "/usr/include/stdio.h" 3
extern "C" size_t fread_unlocked(void *__restrict__ , size_t , size_t , FILE *__restrict__ );
# 732 "/usr/include/stdio.h" 3
extern "C" size_t fwrite_unlocked(const void *__restrict__ , size_t , size_t , FILE *__restrict__ );
# 742 "/usr/include/stdio.h" 3
extern "C" int fseek(FILE * , long , int );
# 747 "/usr/include/stdio.h" 3
extern "C" long ftell(FILE * );
# 752 "/usr/include/stdio.h" 3
extern "C" void rewind(FILE * );
# 766 "/usr/include/stdio.h" 3
extern "C" int fseeko(FILE * , __off_t , int );
# 771 "/usr/include/stdio.h" 3
extern "C" __off_t ftello(FILE * );
# 791 "/usr/include/stdio.h" 3
extern "C" int fgetpos(FILE *__restrict__ , fpos_t *__restrict__ );
# 796 "/usr/include/stdio.h" 3
extern "C" int fsetpos(FILE * , const fpos_t * );
# 811 "/usr/include/stdio.h" 3
extern "C" int fseeko64(FILE * , __off64_t , int );
# 812 "/usr/include/stdio.h" 3
extern "C" __off64_t ftello64(FILE * );
# 813 "/usr/include/stdio.h" 3
extern "C" int fgetpos64(FILE *__restrict__ , fpos64_t *__restrict__ );
# 814 "/usr/include/stdio.h" 3
extern "C" int fsetpos64(FILE * , const fpos64_t * );
# 819 "/usr/include/stdio.h" 3
extern "C" void clearerr(FILE * ) throw();
# 821 "/usr/include/stdio.h" 3
extern "C" int feof(FILE * ) throw();
# 823 "/usr/include/stdio.h" 3
extern "C" int ferror(FILE * ) throw();
# 828 "/usr/include/stdio.h" 3
extern "C" void clearerr_unlocked(FILE * ) throw();
# 829 "/usr/include/stdio.h" 3
extern "C" int feof_unlocked(FILE * ) throw();
# 830 "/usr/include/stdio.h" 3
extern "C" int ferror_unlocked(FILE * ) throw();
# 839 "/usr/include/stdio.h" 3
extern "C" void perror(const char * );
# 27 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int sys_nerr; }
# 28 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern const char *const sys_errlist[]; }
# 31 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern int _sys_nerr; }
# 32 "/usr/include/bits/sys_errlist.h" 3
extern "C" { extern const char *const _sys_errlist[]; }
# 851 "/usr/include/stdio.h" 3
extern "C" int fileno(FILE * ) throw();
# 856 "/usr/include/stdio.h" 3
extern "C" int fileno_unlocked(FILE * ) throw();
# 866 "/usr/include/stdio.h" 3
extern "C" FILE *popen(const char * , const char * );
# 872 "/usr/include/stdio.h" 3
extern "C" int pclose(FILE * );
# 878 "/usr/include/stdio.h" 3
extern "C" char *ctermid(char * ) throw();
# 884 "/usr/include/stdio.h" 3
extern "C" char *cuserid(char * );
# 889 "/usr/include/stdio.h" 3
struct obstack;
# 892 "/usr/include/stdio.h" 3
extern "C" int obstack_printf(obstack *__restrict__ , const char *__restrict__ , ...) throw()
# 894 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 2, 3)));
# 895 "/usr/include/stdio.h" 3
extern "C" int obstack_vprintf(obstack *__restrict__ , const char *__restrict__ , __gnuc_va_list ) throw()
# 898 "/usr/include/stdio.h" 3
 __attribute((__format__(__printf__, 2, 0)));
# 906 "/usr/include/stdio.h" 3
extern "C" void flockfile(FILE * ) throw();
# 910 "/usr/include/stdio.h" 3
extern "C" int ftrylockfile(FILE * ) throw();
# 913 "/usr/include/stdio.h" 3
extern "C" void funlockfile(FILE * ) throw();
# 15 "tests/imageDenoising/imageDenoising.h"
typedef unsigned TColor;
# 44 "tests/imageDenoising/imageDenoising.h"
extern "C" void LoadBMPFile(uchar4 ** , int * , int * , const char * );
# 47 "tests/imageDenoising/imageDenoising.h"
extern "C" cudaError_t CUDA_Bind2TextureArray();
# 48 "tests/imageDenoising/imageDenoising.h"
extern "C" cudaError_t CUDA_UnbindTexture();
# 49 "tests/imageDenoising/imageDenoising.h"
extern "C" cudaError_t CUDA_MallocArray(uchar4 ** , int , int );
# 50 "tests/imageDenoising/imageDenoising.h"
extern "C" cudaError_t CUDA_FreeArray();
# 53 "tests/imageDenoising/imageDenoising.h"
extern "C" void cuda_Copy(TColor * , int , int );
# 54 "tests/imageDenoising/imageDenoising.h"
extern "C" void cuda_KNN(TColor * , int , int , float , float );
# 55 "tests/imageDenoising/imageDenoising.h"
extern "C" void cuda_KNNdiag(TColor * , int , int , float , float );
# 56 "tests/imageDenoising/imageDenoising.h"
extern "C" void cuda_NLM(TColor * , int , int , float , float );
# 57 "tests/imageDenoising/imageDenoising.h"
extern "C" void cuda_NLMdiag(TColor * , int , int , float , float );
# 59 "tests/imageDenoising/imageDenoising.h"
extern "C" void cuda_NLM2(TColor * , int , int , float , float );
# 60 "tests/imageDenoising/imageDenoising.h"
extern "C" void cuda_NLM2diag(TColor * , int , int , float , float );
# 33 "tests/imageDenoising/imageDenoising.cu"
float Max(float x, float y) {
# 34 "tests/imageDenoising/imageDenoising.cu"
return (x > y) ? x : y;
# 35 "tests/imageDenoising/imageDenoising.cu"
}
# 37 "tests/imageDenoising/imageDenoising.cu"
float Min(float x, float y) {
# 38 "tests/imageDenoising/imageDenoising.cu"
return (x < y) ? x : y;
# 39 "tests/imageDenoising/imageDenoising.cu"
}
# 41 "tests/imageDenoising/imageDenoising.cu"
int iDivUp(int a, int b) {
# 42 "tests/imageDenoising/imageDenoising.cu"
return ((a % b) != 0) ? ((a / b) + 1) : (a / b);
# 43 "tests/imageDenoising/imageDenoising.cu"
}
# 45 "tests/imageDenoising/imageDenoising.cu"
__attribute__((unused)) float lerpf(float a, float b, float c) {int volatile ___ = 1;(void)a;(void)b;(void)c;
# 47 "tests/imageDenoising/imageDenoising.cu"
exit(___);}
# 49 "tests/imageDenoising/imageDenoising.cu"
__attribute__((unused)) float vecLen(float4 a, float4 b) {int volatile ___ = 1;(void)a;(void)b;
# 55 "tests/imageDenoising/imageDenoising.cu"
exit(___);}
# 57 "tests/imageDenoising/imageDenoising.cu"
__attribute__((unused)) TColor make_color(float r, float g, float b, float a) {int volatile ___ = 1;(void)r;(void)g;(void)b;(void)a;
# 63 "tests/imageDenoising/imageDenoising.cu"
exit(___);}
# 71 "tests/imageDenoising/imageDenoising.cu"
static texture< uchar4, 2, cudaReadModeNormalizedFloat> texImage;
# 72 "tests/imageDenoising/imageDenoising.cu"
cudaChannelFormatDesc uchar4tex = cudaCreateChannelDesc< uchar4> ();
# 75 "tests/imageDenoising/imageDenoising.cu"
cudaArray *a_Src;
# 14 "tests/imageDenoising/imageDenoising_copy_kernel.cu"
void Copy(TColor *
# 15 "tests/imageDenoising/imageDenoising_copy_kernel.cu"
dst, int
# 16 "tests/imageDenoising/imageDenoising_copy_kernel.cu"
imageW, int
# 17 "tests/imageDenoising/imageDenoising_copy_kernel.cu"
imageH) ;
# 32 "tests/imageDenoising/imageDenoising_copy_kernel.cu"
extern "C" void cuda_Copy(TColor *d_dst, int imageW, int imageH)
# 33 "tests/imageDenoising/imageDenoising_copy_kernel.cu"
{
# 34 "tests/imageDenoising/imageDenoising_copy_kernel.cu"
dim3 threads(8, 8);
# 35 "tests/imageDenoising/imageDenoising_copy_kernel.cu"
dim3 grid(iDivUp(imageW, 8), iDivUp(imageH, 8));
# 37 "tests/imageDenoising/imageDenoising_copy_kernel.cu"
cudaConfigureCall(grid, threads) ? ((void)0) : Copy(d_dst, imageW, imageH);
# 38 "tests/imageDenoising/imageDenoising_copy_kernel.cu"
}
# 17 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
void KNN(TColor *
# 18 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
dst, int
# 19 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
imageW, int
# 20 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
imageH, float
# 21 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
Noise, float
# 22 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
lerpC) ;
# 82 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
extern "C" void cuda_KNN(TColor *
# 83 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
d_dst, int
# 84 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
imageW, int
# 85 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
imageH, float
# 86 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
Noise, float
# 87 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
lerpC)
# 88 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
{
# 89 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
dim3 threads(8, 8);
# 90 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
dim3 grid(iDivUp(imageW, 8), iDivUp(imageH, 8));
# 92 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
cudaConfigureCall(grid, threads) ? ((void)0) : KNN(d_dst, imageW, imageH, Noise, lerpC);
# 93 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
}
# 99 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
void KNNdiag(TColor *
# 100 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
dst, int
# 101 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
imageW, int
# 102 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
imageH, float
# 103 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
Noise, float
# 104 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
lerpC) ;
# 143 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
extern "C" void cuda_KNNdiag(TColor *
# 144 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
d_dst, int
# 145 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
imageW, int
# 146 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
imageH, float
# 147 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
Noise, float
# 148 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
lerpC)
# 150 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
{
# 151 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
dim3 threads(8, 8);
# 152 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
dim3 grid(iDivUp(imageW, 8), iDivUp(imageH, 8));
# 154 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
cudaConfigureCall(grid, threads) ? ((void)0) : KNNdiag(d_dst, imageW, imageH, Noise, lerpC);
# 155 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
}
# 17 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
void NLM(TColor *
# 18 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
dst, int
# 19 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
imageW, int
# 20 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
imageH, float
# 21 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
Noise, float
# 22 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
lerpC) ;
# 88 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
extern "C" void cuda_NLM(TColor *
# 89 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
d_dst, int
# 90 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
imageW, int
# 91 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
imageH, float
# 92 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
Noise, float
# 93 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
lerpC)
# 94 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
{
# 95 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
dim3 threads(8, 8);
# 96 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
dim3 grid(iDivUp(imageW, 8), iDivUp(imageH, 8));
# 98 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
cudaConfigureCall(grid, threads) ? ((void)0) : NLM(d_dst, imageW, imageH, Noise, lerpC);
# 99 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
}
# 104 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
void NLMdiag(TColor *
# 105 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
dst, unsigned
# 106 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
imageW, unsigned
# 107 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
imageH, float
# 108 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
Noise, float
# 109 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
lerpC) ;
# 151 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
extern "C" void cuda_NLMdiag(TColor *
# 152 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
d_dst, int
# 153 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
imageW, int
# 154 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
imageH, float
# 155 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
Noise, float
# 156 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
lerpC)
# 157 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
{
# 158 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
dim3 threads(8, 8);
# 159 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
dim3 grid(iDivUp(imageW, 8), iDivUp(imageH, 8));
# 161 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
cudaConfigureCall(grid, threads) ? ((void)0) : NLMdiag(d_dst, imageW, imageH, Noise, lerpC);
# 162 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
}
# 32 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
void NLM2(TColor *
# 33 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
dst, int
# 34 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
imageW, int
# 35 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
imageH, float
# 36 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
Noise, float
# 37 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
lerpC) ;
# 124 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
extern "C" void cuda_NLM2(TColor *
# 125 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
d_dst, int
# 126 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
imageW, int
# 127 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
imageH, float
# 128 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
Noise, float
# 129 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
LerpC)
# 130 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
{
# 131 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
dim3 threads(8, 8);
# 132 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
dim3 grid(iDivUp(imageW, 8), iDivUp(imageH, 8));
# 134 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
cudaConfigureCall(grid, threads) ? ((void)0) : NLM2(d_dst, imageW, imageH, Noise, LerpC);
# 135 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
}
# 141 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
void NLM2diag(TColor *
# 142 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
dst, int
# 143 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
imageW, int
# 144 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
imageH, float
# 145 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
Noise, float
# 146 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
LerpC) ;
# 207 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
extern "C" void cuda_NLM2diag(TColor *
# 208 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
d_dst, int
# 209 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
imageW, int
# 210 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
imageH, float
# 211 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
Noise, float
# 212 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
LerpC)
# 213 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
{
# 214 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
dim3 threads(8, 8);
# 215 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
dim3 grid(iDivUp(imageW, 8), iDivUp(imageH, 8));
# 217 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
cudaConfigureCall(grid, threads) ? ((void)0) : NLM2diag(d_dst, imageW, imageH, Noise, LerpC);
# 218 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
}
# 86 "tests/imageDenoising/imageDenoising.cu"
extern "C" cudaError_t CUDA_Bind2TextureArray()
# 87 "tests/imageDenoising/imageDenoising.cu"
{
# 88 "tests/imageDenoising/imageDenoising.cu"
return cudaBindTextureToArray(texImage, a_Src);
# 89 "tests/imageDenoising/imageDenoising.cu"
}
# 92 "tests/imageDenoising/imageDenoising.cu"
extern "C" cudaError_t CUDA_UnbindTexture()
# 93 "tests/imageDenoising/imageDenoising.cu"
{
# 94 "tests/imageDenoising/imageDenoising.cu"
return cudaUnbindTexture(texImage);
# 95 "tests/imageDenoising/imageDenoising.cu"
}
# 98 "tests/imageDenoising/imageDenoising.cu"
extern "C" cudaError_t CUDA_MallocArray(uchar4 **h_Src, int imageW, int imageH)
# 99 "tests/imageDenoising/imageDenoising.cu"
{
# 100 "tests/imageDenoising/imageDenoising.cu"
cudaError_t error;
# 102 "tests/imageDenoising/imageDenoising.cu"
error = cudaMallocArray(&a_Src, &uchar4tex, imageW, imageH);
# 103 "tests/imageDenoising/imageDenoising.cu"
error = cudaMemcpyToArray(a_Src, 0, 0, *h_Src, (imageW * imageH) * sizeof(uchar4), cudaMemcpyHostToDevice);
# 108 "tests/imageDenoising/imageDenoising.cu"
return error;
# 109 "tests/imageDenoising/imageDenoising.cu"
}
# 113 "tests/imageDenoising/imageDenoising.cu"
extern "C" cudaError_t CUDA_FreeArray()
# 114 "tests/imageDenoising/imageDenoising.cu"
{
# 115 "tests/imageDenoising/imageDenoising.cu"
return cudaFreeArray(a_Src);
# 116 "tests/imageDenoising/imageDenoising.cu"
}
# 1 "tmpxft_00006ea3_00000000-1_imageDenoising.cudafe1.stub.c"
# 1 "tmpxft_00006ea3_00000000-1_imageDenoising.cudafe1.stub.c"
# 1 "/tmp/tmpxft_00006ea3_00000000-1_imageDenoising.cudafe1.stub.c" 1 3
# 1 "/usr/local/cuda4.1/cuda/include/crt/host_runtime.h" 1 3
# 74 "/usr/local/cuda4.1/cuda/include/crt/host_runtime.h" 3
template <typename T>
static inline void *__cudaAddressOf(T &val)
{
    return (void *)(&(const_cast<char &>(reinterpret_cast<const volatile char &>(val))));
}
# 103 "/usr/local/cuda4.1/cuda/include/crt/host_runtime.h" 3
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

# 1 "/usr/local/cuda4.1/cuda/include/common_functions.h" 1 3
# 159 "/usr/local/cuda4.1/cuda/include/common_functions.h" 3
# 1 "/usr/local/cuda4.1/cuda/include/math_functions.h" 1 3
# 2935 "/usr/local/cuda4.1/cuda/include/math_functions.h" 3
# 1 "/usr/local/cuda4.1/cuda/include/math_constants.h" 1 3
# 2936 "/usr/local/cuda4.1/cuda/include/math_functions.h" 2 3
# 5550 "/usr/local/cuda4.1/cuda/include/math_functions.h" 3
# 1 "/usr/local/cuda4.1/cuda/include/crt/func_macro.h" 1 3
# 5551 "/usr/local/cuda4.1/cuda/include/math_functions.h" 2 3
# 7292 "/usr/local/cuda4.1/cuda/include/math_functions.h" 3
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

inline double erfcx(double a)
{
  double x, t1, t2, t3;

  if (__isnan(a)) {
    return a + a;
  }
  x = fabs(a);
  if (x < 32.0) {
# 7577 "/usr/local/cuda4.1/cuda/include/math_functions.h" 3
    t1 = x - 4.0;
    t2 = x + 4.0;
    t2 = t1 / t2;

    t1 = - 3.5602694826817400E-010;
    t1 = t1 * t2 - 9.7239122591447274E-009;
    t1 = t1 * t2 - 8.9350224851649119E-009;
    t1 = t1 * t2 + 1.0404430921625484E-007;
    t1 = t1 * t2 + 5.8806698585341259E-008;
    t1 = t1 * t2 - 8.2147414929116908E-007;
    t1 = t1 * t2 + 3.0956409853306241E-007;
    t1 = t1 * t2 + 5.7087871844325649E-006;
    t1 = t1 * t2 - 1.1231787437600085E-005;
    t1 = t1 * t2 - 2.4399558857200190E-005;
    t1 = t1 * t2 + 1.5062557169571788E-004;
    t1 = t1 * t2 - 1.9925637684786154E-004;
    t1 = t1 * t2 - 7.5777429182785833E-004;
    t1 = t1 * t2 + 5.0319698792599572E-003;
    t1 = t1 * t2 - 1.6197733895953217E-002;
    t1 = t1 * t2 + 3.7167515553018733E-002;
    t1 = t1 * t2 - 6.6330365827532434E-002;
    t1 = t1 * t2 + 9.3732834997115544E-002;
    t1 = t1 * t2 - 1.0103906603555676E-001;
    t1 = t1 * t2 + 6.8097054254735140E-002;
    t1 = t1 * t2 + 1.5379652102605428E-002;
    t1 = t1 * t2 - 1.3962111684056291E-001;
    t1 = t1 * t2 + 1.2329951186255526E+000;

    t2 = 2.0 * x + 1.0;
    t1 = t1 / t2;
  } else {

    t2 = 1.0 / x;
    t3 = t2 * t2;
    t1 = -29.53125;
    t1 = t1 * t3 + 6.5625;
    t1 = t1 * t3 - 1.875;
    t1 = t1 * t3 + 0.75;
    t1 = t1 * t3 - 0.5;
    t1 = t1 * t3 + 1.0;
    t2 = t2 * 5.6418958354775628e-001;
    t1 = t1 * t2;
  }
  if (a < 0.0) {

    t2 = ((int)(x * 16.0)) * 0.0625;
    t3 = (x - t2) * (x + t2);
    t3 = exp(t2 * t2) * exp(t3);
    t3 = t3 + t3;
    t1 = t3 - t1;
  }
  return t1;
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

inline float erfcxf(float a)
{
  return (float)erfcx((double)a);
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
# 7730 "/usr/local/cuda4.1/cuda/include/math_functions.h" 3
# 1 "/usr/local/cuda4.1/cuda/include/math_functions_dbl_ptx3.h" 1 3
# 7731 "/usr/local/cuda4.1/cuda/include/math_functions.h" 2 3
# 160 "/usr/local/cuda4.1/cuda/include/common_functions.h" 2 3
# 176 "/usr/local/cuda4.1/cuda/include/crt/host_runtime.h" 2 3







#pragma pack()
# 2 "/tmp/tmpxft_00006ea3_00000000-1_imageDenoising.cudafe1.stub.c" 2 3
# 1 "/tmp/tmpxft_00006ea3_00000000-3_imageDenoising.fatbin.c" 1 3


asm(
".section .nv_fatbin, \"a\"\n"
".align 8\n"
"fatbinData:\n"
".quad 0x00100001ba55ed50,0x00000000000153a8,0x0000006801000001,0x000000000000f74c\n"
".quad 0x0000003800000000,0x0000001400030000,0x0000002600000040,0x0000000000000015\n"
".quad 0x0000000000000000,0x0000000000000000,0x6d692f7374736574,0x696f6e6544656761\n"
".quad 0x616d692f676e6973,0x73696f6e65446567,0x000075632e676e69,0x762e0a0a0a0a0a0a\n"
".quad 0x33206e6f69737265,0x677261742e0a302e,0x30325f6d73207465,0x7365726464612e0a\n"
".quad 0x3620657a69735f73,0x656c69662e0a0a34,0x706d742f22203109,0x5f746678706d742f\n"
".quad 0x3361653630303030,0x303030303030305f,0x67616d695f372d30,0x6973696f6e654465\n"
".quad 0x2e337070632e676e,0x656c69662e0a2269,0x7473657422203209,0x446567616d692f73\n"
".quad 0x676e6973696f6e65,0x65446567616d692f,0x2e676e6973696f6e,0x6c69662e0a227563\n"
".quad 0x73752f2220330965,0x2f6c61636f6c2f72,0x2f312e3461647563,0x76766e2f61647563\n"
".quad 0x636e695f69632f6d,0x0a22682e6564756c,0x203409656c69662e,0x692f737473657422\n"
".quad 0x6f6e65446567616d,0x6d692f676e697369,0x696f6e6544656761,0x706f635f676e6973\n"
".quad 0x6c656e72656b5f79,0x69662e0a2275632e,0x657422203509656c,0x67616d692f737473\n"
".quad 0x6973696f6e654465,0x6567616d692f676e,0x6e6973696f6e6544,0x656b5f6e6e6b5f67\n"
".quad 0x2275632e6c656e72,0x3609656c69662e0a,0x6c2f7273752f2220,0x6475632f6c61636f\n"
".quad 0x6475632f312e3461,0x64756c636e692f61,0x6563697665642f65,0x6f6974636e75665f\n"
".quad 0x662e0a22682e736e,0x7422203709656c69,0x616d692f73747365,0x73696f6e65446567\n"
".quad 0x67616d692f676e69,0x6973696f6e654465,0x6b5f6d6c6e5f676e,0x75632e6c656e7265\n"
".quad 0x09656c69662e0a22,0x7374736574222038,0x65446567616d692f,0x2f676e6973696f6e\n"
".quad 0x6e65446567616d69,0x6e5f676e6973696f,0x6e72656b5f326d6c,0x2e0a2275632e6c65\n"
".quad 0x2e206c61626f6c67,0x7420666572786574,0x3b6567616d497865,0x7369762e0a0a0a0a\n"
".quad 0x75662e20656c6269,0x7261702e2820636e,0x203233622e206d61,0x7465725f636e7566\n"
".quad 0x5a5f2029306c6176,0x6666667072656c35,0x617261702e0a2866,0x5f203233622e206d\n"
".quad 0x66667072656c355a,0x6d617261705f6666,0x7261702e0a2c305f,0x203233622e206d61\n"
".quad 0x667072656c355a5f,0x617261705f666666,0x61702e0a2c315f6d,0x3233622e206d6172\n"
".quad 0x7072656c355a5f20,0x7261705f66666666,0x7b0a290a325f6d61,0x662e206765722e0a\n"
".quad 0x3e363c6625203233,0x702e646c0a0a0a3b,0x3233662e6d617261,0x5f5b202c31662520\n"
".quad 0x66667072656c355a,0x6d617261705f6666,0x2e646c0a3b5d305f,0x33662e6d61726170\n"
".quad 0x5b202c3266252032,0x667072656c355a5f,0x617261705f666666,0x646c0a3b5d315f6d\n"
".quad 0x662e6d617261702e,0x202c336625203233,0x7072656c355a5f5b,0x7261705f66666666\n"
".quad 0x2e0a3b5d325f6d61,0x3634203220636f6c,0x662e6275730a3120,0x202c346625203233\n"
".quad 0x316625202c326625,0x6e722e616d660a3b,0x356625203233662e,0x25202c346625202c\n"
".quad 0x3b316625202c3366,0x617261702e74730a,0x665b093233662e6d,0x767465725f636e75\n"
".quad 0x202c5d302b306c61,0x7465720a3b356625,0x69762e0a0a7d0a3b,0x662e20656c626973\n"
".quad 0x61702e2820636e75,0x3233622e206d6172,0x65725f636e756620,0x5f2029306c617674\n"
".quad 0x6e654c636576365a,0x533474616f6c6636,0x617261702e0a285f,0x6e67696c612e206d\n"
".quad 0x2038622e20363120,0x654c636576365a5f,0x3474616f6c66366e,0x6d617261705f5f53\n"
".quad 0x0a2c5d36315b305f,0x2e206d617261702e,0x3631206e67696c61,0x365a5f2038622e20\n"
".quad 0x66366e654c636576,0x5f5f533474616f6c,0x5b315f6d61726170,0x0a7b0a290a5d3631\n"
".quad 0x33662e206765722e,0x3e33313c66252032,0x2e206765722e0a3b,0x373c722520323373\n"
".quad 0x206765722e0a3b3e,0x6c7225203436732e,0x6d0a0a0a3b3e333c,0x25093436622e766f\n"
".quad 0x365a5f202c316c72,0x66366e654c636576,0x5f5f533474616f6c,0x3b305f6d61726170\n"
".quad 0x3436622e766f6d0a,0x5f202c326c722509,0x6e654c636576365a,0x533474616f6c6636\n"
".quad 0x5f6d617261705f5f,0x20636f6c2e0a3b31,0x6c0a312030352032,0x2e6c61636f6c2e64\n"
".quad 0x2c31662520323366,0x3b5d316c72255b20,0x61636f6c2e646c0a,0x6625203233662e6c\n"
".quad 0x326c72255b202c32,0x662e6275730a3b5d,0x202c336625203233,0x316625202c326625\n"
".quad 0x636f6c2e646c0a3b,0x25203233662e6c61,0x6c72255b202c3466,0x646c0a3b5d342b31\n"
".quad 0x662e6c61636f6c2e,0x202c356625203233,0x5d342b326c72255b,0x33662e6275730a3b\n"
".quad 0x25202c3666252032,0x3b346625202c3566,0x3233662e6c756d0a,0x6625202c37662520\n"
".quad 0x0a3b366625202c36,0x662e6e722e616d66,0x202c386625203233,0x336625202c336625\n"
".quad 0x6c0a3b376625202c,0x2e6c61636f6c2e64,0x2c39662520323366,0x382b316c72255b20\n"
".quad 0x6f6c2e646c0a3b5d,0x203233662e6c6163,0x255b202c30316625,0x0a3b5d382b326c72\n"
".quad 0x203233662e627573,0x6625202c31316625,0x3b396625202c3031,0x2e6e722e616d660a\n"
".quad 0x3231662520323366,0x202c31316625202c,0x6625202c31316625,0x61702e74730a3b38\n"
".quad 0x093233662e6d6172,0x65725f636e75665b,0x5d302b306c617674,0x0a3b32316625202c\n"
".quad 0x0a0a7d0a3b746572,0x656c62697369762e,0x2820636e75662e20,0x2e206d617261702e\n"
".quad 0x636e756620323362,0x306c61767465725f,0x616d30315a5f2029,0x726f6c6f635f656b\n"
".quad 0x702e0a2866666666,0x33622e206d617261,0x616d30315a5f2032,0x726f6c6f635f656b\n"
".quad 0x7261705f66666666,0x702e0a2c305f6d61,0x33622e206d617261,0x616d30315a5f2032\n"
".quad 0x726f6c6f635f656b,0x7261705f66666666,0x702e0a2c315f6d61,0x33622e206d617261\n"
".quad 0x616d30315a5f2032,0x726f6c6f635f656b,0x7261705f66666666,0x702e0a2c325f6d61\n"
".quad 0x33622e206d617261,0x616d30315a5f2032,0x726f6c6f635f656b,0x7261705f66666666\n"
".quad 0x7b0a290a335f6d61,0x662e206765722e0a,0x3e393c6625203233,0x2e206765722e0a3b\n"
".quad 0x313c722520323373,0x646c0a0a0a3b3e31,0x662e6d617261702e,0x202c316625203233\n"
".quad 0x6b616d30315a5f5b,0x66726f6c6f635f65,0x617261705f666666,0x646c0a3b5d305f6d\n"
".quad 0x662e6d617261702e,0x202c326625203233,0x6b616d30315a5f5b,0x66726f6c6f635f65\n"
".quad 0x617261705f666666,0x646c0a3b5d315f6d,0x662e6d617261702e,0x202c336625203233\n"
".quad 0x6b616d30315a5f5b,0x66726f6c6f635f65,0x617261705f666666,0x646c0a3b5d325f6d\n"
".quad 0x662e6d617261702e,0x202c346625203233,0x6b616d30315a5f5b,0x66726f6c6f635f65\n"
".quad 0x617261705f666666,0x6c2e0a3b5d335f6d,0x203835203220636f,0x33662e6c756d0a31\n"
".quad 0x25202c3566252032,0x33346630202c3466,0x0a3b303030304637,0x31203320636f6c2e\n"
".quad 0x76630a3520333433,0x33732e697a722e74,0x7225203233662e32,0x0a3b356625202c31\n"
".quad 0x35203220636f6c2e,0x2e6c68730a312038,0x2c32722520323362,0x3432202c31722520\n"
".quad 0x33662e6c756d0a3b,0x25202c3666252032,0x33346630202c3366,0x0a3b303030304637\n"
".quad 0x31203320636f6c2e,0x76630a3520333433,0x33732e697a722e74,0x7225203233662e32\n"
".quad 0x0a3b366625202c33,0x35203220636f6c2e,0x2e6c68730a312038,0x2c34722520323362\n"
".quad 0x3631202c33722520,0x33662e6c756d0a3b,0x25202c3766252032,0x33346630202c3266\n"
".quad 0x0a3b303030304637,0x31203320636f6c2e,0x76630a3520333433,0x33732e697a722e74\n"
".quad 0x7225203233662e32,0x0a3b376625202c35,0x35203220636f6c2e,0x2e6c68730a312038\n"
".quad 0x2c36722520323362,0x3b38202c35722520,0x3233662e6c756d0a,0x6625202c38662520\n"
".quad 0x3733346630202c31,0x2e0a3b3030303046,0x3331203320636f6c,0x7476630a35203334\n"
".quad 0x3233732e697a722e,0x377225203233662e,0x2e0a3b386625202c,0x3835203220636f6c\n"
".quad 0x33622e726f0a3120,0x25202c3872252032,0x3b327225202c3472,0x203233622e726f0a\n"
".quad 0x387225202c397225,0x6f0a3b377225202c,0x7225203233622e72,0x2c397225202c3031\n"
".quad 0x74730a3b36722520,0x622e6d617261702e,0x636e75665b093233,0x306c61767465725f\n"
".quad 0x317225202c5d302b,0x0a3b7465720a3b30,0x72746e652e0a0a7d,0x706f43345a5f2079\n"
".quad 0x2e0a2869696a5079,0x752e206d61726170,0x6f43345a5f203436,0x705f69696a507970\n"
".quad 0x0a2c305f6d617261,0x2e206d617261702e,0x43345a5f20323375,0x5f69696a5079706f\n"
".quad 0x2c315f6d61726170,0x206d617261702e0a,0x345a5f203233752e,0x69696a5079706f43\n"
".quad 0x325f6d617261705f,0x65722e0a7b0a290a,0x25203233662e2067,0x2e0a3b3e35313c66\n"
".quad 0x6572702e20676572,0x3b3e343c70252064,0x732e206765722e0a,0x39323c7225203233\n"
".quad 0x206765722e0a3b3e,0x6c7225203436732e,0x6c0a0a0a3b3e353c,0x2e6d617261702e64\n"
".quad 0x326c722520343675,0x6f43345a5f5b202c,0x705f69696a507970,0x3b5d305f6d617261\n"
".quad 0x617261702e646c0a,0x7225203233752e6d,0x43345a5f5b202c31,0x5f69696a5079706f\n"
".quad 0x5d315f6d61726170,0x7261702e646c0a3b,0x25203233752e6d61,0x345a5f5b202c3472\n"
".quad 0x69696a5079706f43,0x325f6d617261705f,0x2e617476630a3b5d,0x61626f6c672e6f74\n"
".quad 0x7225203436752e6c,0x326c7225202c316c,0x3420636f6c2e0a3b,0x6f6d0a3120393120\n"
".quad 0x7225203233752e76,0x6961746325202c35,0x766f6d0a3b782e64,0x367225203233752e\n"
".quad 0x2e6469746e25202c,0x752e766f6d0a3b78,0x202c377225203233,0x0a3b782e64697425\n"
".quad 0x732e6f6c2e64616d,0x202c327225203233,0x367225202c357225,0x2e0a3b377225202c\n"
".quad 0x3032203420636f6c,0x752e766f6d0a3120,0x202c387225203233,0x792e646961746325\n"
".quad 0x33752e766f6d0a3b,0x25202c3972252032,0x0a3b792e6469746e,0x203233752e766f6d\n"
".quad 0x7425202c30317225,0x616d0a3b792e6469,0x3233732e6f6c2e64,0x7225202c33722520\n"
".quad 0x202c397225202c38,0x6c2e0a3b30317225,0x203232203420636f,0x6e722e7476630a31\n"
".quad 0x3233732e3233662e,0x7225202c33662520,0x662e6464610a3b32,0x202c316625203233\n"
".quad 0x336630202c336625,0x3b30303030303046,0x203420636f6c2e0a,0x7476630a31203332\n"
".quad 0x2e3233662e6e722e,0x2c34662520323373,0x64610a3b33722520,0x6625203233662e64\n"
".quad 0x202c346625202c32,0x3030303046336630,0x636f6c2e0a3b3030,0x0a31203532203420\n"
".quad 0x2e746c2e70746573,0x2c31702520323373,0x7225202c32722520,0x2e707465730a3b31\n"
".quad 0x25203233732e746c,0x2c337225202c3270,0x6e610a3b34722520,0x2520646572702e64\n"
".quad 0x2c317025202c3370,0x6c2e0a3b32702520,0x203532203420636f,0x6220337025400a31\n"
".quad 0x325f334242206172,0x20636f6c2e0a0a3b,0x720a322039322034,0x3342420a0a3b7465\n"
".quad 0x2e766f6d0a3a325f,0x3531722520323375,0x74090a0a3b30202c,0x34762e64322e7865\n"
".quad 0x3233662e3233752e,0x202c313172257b20,0x7225202c32317225,0x34317225202c3331\n"
".quad 0x497865745b202c7d,0x257b202c6567616d,0x7d326625202c3166,0x6f6c2e090a0a3b5d\n"
".quad 0x3837373120332063,0x622e766f6d0a3520,0x202c376625203233,0x6f6d0a3b31317225\n"
".quad 0x6625203233622e76,0x3b32317225202c38,0x3233622e766f6d0a,0x7225202c39662520\n"
".quad 0x2e766f6d0a3b3331,0x3031662520323366,0x303030306630202c,0x6c2e0a3b30303030\n"
".quad 0x203835203220636f,0x33662e6c756d0a31,0x202c313166252032,0x6630202c30316625\n"
".quad 0x3030303046373334,0x3320636f6c2e0a3b,0x0a35203334333120,0x2e697a722e747663\n"
".quad 0x203233662e323373,0x6625202c36317225,0x636f6c2e0a3b3131,0x0a31203835203220\n"
".quad 0x203233622e6c6873,0x7225202c37317225,0x0a3b3432202c3631,0x203233662e6c756d\n"
".quad 0x6625202c32316625,0x3733346630202c39,0x2e0a3b3030303046,0x3331203320636f6c\n"
".quad 0x7476630a35203334,0x3233732e697a722e,0x317225203233662e,0x3b32316625202c38\n"
".quad 0x203220636f6c2e0a,0x6c68730a31203835,0x317225203233622e,0x2c38317225202c39\n"
".quad 0x6c756d0a3b363120,0x316625203233662e,0x202c386625202c33,0x3030463733346630\n"
".quad 0x636f6c2e0a3b3030,0x2033343331203320,0x7a722e7476630a35,0x33662e3233732e69\n"
".quad 0x202c303272252032,0x6c2e0a3b33316625,0x203835203220636f,0x33622e6c68730a31\n"
".quad 0x202c313272252032,0x3b38202c30327225,0x3233662e6c756d0a,0x25202c3431662520\n"
".quad 0x33346630202c3766,0x0a3b303030304637,0x31203320636f6c2e,0x76630a3520333433\n"
".quad 0x33732e697a722e74,0x7225203233662e32,0x34316625202c3232,0x3220636f6c2e0a3b\n"
".quad 0x726f0a3120383520,0x327225203233622e,0x2c39317225202c33,0x6f0a3b3731722520\n"
".quad 0x7225203233622e72,0x33327225202c3432,0x0a3b32327225202c,0x25203233622e726f\n"
".quad 0x327225202c353272,0x3b31327225202c34,0x617261702e646c0a,0x7225203233752e6d\n"
".quad 0x345a5f5b202c3832,0x69696a5079706f43,0x315f6d617261705f,0x20636f6c2e0a3b5d\n"
".quad 0x6d0a312037322034,0x33732e6f6c2e6461,0x202c363272252032,0x327225202c337225\n"
".quad 0x0a3b327225202c38,0x656469772e6c756d,0x6c7225203233732e,0x2c36327225202c33\n"
".quad 0x2e6464610a3b3420,0x346c722520343673,0x202c316c7225202c,0x74730a3b336c7225\n"
".quad 0x2e6c61626f6c672e,0x6c72255b20323375,0x35327225202c5d34,0x3420636f6c2e0a3b\n"
".quad 0x65720a3220393220,0x652e0a0a7d0a3b74,0x335a5f207972746e,0x6669696a504e4e4b\n"
".quad 0x617261702e0a2866,0x5f203436752e206d,0x696a504e4e4b335a,0x617261705f666669\n"
".quad 0x61702e0a2c305f6d,0x3233752e206d6172,0x504e4e4b335a5f20,0x61705f666669696a\n"
".quad 0x2e0a2c315f6d6172,0x752e206d61726170,0x4e4b335a5f203233,0x5f666669696a504e\n"
".quad 0x2c325f6d61726170,0x206d617261702e0a,0x335a5f203233662e,0x6669696a504e4e4b\n"
".quad 0x5f6d617261705f66,0x617261702e0a2c33,0x5f203233662e206d,0x696a504e4e4b335a\n"
".quad 0x617261705f666669,0x0a7b0a290a345f6d,0x33662e206765722e,0x3832323c66252032\n"
".quad 0x206765722e0a3b3e,0x702520646572702e,0x722e0a3b3e33313c,0x203233732e206765\n"
".quad 0x0a3b3e39363c7225,0x36732e206765722e,0x3e363c6c72252034,0x702e646c0a0a0a3b\n"
".quad 0x3233752e6d617261,0x5f5b202c31722520,0x696a504e4e4b335a,0x617261705f666669\n"
".quad 0x646c0a3b5d315f6d,0x752e6d617261702e,0x202c347225203233,0x504e4e4b335a5f5b\n"
".quad 0x61705f666669696a,0x0a3b5d325f6d6172,0x32203520636f6c2e,0x2e766f6d0a312034\n"
".quad 0x2c35722520323375,0x782e6469746e2520,0x33752e766f6d0a3b,0x25202c3672252032\n"
".quad 0x3b782e6469617463,0x3233752e766f6d0a,0x7425202c37722520,0x616d0a3b782e6469\n"
".quad 0x3233732e6f6c2e64,0x7225202c38722520,0x202c357225202c36,0x6f6c2e0a3b377225\n"
".quad 0x3120353220352063,0x3233752e766f6d0a,0x6325202c39722520,0x0a3b792e64696174\n"
".quad 0x203233752e766f6d,0x6e25202c30317225,0x6d0a3b792e646974,0x25203233752e766f\n"
".quad 0x697425202c313172,0x64616d0a3b792e64,0x203233732e6f6c2e,0x7225202c32317225\n"
".quad 0x2c30317225202c39,0x2e0a3b3131722520,0x3732203520636f6c,0x722e7476630a3120\n"
".quad 0x33732e3233662e6e,0x202c343366252032,0x6464610a3b387225,0x336625203233662e\n"
".quad 0x202c34336625202c,0x3030303046336630,0x636f6c2e0a3b3030,0x0a31203832203520\n"
".quad 0x662e6e722e747663,0x25203233732e3233,0x317225202c353366,0x662e6464610a3b32\n"
".quad 0x202c346625203233,0x6630202c35336625,0x3030303030304633,0x3520636f6c2e0a3b\n"
".quad 0x65730a3120303320,0x33732e746c2e7074,0x25202c3170252032,0x3b317225202c3872\n"
".quad 0x746c2e707465730a,0x327025203233732e,0x202c32317225202c,0x646e610a3b347225\n"
".quad 0x702520646572702e,0x202c317025202c33,0x6f6c2e0a3b327025,0x3120303320352063\n"
".quad 0x726220337025400a,0x3b325f3442422061,0x3520636f6c2e0a0a,0x65720a3220393720\n"
".quad 0x5f3442420a0a3b74,0x752e766f6d0a3a32,0x2c37317225203233,0x6574090a0a3b3020\n"
".quad 0x2e34762e64322e78,0x203233662e323375,0x25202c333172257b,0x317225202c343172\n"
".quad 0x7d36317225202c35,0x6d497865745b202c,0x66257b202c656761,0x5d7d346625202c33\n"
".quad 0x636f6c2e090a0a3b,0x2038373731203320,0x33622e766f6d0a35,0x25202c3566252032\n"
".quad 0x766f6d0a3b333172,0x366625203233622e,0x0a3b34317225202c,0x203233622e766f6d\n"
".quad 0x317225202c376625,0x20636f6c2e0a3b35,0x610a312034342035,0x25203233662e6464\n"
".quad 0x2c336625202c3866,0x3030343043663020,0x766f6d0a3b303030,0x326625203233662e\n"
".quad 0x30436630202c3732,0x0a3b303030303034,0x34203520636f6c2e,0x2e6c756d0a312038\n"
".quad 0x2c39662520323366,0x202c373232662520,0x3030303430436630,0x636f6c2e0a3b3030\n"
".quad 0x3332203234203520,0x3233662e6464610a,0x25202c3434662520,0x6630202c37323266\n"
".quad 0x3030303030384633,0x3520636f6c2e0a3b,0x64610a3120343420,0x6625203233662e64\n"
".quad 0x2c336625202c3031,0x2e0a3b3434662520,0x3834203520636f6c,0x662e6c756d0a3120\n"
".quad 0x2c31316625203233,0x25202c3434662520,0x6f6c2e0a3b343466,0x3220323420352063\n"
".quad 0x33662e6464610a33,0x202c353466252032,0x6630202c34346625,0x3030303030384633\n"
".quad 0x3520636f6c2e0a3b,0x64610a3120343420,0x6625203233662e64,0x2c336625202c3231\n"
".quad 0x2e0a3b3534662520,0x3834203520636f6c,0x662e6c756d0a3120,0x2c33316625203233\n"
".quad 0x25202c3534662520,0x6f6c2e0a3b353466,0x3220323420352063,0x33662e6464610a33\n"
".quad 0x202c363466252032,0x6630202c35346625,0x3030303030384633,0x3520636f6c2e0a3b\n"
".quad 0x64610a3120343420,0x6625203233662e64,0x2c336625202c3431,0x2e0a3b3634662520\n"
".quad 0x3834203520636f6c,0x662e6c756d0a3120,0x2c35316625203233,0x25202c3634662520\n"
".quad 0x6f6c2e0a3b363466,0x3220323420352063,0x33662e6464610a33,0x202c373466252032\n"
".quad 0x6630202c36346625,0x3030303030384633,0x3520636f6c2e0a3b,0x64610a3120343420\n"
".quad 0x6625203233662e64,0x2c336625202c3631,0x2e0a3b3734662520,0x3834203520636f6c\n"
".quad 0x662e6c756d0a3120,0x2c37316625203233,0x25202c3734662520,0x6f6c2e0a3b373466\n"
".quad 0x3220323420352063,0x33662e6464610a33,0x202c383466252032,0x6630202c37346625\n"
".quad 0x3030303030384633,0x3520636f6c2e0a3b,0x64610a3120343420,0x6625203233662e64\n"
".quad 0x2c336625202c3831,0x2e0a3b3834662520,0x3834203520636f6c,0x662e6c756d0a3120\n"
".quad 0x2c39316625203233,0x25202c3834662520,0x6f6c2e0a3b383466,0x3220323420352063\n"
".quad 0x33662e6464610a33,0x202c393466252032,0x6630202c38346625,0x3030303030384633\n"
".quad 0x3520636f6c2e0a3b,0x64610a3120343420,0x6625203233662e64,0x2c336625202c3032\n"
".quad 0x2e0a3b3934662520,0x3834203520636f6c,0x662e6c756d0a3120,0x2c31326625203233\n"
".quad 0x25202c3934662520,0x766f6d0a3b393466,0x326625203233662e,0x30306630202c3632\n"
".quad 0x0a3b303030303030,0x203233662e766f6d,0x25202c3532326625,0x6f6d0a3b36323266\n"
".quad 0x6625203233662e76,0x326625202c343232,0x2e766f6d0a3b3632,0x3232662520323366\n"
".quad 0x3632326625202c33,0x33662e766f6d0a3b,0x2c32323266252032,0x0a3b363232662520\n"
".quad 0x203233752e766f6d,0x7225202c38367225,0x3442420a0a3b3731,0x2e766f6d0a3a335f\n"
".quad 0x2c32722520323375,0x2e0a3b3836722520,0x3434203520636f6c,0x662e6464610a3120\n"
".quad 0x2c33366625203233,0x6625202c34662520,0x74090a0a3b373232,0x34762e64322e7865\n"
".quad 0x3233662e3233752e,0x202c383172257b20,0x7225202c39317225,0x31327225202c3032\n"
".quad 0x497865745b202c7d,0x257b202c6567616d,0x33366625202c3866,0x6c2e090a0a3b5d7d\n"
".quad 0x373731203320636f,0x2e766f6d0a352038,0x3436662520323362,0x0a3b38317225202c\n"
".quad 0x203233622e766f6d,0x7225202c35366625,0x2e766f6d0a3b3931,0x3636662520323362\n"
".quad 0x0a3b30327225202c,0x35203220636f6c2e,0x2e6275730a312030,0x3736662520323366\n"
".quad 0x202c34366625202c,0x6275730a3b356625,0x366625203233662e,0x2c35366625202c38\n"
".quad 0x756d0a3b36662520,0x6625203233662e6c,0x38366625202c3936,0x0a3b38366625202c\n"
".quad 0x662e6e722e616d66,0x2c30376625203233,0x25202c3736662520,0x366625202c373666\n"
".quad 0x662e6275730a3b39,0x2c31376625203233,0x25202c3636662520,0x2e616d660a3b3766\n"
".quad 0x25203233662e6e72,0x376625202c323766,0x2c31376625202c31,0x6c0a3b3037662520\n"
".quad 0x2e6d617261702e64,0x3232662520323366,0x4b335a5f5b202c30,0x666669696a504e4e\n"
".quad 0x335f6d617261705f,0x20636f6c2e0a3b5d,0x6d0a312038342035,0x25203233662e6c75\n"
".quad 0x376625202c333766,0x3032326625202c32,0x6e722e616d660a3b,0x376625203233662e\n"
".quad 0x3732326625202c34,0x2c3732326625202c,0x6d660a3b39662520,0x3233662e6e722e61\n"
".quad 0x25202c3537662520,0x336630202c343766,0x2c35304632374143,0x6d0a3b3337662520\n"
".quad 0x25203233662e6c75,0x376625202c363766,0x4246426630202c35,0x2e0a3b4233414138\n"
".quad 0x3335203320636f6c,0x2e3278650a352031,0x662e786f72707061,0x2c37376625203233\n"
".quad 0x2e0a3b3637662520,0x3135203520636f6c,0x722e616d660a3120,0x6625203233662e6e\n"
".quad 0x34366625202c3837,0x202c37376625202c,0x2e0a3b3232326625,0x3235203520636f6c\n"
".quad 0x722e616d660a3120,0x6625203233662e6e,0x35366625202c3937,0x202c37376625202c\n"
".quad 0x2e0a3b3332326625,0x3335203520636f6c,0x722e616d660a3120,0x6625203233662e6e\n"
".quad 0x36366625202c3038,0x202c37376625202c,0x2e0a3b3432326625,0x3635203520636f6c\n"
".quad 0x662e6464610a3120,0x2c31386625203233,0x202c363232662520,0x6c2e0a3b37376625\n"
".quad 0x203036203520636f,0x672e707465730a31,0x7025203233662e74,0x2c37376625202c34\n"
".quad 0x4433414333663020,0x6c65730a3b413037,0x6625203233662e70,0x43336630202c3238\n"
".quad 0x202c353046323741,0x3030303030306630,0x3b347025202c3030,0x203520636f6c2e0a\n"
".quad 0x6464610a31203036,0x386625203233662e,0x3532326625202c33,0x0a3b32386625202c\n"
".quad 0x64322e786574090a,0x2e3233752e34762e,0x3272257b20323366,0x2c33327225202c32\n"
".quad 0x25202c3432722520,0x745b202c7d353272,0x2c6567616d497865,0x202c303166257b20\n"
".quad 0x0a3b5d7d33366625,0x3320636f6c2e090a,0x0a35203837373120,0x203233622e766f6d\n"
".quad 0x7225202c34386625,0x2e766f6d0a3b3232,0x3538662520323362,0x0a3b33327225202c\n"
".quad 0x203233622e766f6d,0x7225202c36386625,0x636f6c2e0a3b3432,0x0a31203035203220\n"
".quad 0x203233662e627573,0x6625202c37386625,0x3b356625202c3438,0x3233662e6275730a\n"
".quad 0x25202c3838662520,0x366625202c353866,0x33662e6c756d0a3b,0x202c393866252032\n"
".quad 0x6625202c38386625,0x2e616d660a3b3838,0x25203233662e6e72,0x386625202c303966\n"
".quad 0x2c37386625202c37,0x730a3b3938662520,0x25203233662e6275,0x386625202c313966\n"
".quad 0x0a3b376625202c36,0x662e6e722e616d66,0x2c32396625203233,0x25202c3139662520\n"
".quad 0x396625202c313966,0x20636f6c2e0a3b30,0x6d0a312038342035,0x25203233662e6c75\n"
".quad 0x396625202c333966,0x3032326625202c32,0x6e722e616d660a3b,0x396625203233662e\n"
".quad 0x3732326625202c34,0x2c3732326625202c,0x660a3b3131662520,0x33662e6e722e616d\n"
".quad 0x202c353966252032,0x6630202c34396625,0x3530463237414333,0x0a3b33396625202c\n"
".quad 0x203233662e6c756d,0x6625202c36396625,0x46426630202c3539,0x0a3b423341413842\n"
".quad 0x35203320636f6c2e,0x3278650a35203133,0x2e786f727070612e,0x3739662520323366\n"
".quad 0x0a3b36396625202c,0x35203520636f6c2e,0x2e616d660a312031,0x25203233662e6e72\n"
".quad 0x386625202c383966,0x2c37396625202c34,0x2e0a3b3837662520,0x3235203520636f6c\n"
".quad 0x722e616d660a3120,0x6625203233662e6e,0x35386625202c3939,0x202c37396625202c\n"
".quad 0x6c2e0a3b39376625,0x203335203520636f,0x6e722e616d660a31,0x316625203233662e\n"
".quad 0x36386625202c3030,0x202c37396625202c,0x6c2e0a3b30386625,0x203635203520636f\n"
".quad 0x33662e6464610a31,0x2c31303166252032,0x25202c3138662520,0x6f6c2e0a3b373966\n"
".quad 0x3120303620352063,0x74672e707465730a,0x357025203233662e,0x202c37396625202c\n"
".quad 0x3744334143336630,0x706c65730a3b4130,0x316625203233662e,0x43336630202c3230\n"
".quad 0x202c353046323741,0x3030303030306630,0x3b357025202c3030,0x203520636f6c2e0a\n"
".quad 0x6464610a31203036,0x316625203233662e,0x33386625202c3330,0x3b3230316625202c\n"
".quad 0x322e786574090a0a,0x3233752e34762e64,0x72257b203233662e,0x37327225202c3632\n"
".quad 0x202c38327225202c,0x5b202c7d39327225,0x6567616d49786574,0x2c323166257b202c\n"
".quad 0x3b5d7d3336662520,0x20636f6c2e090a0a,0x3520383737312033,0x3233622e766f6d0a\n"
".quad 0x202c343031662520,0x6f6d0a3b36327225,0x6625203233622e76,0x327225202c353031\n"
".quad 0x622e766f6d0a3b37,0x3630316625203233,0x0a3b38327225202c,0x35203220636f6c2e\n"
".quad 0x2e6275730a312030,0x3031662520323366,0x3430316625202c37,0x730a3b356625202c\n"
".quad 0x25203233662e6275,0x6625202c38303166,0x366625202c353031,0x33662e6c756d0a3b\n"
".quad 0x2c39303166252032,0x202c383031662520,0x660a3b3830316625,0x33662e6e722e616d\n"
".quad 0x2c30313166252032,0x202c373031662520,0x25202c3730316625,0x75730a3b39303166\n"
".quad 0x6625203233662e62,0x316625202c313131,0x3b376625202c3630,0x2e6e722e616d660a\n"
".quad 0x3131662520323366,0x3131316625202c32,0x2c3131316625202c,0x0a3b303131662520\n"
".quad 0x34203520636f6c2e,0x2e6c756d0a312038,0x3131662520323366,0x3231316625202c33\n"
".quad 0x3b3032326625202c,0x2e6e722e616d660a,0x3131662520323366,0x3732326625202c34\n"
".quad 0x2c3732326625202c,0x660a3b3331662520,0x33662e6e722e616d,0x2c35313166252032\n"
".quad 0x202c343131662520,0x4632374143336630,0x31316625202c3530,0x662e6c756d0a3b33\n"
".quad 0x3631316625203233,0x2c3531316625202c,0x4138424642663020,0x6f6c2e0a3b423341\n"
".quad 0x2031333520332063,0x70612e3278650a35,0x3233662e786f7270,0x202c373131662520\n"
".quad 0x2e0a3b3631316625,0x3135203520636f6c,0x722e616d660a3120,0x6625203233662e6e\n"
".quad 0x316625202c383131,0x31316625202c3430,0x3b38396625202c37,0x203520636f6c2e0a\n"
".quad 0x616d660a31203235,0x203233662e6e722e,0x25202c3931316625,0x6625202c35303166\n"
".quad 0x396625202c373131,0x20636f6c2e0a3b39,0x660a312033352035,0x33662e6e722e616d\n"
".quad 0x2c30323166252032,0x202c363031662520,0x25202c3731316625,0x6c2e0a3b30303166\n"
".quad 0x203635203520636f,0x33662e6464610a31,0x2c31323166252032,0x202c313031662520\n"
".quad 0x2e0a3b3731316625,0x3036203520636f6c,0x2e707465730a3120,0x25203233662e7467\n"
".quad 0x31316625202c3670,0x4143336630202c37,0x730a3b4130374433,0x203233662e706c65\n"
".quad 0x30202c3232316625,0x3046323741433366,0x3030306630202c35,0x25202c3030303030\n"
".quad 0x636f6c2e0a3b3670,0x0a31203036203520,0x203233662e646461,0x25202c3332316625\n"
".quad 0x6625202c33303166,0x74090a0a3b323231,0x34762e64322e7865,0x3233662e3233752e\n"
".quad 0x202c303372257b20,0x7225202c31337225,0x33337225202c3233,0x497865745b202c7d\n"
".quad 0x257b202c6567616d,0x366625202c343166,0x2e090a0a3b5d7d33,0x3731203320636f6c\n"
".quad 0x766f6d0a35203837,0x316625203233622e,0x30337225202c3432,0x33622e766f6d0a3b\n"
".quad 0x2c35323166252032,0x6d0a3b3133722520,0x25203233622e766f,0x7225202c36323166\n"
".quad 0x636f6c2e0a3b3233,0x0a31203035203220,0x203233662e627573,0x25202c3732316625\n"
".quad 0x6625202c34323166,0x662e6275730a3b35,0x3832316625203233,0x2c3532316625202c\n"
".quad 0x756d0a3b36662520,0x6625203233662e6c,0x316625202c393231,0x32316625202c3832\n"
".quad 0x722e616d660a3b38,0x6625203233662e6e,0x316625202c303331,0x32316625202c3732\n"
".quad 0x3932316625202c37,0x33662e6275730a3b,0x2c31333166252032,0x202c363231662520\n"
".quad 0x616d660a3b376625,0x203233662e6e722e,0x25202c3233316625,0x6625202c31333166\n"
".quad 0x316625202c313331,0x636f6c2e0a3b3033,0x0a31203834203520,0x203233662e6c756d\n"
".quad 0x25202c3333316625,0x6625202c32333166,0x616d660a3b303232,0x203233662e6e722e\n"
".quad 0x25202c3433316625,0x6625202c37323266,0x316625202c373232,0x722e616d660a3b35\n"
".quad 0x6625203233662e6e,0x316625202c353331,0x43336630202c3433,0x202c353046323741\n"
".quad 0x6d0a3b3333316625,0x25203233662e6c75,0x6625202c36333166,0x426630202c353331\n"
".quad 0x3b42334141384246,0x203320636f6c2e0a,0x78650a3520313335,0x786f727070612e32\n"
".quad 0x316625203233662e,0x33316625202c3733,0x20636f6c2e0a3b36,0x660a312031352035\n"
".quad 0x33662e6e722e616d,0x2c38333166252032,0x202c343231662520,0x25202c3733316625\n"
".quad 0x6c2e0a3b38313166,0x203235203520636f,0x6e722e616d660a31,0x316625203233662e\n"
".quad 0x32316625202c3933,0x3733316625202c35,0x3b3931316625202c,0x203520636f6c2e0a\n"
".quad 0x616d660a31203335,0x203233662e6e722e,0x25202c3034316625,0x6625202c36323166\n"
".quad 0x316625202c373331,0x636f6c2e0a3b3032,0x0a31203635203520,0x203233662e646461\n"
".quad 0x25202c3134316625,0x6625202c31323166,0x6f6c2e0a3b373331,0x3120303620352063\n"
".quad 0x74672e707465730a,0x377025203233662e,0x2c3733316625202c,0x4433414333663020\n"
".quad 0x6c65730a3b413037,0x6625203233662e70,0x336630202c323431,0x2c35304632374143\n"
".quad 0x3030303030663020,0x377025202c303030,0x3520636f6c2e0a3b,0x64610a3120303620\n"
".quad 0x6625203233662e64,0x316625202c333431,0x34316625202c3332,0x786574090a0a3b32\n"
".quad 0x752e34762e64322e,0x7b203233662e3233,0x7225202c34337225,0x36337225202c3533\n"
".quad 0x2c7d37337225202c,0x616d497865745b20,0x3166257b202c6567,0x7d33366625202c36\n"
".quad 0x6f6c2e090a0a3b5d,0x3837373120332063,0x622e766f6d0a3520,0x3434316625203233\n"
".quad 0x0a3b34337225202c,0x203233622e766f6d,0x25202c3534316625,0x766f6d0a3b353372\n"
".quad 0x316625203233622e,0x36337225202c3634,0x3220636f6c2e0a3b,0x75730a3120303520\n"
".quad 0x6625203233662e62,0x316625202c373431,0x3b356625202c3434,0x3233662e6275730a\n"
".quad 0x202c383431662520,0x25202c3534316625,0x2e6c756d0a3b3666,0x3431662520323366\n"
".quad 0x3834316625202c39,0x3b3834316625202c,0x2e6e722e616d660a,0x3531662520323366\n"
".quad 0x3734316625202c30,0x2c3734316625202c,0x0a3b393431662520,0x203233662e627573\n"
".quad 0x25202c3135316625,0x6625202c36343166,0x722e616d660a3b37,0x6625203233662e6e\n"
".quad 0x316625202c323531,0x35316625202c3135,0x3035316625202c31,0x3520636f6c2e0a3b\n"
".quad 0x756d0a3120383420,0x6625203233662e6c,0x316625202c333531,0x32326625202c3235\n"
".quad 0x722e616d660a3b30,0x6625203233662e6e,0x326625202c343531,0x32326625202c3732\n"
".quad 0x3b37316625202c37,0x2e6e722e616d660a,0x3531662520323366,0x3435316625202c35\n"
".quad 0x374143336630202c,0x6625202c35304632,0x6c756d0a3b333531,0x316625203233662e\n"
".quad 0x35316625202c3635,0x4246426630202c35,0x2e0a3b4233414138,0x3335203320636f6c\n"
".quad 0x2e3278650a352031,0x662e786f72707061,0x3735316625203233,0x3b3635316625202c\n"
".quad 0x203520636f6c2e0a,0x616d660a31203135,0x203233662e6e722e,0x25202c3835316625\n"
".quad 0x6625202c34343166,0x316625202c373531,0x636f6c2e0a3b3833,0x0a31203235203520\n"
".quad 0x662e6e722e616d66,0x3935316625203233,0x2c3534316625202c,0x202c373531662520\n"
".quad 0x2e0a3b3933316625,0x3335203520636f6c,0x722e616d660a3120,0x6625203233662e6e\n"
".quad 0x316625202c303631,0x35316625202c3634,0x3034316625202c37,0x3520636f6c2e0a3b\n"
".quad 0x64610a3120363520,0x6625203233662e64,0x316625202c313631,0x35316625202c3134\n"
".quad 0x20636f6c2e0a3b37,0x730a312030362035,0x662e74672e707465,0x202c387025203233\n"
".quad 0x30202c3735316625,0x3037443341433366,0x2e706c65730a3b41,0x3631662520323366\n"
".quad 0x4143336630202c32,0x30202c3530463237,0x3030303030303066,0x0a3b387025202c30\n"
".quad 0x36203520636f6c2e,0x2e6464610a312030,0x3631662520323366,0x3334316625202c33\n"
".quad 0x3b3236316625202c,0x322e786574090a0a,0x3233752e34762e64,0x72257b203233662e\n"
".quad 0x39337225202c3833,0x202c30347225202c,0x5b202c7d31347225,0x6567616d49786574\n"
".quad 0x2c383166257b202c,0x3b5d7d3336662520,0x20636f6c2e090a0a,0x3520383737312033\n"
".quad 0x3233622e766f6d0a,0x202c343631662520,0x6f6d0a3b38337225,0x6625203233622e76\n"
".quad 0x337225202c353631,0x622e766f6d0a3b39,0x3636316625203233,0x0a3b30347225202c\n"
".quad 0x35203220636f6c2e,0x2e6275730a312030,0x3631662520323366,0x3436316625202c37\n"
".quad 0x730a3b356625202c,0x25203233662e6275,0x6625202c38363166,0x366625202c353631\n"
".quad 0x33662e6c756d0a3b,0x2c39363166252032,0x202c383631662520,0x660a3b3836316625\n"
".quad 0x33662e6e722e616d,0x2c30373166252032,0x202c373631662520,0x25202c3736316625\n"
".quad 0x75730a3b39363166,0x6625203233662e62,0x316625202c313731,0x3b376625202c3636\n"
".quad 0x2e6e722e616d660a,0x3731662520323366,0x3137316625202c32,0x2c3137316625202c\n"
".quad 0x0a3b303731662520,0x34203520636f6c2e,0x2e6c756d0a312038,0x3731662520323366\n"
".quad 0x3237316625202c33,0x3b3032326625202c,0x2e6e722e616d660a,0x3731662520323366\n"
".quad 0x3732326625202c34,0x2c3732326625202c,0x660a3b3931662520,0x33662e6e722e616d\n"
".quad 0x2c35373166252032,0x202c343731662520,0x4632374143336630,0x37316625202c3530\n"
".quad 0x662e6c756d0a3b33,0x3637316625203233,0x2c3537316625202c,0x4138424642663020\n"
".quad 0x6f6c2e0a3b423341,0x2031333520332063,0x70612e3278650a35,0x3233662e786f7270\n"
".quad 0x202c373731662520,0x2e0a3b3637316625,0x3135203520636f6c,0x722e616d660a3120\n"
".quad 0x6625203233662e6e,0x316625202c383731,0x37316625202c3436,0x3835316625202c37\n"
".quad 0x3520636f6c2e0a3b,0x6d660a3120323520,0x3233662e6e722e61,0x202c393731662520\n"
".quad 0x25202c3536316625,0x6625202c37373166,0x6f6c2e0a3b393531,0x3120333520352063\n"
".quad 0x2e6e722e616d660a,0x3831662520323366,0x3636316625202c30,0x2c3737316625202c\n"
".quad 0x0a3b303631662520,0x35203520636f6c2e,0x2e6464610a312036,0x3831662520323366\n"
".quad 0x3136316625202c31,0x3b3737316625202c,0x203520636f6c2e0a,0x7465730a31203036\n"
".quad 0x3233662e74672e70,0x6625202c39702520,0x336630202c373731,0x3b41303744334143\n"
".quad 0x33662e706c65730a,0x2c32383166252032,0x3237414333663020,0x306630202c353046\n"
".quad 0x2c30303030303030,0x6c2e0a3b39702520,0x203036203520636f,0x33662e6464610a31\n"
".quad 0x2c33383166252032,0x202c333631662520,0x0a0a3b3238316625,0x2e64322e78657409\n"
".quad 0x662e3233752e3476,0x323472257b203233,0x202c33347225202c,0x7225202c34347225\n"
".quad 0x65745b202c7d3534,0x202c6567616d4978,0x25202c303266257b,0x0a0a3b5d7d333666\n"
".quad 0x203320636f6c2e09,0x6d0a352038373731,0x25203233622e766f,0x7225202c34383166\n"
".quad 0x2e766f6d0a3b3234,0x3831662520323362,0x3b33347225202c35,0x3233622e766f6d0a\n"
".quad 0x202c363831662520,0x6c2e0a3b34347225,0x203035203220636f,0x33662e6275730a31\n"
".quad 0x2c37383166252032,0x202c343831662520,0x6275730a3b356625,0x316625203233662e\n"
".quad 0x38316625202c3838,0x0a3b366625202c35,0x203233662e6c756d,0x25202c3938316625\n"
".quad 0x6625202c38383166,0x616d660a3b383831,0x203233662e6e722e,0x25202c3039316625\n"
".quad 0x6625202c37383166,0x316625202c373831,0x2e6275730a3b3938,0x3931662520323366\n"
".quad 0x3638316625202c31,0x660a3b376625202c,0x33662e6e722e616d,0x2c32393166252032\n"
".quad 0x202c313931662520,0x25202c3139316625,0x6c2e0a3b30393166,0x203834203520636f\n"
".quad 0x33662e6c756d0a31,0x2c33393166252032,0x202c323931662520,0x660a3b3032326625\n"
".quad 0x33662e6e722e616d,0x2c34393166252032,0x202c373232662520,0x25202c3732326625\n"
".quad 0x616d660a3b313266,0x203233662e6e722e,0x25202c3539316625,0x6630202c34393166\n"
".quad 0x3530463237414333,0x3b3339316625202c,0x3233662e6c756d0a,0x202c363931662520\n"
".quad 0x30202c3539316625,0x3341413842464266,0x20636f6c2e0a3b42,0x0a35203133352033\n"
".quad 0x727070612e327865,0x25203233662e786f,0x6625202c37393166,0x6f6c2e0a3b363931\n"
".quad 0x3120313520352063,0x2e6e722e616d660a,0x3232662520323366,0x3438316625202c32\n"
".quad 0x2c3739316625202c,0x0a3b383731662520,0x35203520636f6c2e,0x2e616d660a312032\n"
".quad 0x25203233662e6e72,0x6625202c33323266,0x316625202c353831,0x37316625202c3739\n"
".quad 0x20636f6c2e0a3b39,0x660a312033352035,0x33662e6e722e616d,0x2c34323266252032\n"
".quad 0x202c363831662520,0x25202c3739316625,0x6c2e0a3b30383166,0x203635203520636f\n"
".quad 0x33662e6464610a31,0x2c36323266252032,0x202c313831662520,0x2e0a3b3739316625\n"
".quad 0x3036203520636f6c,0x2e707465730a3120,0x25203233662e7467,0x316625202c303170\n"
".quad 0x43336630202c3739,0x0a3b413037443341,0x3233662e706c6573,0x202c383931662520\n"
".quad 0x4632374143336630,0x30306630202c3530,0x202c303030303030,0x6c2e0a3b30317025\n"
".quad 0x203036203520636f,0x33662e6464610a31,0x2c35323266252032,0x202c333831662520\n"
".quad 0x2e0a3b3839316625,0x3134203520636f6c,0x2e6464610a333220,0x3232662520323366\n"
".quad 0x3732326625202c37,0x303846336630202c,0x64610a3b30303030,0x7225203233732e64\n"
".quad 0x202c327225202c33,0x20636f6c2e0a3b31,0x730a312031342035,0x732e656e2e707465\n"
".quad 0x2c31317025203233,0x3b37202c33722520,0x3233752e766f6d0a,0x25202c3836722520\n"
".quad 0x636f6c2e0a3b3372,0x0a31203134203520,0x7262203131702540,0x3b335f3442422061\n"
".quad 0x3520636f6c2e0a0a,0x63720a3120343620,0x3233662e6e722e70,0x202c393931662520\n"
".quad 0x6d0a3b3632326625,0x25203233662e766f,0x6630202c30303266,0x3030303030384633\n"
".quad 0x7261702e646c0a3b,0x25203233662e6d61,0x5f5b202c31323266,0x696a504e4e4b335a\n"
".quad 0x617261705f666669,0x6c2e0a3b5d345f6d,0x203137203520636f,0x33662e6275730a31\n"
".quad 0x2c31303266252032,0x202c303032662520,0x730a3b3132326625,0x662e74672e707465\n"
".quad 0x2c32317025203233,0x202c353232662520,0x4433413446336630,0x706c65730a3b3137\n"
".quad 0x326625203233662e,0x32326625202c3230,0x3130326625202c31,0x0a3b32317025202c\n"
".quad 0x34203220636f6c2e,0x2e67656e0a312036,0x3032662520323366,0x3232326625202c33\n"
".quad 0x6e722e616d660a3b,0x326625203233662e,0x30326625202c3430,0x3939316625202c33\n"
".quad 0x6d0a3b356625202c,0x25203233662e6c75,0x6625202c35303266,0x326625202c343032\n"
".quad 0x2e616d660a3b3230,0x25203233662e6e72,0x6625202c36303266,0x316625202c323232\n"
".quad 0x30326625202c3939,0x20636f6c2e0a3b35,0x6e0a312036342032,0x25203233662e6765\n"
".quad 0x6625202c37303266,0x616d660a3b333232,0x203233662e6e722e,0x25202c3830326625\n"
".quad 0x6625202c37303266,0x366625202c393931,0x33662e6c756d0a3b,0x2c39303266252032\n"
".quad 0x202c383032662520,0x660a3b3230326625,0x33662e6e722e616d,0x2c30313266252032\n"
".quad 0x202c333232662520,0x25202c3939316625,0x6c2e0a3b39303266,0x203634203220636f\n"
".quad 0x33662e67656e0a31,0x2c31313266252032,0x0a3b343232662520,0x662e6e722e616d66\n"
".quad 0x3231326625203233,0x2c3131326625202c,0x202c393931662520,0x6c756d0a3b376625\n"
".quad 0x326625203233662e,0x31326625202c3331,0x3230326625202c32,0x6e722e616d660a3b\n"
".quad 0x326625203233662e,0x32326625202c3431,0x3939316625202c34,0x3b3331326625202c\n"
".quad 0x3233662e766f6d0a,0x202c353132662520,0x3030303030306630,0x636f6c2e0a3b3030\n"
".quad 0x0a31203835203220,0x203233662e6c756d,0x25202c3631326625,0x6630202c35313266\n"
".quad 0x3030303046373334,0x3320636f6c2e0a3b,0x0a35203334333120,0x2e697a722e747663\n"
".quad 0x203233662e323373,0x6625202c37347225,0x6f6c2e0a3b363132,0x3120383520322063\n"
".quad 0x3233622e6c68730a,0x25202c3834722520,0x3b3432202c373472,0x3233662e6c756d0a\n"
".quad 0x202c373132662520,0x30202c3431326625,0x3030304637333466,0x20636f6c2e0a3b30\n"
".quad 0x3520333433312033,0x697a722e7476630a,0x3233662e3233732e,0x25202c3934722520\n"
".quad 0x6c2e0a3b37313266,0x203835203220636f,0x33622e6c68730a31,0x202c303572252032\n"
".quad 0x3631202c39347225,0x33662e6c756d0a3b,0x2c38313266252032,0x202c303132662520\n"
".quad 0x3030463733346630,0x636f6c2e0a3b3030,0x2033343331203320,0x7a722e7476630a35\n"
".quad 0x33662e3233732e69,0x202c313572252032,0x2e0a3b3831326625,0x3835203220636f6c\n"
".quad 0x622e6c68730a3120,0x2c32357225203233,0x38202c3135722520,0x33662e6c756d0a3b\n"
".quad 0x2c39313266252032,0x202c363032662520,0x3030463733346630,0x636f6c2e0a3b3030\n"
".quad 0x2033343331203320,0x7a722e7476630a35,0x33662e3233732e69,0x202c333572252032\n"
".quad 0x2e0a3b3931326625,0x3835203220636f6c,0x33622e726f0a3120,0x202c343572252032\n"
".quad 0x7225202c30357225,0x622e726f0a3b3834,0x2c35357225203233,0x25202c3435722520\n"
".quad 0x2e726f0a3b333572,0x3635722520323362,0x202c35357225202c,0x646c0a3b32357225\n"
".quad 0x752e6d617261702e,0x2c37367225203233,0x4e4e4b335a5f5b20,0x705f666669696a50\n"
".quad 0x3b5d315f6d617261,0x203520636f6c2e0a,0x64616d0a31203737,0x203233732e6f6c2e\n"
".quad 0x7225202c35367225,0x37367225202c3231,0x6c0a3b387225202c,0x2e6d617261702e64\n"
".quad 0x356c722520343675,0x4e4b335a5f5b202c,0x5f666669696a504e,0x5d305f6d61726170\n"
".quad 0x742e617476630a3b,0x6c61626f6c672e6f,0x6c7225203436752e,0x3b356c7225202c32\n"
".quad 0x203520636f6c2e0a,0x6c756d0a31203737,0x33732e656469772e,0x202c336c72252032\n"
".quad 0x3b34202c35367225,0x3436732e6464610a,0x25202c346c722520,0x6c7225202c326c72\n"
".quad 0x6c672e74730a3b33,0x3233752e6c61626f,0x2c5d346c72255b20,0x2e0a3b3635722520\n"
".quad 0x3937203520636f6c,0x0a3b7465720a3220,0x72746e652e0a0a7d,0x4e4e4b375a5f2079\n"
".quad 0x69696a5067616964,0x7261702e0a286666,0x203436752e206d61,0x69644e4e4b375a5f\n"
".quad 0x666669696a506761,0x305f6d617261705f,0x6d617261702e0a2c,0x5a5f203233752e20\n"
".quad 0x676169644e4e4b37,0x705f666669696a50,0x0a2c315f6d617261,0x2e206d617261702e\n"
".quad 0x4b375a5f20323375,0x6a50676169644e4e,0x7261705f66666969,0x702e0a2c325f6d61\n"
".quad 0x33662e206d617261,0x4e4e4b375a5f2032,0x69696a5067616964,0x6d617261705f6666\n"
".quad 0x7261702e0a2c335f,0x203233662e206d61,0x69644e4e4b375a5f,0x666669696a506761\n"
".quad 0x345f6d617261705f,0x65722e0a7b0a290a,0x25203233662e2067,0x0a3b3e3237313c66\n"
".quad 0x72702e206765722e,0x33313c7025206465,0x206765722e0a3b3e,0x3c7225203233732e\n"
".quad 0x65722e0a3b3e3836,0x25203436732e2067,0x0a0a3b3e363c6c72,0x617261702e646c0a\n"
".quad 0x7225203233752e6d,0x4b375a5f5b202c31,0x6a50676169644e4e,0x7261705f66666969\n"
".quad 0x6c0a3b5d315f6d61,0x2e6d617261702e64,0x2c34722520323375,0x4e4e4b375a5f5b20\n"
".quad 0x69696a5067616964,0x6d617261705f6666,0x6f6c2e0a3b5d325f,0x2036303120352063\n"
".quad 0x33752e766f6d0a31,0x25202c3572252032,0x0a3b782e6469746e,0x203233752e766f6d\n"
".quad 0x746325202c367225,0x6d0a3b782e646961,0x25203233752e766f,0x64697425202c3772\n"
".quad 0x2e64616d0a3b782e,0x25203233732e6f6c,0x2c367225202c3872,0x7225202c35722520\n"
".quad 0x20636f6c2e0a3b37,0x0a31203730312035,0x203233752e766f6d,0x746325202c397225\n"
".quad 0x6d0a3b792e646961,0x25203233752e766f,0x746e25202c303172,0x6f6d0a3b792e6469\n"
".quad 0x7225203233752e76,0x64697425202c3131,0x2e64616d0a3b792e,0x25203233732e6f6c\n"
".quad 0x397225202c323172,0x202c30317225202c,0x6c2e0a3b31317225,0x393031203520636f\n"
".quad 0x722e7476630a3120,0x33732e3233662e6e,0x202c353266252032,0x6464610a3b387225\n"
".quad 0x326625203233662e,0x202c35326625202c,0x3030303046336630,0x636f6c2e0a3b3030\n"
".quad 0x3120303131203520,0x2e6e722e7476630a,0x203233732e323366,0x7225202c36326625\n"
".quad 0x2e6464610a3b3231,0x2c33662520323366,0x30202c3632662520,0x3030303030463366\n"
".quad 0x20636f6c2e0a3b30,0x0a31203231312035,0x2e746c2e70746573,0x2c31702520323373\n"
".quad 0x7225202c38722520,0x2e707465730a3b31,0x25203233732e746c,0x32317225202c3270\n"
".quad 0x610a3b347225202c,0x20646572702e646e,0x317025202c337025,0x2e0a3b327025202c\n"
".quad 0x3131203520636f6c,0x337025400a312032,0x3542422061726220,0x6f6c2e0a0a3b325f\n"
".quad 0x2030343120352063,0x0a0a3b7465720a32,0x6d0a3a325f354242,0x25203233752e766f\n"
".quad 0x0a3b30202c373172,0x64322e786574090a,0x2e3233752e34762e,0x3172257b20323366\n"
".quad 0x2c34317225202c33,0x25202c3531722520,0x745b202c7d363172,0x2c6567616d497865\n"
".quad 0x25202c3266257b20,0x090a0a3b5d7d3366,0x31203320636f6c2e,0x6f6d0a3520383737\n"
".quad 0x6625203233622e76,0x3b33317225202c34,0x3233622e766f6d0a,0x7225202c35662520\n"
".quad 0x2e766f6d0a3b3431,0x2c36662520323362,0x2e0a3b3531722520,0x3231203520636f6c\n"
".quad 0x2e6464610a312032,0x2c37662520323366,0x6630202c32662520,0x3030303030343043\n"
".quad 0x33662e766f6d0a3b,0x2c31373166252032,0x3030343043663020,0x6f6c2e0a3b303030\n"
".quad 0x2036323120352063,0x33662e6c756d0a31,0x25202c3866252032,0x6630202c31373166\n"
".quad 0x3030303030343043,0x3520636f6c2e0a3b,0x0a33322030323120,0x203233662e646461\n"
".quad 0x6625202c31336625,0x336630202c313731,0x3b30303030303846,0x203520636f6c2e0a\n"
".quad 0x64610a3120323231,0x6625203233662e64,0x202c326625202c39,0x6c2e0a3b31336625\n"
".quad 0x363231203520636f,0x662e6c756d0a3120,0x2c30316625203233,0x25202c3133662520\n"
".quad 0x6f6c2e0a3b313366,0x2030323120352063,0x662e6464610a3332,0x2c32336625203233\n"
".quad 0x30202c3133662520,0x3030303038463366,0x20636f6c2e0a3b30,0x0a31203232312035\n"
".quad 0x203233662e646461,0x6625202c31316625,0x3b32336625202c32,0x203520636f6c2e0a\n"
".quad 0x756d0a3120363231,0x6625203233662e6c,0x32336625202c3231,0x0a3b32336625202c\n"
".quad 0x31203520636f6c2e,0x64610a3332203032,0x6625203233662e64,0x32336625202c3333\n"
".quad 0x303846336630202c,0x6c2e0a3b30303030,0x323231203520636f,0x662e6464610a3120\n"
".quad 0x2c33316625203233,0x6625202c32662520,0x636f6c2e0a3b3333,0x3120363231203520\n"
".quad 0x3233662e6c756d0a,0x25202c3431662520,0x336625202c333366,0x20636f6c2e0a3b33\n"
".quad 0x3332203032312035,0x3233662e6464610a,0x25202c3433662520,0x336630202c333366\n"
".quad 0x3b30303030303846,0x203520636f6c2e0a,0x64610a3120323231,0x6625203233662e64\n"
".quad 0x2c326625202c3531,0x2e0a3b3433662520,0x3231203520636f6c,0x2e6c756d0a312036\n"
".quad 0x3631662520323366,0x202c34336625202c,0x6c2e0a3b34336625,0x303231203520636f\n"
".quad 0x2e6464610a333220,0x3533662520323366,0x202c34336625202c,0x3030303846336630\n"
".quad 0x636f6c2e0a3b3030,0x3120323231203520,0x3233662e6464610a,0x25202c3731662520\n"
".quad 0x35336625202c3266,0x3520636f6c2e0a3b,0x6d0a312036323120,0x25203233662e6c75\n"
".quad 0x336625202c383166,0x3b35336625202c35,0x203520636f6c2e0a,0x610a333220303231\n"
".quad 0x25203233662e6464,0x336625202c363366,0x3846336630202c35,0x2e0a3b3030303030\n"
".quad 0x3231203520636f6c,0x2e6464610a312032,0x3931662520323366,0x25202c326625202c\n"
".quad 0x6f6c2e0a3b363366,0x2036323120352063,0x33662e6c756d0a31,0x202c303266252032\n"
".quad 0x6625202c36336625,0x2e766f6d0a3b3633,0x3731662520323366,0x3030306630202c30\n"
".quad 0x6d0a3b3030303030,0x25203233752e766f,0x317225202c373672,0x5f3542420a0a3b37\n"
".quad 0x752e766f6d0a3a33,0x202c327225203233,0x6c2e0a3b37367225,0x323231203520636f\n"
".quad 0x662e6464610a3120,0x2c30356625203233,0x6625202c33662520,0x74090a0a3b313731\n"
".quad 0x34762e64322e7865,0x3233662e3233752e,0x202c383172257b20,0x7225202c39317225\n"
".quad 0x31327225202c3032,0x497865745b202c7d,0x257b202c6567616d,0x30356625202c3766\n"
".quad 0x6c2e090a0a3b5d7d,0x373731203320636f,0x2e766f6d0a352038,0x3135662520323362\n"
".quad 0x0a3b38317225202c,0x203233622e766f6d,0x7225202c32356625,0x2e766f6d0a3b3931\n"
".quad 0x3335662520323362,0x0a3b30327225202c,0x35203220636f6c2e,0x2e6275730a312030\n"
".quad 0x3435662520323366,0x202c31356625202c,0x6275730a3b346625,0x356625203233662e\n"
".quad 0x2c32356625202c35,0x756d0a3b35662520,0x6625203233662e6c,0x35356625202c3635\n"
".quad 0x0a3b35356625202c,0x662e6e722e616d66,0x2c37356625203233,0x25202c3435662520\n"
".quad 0x356625202c343566,0x662e6275730a3b36,0x2c38356625203233,0x25202c3335662520\n"
".quad 0x2e616d660a3b3666,0x25203233662e6e72,0x356625202c393566,0x2c38356625202c38\n"
".quad 0x6c0a3b3735662520,0x2e6d617261702e64,0x3631662520323366,0x4b375a5f5b202c39\n"
".quad 0x6a50676169644e4e,0x7261705f66666969,0x2e0a3b5d335f6d61,0x3231203520636f6c\n"
".quad 0x2e6c756d0a312036,0x3036662520323366,0x202c39356625202c,0x660a3b3936316625\n"
".quad 0x33662e6e722e616d,0x202c313666252032,0x25202c3137316625,0x6625202c31373166\n"
".quad 0x722e616d660a3b38,0x6625203233662e6e,0x31366625202c3236,0x374143336630202c\n"
".quad 0x6625202c35304632,0x2e6c756d0a3b3036,0x3336662520323366,0x202c32366625202c\n"
".quad 0x4141384246426630,0x636f6c2e0a3b4233,0x3520313335203320,0x7070612e3278650a\n"
".quad 0x203233662e786f72,0x6625202c34366625,0x636f6c2e0a3b3336,0x3120303331203520\n"
".quad 0x74672e707465730a,0x347025203233662e,0x202c34366625202c,0x3744334143336630\n"
".quad 0x706c65730a3b4130,0x366625203233662e,0x4143336630202c35,0x30202c3530463237\n"
".quad 0x3030303030303066,0x0a3b347025202c30,0x31203520636f6c2e,0x6464610a31203033\n"
".quad 0x366625203233662e,0x3037316625202c36,0x0a3b35366625202c,0x64322e786574090a\n"
".quad 0x2e3233752e34762e,0x3272257b20323366,0x2c33327225202c32,0x25202c3432722520\n"
".quad 0x745b202c7d353272,0x2c6567616d497865,0x25202c3966257b20,0x0a0a3b5d7d303566\n"
".quad 0x203320636f6c2e09,0x6d0a352038373731,0x25203233622e766f,0x327225202c373666\n"
".quad 0x622e766f6d0a3b32,0x2c38366625203233,0x6d0a3b3332722520,0x25203233622e766f\n"
".quad 0x327225202c393666,0x20636f6c2e0a3b34,0x730a312030352032,0x25203233662e6275\n"
".quad 0x366625202c303766,0x0a3b346625202c37,0x203233662e627573,0x6625202c31376625\n"
".quad 0x3b356625202c3836,0x3233662e6c756d0a,0x25202c3237662520,0x376625202c313766\n"
".quad 0x722e616d660a3b31,0x6625203233662e6e,0x30376625202c3337,0x202c30376625202c\n"
".quad 0x75730a3b32376625,0x6625203233662e62,0x39366625202c3437,0x660a3b366625202c\n"
".quad 0x33662e6e722e616d,0x202c353766252032,0x6625202c34376625,0x33376625202c3437\n"
".quad 0x3520636f6c2e0a3b,0x6d0a312036323120,0x25203233662e6c75,0x376625202c363766\n"
".quad 0x3936316625202c35,0x6e722e616d660a3b,0x376625203233662e,0x3137316625202c37\n"
".quad 0x2c3137316625202c,0x660a3b3031662520,0x33662e6e722e616d,0x202c383766252032\n"
".quad 0x6630202c37376625,0x3530463237414333,0x0a3b36376625202c,0x203233662e6c756d\n"
".quad 0x6625202c39376625,0x46426630202c3837,0x0a3b423341413842,0x35203320636f6c2e\n"
".quad 0x3278650a35203133,0x2e786f727070612e,0x3038662520323366,0x0a3b39376625202c\n"
".quad 0x31203520636f6c2e,0x7465730a31203033,0x3233662e74672e70,0x6625202c35702520\n"
".quad 0x43336630202c3038,0x0a3b413037443341,0x3233662e706c6573,0x30202c3138662520\n"
".quad 0x3046323741433366,0x3030306630202c35,0x25202c3030303030,0x636f6c2e0a3b3570\n"
".quad 0x3120303331203520,0x3233662e6464610a,0x25202c3238662520,0x386625202c363666\n"
".quad 0x786574090a0a3b31,0x752e34762e64322e,0x7b203233662e3233,0x7225202c36327225\n"
".quad 0x38327225202c3732,0x2c7d39327225202c,0x616d497865745b20,0x3166257b202c6567\n"
".quad 0x7d30356625202c31,0x6f6c2e090a0a3b5d,0x3837373120332063,0x622e766f6d0a3520\n"
".quad 0x2c33386625203233,0x6d0a3b3632722520,0x25203233622e766f,0x327225202c343866\n"
".quad 0x622e766f6d0a3b37,0x2c35386625203233,0x2e0a3b3832722520,0x3035203220636f6c\n"
".quad 0x662e6275730a3120,0x2c36386625203233,0x25202c3338662520,0x2e6275730a3b3466\n"
".quad 0x3738662520323366,0x202c34386625202c,0x6c756d0a3b356625,0x386625203233662e\n"
".quad 0x2c37386625202c38,0x660a3b3738662520,0x33662e6e722e616d,0x202c393866252032\n"
".quad 0x6625202c36386625,0x38386625202c3638,0x33662e6275730a3b,0x202c303966252032\n"
".quad 0x6625202c35386625,0x722e616d660a3b36,0x6625203233662e6e,0x30396625202c3139\n"
".quad 0x202c30396625202c,0x6c2e0a3b39386625,0x363231203520636f,0x662e6c756d0a3120\n"
".quad 0x2c32396625203233,0x25202c3139662520,0x6d660a3b39363166,0x3233662e6e722e61\n"
".quad 0x25202c3339662520,0x6625202c31373166,0x316625202c313731,0x722e616d660a3b32\n"
".quad 0x6625203233662e6e,0x33396625202c3439,0x374143336630202c,0x6625202c35304632\n"
".quad 0x2e6c756d0a3b3239,0x3539662520323366,0x202c34396625202c,0x4141384246426630\n"
".quad 0x636f6c2e0a3b4233,0x3520313335203320,0x7070612e3278650a,0x203233662e786f72\n"
".quad 0x6625202c36396625,0x636f6c2e0a3b3539,0x3120303331203520,0x74672e707465730a\n"
".quad 0x367025203233662e,0x202c36396625202c,0x3744334143336630,0x706c65730a3b4130\n"
".quad 0x396625203233662e,0x4143336630202c37,0x30202c3530463237,0x3030303030303066\n"
".quad 0x0a3b367025202c30,0x31203520636f6c2e,0x6464610a31203033,0x396625203233662e\n"
".quad 0x2c32386625202c38,0x0a0a3b3739662520,0x2e64322e78657409,0x662e3233752e3476\n"
".quad 0x303372257b203233,0x202c31337225202c,0x7225202c32337225,0x65745b202c7d3333\n"
".quad 0x202c6567616d4978,0x25202c333166257b,0x0a0a3b5d7d303566,0x203320636f6c2e09\n"
".quad 0x6d0a352038373731,0x25203233622e766f,0x337225202c393966,0x622e766f6d0a3b30\n"
".quad 0x3030316625203233,0x0a3b31337225202c,0x203233622e766f6d,0x25202c3130316625\n"
".quad 0x6f6c2e0a3b323372,0x3120303520322063,0x3233662e6275730a,0x202c323031662520\n"
".quad 0x6625202c39396625,0x662e6275730a3b34,0x3330316625203233,0x2c3030316625202c\n"
".quad 0x756d0a3b35662520,0x6625203233662e6c,0x316625202c343031,0x30316625202c3330\n"
".quad 0x722e616d660a3b33,0x6625203233662e6e,0x316625202c353031,0x30316625202c3230\n"
".quad 0x3430316625202c32,0x33662e6275730a3b,0x2c36303166252032,0x202c313031662520\n"
".quad 0x616d660a3b366625,0x203233662e6e722e,0x25202c3730316625,0x6625202c36303166\n"
".quad 0x316625202c363031,0x636f6c2e0a3b3530,0x3120363231203520,0x3233662e6c756d0a\n"
".quad 0x202c383031662520,0x25202c3730316625,0x6d660a3b39363166,0x3233662e6e722e61\n"
".quad 0x202c393031662520,0x25202c3137316625,0x6625202c31373166,0x2e616d660a3b3431\n"
".quad 0x25203233662e6e72,0x6625202c30313166,0x336630202c393031,0x2c35304632374143\n"
".quad 0x0a3b383031662520,0x203233662e6c756d,0x25202c3131316625,0x6630202c30313166\n"
".quad 0x4233414138424642,0x3320636f6c2e0a3b,0x650a352031333520,0x6f727070612e3278\n"
".quad 0x6625203233662e78,0x316625202c323131,0x636f6c2e0a3b3131,0x3120303331203520\n"
".quad 0x74672e707465730a,0x377025203233662e,0x2c3231316625202c,0x4433414333663020\n"
".quad 0x6c65730a3b413037,0x6625203233662e70,0x336630202c333131,0x2c35304632374143\n"
".quad 0x3030303030663020,0x377025202c303030,0x3520636f6c2e0a3b,0x610a312030333120\n"
".quad 0x25203233662e6464,0x6625202c34313166,0x31316625202c3839,0x786574090a0a3b33\n"
".quad 0x752e34762e64322e,0x7b203233662e3233,0x7225202c34337225,0x36337225202c3533\n"
".quad 0x2c7d37337225202c,0x616d497865745b20,0x3166257b202c6567,0x7d30356625202c35\n"
".quad 0x6f6c2e090a0a3b5d,0x3837373120332063,0x622e766f6d0a3520,0x3531316625203233\n"
".quad 0x0a3b34337225202c,0x203233622e766f6d,0x25202c3631316625,0x766f6d0a3b353372\n"
".quad 0x316625203233622e,0x36337225202c3731,0x3220636f6c2e0a3b,0x75730a3120303520\n"
".quad 0x6625203233662e62,0x316625202c383131,0x3b346625202c3531,0x3233662e6275730a\n"
".quad 0x202c393131662520,0x25202c3631316625,0x2e6c756d0a3b3566,0x3231662520323366\n"
".quad 0x3931316625202c30,0x3b3931316625202c,0x2e6e722e616d660a,0x3231662520323366\n"
".quad 0x3831316625202c31,0x2c3831316625202c,0x0a3b303231662520,0x203233662e627573\n"
".quad 0x25202c3232316625,0x6625202c37313166,0x722e616d660a3b36,0x6625203233662e6e\n"
".quad 0x316625202c333231,0x32316625202c3232,0x3132316625202c32,0x3520636f6c2e0a3b\n"
".quad 0x6d0a312036323120,0x25203233662e6c75,0x6625202c34323166,0x316625202c333231\n"
".quad 0x2e616d660a3b3936,0x25203233662e6e72,0x6625202c35323166,0x316625202c313731\n"
".quad 0x36316625202c3137,0x6e722e616d660a3b,0x316625203233662e,0x32316625202c3632\n"
".quad 0x4143336630202c35,0x25202c3530463237,0x756d0a3b34323166,0x6625203233662e6c\n"
".quad 0x316625202c373231,0x46426630202c3632,0x0a3b423341413842,0x35203320636f6c2e\n"
".quad 0x3278650a35203133,0x2e786f727070612e,0x3231662520323366,0x3732316625202c38\n"
".quad 0x3520636f6c2e0a3b,0x730a312030333120,0x662e74672e707465,0x202c387025203233\n"
".quad 0x30202c3832316625,0x3037443341433366,0x2e706c65730a3b41,0x3231662520323366\n"
".quad 0x4143336630202c39,0x30202c3530463237,0x3030303030303066,0x0a3b387025202c30\n"
".quad 0x31203520636f6c2e,0x6464610a31203033,0x316625203233662e,0x31316625202c3033\n"
".quad 0x3932316625202c34,0x2e786574090a0a3b,0x33752e34762e6432,0x257b203233662e32\n"
".quad 0x337225202c383372,0x2c30347225202c39,0x202c7d3134722520,0x67616d497865745b\n"
".quad 0x373166257b202c65,0x5d7d30356625202c,0x636f6c2e090a0a3b,0x2038373731203320\n"
".quad 0x33622e766f6d0a35,0x2c31333166252032,0x6d0a3b3833722520,0x25203233622e766f\n"
".quad 0x7225202c32333166,0x2e766f6d0a3b3933,0x3331662520323362,0x3b30347225202c33\n"
".quad 0x203220636f6c2e0a,0x6275730a31203035,0x316625203233662e,0x33316625202c3433\n"
".quad 0x0a3b346625202c31,0x203233662e627573,0x25202c3533316625,0x6625202c32333166\n"
".quad 0x662e6c756d0a3b35,0x3633316625203233,0x2c3533316625202c,0x0a3b353331662520\n"
".quad 0x662e6e722e616d66,0x3733316625203233,0x2c3433316625202c,0x202c343331662520\n"
".quad 0x730a3b3633316625,0x25203233662e6275,0x6625202c38333166,0x366625202c333331\n"
".quad 0x6e722e616d660a3b,0x316625203233662e,0x33316625202c3933,0x3833316625202c38\n"
".quad 0x3b3733316625202c,0x203520636f6c2e0a,0x756d0a3120363231,0x6625203233662e6c\n"
".quad 0x316625202c303431,0x36316625202c3933,0x722e616d660a3b39,0x6625203233662e6e\n"
".quad 0x316625202c313431,0x37316625202c3137,0x3b38316625202c31,0x2e6e722e616d660a\n"
".quad 0x3431662520323366,0x3134316625202c32,0x374143336630202c,0x6625202c35304632\n"
".quad 0x6c756d0a3b303431,0x316625203233662e,0x34316625202c3334,0x4246426630202c32\n"
".quad 0x2e0a3b4233414138,0x3335203320636f6c,0x2e3278650a352031,0x662e786f72707061\n"
".quad 0x3434316625203233,0x3b3334316625202c,0x203520636f6c2e0a,0x65730a3120303331\n"
".quad 0x33662e74672e7074,0x25202c3970252032,0x6630202c34343166,0x4130374433414333\n"
".quad 0x662e706c65730a3b,0x3534316625203233,0x374143336630202c,0x6630202c35304632\n"
".quad 0x3030303030303030,0x2e0a3b397025202c,0x3331203520636f6c,0x2e6464610a312030\n"
".quad 0x3431662520323366,0x3033316625202c36,0x3b3534316625202c,0x322e786574090a0a\n"
".quad 0x3233752e34762e64,0x72257b203233662e,0x33347225202c3234,0x202c34347225202c\n"
".quad 0x5b202c7d35347225,0x6567616d49786574,0x2c393166257b202c,0x3b5d7d3035662520\n"
".quad 0x20636f6c2e090a0a,0x3520383737312033,0x3233622e766f6d0a,0x202c373431662520\n"
".quad 0x6f6d0a3b32347225,0x6625203233622e76,0x347225202c383431,0x622e766f6d0a3b33\n"
".quad 0x3934316625203233,0x0a3b34347225202c,0x35203220636f6c2e,0x2e6275730a312030\n"
".quad 0x3531662520323366,0x3734316625202c30,0x730a3b346625202c,0x25203233662e6275\n"
".quad 0x6625202c31353166,0x356625202c383431,0x33662e6c756d0a3b,0x2c32353166252032\n"
".quad 0x202c313531662520,0x660a3b3135316625,0x33662e6e722e616d,0x2c33353166252032\n"
".quad 0x202c303531662520,0x25202c3035316625,0x75730a3b32353166,0x6625203233662e62\n"
".quad 0x316625202c343531,0x3b366625202c3934,0x2e6e722e616d660a,0x3531662520323366\n"
".quad 0x3435316625202c35,0x2c3435316625202c,0x0a3b333531662520,0x31203520636f6c2e\n"
".quad 0x6c756d0a31203632,0x316625203233662e,0x35316625202c3635,0x3936316625202c35\n"
".quad 0x6e722e616d660a3b,0x316625203233662e,0x37316625202c3735,0x3137316625202c31\n"
".quad 0x0a3b30326625202c,0x662e6e722e616d66,0x3835316625203233,0x2c3735316625202c\n"
".quad 0x3237414333663020,0x316625202c353046,0x2e6c756d0a3b3635,0x3531662520323366\n"
".quad 0x3835316625202c39,0x384246426630202c,0x6c2e0a3b42334141,0x313335203320636f\n"
".quad 0x612e3278650a3520,0x33662e786f727070,0x2c30363166252032,0x0a3b393531662520\n"
".quad 0x31203520636f6c2e,0x7465730a31203033,0x3233662e74672e70,0x25202c3031702520\n"
".quad 0x6630202c30363166,0x4130374433414333,0x662e706c65730a3b,0x3136316625203233\n"
".quad 0x374143336630202c,0x6630202c35304632,0x3030303030303030,0x0a3b30317025202c\n"
".quad 0x31203520636f6c2e,0x6464610a31203033,0x316625203233662e,0x34316625202c3037\n"
".quad 0x3136316625202c36,0x3520636f6c2e0a3b,0x0a33322039313120,0x203233662e646461\n"
".quad 0x25202c3137316625,0x6630202c31373166,0x3030303030384633,0x33732e6464610a3b\n"
".quad 0x25202c3372252032,0x2e0a3b31202c3272,0x3131203520636f6c,0x707465730a312039\n"
".quad 0x203233732e656e2e,0x7225202c31317025,0x6f6d0a3b37202c33,0x7225203233752e76\n"
".quad 0x3b337225202c3736,0x203520636f6c2e0a,0x25400a3120393131,0x2061726220313170\n"
".quad 0x0a0a3b335f354242,0x31203520636f6c2e,0x7465730a31203533,0x3233662e74672e70\n"
".quad 0x25202c3231702520,0x6630202c30373166,0x3137443341344633,0x662e706c65730a3b\n"
".quad 0x3236316625203233,0x303846336630202c,0x6630202c30303030,0x3030303030303030\n"
".quad 0x0a3b32317025202c,0x203233662e766f6d,0x30202c3336316625,0x3030303030303066\n"
".quad 0x662e766f6d0a3b30,0x3436316625203233,0x303846336630202c,0x6c2e0a3b30303030\n"
".quad 0x383331203520636f,0x662e6275730a3120,0x3536316625203233,0x2c3436316625202c\n"
".quad 0x0a3b323631662520,0x35203220636f6c2e,0x2e6c756d0a312038,0x3631662520323366\n"
".quad 0x3336316625202c36,0x463733346630202c,0x6c2e0a3b30303030,0x343331203320636f\n"
".quad 0x2e7476630a352033,0x2e3233732e697a72,0x3734722520323366,0x3b3636316625202c\n"
".quad 0x203220636f6c2e0a,0x6c68730a31203835,0x347225203233622e,0x2c37347225202c38\n"
".quad 0x6c756d0a3b343220,0x316625203233662e,0x36316625202c3736,0x3733346630202c35\n"
".quad 0x2e0a3b3030303046,0x3331203320636f6c,0x7476630a35203334,0x3233732e697a722e\n"
".quad 0x347225203233662e,0x3736316625202c39,0x3220636f6c2e0a3b,0x68730a3120383520\n"
".quad 0x7225203233622e6c,0x39347225202c3035,0x68730a3b3631202c,0x7225203233622e6c\n"
".quad 0x37347225202c3135,0x6c756d0a3b38202c,0x316625203233662e,0x36316625202c3836\n"
".quad 0x3733346630202c32,0x2e0a3b3030303046,0x3331203320636f6c,0x7476630a35203334\n"
".quad 0x3233732e697a722e,0x357225203233662e,0x3836316625202c32,0x3220636f6c2e0a3b\n"
".quad 0x726f0a3120383520,0x357225203233622e,0x2c30357225202c33,0x6f0a3b3834722520\n"
".quad 0x7225203233622e72,0x33357225202c3435,0x0a3b32357225202c,0x25203233622e726f\n"
".quad 0x357225202c353572,0x3b31357225202c34,0x617261702e646c0a,0x7225203233752e6d\n"
".quad 0x375a5f5b202c3636,0x50676169644e4e4b,0x61705f666669696a,0x0a3b5d315f6d6172\n"
".quad 0x31203520636f6c2e,0x64616d0a31203833,0x203233732e6f6c2e,0x7225202c34367225\n"
".quad 0x36367225202c3231,0x6c0a3b387225202c,0x2e6d617261702e64,0x356c722520343675\n"
".quad 0x4e4b375a5f5b202c,0x696a50676169644e,0x617261705f666669,0x76630a3b5d305f6d\n"
".quad 0x6c672e6f742e6174,0x3436752e6c61626f,0x25202c326c722520,0x6f6c2e0a3b356c72\n"
".quad 0x2038333120352063,0x69772e6c756d0a31,0x25203233732e6564,0x367225202c336c72\n"
".quad 0x64610a3b34202c34,0x7225203436732e64,0x326c7225202c346c,0x0a3b336c7225202c\n"
".quad 0x61626f6c672e7473,0x255b203233752e6c,0x7225202c5d346c72,0x636f6c2e0a3b3535\n"
".quad 0x3220303431203520,0x0a7d0a3b7465720a,0x207972746e652e0a,0x6a504d4c4e335a5f\n"
".quad 0x702e0a2866666969,0x36752e206d617261,0x4d4c4e335a5f2034,0x705f666669696a50\n"
".quad 0x0a2c305f6d617261,0x2e206d617261702e,0x4e335a5f20323375,0x666669696a504d4c\n"
".quad 0x315f6d617261705f,0x6d617261702e0a2c,0x5a5f203233752e20,0x69696a504d4c4e33\n"
".quad 0x6d617261705f6666,0x7261702e0a2c325f,0x203233662e206d61,0x6a504d4c4e335a5f\n"
".quad 0x7261705f66666969,0x702e0a2c335f6d61,0x33662e206d617261,0x4d4c4e335a5f2032\n"
".quad 0x705f666669696a50,0x290a345f6d617261,0x206765722e0a7b0a,0x3c6625203233662e\n"
".quad 0x722e0a3b3e363332,0x646572702e206765,0x0a3b3e393c702520,0x33732e206765722e\n"
".quad 0x3331313c72252032,0x206765722e0a3b3e,0x6c7225203436732e,0x6c0a0a0a3b3e363c\n"
".quad 0x2e6d617261702e64,0x2c31722520323375,0x4d4c4e335a5f5b20,0x705f666669696a50\n"
".quad 0x3b5d315f6d617261,0x617261702e646c0a,0x7225203233752e6d,0x4e335a5f5b202c38\n"
".quad 0x666669696a504d4c,0x325f6d617261705f,0x20636f6c2e0a3b5d,0x6d0a312034322037\n"
".quad 0x25203233752e766f,0x69746e25202c3972,0x766f6d0a3b782e64,0x317225203233752e\n"
".quad 0x6961746325202c30,0x766f6d0a3b782e64,0x317225203233752e,0x2e64697425202c31\n"
".quad 0x6c2e64616d0a3b78,0x7225203233732e6f,0x30317225202c3231,0x25202c397225202c\n"
".quad 0x6f6c2e0a3b313172,0x3120353220372063,0x3233752e766f6d0a,0x25202c3331722520\n"
".quad 0x3b792e6469617463,0x3233752e766f6d0a,0x25202c3431722520,0x0a3b792e6469746e\n"
".quad 0x203233752e766f6d,0x7425202c35317225,0x616d0a3b792e6469,0x3233732e6f6c2e64\n"
".quad 0x25202c3631722520,0x317225202c333172,0x3b35317225202c34,0x203720636f6c2e0a\n"
".quad 0x7476630a31203732,0x2e3233662e6e722e,0x3834662520323373,0x0a3b32317225202c\n"
".quad 0x203233662e646461,0x346625202c336625,0x3046336630202c38,0x2e0a3b3030303030\n"
".quad 0x3832203720636f6c,0x722e7476630a3120,0x33732e3233662e6e,0x202c393466252032\n"
".quad 0x64610a3b36317225,0x6625203233662e64,0x2c39346625202c34,0x3030304633663020\n"
".quad 0x6f6c2e0a3b303030,0x3120303320372063,0x746c2e707465730a,0x317025203233732e\n"
".quad 0x202c32317225202c,0x7465730a3b317225,0x3233732e746c2e70,0x7225202c32702520\n"
".quad 0x3b387225202c3631,0x6572702e646e610a,0x25202c3370252064,0x3b327025202c3170\n"
".quad 0x203720636f6c2e0a,0x7025400a31203033,0x4242206172622033,0x6c2e0a0a3b325f36\n"
".quad 0x203538203720636f,0x0a0a3b7465720a32,0x2e0a3a325f364242,0x3634203720636f6c\n"
".quad 0x662e6464610a3120,0x202c356625203233,0x436630202c336625,0x3b30303030303430\n"
".quad 0x3233662e766f6d0a,0x30202c3535662520,0x3030303034304366,0x20636f6c2e0a3b30\n"
".quad 0x0a33322035342037,0x203233662e646461,0x6625202c36356625,0x46336630202c3535\n"
".quad 0x0a3b303030303038,0x34203720636f6c2e,0x2e6464610a312036,0x2c36662520323366\n"
".quad 0x6625202c33662520,0x636f6c2e0a3b3635,0x3332203534203720,0x3233662e6464610a\n"
".quad 0x6625202c37662520,0x46336630202c3635,0x0a3b303030303038,0x34203720636f6c2e\n"
".quad 0x2e6464610a312036,0x2c38662520323366,0x6625202c33662520,0x20636f6c2e0a3b37\n"
".quad 0x0a33322035342037,0x203233662e646461,0x376625202c396625,0x303846336630202c\n"
".quad 0x6c2e0a3b30303030,0x203634203720636f,0x33662e6464610a31,0x202c303166252032\n"
".quad 0x396625202c336625,0x3720636f6c2e0a3b,0x610a333220353420,0x25203233662e6464\n"
".quad 0x396625202c313166,0x303846336630202c,0x6c2e0a3b30303030,0x203634203720636f\n"
".quad 0x33662e6464610a31,0x202c323166252032,0x316625202c336625,0x20636f6c2e0a3b31\n"
".quad 0x0a33322035342037,0x203233662e646461,0x6625202c33316625,0x46336630202c3131\n"
".quad 0x0a3b303030303038,0x34203720636f6c2e,0x2e6464610a312036,0x3431662520323366\n"
".quad 0x25202c336625202c,0x6f6c2e0a3b333166,0x3220353420372063,0x33662e6464610a33\n"
".quad 0x202c373566252032,0x6630202c33316625,0x3030303030384633,0x3720636f6c2e0a3b\n"
".quad 0x64610a3120363420,0x6625203233662e64,0x2c336625202c3531,0x6d0a3b3735662520\n"
".quad 0x25203233752e766f,0x0a3b30202c373172,0x203233662e766f6d,0x30202c3932326625\n"
".quad 0x3030303030303066,0x662e766f6d0a3b30,0x3832326625203233,0x3b3932326625202c\n"
".quad 0x3233662e766f6d0a,0x202c373232662520,0x6d0a3b3932326625,0x25203233662e766f\n"
".quad 0x6625202c36323266,0x766f6d0a3b393232,0x326625203233662e,0x32326625202c3532\n"
".quad 0x662e766f6d0a3b39,0x3533326625203233,0x0a3b35356625202c,0x203233752e766f6d\n"
".quad 0x25202c3231317225,0x42420a0a3b373172,0x6f6c2e0a3a335f36,0x3120363420372063\n"
".quad 0x3233662e6464610a,0x25202c3232662520,0x33326625202c3466,0x20636f6c2e0a3b35\n"
".quad 0x6d0a312032352037,0x25203233662e6c75,0x326625202c333266,0x33326625202c3533\n"
".quad 0x662e766f6d0a3b35,0x3433326625203233,0x0a3b35356625202c,0x203233752e766f6d\n"
".quad 0x25202c3131317225,0x42420a0a3b373172,0x6f6c2e0a3a345f36,0x3120363420372063\n"
".quad 0x3233662e6464610a,0x25202c3136662520,0x33326625202c3366,0x662e6464610a3b34\n"
".quad 0x2c30336625203233,0x30202c3136662520,0x3030303034304366,0x662e6464610a3b30\n"
".quad 0x2c31336625203233,0x25202c3136662520,0x6464610a3b363566,0x336625203233662e\n"
".quad 0x2c31366625202c32,0x64610a3b37662520,0x6625203233662e64,0x31366625202c3333\n"
".quad 0x610a3b396625202c,0x25203233662e6464,0x366625202c343366,0x3b31316625202c31\n"
".quad 0x3233662e6464610a,0x25202c3533662520,0x316625202c313666,0x662e6464610a3b33\n"
".quad 0x2c36336625203233,0x25202c3136662520,0x766f6d0a3b373566,0x326625203233662e\n"
".quad 0x30306630202c3033,0x0a3b303030303030,0x203233662e766f6d,0x25202c3333326625\n"
".quad 0x766f6d0a3b353566,0x317225203233752e,0x37317225202c3031,0x355f3642420a0a3b\n"
".quad 0x33752e766f6d0a3a,0x25202c3472252032,0x6f6d0a3b30313172,0x6625203233662e76\n"
".quad 0x33326625202c3833,0x20636f6c2e0a3b33,0x610a312036342037,0x25203233662e6464\n"
".quad 0x326625202c333966,0x3b38336625202c32,0x322e786574090a0a,0x3233752e34762e64\n"
".quad 0x72257b203233662e,0x31327225202c3032,0x202c32327225202c,0x5b202c7d33327225\n"
".quad 0x6567616d49786574,0x2c303366257b202c,0x3b5d7d3339662520,0x20636f6c2e090a0a\n"
".quad 0x3520383737312033,0x3233622e766f6d0a,0x25202c3639662520,0x766f6d0a3b303272\n"
".quad 0x396625203233622e,0x3b31327225202c37,0x3233622e766f6d0a,0x25202c3839662520\n"
".quad 0x6f6c2e0a3b323272,0x3120363420372063,0x3233662e6464610a,0x25202c3539662520\n"
".quad 0x38336625202c3466,0x2e786574090a0a3b,0x33752e34762e6432,0x257b203233662e32\n"
".quad 0x327225202c343272,0x2c36327225202c35,0x202c7d3732722520,0x67616d497865745b\n"
".quad 0x2c3566257b202c65,0x3b5d7d3539662520,0x20636f6c2e090a0a,0x3520383737312033\n"
".quad 0x3233622e766f6d0a,0x25202c3939662520,0x766f6d0a3b343272,0x316625203233622e\n"
".quad 0x35327225202c3030,0x33622e766f6d0a3b,0x2c31303166252032,0x2e0a3b3632722520\n"
".quad 0x3035203220636f6c,0x662e6275730a3120,0x3230316625203233,0x202c39396625202c\n"
".quad 0x75730a3b36396625,0x6625203233662e62,0x316625202c333031,0x37396625202c3030\n"
".quad 0x33662e6c756d0a3b,0x2c34303166252032,0x202c333031662520,0x660a3b3330316625\n"
".quad 0x33662e6e722e616d,0x2c35303166252032,0x202c323031662520,0x25202c3230316625\n"
".quad 0x75730a3b34303166,0x6625203233662e62,0x316625202c363031,0x38396625202c3130\n"
".quad 0x6e722e616d660a3b,0x316625203233662e,0x30316625202c3730,0x3630316625202c36\n"
".quad 0x3b3530316625202c,0x203720636f6c2e0a,0x6464610a31203634,0x316625203233662e\n"
".quad 0x33326625202c3830,0x3730316625202c30,0x2e786574090a0a3b,0x33752e34762e6432\n"
".quad 0x257b203233662e32,0x327225202c383272,0x2c30337225202c39,0x202c7d3133722520\n"
".quad 0x67616d497865745b,0x313366257b202c65,0x5d7d33396625202c,0x636f6c2e090a0a3b\n"
".quad 0x2038373731203320,0x33622e766f6d0a35,0x2c39303166252032,0x6d0a3b3832722520\n"
".quad 0x25203233622e766f,0x7225202c30313166,0x2e766f6d0a3b3932,0x3131662520323362\n"
".quad 0x3b30337225202c31,0x322e786574090a0a,0x3233752e34762e64,0x72257b203233662e\n"
".quad 0x33337225202c3233,0x202c34337225202c,0x5b202c7d35337225,0x6567616d49786574\n"
".quad 0x202c3666257b202c,0x0a3b5d7d35396625,0x33622e766f6d090a,0x2c32313166252032\n"
".quad 0x6d0a3b3233722520,0x25203233622e766f,0x7225202c33313166,0x2e766f6d0a3b3333\n"
".quad 0x3131662520323362,0x3b34337225202c34,0x203220636f6c2e0a,0x6275730a31203035\n"
".quad 0x316625203233662e,0x31316625202c3531,0x3930316625202c32,0x33662e6275730a3b\n"
".quad 0x2c36313166252032,0x202c333131662520,0x6d0a3b3031316625,0x25203233662e6c75\n"
".quad 0x6625202c37313166,0x316625202c363131,0x2e616d660a3b3631,0x25203233662e6e72\n"
".quad 0x6625202c38313166,0x316625202c353131,0x31316625202c3531,0x662e6275730a3b37\n"
".quad 0x3931316625203233,0x2c3431316625202c,0x0a3b313131662520,0x662e6e722e616d66\n"
".quad 0x3032316625203233,0x2c3931316625202c,0x202c393131662520,0x2e0a3b3831316625\n"
".quad 0x3634203720636f6c,0x662e6464610a3120,0x3132316625203233,0x2c3830316625202c\n"
".quad 0x0a3b303231662520,0x64322e786574090a,0x2e3233752e34762e,0x3372257b20323366\n"
".quad 0x2c37337225202c36,0x25202c3833722520,0x745b202c7d393372,0x2c6567616d497865\n"
".quad 0x202c323366257b20,0x0a3b5d7d33396625,0x3320636f6c2e090a,0x0a35203837373120\n"
".quad 0x203233622e766f6d,0x25202c3232316625,0x766f6d0a3b363372,0x316625203233622e\n"
".quad 0x37337225202c3332,0x33622e766f6d0a3b,0x2c34323166252032,0x0a0a3b3833722520\n"
".quad 0x2e64322e78657409,0x662e3233752e3476,0x303472257b203233,0x202c31347225202c\n"
".quad 0x7225202c32347225,0x65745b202c7d3334,0x202c6567616d4978,0x6625202c3866257b\n"
".quad 0x090a0a3b5d7d3539,0x203233622e766f6d,0x25202c3532316625,0x766f6d0a3b303472\n"
".quad 0x316625203233622e,0x31347225202c3632,0x33622e766f6d0a3b,0x2c37323166252032\n"
".quad 0x2e0a3b3234722520,0x3035203220636f6c,0x662e6275730a3120,0x3832316625203233\n"
".quad 0x2c3532316625202c,0x0a3b323231662520,0x203233662e627573,0x25202c3932316625\n"
".quad 0x6625202c36323166,0x6c756d0a3b333231,0x316625203233662e,0x32316625202c3033\n"
".quad 0x3932316625202c39,0x6e722e616d660a3b,0x316625203233662e,0x32316625202c3133\n"
".quad 0x3832316625202c38,0x3b3033316625202c,0x3233662e6275730a,0x202c323331662520\n"
".quad 0x25202c3732316625,0x6d660a3b34323166,0x3233662e6e722e61,0x202c333331662520\n"
".quad 0x25202c3233316625,0x6625202c32333166,0x6f6c2e0a3b313331,0x3120363420372063\n"
".quad 0x3233662e6464610a,0x202c343331662520,0x25202c3132316625,0x090a0a3b33333166\n"
".quad 0x762e64322e786574,0x33662e3233752e34,0x2c343472257b2032,0x25202c3534722520\n"
".quad 0x347225202c363472,0x7865745b202c7d37,0x7b202c6567616d49,0x6625202c33336625\n"
".quad 0x090a0a3b5d7d3339,0x31203320636f6c2e,0x6f6d0a3520383737,0x6625203233622e76\n"
".quad 0x347225202c353331,0x622e766f6d0a3b34,0x3633316625203233,0x0a3b35347225202c\n"
".quad 0x203233622e766f6d,0x25202c3733316625,0x74090a0a3b363472,0x34762e64322e7865\n"
".quad 0x3233662e3233752e,0x202c383472257b20,0x7225202c39347225,0x31357225202c3035\n"
".quad 0x497865745b202c7d,0x257b202c6567616d,0x396625202c303166,0x6d090a0a3b5d7d35\n"
".quad 0x25203233622e766f,0x7225202c38333166,0x2e766f6d0a3b3834,0x3331662520323362\n"
".quad 0x3b39347225202c39,0x3233622e766f6d0a,0x202c303431662520,0x6c2e0a3b30357225\n"
".quad 0x203035203220636f,0x33662e6275730a31,0x2c31343166252032,0x202c383331662520\n"
".quad 0x730a3b3533316625,0x25203233662e6275,0x6625202c32343166,0x316625202c393331\n"
".quad 0x2e6c756d0a3b3633,0x3431662520323366,0x3234316625202c33,0x3b3234316625202c\n"
".quad 0x2e6e722e616d660a,0x3431662520323366,0x3134316625202c34,0x2c3134316625202c\n"
".quad 0x0a3b333431662520,0x203233662e627573,0x25202c3534316625,0x6625202c30343166\n"
".quad 0x616d660a3b373331,0x203233662e6e722e,0x25202c3634316625,0x6625202c35343166\n"
".quad 0x316625202c353431,0x636f6c2e0a3b3434,0x0a31203634203720,0x203233662e646461\n"
".quad 0x25202c3734316625,0x6625202c34333166,0x74090a0a3b363431,0x34762e64322e7865\n"
".quad 0x3233662e3233752e,0x202c323572257b20,0x7225202c33357225,0x35357225202c3435\n"
".quad 0x497865745b202c7d,0x257b202c6567616d,0x396625202c343366,0x2e090a0a3b5d7d33\n"
".quad 0x3731203320636f6c,0x766f6d0a35203837,0x316625203233622e,0x32357225202c3834\n"
".quad 0x33622e766f6d0a3b,0x2c39343166252032,0x6d0a3b3335722520,0x25203233622e766f\n"
".quad 0x7225202c30353166,0x6574090a0a3b3435,0x2e34762e64322e78,0x203233662e323375\n"
".quad 0x25202c363572257b,0x357225202c373572,0x7d39357225202c38,0x6d497865745b202c\n"
".quad 0x66257b202c656761,0x35396625202c3231,0x6f6d090a0a3b5d7d,0x6625203233622e76\n"
".quad 0x357225202c313531,0x622e766f6d0a3b36,0x3235316625203233,0x0a3b37357225202c\n"
".quad 0x203233622e766f6d,0x25202c3335316625,0x6f6c2e0a3b383572,0x3120303520322063\n"
".quad 0x3233662e6275730a,0x202c343531662520,0x25202c3135316625,0x75730a3b38343166\n"
".quad 0x6625203233662e62,0x316625202c353531,0x34316625202c3235,0x662e6c756d0a3b39\n"
".quad 0x3635316625203233,0x2c3535316625202c,0x0a3b353531662520,0x662e6e722e616d66\n"
".quad 0x3735316625203233,0x2c3435316625202c,0x202c343531662520,0x730a3b3635316625\n"
".quad 0x25203233662e6275,0x6625202c38353166,0x316625202c333531,0x2e616d660a3b3035\n"
".quad 0x25203233662e6e72,0x6625202c39353166,0x316625202c383531,0x35316625202c3835\n"
".quad 0x20636f6c2e0a3b37,0x610a312036342037,0x25203233662e6464,0x6625202c30363166\n"
".quad 0x316625202c373431,0x6574090a0a3b3935,0x2e34762e64322e78,0x203233662e323375\n"
".quad 0x25202c303672257b,0x367225202c313672,0x7d33367225202c32,0x6d497865745b202c\n"
".quad 0x66257b202c656761,0x33396625202c3533,0x6c2e090a0a3b5d7d,0x373731203320636f\n"
".quad 0x2e766f6d0a352038,0x3631662520323362,0x3b30367225202c31,0x3233622e766f6d0a\n"
".quad 0x202c323631662520,0x6f6d0a3b31367225,0x6625203233622e76,0x367225202c333631\n"
".quad 0x786574090a0a3b32,0x752e34762e64322e,0x7b203233662e3233,0x7225202c34367225\n"
".quad 0x36367225202c3536,0x2c7d37367225202c,0x616d497865745b20,0x3166257b202c6567\n"
".quad 0x7d35396625202c34,0x766f6d090a0a3b5d,0x316625203233622e,0x34367225202c3436\n"
".quad 0x33622e766f6d0a3b,0x2c35363166252032,0x6d0a3b3536722520,0x25203233622e766f\n"
".quad 0x7225202c36363166,0x636f6c2e0a3b3636,0x0a31203035203220,0x203233662e627573\n"
".quad 0x25202c3736316625,0x6625202c34363166,0x6275730a3b313631,0x316625203233662e\n"
".quad 0x36316625202c3836,0x3236316625202c35,0x33662e6c756d0a3b,0x2c39363166252032\n"
".quad 0x202c383631662520,0x660a3b3836316625,0x33662e6e722e616d,0x2c30373166252032\n"
".quad 0x202c373631662520,0x25202c3736316625,0x75730a3b39363166,0x6625203233662e62\n"
".quad 0x316625202c313731,0x36316625202c3636,0x722e616d660a3b33,0x6625203233662e6e\n"
".quad 0x316625202c323731,0x37316625202c3137,0x3037316625202c31,0x3720636f6c2e0a3b\n"
".quad 0x64610a3120363420,0x6625203233662e64,0x316625202c333731,0x37316625202c3036\n"
".quad 0x786574090a0a3b32,0x752e34762e64322e,0x7b203233662e3233,0x7225202c38367225\n"
".quad 0x30377225202c3936,0x2c7d31377225202c,0x616d497865745b20,0x3366257b202c6567\n"
".quad 0x7d33396625202c36,0x6f6c2e090a0a3b5d,0x3837373120332063,0x622e766f6d0a3520\n"
".quad 0x3437316625203233,0x0a3b38367225202c,0x203233622e766f6d,0x25202c3537316625\n"
".quad 0x766f6d0a3b393672,0x316625203233622e,0x30377225202c3637,0x2e786574090a0a3b\n"
".quad 0x33752e34762e6432,0x257b203233662e32,0x377225202c323772,0x2c34377225202c33\n"
".quad 0x202c7d3537722520,0x67616d497865745b,0x353166257b202c65,0x5d7d35396625202c\n"
".quad 0x2e766f6d090a0a3b,0x3731662520323362,0x3b32377225202c37,0x3233622e766f6d0a\n"
".quad 0x202c383731662520,0x6f6d0a3b33377225,0x6625203233622e76,0x377225202c393731\n"
".quad 0x20636f6c2e0a3b34,0x730a312030352032,0x25203233662e6275,0x6625202c30383166\n"
".quad 0x316625202c373731,0x2e6275730a3b3437,0x3831662520323366,0x3837316625202c31\n"
".quad 0x3b3537316625202c,0x3233662e6c756d0a,0x202c323831662520,0x25202c3138316625\n"
".quad 0x6d660a3b31383166,0x3233662e6e722e61,0x202c333831662520,0x25202c3038316625\n"
".quad 0x6625202c30383166,0x6275730a3b323831,0x316625203233662e,0x37316625202c3438\n"
".quad 0x3637316625202c39,0x6e722e616d660a3b,0x316625203233662e,0x38316625202c3538\n"
".quad 0x3438316625202c34,0x3b3338316625202c,0x203720636f6c2e0a,0x6464610a31203634\n"
".quad 0x326625203233662e,0x37316625202c3033,0x3538316625202c33,0x3720636f6c2e0a3b\n"
".quad 0x610a333220343420,0x25203233662e6464,0x336625202c303466,0x3846336630202c38\n"
".quad 0x610a3b3030303030,0x25203233732e6464,0x2c347225202c3572,0x636f6c2e0a3b3120\n"
".quad 0x0a31203434203720,0x2e656e2e70746573,0x2c34702520323373,0x3b37202c35722520\n"
".quad 0x3233662e766f6d0a,0x202c333332662520,0x6f6d0a3b30346625,0x7225203233752e76\n"
".quad 0x357225202c303131,0x3720636f6c2e0a3b,0x25400a3120343420,0x4220617262203470\n"
".quad 0x6c0a0a3b355f3642,0x2e6d617261702e64,0x3232662520323366,0x4e335a5f5b202c33\n"
".quad 0x666669696a504d4c,0x335f6d617261705f,0x20636f6c2e0a3b5d,0x6d0a312032352037\n"
".quad 0x25203233662e6c75,0x6625202c38383166,0x326625202c303332,0x2e616d660a3b3332\n"
".quad 0x25203233662e6e72,0x6625202c39383166,0x326625202c343332,0x33326625202c3433\n"
".quad 0x6e722e616d660a3b,0x316625203233662e,0x38316625202c3039,0x4143336630202c39\n"
".quad 0x25202c3530463237,0x756d0a3b38383166,0x6625203233662e6c,0x316625202c313931\n"
".quad 0x46426630202c3039,0x0a3b423341413842,0x35203320636f6c2e,0x3278650a35203133\n"
".quad 0x2e786f727070612e,0x3931662520323366,0x3139316625202c32,0x33752e766f6d0a3b\n"
".quad 0x202c313872252032,0x786574090a0a3b30,0x752e34762e64322e,0x7b203233662e3233\n"
".quad 0x7225202c37377225,0x39377225202c3837,0x2c7d30387225202c,0x616d497865745b20\n"
".quad 0x3666257b202c6567,0x7d32326625202c31,0x6f6c2e090a0a3b5d,0x3837373120332063\n"
".quad 0x622e766f6d0a3520,0x3339316625203233,0x0a3b37377225202c,0x203233622e766f6d\n"
".quad 0x25202c3439316625,0x766f6d0a3b383772,0x316625203233622e,0x39377225202c3539\n"
".quad 0x3720636f6c2e0a3b,0x6d660a3120363520,0x3233662e6e722e61,0x202c353232662520\n"
".quad 0x25202c3339316625,0x6625202c32393166,0x6f6c2e0a3b353232,0x3120373520372063\n"
".quad 0x2e6e722e616d660a,0x3232662520323366,0x3439316625202c36,0x2c3239316625202c\n"
".quad 0x0a3b363232662520,0x35203720636f6c2e,0x2e616d660a312038,0x25203233662e6e72\n"
".quad 0x6625202c37323266,0x316625202c353931,0x32326625202c3239,0x20636f6c2e0a3b37\n"
".quad 0x610a312031362037,0x25203233662e6464,0x6625202c39323266,0x316625202c393232\n"
".quad 0x636f6c2e0a3b3239,0x0a31203536203720,0x2e74672e70746573,0x2c35702520323366\n"
".quad 0x202c323931662520,0x4343434344336630,0x706c65730a3b4443,0x316625203233662e\n"
".quad 0x43336630202c3639,0x202c353046323741,0x3030303030306630,0x3b357025202c3030\n"
".quad 0x203720636f6c2e0a,0x6464610a31203536,0x326625203233662e,0x32326625202c3832\n"
".quad 0x3639316625202c38,0x3720636f6c2e0a3b,0x610a333220303420,0x25203233662e6464\n"
".quad 0x6625202c34333266,0x336630202c343332,0x3b30303030303846,0x3233732e6464610a\n"
".quad 0x202c313131722520,0x31202c3131317225,0x3720636f6c2e0a3b,0x65730a3120303420\n"
".quad 0x33732e656e2e7074,0x25202c3670252032,0x3b37202c31313172,0x726220367025400a\n"
".quad 0x3b345f3642422061,0x3720636f6c2e0a0a,0x610a333220393320,0x25203233662e6464\n"
".quad 0x6625202c35333266,0x336630202c353332,0x3b30303030303846,0x3233732e6464610a\n"
".quad 0x202c323131722520,0x31202c3231317225,0x3720636f6c2e0a3b,0x65730a3120393320\n"
".quad 0x33732e656e2e7074,0x25202c3770252032,0x3b37202c32313172,0x726220377025400a\n"
".quad 0x3b335f3642422061,0x3720636f6c2e0a0a,0x63720a3120393620,0x3233662e6e722e70\n"
".quad 0x202c393931662520,0x6d0a3b3932326625,0x25203233662e766f,0x6630202c30303266\n"
".quad 0x3030303030384633,0x7261702e646c0a3b,0x25203233662e6d61,0x5f5b202c34323266\n"
".quad 0x696a504d4c4e335a,0x617261705f666669,0x6c2e0a3b5d345f6d,0x203637203720636f\n"
".quad 0x33662e6275730a31,0x2c31303266252032,0x202c303032662520,0x730a3b3432326625\n"
".quad 0x662e74672e707465,0x202c387025203233,0x30202c3832326625,0x4343434343443366\n"
".quad 0x2e706c65730a3b44,0x3032662520323366,0x3432326625202c32,0x2c3130326625202c\n"
".quad 0x090a0a3b38702520,0x762e64322e786574,0x33662e3233752e34,0x2c323872257b2032\n"
".quad 0x25202c3338722520,0x387225202c343872,0x7865745b202c7d35,0x7b202c6567616d49\n"
".quad 0x346625202c336625,0x6c2e090a0a3b5d7d,0x373731203320636f,0x2e766f6d0a352038\n"
".quad 0x3032662520323362,0x3b32387225202c33,0x3233622e766f6d0a,0x202c343032662520\n"
".quad 0x6f6d0a3b33387225,0x6625203233622e76,0x387225202c353032,0x20636f6c2e0a3b34\n"
".quad 0x6e0a312036342032,0x25203233662e6765,0x6625202c36303266,0x616d660a3b353232\n"
".quad 0x203233662e6e722e,0x25202c3730326625,0x6625202c36303266,0x326625202c393931\n"
".quad 0x2e6c756d0a3b3330,0x3032662520323366,0x3730326625202c38,0x3b3230326625202c\n"
".quad 0x2e6e722e616d660a,0x3032662520323366,0x3532326625202c39,0x2c3939316625202c\n"
".quad 0x0a3b383032662520,0x34203220636f6c2e,0x2e67656e0a312036,0x3132662520323366\n"
".quad 0x3632326625202c30,0x6e722e616d660a3b,0x326625203233662e,0x31326625202c3131\n"
".quad 0x3939316625202c30,0x3b3430326625202c,0x3233662e6c756d0a,0x202c323132662520\n"
".quad 0x25202c3131326625,0x6d660a3b32303266,0x3233662e6e722e61,0x202c333132662520\n"
".quad 0x25202c3632326625,0x6625202c39393166,0x6f6c2e0a3b323132,0x3120363420322063\n"
".quad 0x3233662e67656e0a,0x202c343132662520,0x660a3b3732326625,0x33662e6e722e616d\n"
".quad 0x2c35313266252032,0x202c343132662520,0x25202c3939316625,0x756d0a3b35303266\n"
".quad 0x6625203233662e6c,0x326625202c363132,0x30326625202c3531,0x722e616d660a3b32\n"
".quad 0x6625203233662e6e,0x326625202c373132,0x39316625202c3732,0x3631326625202c39\n"
".quad 0x33662e766f6d0a3b,0x2c38313266252032,0x3030303030663020,0x6f6c2e0a3b303030\n"
".quad 0x3120383520322063,0x3233662e6c756d0a,0x202c393132662520,0x30202c3831326625\n"
".quad 0x3030304637333466,0x20636f6c2e0a3b30,0x3520333433312033,0x697a722e7476630a\n"
".quad 0x3233662e3233732e,0x25202c3738722520,0x6c2e0a3b39313266,0x203835203220636f\n"
".quad 0x33622e6c68730a31,0x202c383872252032,0x3432202c37387225,0x33662e6c756d0a3b\n"
".quad 0x2c30323266252032,0x202c373132662520,0x3030463733346630,0x636f6c2e0a3b3030\n"
".quad 0x2033343331203320,0x7a722e7476630a35,0x33662e3233732e69,0x202c393872252032\n"
".quad 0x2e0a3b3032326625,0x3835203220636f6c,0x622e6c68730a3120,0x2c30397225203233\n"
".quad 0x31202c3938722520,0x662e6c756d0a3b36,0x3132326625203233,0x2c3331326625202c\n"
".quad 0x3046373334663020,0x6f6c2e0a3b303030,0x3334333120332063,0x722e7476630a3520\n"
".quad 0x662e3233732e697a,0x2c31397225203233,0x0a3b313232662520,0x35203220636f6c2e\n"
".quad 0x2e6c68730a312038,0x3239722520323362,0x202c31397225202c,0x662e6c756d0a3b38\n"
".quad 0x3232326625203233,0x2c3930326625202c,0x3046373334663020,0x6f6c2e0a3b303030\n"
".quad 0x3334333120332063,0x722e7476630a3520,0x662e3233732e697a,0x2c33397225203233\n"
".quad 0x0a3b323232662520,0x35203220636f6c2e,0x622e726f0a312038,0x2c34397225203233\n"
".quad 0x25202c3039722520,0x2e726f0a3b383872,0x3539722520323362,0x202c34397225202c\n"
".quad 0x726f0a3b33397225,0x397225203233622e,0x2c35397225202c36,0x6c0a3b3239722520\n"
".quad 0x2e6d617261702e64,0x3031722520323375,0x4e335a5f5b202c37,0x666669696a504d4c\n"
".quad 0x315f6d617261705f,0x20636f6c2e0a3b5d,0x6d0a312033382037,0x33732e6f6c2e6461\n"
".quad 0x2c35303172252032,0x25202c3631722520,0x7225202c37303172,0x702e646c0a3b3231\n"
".quad 0x3436752e6d617261,0x5b202c356c722520,0x6a504d4c4e335a5f,0x7261705f66666969\n"
".quad 0x630a3b5d305f6d61,0x672e6f742e617476,0x36752e6c61626f6c,0x202c326c72252034\n"
".quad 0x6c2e0a3b356c7225,0x203338203720636f,0x69772e6c756d0a31,0x25203233732e6564\n"
".quad 0x317225202c336c72,0x610a3b34202c3530,0x25203436732e6464,0x6c7225202c346c72\n"
".quad 0x3b336c7225202c32,0x626f6c672e74730a,0x5b203233752e6c61,0x25202c5d346c7225\n"
".quad 0x6f6c2e0a3b363972,0x3220353820372063,0x0a7d0a3b7465720a,0x207972746e652e0a\n"
".quad 0x69644d4c4e375a5f,0x66666a6a6a506761,0x6d617261702e0a28,0x5a5f203436752e20\n"
".quad 0x676169644d4c4e37,0x705f66666a6a6a50,0x0a2c305f6d617261,0x2e206d617261702e\n"
".quad 0x4e375a5f20323375,0x6a50676169644d4c,0x7261705f66666a6a,0x702e0a2c315f6d61\n"
".quad 0x33752e206d617261,0x4d4c4e375a5f2032,0x6a6a6a5067616964,0x6d617261705f6666\n"
".quad 0x7261702e0a2c325f,0x203233662e206d61,0x69644d4c4e375a5f,0x66666a6a6a506761\n"
".quad 0x335f6d617261705f,0x6d617261702e0a2c,0x5a5f203233662e20,0x676169644d4c4e37\n"
".quad 0x705f66666a6a6a50,0x290a345f6d617261,0x206765722e0a7b0a,0x3c6625203233662e\n"
".quad 0x722e0a3b3e303931,0x646572702e206765,0x0a3b3e393c702520,0x33732e206765722e\n"
".quad 0x3230313c72252032,0x206765722e0a3b3e,0x6c7225203436732e,0x6c0a0a0a3b3e363c\n"
".quad 0x2e6d617261702e64,0x2c31722520323375,0x4d4c4e375a5f5b20,0x6a6a6a5067616964\n"
".quad 0x6d617261705f6666,0x2e646c0a3b5d315f,0x33752e6d61726170,0x5b202c3872252032\n"
".quad 0x69644d4c4e375a5f,0x66666a6a6a506761,0x325f6d617261705f,0x20636f6c2e0a3b5d\n"
".quad 0x0a31203131312037,0x203233752e766f6d,0x746e25202c397225,0x6f6d0a3b782e6469\n"
".quad 0x7225203233752e76,0x61746325202c3031,0x6f6d0a3b782e6469,0x7225203233752e76\n"
".quad 0x64697425202c3131,0x2e64616d0a3b782e,0x25203233732e6f6c,0x317225202c323172\n"
".quad 0x202c397225202c30,0x6c2e0a3b31317225,0x323131203720636f,0x752e766f6d0a3120\n"
".quad 0x2c33317225203233,0x2e64696174632520,0x752e766f6d0a3b79,0x2c34317225203233\n"
".quad 0x792e6469746e2520,0x33752e766f6d0a3b,0x202c353172252032,0x0a3b792e64697425\n"
".quad 0x732e6f6c2e64616d,0x2c36317225203233,0x25202c3331722520,0x317225202c343172\n"
".quad 0x20636f6c2e0a3b35,0x0a31203431312037,0x662e6e722e747663,0x25203233732e3233\n"
".quad 0x317225202c353366,0x662e6464610a3b32,0x202c326625203233,0x6630202c35336625\n"
".quad 0x3030303030304633,0x3720636f6c2e0a3b,0x630a312035313120,0x33662e6e722e7476\n"
".quad 0x6625203233732e32,0x36317225202c3633,0x33662e6464610a3b,0x25202c3366252032\n"
".quad 0x336630202c363366,0x3b30303030303046,0x203720636f6c2e0a,0x65730a3120373131\n"
".quad 0x33752e746c2e7074,0x25202c3170252032,0x317225202c323172,0x6c2e707465730a3b\n"
".quad 0x7025203233752e74,0x2c36317225202c32,0x6e610a3b38722520,0x2520646572702e64\n"
".quad 0x2c317025202c3370,0x6c2e0a3b32702520,0x373131203720636f,0x20337025400a3120\n"
".quad 0x5f37424220617262,0x636f6c2e0a0a3b32,0x3220383431203720,0x420a0a3b7465720a\n"
".quad 0x6c2e0a3a325f3742,0x393231203720636f,0x662e6464610a3120,0x202c346625203233\n"
".quad 0x436630202c326625,0x3b30303030303430,0x3233662e766f6d0a,0x30202c3833662520\n"
".quad 0x3030303034304366,0x20636f6c2e0a3b30,0x3332203832312037,0x3233662e6464610a\n"
".quad 0x25202c3933662520,0x336630202c383366,0x3b30303030303846,0x203720636f6c2e0a\n"
".quad 0x64610a3120393231,0x6625203233662e64,0x202c326625202c35,0x6c2e0a3b39336625\n"
".quad 0x383231203720636f,0x2e6464610a333220,0x2c36662520323366,0x30202c3933662520\n"
".quad 0x3030303038463366,0x20636f6c2e0a3b30,0x0a31203932312037,0x203233662e646461\n"
".quad 0x326625202c376625,0x2e0a3b366625202c,0x3231203720636f6c,0x6464610a33322038\n"
".quad 0x386625203233662e,0x30202c366625202c,0x3030303038463366,0x20636f6c2e0a3b30\n"
".quad 0x0a31203932312037,0x203233662e646461,0x326625202c396625,0x2e0a3b386625202c\n"
".quad 0x3231203720636f6c,0x6464610a33322038,0x316625203233662e,0x202c386625202c30\n"
".quad 0x3030303846336630,0x636f6c2e0a3b3030,0x3120393231203720,0x3233662e6464610a\n"
".quad 0x25202c3131662520,0x30316625202c3266,0x3720636f6c2e0a3b,0x0a33322038323120\n"
".quad 0x203233662e646461,0x6625202c32316625,0x46336630202c3031,0x0a3b303030303038\n"
".quad 0x31203720636f6c2e,0x6464610a31203932,0x316625203233662e,0x202c326625202c33\n"
".quad 0x6c2e0a3b32316625,0x383231203720636f,0x2e6464610a333220,0x3034662520323366\n"
".quad 0x202c32316625202c,0x3030303846336630,0x636f6c2e0a3b3030,0x3120393231203720\n"
".quad 0x3233662e6464610a,0x25202c3431662520,0x30346625202c3266,0x33752e766f6d0a3b\n"
".quad 0x202c373172252032,0x662e766f6d0a3b30,0x3338316625203233,0x303030306630202c\n"
".quad 0x6f6d0a3b30303030,0x6625203233662e76,0x336625202c393831,0x752e766f6d0a3b38\n"
".quad 0x3130317225203233,0x0a3b37317225202c,0x0a3a335f3742420a,0x31203720636f6c2e\n"
".quad 0x6464610a31203932,0x316625203233662e,0x202c336625202c37,0x2e0a3b3938316625\n"
".quad 0x3331203720636f6c,0x2e6c756d0a312035,0x3831662520323366,0x2c3938316625202c\n"
".quad 0x0a3b393831662520,0x203233662e766f6d,0x25202c3838316625,0x766f6d0a3b383366\n"
".quad 0x317225203233752e,0x37317225202c3030,0x345f3742420a0a3b,0x3720636f6c2e0a3a\n"
".quad 0x610a312039323120,0x25203233662e6464,0x326625202c343466,0x3b3838316625202c\n"
".quad 0x3233662e6464610a,0x25202c3132662520,0x436630202c343466,0x3b30303030303430\n"
".quad 0x3233662e6464610a,0x25202c3232662520,0x336625202c343466,0x662e6464610a3b39\n"
".quad 0x2c33326625203233,0x25202c3434662520,0x2e6464610a3b3666,0x3432662520323366\n"
".quad 0x202c34346625202c,0x6464610a3b386625,0x326625203233662e,0x2c34346625202c35\n"
".quad 0x610a3b3031662520,0x25203233662e6464,0x346625202c363266,0x3b32316625202c34\n"
".quad 0x3233662e6464610a,0x25202c3732662520,0x346625202c343466,0x662e766f6d0a3b30\n"
".quad 0x3438316625203233,0x303030306630202c,0x6f6d0a3b30303030,0x6625203233662e76\n"
".quad 0x336625202c373831,0x752e766f6d0a3b38,0x2c39397225203233,0x0a0a3b3731722520\n"
".quad 0x6d0a3a355f374242,0x25203233752e766f,0x39397225202c3472,0x33662e766f6d0a3b\n"
".quad 0x202c393266252032,0x2e0a3b3738316625,0x3231203720636f6c,0x2e6464610a312039\n"
".quad 0x3637662520323366,0x202c37316625202c,0x090a0a3b39326625,0x762e64322e786574\n"
".quad 0x33662e3233752e34,0x2c303272257b2032,0x25202c3132722520,0x327225202c323272\n"
".quad 0x7865745b202c7d33,0x7b202c6567616d49,0x6625202c31326625,0x090a0a3b5d7d3637\n"
".quad 0x31203320636f6c2e,0x6f6d0a3520383737,0x6625203233622e76,0x30327225202c3937\n"
".quad 0x33622e766f6d0a3b,0x202c303866252032,0x6f6d0a3b31327225,0x6625203233622e76\n"
".quad 0x32327225202c3138,0x3720636f6c2e0a3b,0x610a312039323120,0x25203233662e6464\n"
".quad 0x336625202c383766,0x0a3b39326625202c,0x64322e786574090a,0x2e3233752e34762e\n"
".quad 0x3272257b20323366,0x2c35327225202c34,0x25202c3632722520,0x745b202c7d373272\n"
".quad 0x2c6567616d497865,0x25202c3466257b20,0x0a0a3b5d7d383766,0x203320636f6c2e09\n"
".quad 0x6d0a352038373731,0x25203233622e766f,0x327225202c323866,0x622e766f6d0a3b34\n"
".quad 0x2c33386625203233,0x6d0a3b3532722520,0x25203233622e766f,0x327225202c343866\n"
".quad 0x20636f6c2e0a3b36,0x730a312030352032,0x25203233662e6275,0x386625202c353866\n"
".quad 0x3b39376625202c32,0x3233662e6275730a,0x25202c3638662520,0x386625202c333866\n"
".quad 0x662e6c756d0a3b30,0x2c37386625203233,0x25202c3638662520,0x616d660a3b363866\n"
".quad 0x203233662e6e722e,0x6625202c38386625,0x35386625202c3538,0x0a3b37386625202c\n"
".quad 0x203233662e627573,0x6625202c39386625,0x31386625202c3438,0x6e722e616d660a3b\n"
".quad 0x396625203233662e,0x2c39386625202c30,0x25202c3938662520,0x6f6c2e0a3b383866\n"
".quad 0x2039323120372063,0x33662e6464610a31,0x202c313966252032,0x25202c3438316625\n"
".quad 0x74090a0a3b303966,0x34762e64322e7865,0x3233662e3233752e,0x202c383272257b20\n"
".quad 0x7225202c39327225,0x31337225202c3033,0x497865745b202c7d,0x257b202c6567616d\n"
".quad 0x376625202c323266,0x2e090a0a3b5d7d36,0x3731203320636f6c,0x766f6d0a35203837\n"
".quad 0x396625203233622e,0x3b38327225202c32,0x3233622e766f6d0a,0x25202c3339662520\n"
".quad 0x766f6d0a3b393272,0x396625203233622e,0x3b30337225202c34,0x322e786574090a0a\n"
".quad 0x3233752e34762e64,0x72257b203233662e,0x33337225202c3233,0x202c34337225202c\n"
".quad 0x5b202c7d35337225,0x6567616d49786574,0x202c3566257b202c,0x0a3b5d7d38376625\n"
".quad 0x33622e766f6d090a,0x202c353966252032,0x6f6d0a3b32337225,0x6625203233622e76\n"
".quad 0x33337225202c3639,0x33622e766f6d0a3b,0x202c373966252032,0x6c2e0a3b34337225\n"
".quad 0x203035203220636f,0x33662e6275730a31,0x202c383966252032,0x6625202c35396625\n"
".quad 0x2e6275730a3b3239,0x3939662520323366,0x202c36396625202c,0x756d0a3b33396625\n"
".quad 0x6625203233662e6c,0x396625202c303031,0x3b39396625202c39,0x2e6e722e616d660a\n"
".quad 0x3031662520323366,0x2c38396625202c31,0x25202c3839662520,0x75730a3b30303166\n"
".quad 0x6625203233662e62,0x396625202c323031,0x3b34396625202c37,0x2e6e722e616d660a\n"
".quad 0x3031662520323366,0x3230316625202c33,0x2c3230316625202c,0x0a3b313031662520\n"
".quad 0x31203720636f6c2e,0x6464610a31203932,0x316625203233662e,0x31396625202c3430\n"
".quad 0x3b3330316625202c,0x322e786574090a0a,0x3233752e34762e64,0x72257b203233662e\n"
".quad 0x37337225202c3633,0x202c38337225202c,0x5b202c7d39337225,0x6567616d49786574\n"
".quad 0x2c333266257b202c,0x3b5d7d3637662520,0x20636f6c2e090a0a,0x3520383737312033\n"
".quad 0x3233622e766f6d0a,0x202c353031662520,0x6f6d0a3b36337225,0x6625203233622e76\n"
".quad 0x337225202c363031,0x622e766f6d0a3b37,0x3730316625203233,0x0a3b38337225202c\n"
".quad 0x64322e786574090a,0x2e3233752e34762e,0x3472257b20323366,0x2c31347225202c30\n"
".quad 0x25202c3234722520,0x745b202c7d333472,0x2c6567616d497865,0x25202c3766257b20\n"
".quad 0x0a0a3b5d7d383766,0x3233622e766f6d09,0x202c383031662520,0x6f6d0a3b30347225\n"
".quad 0x6625203233622e76,0x347225202c393031,0x622e766f6d0a3b31,0x3031316625203233\n"
".quad 0x0a3b32347225202c,0x35203220636f6c2e,0x2e6275730a312030,0x3131662520323366\n"
".quad 0x3830316625202c31,0x3b3530316625202c,0x3233662e6275730a,0x202c323131662520\n"
".quad 0x25202c3930316625,0x756d0a3b36303166,0x6625203233662e6c,0x316625202c333131\n"
".quad 0x31316625202c3231,0x722e616d660a3b32,0x6625203233662e6e,0x316625202c343131\n"
".quad 0x31316625202c3131,0x3331316625202c31,0x33662e6275730a3b,0x2c35313166252032\n"
".quad 0x202c303131662520,0x660a3b3730316625,0x33662e6e722e616d,0x2c36313166252032\n"
".quad 0x202c353131662520,0x25202c3531316625,0x6c2e0a3b34313166,0x393231203720636f\n"
".quad 0x662e6464610a3120,0x3731316625203233,0x2c3430316625202c,0x0a3b363131662520\n"
".quad 0x64322e786574090a,0x2e3233752e34762e,0x3472257b20323366,0x2c35347225202c34\n"
".quad 0x25202c3634722520,0x745b202c7d373472,0x2c6567616d497865,0x202c343266257b20\n"
".quad 0x0a3b5d7d36376625,0x3320636f6c2e090a,0x0a35203837373120,0x203233622e766f6d\n"
".quad 0x25202c3831316625,0x766f6d0a3b343472,0x316625203233622e,0x35347225202c3931\n"
".quad 0x33622e766f6d0a3b,0x2c30323166252032,0x0a0a3b3634722520,0x2e64322e78657409\n"
".quad 0x662e3233752e3476,0x383472257b203233,0x202c39347225202c,0x7225202c30357225\n"
".quad 0x65745b202c7d3135,0x202c6567616d4978,0x6625202c3966257b,0x090a0a3b5d7d3837\n"
".quad 0x203233622e766f6d,0x25202c3132316625,0x766f6d0a3b383472,0x316625203233622e\n"
".quad 0x39347225202c3232,0x33622e766f6d0a3b,0x2c33323166252032,0x2e0a3b3035722520\n"
".quad 0x3035203220636f6c,0x662e6275730a3120,0x3432316625203233,0x2c3132316625202c\n"
".quad 0x0a3b383131662520,0x203233662e627573,0x25202c3532316625,0x6625202c32323166\n"
".quad 0x6c756d0a3b393131,0x316625203233662e,0x32316625202c3632,0x3532316625202c35\n"
".quad 0x6e722e616d660a3b,0x316625203233662e,0x32316625202c3732,0x3432316625202c34\n"
".quad 0x3b3632316625202c,0x3233662e6275730a,0x202c383231662520,0x25202c3332316625\n"
".quad 0x6d660a3b30323166,0x3233662e6e722e61,0x202c393231662520,0x25202c3832316625\n"
".quad 0x6625202c38323166,0x6f6c2e0a3b373231,0x2039323120372063,0x33662e6464610a31\n"
".quad 0x2c30333166252032,0x202c373131662520,0x0a0a3b3932316625,0x2e64322e78657409\n"
".quad 0x662e3233752e3476,0x323572257b203233,0x202c33357225202c,0x7225202c34357225\n"
".quad 0x65745b202c7d3535,0x202c6567616d4978,0x25202c353266257b,0x0a0a3b5d7d363766\n"
".quad 0x203320636f6c2e09,0x6d0a352038373731,0x25203233622e766f,0x7225202c31333166\n"
".quad 0x2e766f6d0a3b3235,0x3331662520323362,0x3b33357225202c32,0x3233622e766f6d0a\n"
".quad 0x202c333331662520,0x090a0a3b34357225,0x762e64322e786574,0x33662e3233752e34\n"
".quad 0x2c363572257b2032,0x25202c3735722520,0x357225202c383572,0x7865745b202c7d39\n"
".quad 0x7b202c6567616d49,0x6625202c31316625,0x090a0a3b5d7d3837,0x203233622e766f6d\n"
".quad 0x25202c3433316625,0x766f6d0a3b363572,0x316625203233622e,0x37357225202c3533\n"
".quad 0x33622e766f6d0a3b,0x2c36333166252032,0x2e0a3b3835722520,0x3035203220636f6c\n"
".quad 0x662e6275730a3120,0x3733316625203233,0x2c3433316625202c,0x0a3b313331662520\n"
".quad 0x203233662e627573,0x25202c3833316625,0x6625202c35333166,0x6c756d0a3b323331\n"
".quad 0x316625203233662e,0x33316625202c3933,0x3833316625202c38,0x6e722e616d660a3b\n"
".quad 0x316625203233662e,0x33316625202c3034,0x3733316625202c37,0x3b3933316625202c\n"
".quad 0x3233662e6275730a,0x202c313431662520,0x25202c3633316625,0x6d660a3b33333166\n"
".quad 0x3233662e6e722e61,0x202c323431662520,0x25202c3134316625,0x6625202c31343166\n"
".quad 0x6f6c2e0a3b303431,0x2039323120372063,0x33662e6464610a31,0x2c33343166252032\n"
".quad 0x202c303331662520,0x0a0a3b3234316625,0x2e64322e78657409,0x662e3233752e3476\n"
".quad 0x303672257b203233,0x202c31367225202c,0x7225202c32367225,0x65745b202c7d3336\n"
".quad 0x202c6567616d4978,0x25202c363266257b,0x0a0a3b5d7d363766,0x203320636f6c2e09\n"
".quad 0x6d0a352038373731,0x25203233622e766f,0x7225202c34343166,0x2e766f6d0a3b3036\n"
".quad 0x3431662520323362,0x3b31367225202c35,0x3233622e766f6d0a,0x202c363431662520\n"
".quad 0x090a0a3b32367225,0x762e64322e786574,0x33662e3233752e34,0x2c343672257b2032\n"
".quad 0x25202c3536722520,0x367225202c363672,0x7865745b202c7d37,0x7b202c6567616d49\n"
".quad 0x6625202c33316625,0x090a0a3b5d7d3837,0x203233622e766f6d,0x25202c3734316625\n"
".quad 0x766f6d0a3b343672,0x316625203233622e,0x35367225202c3834,0x33622e766f6d0a3b\n"
".quad 0x2c39343166252032,0x2e0a3b3636722520,0x3035203220636f6c,0x662e6275730a3120\n"
".quad 0x3035316625203233,0x2c3734316625202c,0x0a3b343431662520,0x203233662e627573\n"
".quad 0x25202c3135316625,0x6625202c38343166,0x6c756d0a3b353431,0x316625203233662e\n"
".quad 0x35316625202c3235,0x3135316625202c31,0x6e722e616d660a3b,0x316625203233662e\n"
".quad 0x35316625202c3335,0x3035316625202c30,0x3b3235316625202c,0x3233662e6275730a\n"
".quad 0x202c343531662520,0x25202c3934316625,0x6d660a3b36343166,0x3233662e6e722e61\n"
".quad 0x202c353531662520,0x25202c3435316625,0x6625202c34353166,0x6f6c2e0a3b333531\n"
".quad 0x2039323120372063,0x33662e6464610a31,0x2c36353166252032,0x202c333431662520\n"
".quad 0x0a0a3b3535316625,0x2e64322e78657409,0x662e3233752e3476,0x383672257b203233\n"
".quad 0x202c39367225202c,0x7225202c30377225,0x65745b202c7d3137,0x202c6567616d4978\n"
".quad 0x25202c373266257b,0x0a0a3b5d7d363766,0x203320636f6c2e09,0x6d0a352038373731\n"
".quad 0x25203233622e766f,0x7225202c37353166,0x2e766f6d0a3b3836,0x3531662520323362\n"
".quad 0x3b39367225202c38,0x3233622e766f6d0a,0x202c393531662520,0x090a0a3b30377225\n"
".quad 0x762e64322e786574,0x33662e3233752e34,0x2c323772257b2032,0x25202c3337722520\n"
".quad 0x377225202c343772,0x7865745b202c7d35,0x7b202c6567616d49,0x6625202c34316625\n"
".quad 0x090a0a3b5d7d3837,0x203233622e766f6d,0x25202c3036316625,0x766f6d0a3b323772\n"
".quad 0x316625203233622e,0x33377225202c3136,0x33622e766f6d0a3b,0x2c32363166252032\n"
".quad 0x2e0a3b3437722520,0x3035203220636f6c,0x662e6275730a3120,0x3336316625203233\n"
".quad 0x2c3036316625202c,0x0a3b373531662520,0x203233662e627573,0x25202c3436316625\n"
".quad 0x6625202c31363166,0x6c756d0a3b383531,0x316625203233662e,0x36316625202c3536\n"
".quad 0x3436316625202c34,0x6e722e616d660a3b,0x316625203233662e,0x36316625202c3636\n"
".quad 0x3336316625202c33,0x3b3536316625202c,0x3233662e6275730a,0x202c373631662520\n"
".quad 0x25202c3236316625,0x6d660a3b39353166,0x3233662e6e722e61,0x202c383631662520\n"
".quad 0x25202c3736316625,0x6625202c37363166,0x6f6c2e0a3b363631,0x2039323120372063\n"
".quad 0x33662e6464610a31,0x2c34383166252032,0x202c363531662520,0x2e0a3b3836316625\n"
".quad 0x3231203720636f6c,0x6464610a33322037,0x336625203233662e,0x2c39326625202c31\n"
".quad 0x3030384633663020,0x6464610a3b303030,0x357225203233732e,0x31202c347225202c\n"
".quad 0x3720636f6c2e0a3b,0x730a312037323120,0x732e656e2e707465,0x202c347025203233\n"
".quad 0x0a3b37202c357225,0x203233662e766f6d,0x25202c3738316625,0x766f6d0a3b313366\n"
".quad 0x397225203233752e,0x0a3b357225202c39,0x31203720636f6c2e,0x7025400a31203732\n"
".quad 0x4242206172622034,0x646c0a0a3b355f37,0x662e6d617261702e,0x3238316625203233\n"
".quad 0x4c4e375a5f5b202c,0x6a6a50676169644d,0x617261705f66666a,0x6c2e0a3b5d335f6d\n"
".quad 0x353331203720636f,0x662e6c756d0a3120,0x3936316625203233,0x2c3438316625202c\n"
".quad 0x0a3b323831662520,0x662e6e722e616d66,0x3037316625203233,0x2c3838316625202c\n"
".quad 0x202c383831662520,0x6d660a3b38316625,0x3233662e6e722e61,0x202c313731662520\n"
".quad 0x30202c3037316625,0x3046323741433366,0x3936316625202c35,0x33662e6c756d0a3b\n"
".quad 0x2c32373166252032,0x202c313731662520,0x4141384246426630,0x636f6c2e0a3b4233\n"
".quad 0x3520313335203320,0x7070612e3278650a,0x203233662e786f72,0x25202c3337316625\n"
".quad 0x6c2e0a3b32373166,0x383331203720636f,0x2e707465730a3120,0x25203233662e7467\n"
".quad 0x37316625202c3570,0x4344336630202c33,0x730a3b4443434343,0x203233662e706c65\n"
".quad 0x30202c3437316625,0x3046323741433366,0x3030306630202c35,0x25202c3030303030\n"
".quad 0x636f6c2e0a3b3570,0x3120383331203720,0x3233662e6464610a,0x202c333831662520\n"
".quad 0x25202c3338316625,0x6c2e0a3b34373166,0x333231203720636f,0x2e6464610a333220\n"
".quad 0x3831662520323366,0x3838316625202c38,0x303846336630202c,0x64610a3b30303030\n"
".quad 0x7225203233732e64,0x317225202c303031,0x2e0a3b31202c3030,0x3231203720636f6c\n"
".quad 0x707465730a312033,0x203233732e656e2e,0x317225202c367025,0x400a3b37202c3030\n"
".quad 0x2061726220367025,0x0a0a3b345f374242,0x31203720636f6c2e,0x64610a3332203232\n"
".quad 0x6625203233662e64,0x316625202c393831,0x46336630202c3938,0x0a3b303030303038\n"
".quad 0x203233732e646461,0x25202c3130317225,0x3b31202c31303172,0x203720636f6c2e0a\n"
".quad 0x65730a3120323231,0x33732e656e2e7074,0x25202c3770252032,0x3b37202c31303172\n"
".quad 0x726220377025400a,0x3b335f3742422061,0x3720636f6c2e0a0a,0x730a312033343120\n"
".quad 0x662e74672e707465,0x202c387025203233,0x30202c3338316625,0x4343434343443366\n"
".quad 0x2e706c65730a3b44,0x3731662520323366,0x3846336630202c35,0x30202c3030303030\n"
".quad 0x3030303030303066,0x0a3b387025202c30,0x203233662e766f6d,0x30202c3637316625\n"
".quad 0x3030303030303066,0x662e766f6d0a3b30,0x3737316625203233,0x303846336630202c\n"
".quad 0x6c2e0a3b30303030,0x363431203720636f,0x662e6275730a3120,0x3837316625203233\n"
".quad 0x2c3737316625202c,0x0a3b353731662520,0x35203220636f6c2e,0x2e6c756d0a312038\n"
".quad 0x3731662520323366,0x3637316625202c39,0x463733346630202c,0x6c2e0a3b30303030\n"
".quad 0x343331203320636f,0x2e7476630a352033,0x2e3233732e697a72,0x3737722520323366\n"
".quad 0x3b3937316625202c,0x203220636f6c2e0a,0x6c68730a31203835,0x377225203233622e\n"
".quad 0x2c37377225202c38,0x6c756d0a3b343220,0x316625203233662e,0x37316625202c3038\n"
".quad 0x3733346630202c38,0x2e0a3b3030303046,0x3331203320636f6c,0x7476630a35203334\n"
".quad 0x3233732e697a722e,0x377225203233662e,0x3038316625202c39,0x3220636f6c2e0a3b\n"
".quad 0x68730a3120383520,0x7225203233622e6c,0x39377225202c3038,0x68730a3b3631202c\n"
".quad 0x7225203233622e6c,0x37377225202c3138,0x6c756d0a3b38202c,0x316625203233662e\n"
".quad 0x37316625202c3138,0x3733346630202c35,0x2e0a3b3030303046,0x3331203320636f6c\n"
".quad 0x7476630a35203334,0x3233732e697a722e,0x387225203233662e,0x3138316625202c32\n"
".quad 0x3220636f6c2e0a3b,0x726f0a3120383520,0x387225203233622e,0x2c30387225202c33\n"
".quad 0x6f0a3b3837722520,0x7225203233622e72,0x33387225202c3438,0x0a3b32387225202c\n"
".quad 0x25203233622e726f,0x387225202c353872,0x3b31387225202c34,0x617261702e646c0a\n"
".quad 0x7225203233752e6d,0x375a5f5b202c3639,0x50676169644d4c4e,0x61705f66666a6a6a\n"
".quad 0x0a3b5d315f6d6172,0x31203720636f6c2e,0x64616d0a31203634,0x203233732e6f6c2e\n"
".quad 0x7225202c34397225,0x36397225202c3631,0x0a3b32317225202c,0x6d617261702e646c\n"
".quad 0x6c7225203436752e,0x4e375a5f5b202c35,0x6a50676169644d4c,0x7261705f66666a6a\n"
".quad 0x630a3b5d305f6d61,0x672e6f742e617476,0x36752e6c61626f6c,0x202c326c72252034\n"
".quad 0x6c2e0a3b356c7225,0x363431203720636f,0x772e6c756d0a3120,0x203233752e656469\n"
".quad 0x7225202c336c7225,0x610a3b34202c3439,0x25203436732e6464,0x6c7225202c346c72\n"
".quad 0x3b336c7225202c32,0x626f6c672e74730a,0x5b203233752e6c61,0x25202c5d346c7225\n"
".quad 0x6f6c2e0a3b353872,0x2038343120372063,0x7d0a3b7465720a32,0x7972746e652e0a0a\n"
".quad 0x324d4c4e345a5f20,0x0a28666669696a50,0x2e206d617261702e,0x4e345a5f20343675\n"
".quad 0x6669696a50324d4c,0x5f6d617261705f66,0x617261702e0a2c30,0x5f203233752e206d\n"
".quad 0x6a50324d4c4e345a,0x7261705f66666969,0x702e0a2c315f6d61,0x33752e206d617261\n"
".quad 0x4d4c4e345a5f2032,0x5f666669696a5032,0x2c325f6d61726170,0x206d617261702e0a\n"
".quad 0x345a5f203233662e,0x69696a50324d4c4e,0x6d617261705f6666,0x7261702e0a2c335f\n"
".quad 0x203233662e206d61,0x50324d4c4e345a5f,0x61705f666669696a,0x0a290a345f6d6172\n"
".quad 0x2e206765722e0a7b,0x333c662520323366,0x65722e0a3b3e3032,0x20646572702e2067\n"
".quad 0x0a3b3e35313c7025,0x33732e206765722e,0x3635313c72252032,0x206765722e0a3b3e\n"
".quad 0x6c7225203436732e,0x090a0a3b3e33313c,0x206465726168732e,0x34206e67696c612e\n"
".quad 0x635f5f2038622e20,0x61636f6c5f616475,0x36315f7261765f6c,0x6e5f35335f343334\n"
".quad 0x74736e6f635f6e6f,0x746867696557665f,0x0a3b5d3635325b73,0x617261702e646c0a\n"
".quad 0x7225203233752e6d,0x4e345a5f5b202c31,0x6669696a50324d4c,0x5f6d617261705f66\n"
".quad 0x702e646c0a3b5d31,0x3233752e6d617261,0x5f5b202c36722520,0x6a50324d4c4e345a\n"
".quad 0x7261705f66666969,0x2e0a3b5d325f6d61,0x3234203820636f6c,0x752e766f6d0a3120\n"
".quad 0x202c377225203233,0x3b782e6469746e25,0x3233752e766f6d0a,0x6325202c38722520\n"
".quad 0x0a3b782e64696174,0x203233752e766f6d,0x697425202c397225,0x64616d0a3b782e64\n"
".quad 0x203233732e6f6c2e,0x7225202c30317225,0x202c377225202c38,0x6f6c2e0a3b397225\n"
".quad 0x3120333420382063,0x3233752e766f6d0a,0x25202c3131722520,0x3b792e6469617463\n"
".quad 0x3233752e766f6d0a,0x25202c3231722520,0x0a3b792e6469746e,0x203233752e766f6d\n"
".quad 0x7425202c33317225,0x616d0a3b792e6469,0x3233732e6f6c2e64,0x25202c3431722520\n"
".quad 0x317225202c313172,0x3b33317225202c32,0x203820636f6c2e0a,0x7476630a31203534\n"
".quad 0x2e3233662e6e722e,0x3534662520323373,0x0a3b30317225202c,0x203233662e646461\n"
".quad 0x346625202c336625,0x3046336630202c35,0x2e0a3b3030303030,0x3634203820636f6c\n"
".quad 0x722e7476630a3120,0x33732e3233662e6e,0x202c363466252032,0x64610a3b34317225\n"
".quad 0x6625203233662e64,0x2c36346625202c34,0x3030304633663020,0x6f6c2e0a3b303030\n"
".quad 0x3120373420382063,0x2e6f6c2e64616d0a,0x3531722520323373,0x25202c387225202c\n"
".quad 0x630a3b33202c3772,0x33662e6e722e7476,0x6625203233752e32,0x35317225202c3734\n"
".quad 0x33662e6464610a3b,0x25202c3566252032,0x336630202c373466,0x3b30303030303046\n"
".quad 0x203820636f6c2e0a,0x64616d0a31203834,0x203233732e6f6c2e,0x7225202c36317225\n"
".quad 0x2c377225202c3131,0x2e7476630a3b3320,0x752e3233662e6e72,0x2c38346625203233\n"
".quad 0x610a3b3631722520,0x25203233662e6464,0x38346625202c3666,0x303046336630202c\n"
".quad 0x6c2e0a3b30303030,0x203035203820636f,0x6c2e707465730a31,0x7025203233732e74\n"
".quad 0x2c30317225202c31,0x65730a3b31722520,0x33732e746c2e7074,0x25202c3270252032\n"
".quad 0x367225202c343172,0x72702e646e610a3b,0x202c337025206465,0x327025202c317025\n"
".quad 0x3820636f6c2e0a3b,0x25400a3120303520,0x4220617262203370,0x2e0a0a3b325f3842\n"
".quad 0x3231203820636f6c,0x3b7465720a322031,0x3a325f3842420a0a,0x203820636f6c2e0a\n"
".quad 0x6464610a31203535,0x376625203233662e,0x30202c356625202c,0x3030303034304366\n"
".quad 0x662e766f6d0a3b30,0x3331336625203233,0x303430436630202c,0x6c2e0a3b30303030\n"
".quad 0x203535203820636f,0x33662e6464610a31,0x25202c3866252032,0x30436630202c3366\n"
".quad 0x0a3b303030303034,0x35203820636f6c2e,0x6464610a33322034,0x356625203233662e\n"
".quad 0x3331336625202c31,0x303846336630202c,0x6c2e0a3b30303030,0x203535203820636f\n"
".quad 0x33662e6464610a31,0x25202c3966252032,0x31356625202c3566,0x33662e6464610a3b\n"
".quad 0x202c303166252032,0x356625202c336625,0x20636f6c2e0a3b31,0x0a33322034352038\n"
".quad 0x203233662e646461,0x6625202c32356625,0x46336630202c3135,0x0a3b303030303038\n"
".quad 0x35203820636f6c2e,0x2e6464610a312035,0x3131662520323366,0x25202c356625202c\n"
".quad 0x6464610a3b323566,0x316625203233662e,0x202c336625202c32,0x6c2e0a3b32356625\n"
".quad 0x203435203820636f,0x662e6464610a3332,0x2c33356625203233,0x30202c3235662520\n"
".quad 0x3030303038463366,0x20636f6c2e0a3b30,0x610a312035352038,0x25203233662e6464\n"
".quad 0x356625202c333166,0x0a3b33356625202c,0x203233662e646461,0x6625202c34316625\n"
".quad 0x3b33356625202c33,0x203820636f6c2e0a,0x64610a3332203435,0x6625203233662e64\n"
".quad 0x33356625202c3435,0x303846336630202c,0x6c2e0a3b30303030,0x203535203820636f\n"
".quad 0x33662e6464610a31,0x202c353166252032,0x356625202c356625,0x662e6464610a3b34\n"
".quad 0x2c36316625203233,0x6625202c33662520,0x636f6c2e0a3b3435,0x3332203435203820\n"
".quad 0x3233662e6464610a,0x25202c3535662520,0x336630202c343566,0x3b30303030303846\n"
".quad 0x203820636f6c2e0a,0x6464610a31203535,0x316625203233662e,0x202c356625202c37\n"
".quad 0x64610a3b35356625,0x6625203233662e64,0x2c336625202c3831,0x2e0a3b3535662520\n"
".quad 0x3435203820636f6c,0x2e6464610a333220,0x3635662520323366,0x202c35356625202c\n"
".quad 0x3030303846336630,0x636f6c2e0a3b3030,0x0a31203535203820,0x203233662e646461\n"
".quad 0x6625202c39316625,0x3b36356625202c35,0x3233662e6464610a,0x25202c3032662520\n"
".quad 0x36356625202c3366,0x33752e766f6d0a3b,0x202c373172252032,0x662e766f6d0a3b30\n"
".quad 0x3231336625203233,0x303030306630202c,0x6f6d0a3b30303030,0x7225203233752e76\n"
".quad 0x317225202c343531,0x5f3842420a0a3b37,0x752e766f6d0a3a33,0x202c327225203233\n"
".quad 0x2e0a3b3435317225,0x3535203820636f6c,0x662e6464610a3120,0x2c32386625203233\n"
".quad 0x6625202c36662520,0x74090a0a3b333133,0x34762e64322e7865,0x3233662e3233752e\n"
".quad 0x202c383172257b20,0x7225202c39317225,0x31327225202c3032,0x497865745b202c7d\n"
".quad 0x257b202c6567616d,0x32386625202c3766,0x6c2e090a0a3b5d7d,0x373731203320636f\n"
".quad 0x2e766f6d0a352038,0x3538662520323362,0x0a3b38317225202c,0x203233622e766f6d\n"
".quad 0x7225202c36386625,0x2e766f6d0a3b3931,0x3738662520323362,0x0a3b30327225202c\n"
".quad 0x35203820636f6c2e,0x2e6464610a312035,0x3438662520323366,0x25202c346625202c\n"
".quad 0x090a0a3b33313366,0x762e64322e786574,0x33662e3233752e34,0x2c323272257b2032\n"
".quad 0x25202c3332722520,0x327225202c343272,0x7865745b202c7d35,0x7b202c6567616d49\n"
".quad 0x386625202c386625,0x2e090a0a3b5d7d34,0x3731203320636f6c,0x766f6d0a35203837\n"
".quad 0x386625203233622e,0x3b32327225202c38,0x3233622e766f6d0a,0x25202c3938662520\n"
".quad 0x766f6d0a3b333272,0x396625203233622e,0x3b34327225202c30,0x203220636f6c2e0a\n"
".quad 0x6275730a31203035,0x396625203233662e,0x2c38386625202c31,0x730a3b3538662520\n"
".quad 0x25203233662e6275,0x386625202c323966,0x3b36386625202c39,0x3233662e6c756d0a\n"
".quad 0x25202c3339662520,0x396625202c323966,0x722e616d660a3b32,0x6625203233662e6e\n"
".quad 0x31396625202c3439,0x202c31396625202c,0x75730a3b33396625,0x6625203233662e62\n"
".quad 0x30396625202c3539,0x0a3b37386625202c,0x662e6e722e616d66,0x2c36396625203233\n"
".quad 0x25202c3539662520,0x396625202c353966,0x20636f6c2e0a3b34,0x610a312035352038\n"
".quad 0x25203233662e6464,0x336625202c373966,0x36396625202c3231,0x2e786574090a0a3b\n"
".quad 0x33752e34762e6432,0x257b203233662e32,0x327225202c363272,0x2c38327225202c37\n"
".quad 0x202c7d3932722520,0x67616d497865745b,0x2c3966257b202c65,0x3b5d7d3238662520\n"
".quad 0x20636f6c2e090a0a,0x3520383737312033,0x3233622e766f6d0a,0x25202c3839662520\n"
".quad 0x766f6d0a3b363272,0x396625203233622e,0x3b37327225202c39,0x3233622e766f6d0a\n"
".quad 0x202c303031662520,0x090a0a3b38327225,0x762e64322e786574,0x33662e3233752e34\n"
".quad 0x2c303372257b2032,0x25202c3133722520,0x337225202c323372,0x7865745b202c7d33\n"
".quad 0x7b202c6567616d49,0x6625202c30316625,0x090a0a3b5d7d3438,0x203233622e766f6d\n"
".quad 0x25202c3130316625,0x766f6d0a3b303372,0x316625203233622e,0x31337225202c3230\n"
".quad 0x33622e766f6d0a3b,0x2c33303166252032,0x2e0a3b3233722520,0x3035203220636f6c\n"
".quad 0x662e6275730a3120,0x3430316625203233,0x2c3130316625202c,0x730a3b3839662520\n"
".quad 0x25203233662e6275,0x6625202c35303166,0x396625202c323031,0x662e6c756d0a3b39\n"
".quad 0x3630316625203233,0x2c3530316625202c,0x0a3b353031662520,0x662e6e722e616d66\n"
".quad 0x3730316625203233,0x2c3430316625202c,0x202c343031662520,0x730a3b3630316625\n"
".quad 0x25203233662e6275,0x6625202c38303166,0x316625202c333031,0x2e616d660a3b3030\n"
".quad 0x25203233662e6e72,0x6625202c39303166,0x316625202c383031,0x30316625202c3830\n"
".quad 0x20636f6c2e0a3b37,0x610a312035352038,0x25203233662e6464,0x6625202c30313166\n"
".quad 0x30316625202c3739,0x786574090a0a3b39,0x752e34762e64322e,0x7b203233662e3233\n"
".quad 0x7225202c34337225,0x36337225202c3533,0x2c7d37337225202c,0x616d497865745b20\n"
".quad 0x3166257b202c6567,0x7d32386625202c31,0x6f6c2e090a0a3b5d,0x3837373120332063\n"
".quad 0x622e766f6d0a3520,0x3131316625203233,0x0a3b34337225202c,0x203233622e766f6d\n"
".quad 0x25202c3231316625,0x766f6d0a3b353372,0x316625203233622e,0x36337225202c3331\n"
".quad 0x2e786574090a0a3b,0x33752e34762e6432,0x257b203233662e32,0x337225202c383372\n"
".quad 0x2c30347225202c39,0x202c7d3134722520,0x67616d497865745b,0x323166257b202c65\n"
".quad 0x5d7d34386625202c,0x2e766f6d090a0a3b,0x3131662520323362,0x3b38337225202c34\n"
".quad 0x3233622e766f6d0a,0x202c353131662520,0x6f6d0a3b39337225,0x6625203233622e76\n"
".quad 0x347225202c363131,0x20636f6c2e0a3b30,0x730a312030352032,0x25203233662e6275\n"
".quad 0x6625202c37313166,0x316625202c343131,0x2e6275730a3b3131,0x3131662520323366\n"
".quad 0x3531316625202c38,0x3b3231316625202c,0x3233662e6c756d0a,0x202c393131662520\n"
".quad 0x25202c3831316625,0x6d660a3b38313166,0x3233662e6e722e61,0x202c303231662520\n"
".quad 0x25202c3731316625,0x6625202c37313166,0x6275730a3b393131,0x316625203233662e\n"
".quad 0x31316625202c3132,0x3331316625202c36,0x6e722e616d660a3b,0x316625203233662e\n"
".quad 0x32316625202c3232,0x3132316625202c31,0x3b3032316625202c,0x203820636f6c2e0a\n"
".quad 0x6464610a31203535,0x316625203233662e,0x31316625202c3332,0x3232316625202c30\n"
".quad 0x2e786574090a0a3b,0x33752e34762e6432,0x257b203233662e32,0x347225202c323472\n"
".quad 0x2c34347225202c33,0x202c7d3534722520,0x67616d497865745b,0x333166257b202c65\n"
".quad 0x5d7d32386625202c,0x636f6c2e090a0a3b,0x2038373731203320,0x33622e766f6d0a35\n"
".quad 0x2c34323166252032,0x6d0a3b3234722520,0x25203233622e766f,0x7225202c35323166\n"
".quad 0x2e766f6d0a3b3334,0x3231662520323362,0x3b34347225202c36,0x322e786574090a0a\n"
".quad 0x3233752e34762e64,0x72257b203233662e,0x37347225202c3634,0x202c38347225202c\n"
".quad 0x5b202c7d39347225,0x6567616d49786574,0x2c343166257b202c,0x3b5d7d3438662520\n"
".quad 0x622e766f6d090a0a,0x3732316625203233,0x0a3b36347225202c,0x203233622e766f6d\n"
".quad 0x25202c3832316625,0x766f6d0a3b373472,0x316625203233622e,0x38347225202c3932\n"
".quad 0x3220636f6c2e0a3b,0x75730a3120303520,0x6625203233662e62,0x316625202c303331\n"
".quad 0x32316625202c3732,0x662e6275730a3b34,0x3133316625203233,0x2c3832316625202c\n"
".quad 0x0a3b353231662520,0x203233662e6c756d,0x25202c3233316625,0x6625202c31333166\n"
".quad 0x616d660a3b313331,0x203233662e6e722e,0x25202c3333316625,0x6625202c30333166\n"
".quad 0x316625202c303331,0x2e6275730a3b3233,0x3331662520323366,0x3932316625202c34\n"
".quad 0x3b3632316625202c,0x2e6e722e616d660a,0x3331662520323366,0x3433316625202c35\n"
".quad 0x2c3433316625202c,0x0a3b333331662520,0x35203820636f6c2e,0x2e6464610a312035\n"
".quad 0x3331662520323366,0x3332316625202c36,0x3b3533316625202c,0x322e786574090a0a\n"
".quad 0x3233752e34762e64,0x72257b203233662e,0x31357225202c3035,0x202c32357225202c\n"
".quad 0x5b202c7d33357225,0x6567616d49786574,0x2c353166257b202c,0x3b5d7d3238662520\n"
".quad 0x20636f6c2e090a0a,0x3520383737312033,0x3233622e766f6d0a,0x202c373331662520\n"
".quad 0x6f6d0a3b30357225,0x6625203233622e76,0x357225202c383331,0x622e766f6d0a3b31\n"
".quad 0x3933316625203233,0x0a3b32357225202c,0x64322e786574090a,0x2e3233752e34762e\n"
".quad 0x3572257b20323366,0x2c35357225202c34,0x25202c3635722520,0x745b202c7d373572\n"
".quad 0x2c6567616d497865,0x202c363166257b20,0x0a3b5d7d34386625,0x33622e766f6d090a\n"
".quad 0x2c30343166252032,0x6d0a3b3435722520,0x25203233622e766f,0x7225202c31343166\n"
".quad 0x2e766f6d0a3b3535,0x3431662520323362,0x3b36357225202c32,0x203220636f6c2e0a\n"
".quad 0x6275730a31203035,0x316625203233662e,0x34316625202c3334,0x3733316625202c30\n"
".quad 0x33662e6275730a3b,0x2c34343166252032,0x202c313431662520,0x6d0a3b3833316625\n"
".quad 0x25203233662e6c75,0x6625202c35343166,0x316625202c343431,0x2e616d660a3b3434\n"
".quad 0x25203233662e6e72,0x6625202c36343166,0x316625202c333431,0x34316625202c3334\n"
".quad 0x662e6275730a3b35,0x3734316625203233,0x2c3234316625202c,0x0a3b393331662520\n"
".quad 0x662e6e722e616d66,0x3834316625203233,0x2c3734316625202c,0x202c373431662520\n"
".quad 0x2e0a3b3634316625,0x3535203820636f6c,0x662e6464610a3120,0x3934316625203233\n"
".quad 0x2c3633316625202c,0x0a3b383431662520,0x64322e786574090a,0x2e3233752e34762e\n"
".quad 0x3572257b20323366,0x2c39357225202c38,0x25202c3036722520,0x745b202c7d313672\n"
".quad 0x2c6567616d497865,0x202c373166257b20,0x0a3b5d7d32386625,0x3320636f6c2e090a\n"
".quad 0x0a35203837373120,0x203233622e766f6d,0x25202c3035316625,0x766f6d0a3b383572\n"
".quad 0x316625203233622e,0x39357225202c3135,0x33622e766f6d0a3b,0x2c32353166252032\n"
".quad 0x0a0a3b3036722520,0x2e64322e78657409,0x662e3233752e3476,0x323672257b203233\n"
".quad 0x202c33367225202c,0x7225202c34367225,0x65745b202c7d3536,0x202c6567616d4978\n"
".quad 0x25202c383166257b,0x0a0a3b5d7d343866,0x3233622e766f6d09,0x202c333531662520\n"
".quad 0x6f6d0a3b32367225,0x6625203233622e76,0x367225202c343531,0x622e766f6d0a3b33\n"
".quad 0x3535316625203233,0x0a3b34367225202c,0x35203220636f6c2e,0x2e6275730a312030\n"
".quad 0x3531662520323366,0x3335316625202c36,0x3b3035316625202c,0x3233662e6275730a\n"
".quad 0x202c373531662520,0x25202c3435316625,0x756d0a3b31353166,0x6625203233662e6c\n"
".quad 0x316625202c383531,0x35316625202c3735,0x722e616d660a3b37,0x6625203233662e6e\n"
".quad 0x316625202c393531,0x35316625202c3635,0x3835316625202c36,0x33662e6275730a3b\n"
".quad 0x2c30363166252032,0x202c353531662520,0x660a3b3235316625,0x33662e6e722e616d\n"
".quad 0x2c31363166252032,0x202c303631662520,0x25202c3036316625,0x6c2e0a3b39353166\n"
".quad 0x203535203820636f,0x33662e6464610a31,0x2c32363166252032,0x202c393431662520\n"
".quad 0x0a0a3b3136316625,0x2e64322e78657409,0x662e3233752e3476,0x363672257b203233\n"
".quad 0x202c37367225202c,0x7225202c38367225,0x65745b202c7d3936,0x202c6567616d4978\n"
".quad 0x25202c393166257b,0x0a0a3b5d7d323866,0x203320636f6c2e09,0x6d0a352038373731\n"
".quad 0x25203233622e766f,0x7225202c33363166,0x2e766f6d0a3b3636,0x3631662520323362\n"
".quad 0x3b37367225202c34,0x3233622e766f6d0a,0x202c353631662520,0x090a0a3b38367225\n"
".quad 0x762e64322e786574,0x33662e3233752e34,0x2c303772257b2032,0x25202c3137722520\n"
".quad 0x377225202c323772,0x7865745b202c7d33,0x7b202c6567616d49,0x6625202c30326625\n"
".quad 0x090a0a3b5d7d3438,0x203233622e766f6d,0x25202c3636316625,0x766f6d0a3b303772\n"
".quad 0x316625203233622e,0x31377225202c3736,0x33622e766f6d0a3b,0x2c38363166252032\n"
".quad 0x2e0a3b3237722520,0x3035203220636f6c,0x662e6275730a3120,0x3936316625203233\n"
".quad 0x2c3636316625202c,0x0a3b333631662520,0x203233662e627573,0x25202c3037316625\n"
".quad 0x6625202c37363166,0x6c756d0a3b343631,0x316625203233662e,0x37316625202c3137\n"
".quad 0x3037316625202c30,0x6e722e616d660a3b,0x316625203233662e,0x36316625202c3237\n"
".quad 0x3936316625202c39,0x3b3137316625202c,0x3233662e6275730a,0x202c333731662520\n"
".quad 0x25202c3836316625,0x6d660a3b35363166,0x3233662e6e722e61,0x202c343731662520\n"
".quad 0x25202c3337316625,0x6625202c33373166,0x6f6c2e0a3b323731,0x3120353520382063\n"
".quad 0x3233662e6464610a,0x202c323133662520,0x25202c3236316625,0x6c2e0a3b34373166\n"
".quad 0x203335203820636f,0x662e6464610a3332,0x3331336625203233,0x2c3331336625202c\n"
".quad 0x3030384633663020,0x6464610a3b303030,0x337225203233732e,0x31202c327225202c\n"
".quad 0x3820636f6c2e0a3b,0x65730a3120333520,0x33732e656e2e7074,0x25202c3470252032\n"
".quad 0x6d0a3b37202c3372,0x25203233752e766f,0x7225202c34353172,0x20636f6c2e0a3b33\n"
".quad 0x400a312033352038,0x2061726220347025,0x0a0a3b335f384242,0x34203820636f6c2e\n"
".quad 0x2e766f6d0a312032,0x3531722520323375,0x2e64697425202c32,0x732e6464610a3b78\n"
".quad 0x2c36377225203233,0x202c323531722520,0x636f6c2e0a3b332d,0x0a31203136203820\n"
".quad 0x732e6f6c2e6c756d,0x2c37377225203233,0x25202c3637722520,0x6f6c2e0a3b363772\n"
".quad 0x3120333420382063,0x3233752e766f6d0a,0x202c333531722520,0x0a3b792e64697425\n"
".quad 0x203233732e646461,0x7225202c39377225,0x3b332d202c333531,0x203820636f6c2e0a\n"
".quad 0x64616d0a31203136,0x203233732e6f6c2e,0x7225202c30387225,0x39377225202c3937\n"
".quad 0x0a3b37377225202c,0x662e6e722e747663,0x25203233752e3233,0x7225202c35373166\n"
".quad 0x702e646c0a3b3038,0x3233662e6d617261,0x202c303133662520,0x324d4c4e345a5f5b\n"
".quad 0x705f666669696a50,0x3b5d335f6d617261,0x203820636f6c2e0a,0x6c756d0a31203636\n"
".quad 0x316625203233662e,0x31336625202c3637,0x3031336625202c32,0x6e722e616d660a3b\n"
".quad 0x316625203233662e,0x37316625202c3737,0x4143336630202c35,0x25202c3530463237\n"
".quad 0x756d0a3b36373166,0x6625203233662e6c,0x316625202c383731,0x46426630202c3737\n"
".quad 0x0a3b423341413842,0x35203320636f6c2e,0x3278650a35203133,0x2e786f727070612e\n"
".quad 0x3731662520323366,0x3837316625202c39,0x33622e6c68730a3b,0x202c313872252032\n"
".quad 0x33202c3335317225,0x3820636f6c2e0a3b,0x64610a3120393620,0x7225203233732e64\n"
".quad 0x31387225202c3238,0x3b3235317225202c,0x6469772e6c756d0a,0x7225203233752e65\n"
".quad 0x32387225202c346c,0x766f6d0a3b34202c,0x6c7225203436752e,0x75635f5f202c3231\n"
".quad 0x6c61636f6c5f6164,0x3436315f7261765f,0x6f6e5f35335f3433,0x5f74736e6f635f6e\n"
".quad 0x7374686769655766,0x36732e6464610a3b,0x202c366c72252034,0x25202c32316c7225\n"
".quad 0x6f6c2e0a3b346c72,0x3120393620382063,0x726168732e74730a,0x5b203233662e6465\n"
".quad 0x25202c5d366c7225,0x6c2e0a3b39373166,0x203137203820636f,0x79732e7261620a31\n"
".quad 0x6f6d0a3b3020636e,0x6625203233662e76,0x436630202c393133,0x3b30303030303430\n"
".quad 0x203820636f6c2e0a,0x64610a3332203538,0x6625203233662e64,0x336625202c363831\n"
".quad 0x46336630202c3931,0x0a3b303030303038,0x39203820636f6c2e,0x2e6464610a312031\n"
".quad 0x3632662520323366,0x25202c336625202c,0x6c2e0a3b36383166,0x203538203820636f\n"
".quad 0x662e6464610a3332,0x3738316625203233,0x2c3638316625202c,0x3030384633663020\n"
".quad 0x6f6c2e0a3b303030,0x3120313920382063,0x3233662e6464610a,0x25202c3732662520\n"
".quad 0x38316625202c3366,0x20636f6c2e0a3b37,0x0a33322035382038,0x203233662e646461\n"
".quad 0x25202c3838316625,0x6630202c37383166,0x3030303030384633,0x3820636f6c2e0a3b\n"
".quad 0x64610a3120313920,0x6625203233662e64,0x2c336625202c3832,0x0a3b383831662520\n"
".quad 0x38203820636f6c2e,0x6464610a33322035,0x316625203233662e,0x38316625202c3938\n"
".quad 0x3846336630202c38,0x2e0a3b3030303030,0x3139203820636f6c,0x662e6464610a3120\n"
".quad 0x2c39326625203233,0x6625202c33662520,0x6f6c2e0a3b393831,0x3220353820382063\n"
".quad 0x33662e6464610a33,0x2c30393166252032,0x202c393831662520,0x3030303846336630\n"
".quad 0x636f6c2e0a3b3030,0x0a31203139203820,0x203233662e646461,0x6625202c30336625\n"
".quad 0x3039316625202c33,0x3820636f6c2e0a3b,0x610a333220353820,0x25203233662e6464\n"
".quad 0x6625202c31393166,0x336630202c303931,0x3b30303030303846,0x203820636f6c2e0a\n"
".quad 0x6464610a31203139,0x336625203233662e,0x202c336625202c31,0x2e0a3b3139316625\n"
".quad 0x3538203820636f6c,0x2e6464610a333220,0x3931662520323366,0x3139316625202c32\n"
".quad 0x303846336630202c,0x6c2e0a3b30303030,0x203139203820636f,0x33662e6464610a31\n"
".quad 0x202c323366252032,0x316625202c336625,0x2e766f6d0a3b3239,0x3438722520323375\n"
".quad 0x766f6d0a3b30202c,0x336625203233662e,0x30306630202c3831,0x0a3b303030303030\n"
".quad 0x203233662e766f6d,0x25202c3731336625,0x6f6d0a3b38313366,0x6625203233662e76\n"
".quad 0x336625202c363133,0x2e766f6d0a3b3831,0x3133662520323366,0x3831336625202c35\n"
".quad 0x33662e766f6d0a3b,0x2c34313366252032,0x0a3b383133662520,0x203233752e766f6d\n"
".quad 0x25202c3535317225,0x42420a0a3b343872,0x766f6d0a3a355f38,0x347225203233752e\n"
".quad 0x3b3535317225202c,0x203820636f6c2e0a,0x2e646c0a31203838,0x662e646572616873\n"
".quad 0x3930326625203233,0x32316c72255b202c,0x20636f6c2e0a3b5d,0x610a312031392038\n"
".quad 0x25203233662e6464,0x6625202c38303266,0x3931336625202c34,0x2e786574090a0a3b\n"
".quad 0x33752e34762e6432,0x257b203233662e32,0x387225202c353872,0x2c37387225202c36\n"
".quad 0x202c7d3838722520,0x67616d497865745b,0x2c3866257b202c65,0x5d7d383032662520\n"
".quad 0x636f6c2e090a0a3b,0x2038373731203320,0x33622e766f6d0a35,0x2c30313266252032\n"
".quad 0x6d0a3b3538722520,0x25203233622e766f,0x7225202c31313266,0x2e766f6d0a3b3638\n"
".quad 0x3132662520323362,0x3b37387225202c32,0x203820636f6c2e0a,0x616d660a31203239\n"
".quad 0x203233662e6e722e,0x25202c3331326625,0x6625202c30313266,0x336625202c393032\n"
".quad 0x636f6c2e0a3b3431,0x0a31203339203820,0x662e6e722e616d66,0x3431326625203233\n"
".quad 0x2c3131326625202c,0x202c393032662520,0x2e0a3b3531336625,0x3439203820636f6c\n"
".quad 0x722e616d660a3120,0x6625203233662e6e,0x326625202c353132,0x30326625202c3231\n"
".quad 0x3631336625202c39,0x3820636f6c2e0a3b,0x64610a3120373920,0x6625203233662e64\n"
".quad 0x336625202c363132,0x30326625202c3831,0x20636f6c2e0a3b39,0x0a31203130312038\n"
".quad 0x2e74672e70746573,0x2c35702520323366,0x202c393032662520,0x4343434344336630\n"
".quad 0x706c65730a3b4443,0x326625203233662e,0x43336630202c3731,0x202c353046323741\n"
".quad 0x3030303030306630,0x3b357025202c3030,0x203820636f6c2e0a,0x64610a3120313031\n"
".quad 0x6625203233662e64,0x336625202c383132,0x31326625202c3731,0x20636f6c2e0a3b37\n"
".quad 0x6c0a312038382038,0x6465726168732e64,0x326625203233662e,0x6c72255b202c3931\n"
".quad 0x0a0a3b5d342b3231,0x2e64322e78657409,0x662e3233752e3476,0x393872257b203233\n"
".quad 0x202c30397225202c,0x7225202c31397225,0x65745b202c7d3239,0x202c6567616d4978\n"
".quad 0x25202c363266257b,0x0a3b5d7d38303266,0x3320636f6c2e090a,0x0a35203837373120\n"
".quad 0x203233622e766f6d,0x25202c3032326625,0x766f6d0a3b393872,0x326625203233622e\n"
".quad 0x30397225202c3132,0x33622e766f6d0a3b,0x2c32323266252032,0x2e0a3b3139722520\n"
".quad 0x3239203820636f6c,0x722e616d660a3120,0x6625203233662e6e,0x326625202c333232\n"
".quad 0x31326625202c3032,0x3331326625202c39,0x3820636f6c2e0a3b,0x6d660a3120333920\n"
".quad 0x3233662e6e722e61,0x202c343232662520,0x25202c3132326625,0x6625202c39313266\n"
".quad 0x6f6c2e0a3b343132,0x3120343920382063,0x2e6e722e616d660a,0x3232662520323366\n"
".quad 0x3232326625202c35,0x2c3931326625202c,0x0a3b353132662520,0x39203820636f6c2e\n"
".quad 0x2e6464610a312037,0x3232662520323366,0x3631326625202c36,0x3b3931326625202c\n"
".quad 0x203820636f6c2e0a,0x65730a3120313031,0x33662e74672e7074,0x25202c3670252032\n"
".quad 0x6630202c39313266,0x4443434343434433,0x662e706c65730a3b,0x3732326625203233\n"
".quad 0x374143336630202c,0x6630202c35304632,0x3030303030303030,0x2e0a3b367025202c\n"
".quad 0x3031203820636f6c,0x2e6464610a312031,0x3232662520323366,0x3831326625202c38\n"
".quad 0x3b3732326625202c,0x203820636f6c2e0a,0x2e646c0a31203838,0x662e646572616873\n"
".quad 0x3932326625203233,0x32316c72255b202c,0x74090a0a3b5d382b,0x34762e64322e7865\n"
".quad 0x3233662e3233752e,0x202c333972257b20,0x7225202c34397225,0x36397225202c3539\n"
".quad 0x497865745b202c7d,0x257b202c6567616d,0x326625202c373266,0x090a0a3b5d7d3830\n"
".quad 0x31203320636f6c2e,0x6f6d0a3520383737,0x6625203233622e76,0x397225202c303332\n"
".quad 0x622e766f6d0a3b33,0x3133326625203233,0x0a3b34397225202c,0x203233622e766f6d\n"
".quad 0x25202c3233326625,0x6f6c2e0a3b353972,0x3120323920382063,0x2e6e722e616d660a\n"
".quad 0x3332662520323366,0x3033326625202c33,0x2c3932326625202c,0x0a3b333232662520\n"
".quad 0x39203820636f6c2e,0x2e616d660a312033,0x25203233662e6e72,0x6625202c34333266\n"
".quad 0x326625202c313332,0x32326625202c3932,0x20636f6c2e0a3b34,0x660a312034392038\n"
".quad 0x33662e6e722e616d,0x2c35333266252032,0x202c323332662520,0x25202c3932326625\n"
".quad 0x6c2e0a3b35323266,0x203739203820636f,0x33662e6464610a31,0x2c36333266252032\n"
".quad 0x202c363232662520,0x2e0a3b3932326625,0x3031203820636f6c,0x707465730a312031\n"
".quad 0x203233662e74672e,0x326625202c377025,0x44336630202c3932,0x0a3b444343434343\n"
".quad 0x3233662e706c6573,0x202c373332662520,0x4632374143336630,0x30306630202c3530\n"
".quad 0x202c303030303030,0x6f6c2e0a3b377025,0x2031303120382063,0x33662e6464610a31\n"
".quad 0x2c38333266252032,0x202c383232662520,0x2e0a3b3733326625,0x3838203820636f6c\n"
".quad 0x68732e646c0a3120,0x3233662e64657261,0x202c393332662520,0x312b32316c72255b\n"
".quad 0x6574090a0a3b5d32,0x2e34762e64322e78,0x203233662e323375,0x25202c373972257b\n"
".quad 0x397225202c383972,0x3030317225202c39,0x497865745b202c7d,0x257b202c6567616d\n"
".quad 0x326625202c383266,0x090a0a3b5d7d3830,0x31203320636f6c2e,0x6f6d0a3520383737\n"
".quad 0x6625203233622e76,0x397225202c303432,0x622e766f6d0a3b37,0x3134326625203233\n"
".quad 0x0a3b38397225202c,0x203233622e766f6d,0x25202c3234326625,0x6f6c2e0a3b393972\n"
".quad 0x3120323920382063,0x2e6e722e616d660a,0x3432662520323366,0x3034326625202c33\n"
".quad 0x2c3933326625202c,0x0a3b333332662520,0x39203820636f6c2e,0x2e616d660a312033\n"
".quad 0x25203233662e6e72,0x6625202c34343266,0x326625202c313432,0x33326625202c3933\n"
".quad 0x20636f6c2e0a3b34,0x660a312034392038,0x33662e6e722e616d,0x2c35343266252032\n"
".quad 0x202c323432662520,0x25202c3933326625,0x6c2e0a3b35333266,0x203739203820636f\n"
".quad 0x33662e6464610a31,0x2c36343266252032,0x202c363332662520,0x2e0a3b3933326625\n"
".quad 0x3031203820636f6c,0x707465730a312031,0x203233662e74672e,0x326625202c387025\n"
".quad 0x44336630202c3933,0x0a3b444343434343,0x3233662e706c6573,0x202c373432662520\n"
".quad 0x4632374143336630,0x30306630202c3530,0x202c303030303030,0x6f6c2e0a3b387025\n"
".quad 0x2031303120382063,0x33662e6464610a31,0x2c38343266252032,0x202c383332662520\n"
".quad 0x2e0a3b3734326625,0x3838203820636f6c,0x68732e646c0a3120,0x3233662e64657261\n"
".quad 0x202c393432662520,0x312b32316c72255b,0x6574090a0a3b5d36,0x2e34762e64322e78\n"
".quad 0x203233662e323375,0x202c31303172257b,0x25202c3230317225,0x7225202c33303172\n"
".quad 0x745b202c7d343031,0x2c6567616d497865,0x202c393266257b20,0x3b5d7d3830326625\n"
".quad 0x20636f6c2e090a0a,0x3520383737312033,0x3233622e766f6d0a,0x202c303532662520\n"
".quad 0x6d0a3b3130317225,0x25203233622e766f,0x7225202c31353266,0x766f6d0a3b323031\n"
".quad 0x326625203233622e,0x30317225202c3235,0x20636f6c2e0a3b33,0x660a312032392038\n"
".quad 0x33662e6e722e616d,0x2c33353266252032,0x202c303532662520,0x25202c3934326625\n"
".quad 0x6c2e0a3b33343266,0x203339203820636f,0x6e722e616d660a31,0x326625203233662e\n"
".quad 0x35326625202c3435,0x3934326625202c31,0x3b3434326625202c,0x203820636f6c2e0a\n"
".quad 0x616d660a31203439,0x203233662e6e722e,0x25202c3535326625,0x6625202c32353266\n"
".quad 0x326625202c393432,0x636f6c2e0a3b3534,0x0a31203739203820,0x203233662e646461\n"
".quad 0x25202c3635326625,0x6625202c36343266,0x6f6c2e0a3b393432,0x2031303120382063\n"
".quad 0x672e707465730a31,0x7025203233662e74,0x3934326625202c39,0x434344336630202c\n"
".quad 0x65730a3b44434343,0x25203233662e706c,0x6630202c37353266,0x3530463237414333\n"
".quad 0x303030306630202c,0x7025202c30303030,0x20636f6c2e0a3b39,0x0a31203130312038\n"
".quad 0x203233662e646461,0x25202c3835326625,0x6625202c38343266,0x6f6c2e0a3b373532\n"
".quad 0x3120383820382063,0x726168732e646c0a,0x25203233662e6465,0x255b202c39353266\n"
".quad 0x5d30322b32316c72,0x2e786574090a0a3b,0x33752e34762e6432,0x257b203233662e32\n"
".quad 0x7225202c35303172,0x317225202c363031,0x30317225202c3730,0x7865745b202c7d38\n"
".quad 0x7b202c6567616d49,0x6625202c30336625,0x0a0a3b5d7d383032,0x203320636f6c2e09\n"
".quad 0x6d0a352038373731,0x25203233622e766f,0x7225202c30363266,0x766f6d0a3b353031\n"
".quad 0x326625203233622e,0x30317225202c3136,0x622e766f6d0a3b36,0x3236326625203233\n"
".quad 0x3b3730317225202c,0x203820636f6c2e0a,0x616d660a31203239,0x203233662e6e722e\n"
".quad 0x25202c3336326625,0x6625202c30363266,0x326625202c393532,0x636f6c2e0a3b3335\n"
".quad 0x0a31203339203820,0x662e6e722e616d66,0x3436326625203233,0x2c3136326625202c\n"
".quad 0x202c393532662520,0x2e0a3b3435326625,0x3439203820636f6c,0x722e616d660a3120\n"
".quad 0x6625203233662e6e,0x326625202c353632,0x35326625202c3236,0x3535326625202c39\n"
".quad 0x3820636f6c2e0a3b,0x64610a3120373920,0x6625203233662e64,0x326625202c363632\n"
".quad 0x35326625202c3635,0x20636f6c2e0a3b39,0x0a31203130312038,0x2e74672e70746573\n"
".quad 0x3031702520323366,0x2c3935326625202c,0x4343434433663020,0x6c65730a3b444343\n"
".quad 0x6625203233662e70,0x336630202c373632,0x2c35304632374143,0x3030303030663020\n"
".quad 0x317025202c303030,0x20636f6c2e0a3b30,0x0a31203130312038,0x203233662e646461\n"
".quad 0x25202c3836326625,0x6625202c38353266,0x6f6c2e0a3b373632,0x3120383820382063\n"
".quad 0x726168732e646c0a,0x25203233662e6465,0x255b202c39363266,0x5d34322b32316c72\n"
".quad 0x2e786574090a0a3b,0x33752e34762e6432,0x257b203233662e32,0x7225202c39303172\n"
".quad 0x317225202c303131,0x31317225202c3131,0x7865745b202c7d32,0x7b202c6567616d49\n"
".quad 0x6625202c31336625,0x0a0a3b5d7d383032,0x203320636f6c2e09,0x6d0a352038373731\n"
".quad 0x25203233622e766f,0x7225202c30373266,0x766f6d0a3b393031,0x326625203233622e\n"
".quad 0x31317225202c3137,0x622e766f6d0a3b30,0x3237326625203233,0x3b3131317225202c\n"
".quad 0x203820636f6c2e0a,0x616d660a31203239,0x203233662e6e722e,0x25202c3337326625\n"
".quad 0x6625202c30373266,0x326625202c393632,0x636f6c2e0a3b3336,0x0a31203339203820\n"
".quad 0x662e6e722e616d66,0x3437326625203233,0x2c3137326625202c,0x202c393632662520\n"
".quad 0x2e0a3b3436326625,0x3439203820636f6c,0x722e616d660a3120,0x6625203233662e6e\n"
".quad 0x326625202c353732,0x36326625202c3237,0x3536326625202c39,0x3820636f6c2e0a3b\n"
".quad 0x64610a3120373920,0x6625203233662e64,0x326625202c363732,0x36326625202c3636\n"
".quad 0x20636f6c2e0a3b39,0x0a31203130312038,0x2e74672e70746573,0x3131702520323366\n"
".quad 0x2c3936326625202c,0x4343434433663020,0x6c65730a3b444343,0x6625203233662e70\n"
".quad 0x336630202c373732,0x2c35304632374143,0x3030303030663020,0x317025202c303030\n"
".quad 0x20636f6c2e0a3b31,0x0a31203130312038,0x203233662e646461,0x25202c3837326625\n"
".quad 0x6625202c38363266,0x6f6c2e0a3b373732,0x3120383820382063,0x726168732e646c0a\n"
".quad 0x25203233662e6465,0x255b202c39373266,0x5d38322b32316c72,0x2e786574090a0a3b\n"
".quad 0x33752e34762e6432,0x257b203233662e32,0x7225202c33313172,0x317225202c343131\n"
".quad 0x31317225202c3531,0x7865745b202c7d36,0x7b202c6567616d49,0x6625202c32336625\n"
".quad 0x0a0a3b5d7d383032,0x203320636f6c2e09,0x6d0a352038373731,0x25203233622e766f\n"
".quad 0x7225202c30383266,0x766f6d0a3b333131,0x326625203233622e,0x31317225202c3138\n"
".quad 0x622e766f6d0a3b34,0x3238326625203233,0x3b3531317225202c,0x203820636f6c2e0a\n"
".quad 0x616d660a31203239,0x203233662e6e722e,0x25202c3431336625,0x6625202c30383266\n"
".quad 0x326625202c393732,0x636f6c2e0a3b3337,0x0a31203339203820,0x662e6e722e616d66\n"
".quad 0x3531336625203233,0x2c3138326625202c,0x202c393732662520,0x2e0a3b3437326625\n"
".quad 0x3439203820636f6c,0x722e616d660a3120,0x6625203233662e6e,0x326625202c363133\n"
".quad 0x37326625202c3238,0x3537326625202c39,0x3820636f6c2e0a3b,0x64610a3120373920\n"
".quad 0x6625203233662e64,0x326625202c383133,0x37326625202c3637,0x20636f6c2e0a3b39\n"
".quad 0x0a31203130312038,0x2e74672e70746573,0x3231702520323366,0x2c3937326625202c\n"
".quad 0x4343434433663020,0x6c65730a3b444343,0x6625203233662e70,0x336630202c333832\n"
".quad 0x2c35304632374143,0x3030303030663020,0x317025202c303030,0x20636f6c2e0a3b32\n"
".quad 0x0a31203130312038,0x203233662e646461,0x25202c3731336625,0x6625202c38373266\n"
".quad 0x6f6c2e0a3b333832,0x3220343820382063,0x33662e6464610a33,0x2c39313366252032\n"
".quad 0x202c393133662520,0x3030303846336630,0x2e6464610a3b3030,0x316c722520343673\n"
".quad 0x32316c7225202c32,0x64610a3b3233202c,0x7225203233732e64,0x202c347225202c35\n"
".quad 0x20636f6c2e0a3b31,0x730a312034382038,0x732e656e2e707465,0x2c33317025203233\n"
".quad 0x3b38202c35722520,0x3233752e766f6d0a,0x202c353531722520,0x6f6c2e0a3b357225\n"
".quad 0x3120343820382063,0x622033317025400a,0x355f384242206172,0x20636f6c2e0a0a3b\n"
".quad 0x0a31203530312038,0x662e6e722e706372,0x3638326625203233,0x3b3831336625202c\n"
".quad 0x3233662e766f6d0a,0x202c373832662520,0x3030303846336630,0x702e646c0a3b3030\n"
".quad 0x3233662e6d617261,0x202c313133662520,0x324d4c4e345a5f5b,0x705f666669696a50\n"
".quad 0x3b5d345f6d617261,0x203820636f6c2e0a,0x75730a3120323131,0x6625203233662e62\n"
".quad 0x326625202c383832,0x31336625202c3738,0x2e707465730a3b31,0x25203233662e7467\n"
".quad 0x336625202c343170,0x44336630202c3731,0x0a3b444343434343,0x3233662e706c6573\n"
".quad 0x202c393832662520,0x25202c3131336625,0x7025202c38383266,0x2e766f6d0a3b3431\n"
".quad 0x3331722520323375,0x090a0a3b30202c30,0x762e64322e786574,0x33662e3233752e34\n"
".quad 0x36323172257b2032,0x2c3732317225202c,0x202c383231722520,0x202c7d3932317225\n"
".quad 0x67616d497865745b,0x2c3366257b202c65,0x0a3b5d7d34662520,0x3320636f6c2e090a\n"
".quad 0x0a35203837373120,0x203233622e766f6d,0x25202c3039326625,0x6f6d0a3b36323172\n"
".quad 0x6625203233622e76,0x317225202c313932,0x2e766f6d0a3b3732,0x3932662520323362\n"
".quad 0x3832317225202c32,0x3220636f6c2e0a3b,0x656e0a3120363420,0x6625203233662e67\n"
".quad 0x336625202c333932,0x2e616d660a3b3431,0x25203233662e6e72,0x6625202c34393266\n"
".quad 0x326625202c333932,0x39326625202c3638,0x662e6c756d0a3b30,0x3539326625203233\n"
".quad 0x2c3439326625202c,0x0a3b393832662520,0x662e6e722e616d66,0x3639326625203233\n"
".quad 0x2c3431336625202c,0x202c363832662520,0x2e0a3b3539326625,0x3634203220636f6c\n"
".quad 0x662e67656e0a3120,0x3739326625203233,0x3b3531336625202c,0x2e6e722e616d660a\n"
".quad 0x3932662520323366,0x3739326625202c38,0x2c3638326625202c,0x0a3b313932662520\n"
".quad 0x203233662e6c756d,0x25202c3939326625,0x6625202c38393266,0x616d660a3b393832\n"
".quad 0x203233662e6e722e,0x25202c3030336625,0x6625202c35313366,0x326625202c363832\n"
".quad 0x636f6c2e0a3b3939,0x0a31203634203220,0x203233662e67656e,0x25202c3130336625\n"
".quad 0x6d660a3b36313366,0x3233662e6e722e61,0x202c323033662520,0x25202c3130336625\n"
".quad 0x6625202c36383266,0x6c756d0a3b323932,0x336625203233662e,0x30336625202c3330\n"
".quad 0x3938326625202c32,0x6e722e616d660a3b,0x336625203233662e,0x31336625202c3430\n"
".quad 0x3638326625202c36,0x3b3330336625202c,0x3233662e766f6d0a,0x202c353033662520\n"
".quad 0x3030303030306630,0x636f6c2e0a3b3030,0x0a31203835203220,0x203233662e6c756d\n"
".quad 0x25202c3630336625,0x6630202c35303366,0x3030303046373334,0x3320636f6c2e0a3b\n"
".quad 0x0a35203334333120,0x2e697a722e747663,0x203233662e323373,0x25202c3133317225\n"
".quad 0x6c2e0a3b36303366,0x203835203220636f,0x33622e6c68730a31,0x2c32333172252032\n"
".quad 0x202c313331722520,0x2e6c756d0a3b3432,0x3033662520323366,0x3430336625202c37\n"
".quad 0x463733346630202c,0x6c2e0a3b30303030,0x343331203320636f,0x2e7476630a352033\n"
".quad 0x2e3233732e697a72,0x3331722520323366,0x3730336625202c33,0x3220636f6c2e0a3b\n"
".quad 0x68730a3120383520,0x7225203233622e6c,0x317225202c343331,0x0a3b3631202c3333\n"
".quad 0x203233662e6c756d,0x25202c3830336625,0x6630202c30303366,0x3030303046373334\n"
".quad 0x3320636f6c2e0a3b,0x0a35203334333120,0x2e697a722e747663,0x203233662e323373\n"
".quad 0x25202c3533317225,0x6c2e0a3b38303366,0x203835203220636f,0x33622e6c68730a31\n"
".quad 0x2c36333172252032,0x202c353331722520,0x662e6c756d0a3b38,0x3930336625203233\n"
".quad 0x2c3639326625202c,0x3046373334663020,0x6f6c2e0a3b303030,0x3334333120332063\n"
".quad 0x722e7476630a3520,0x662e3233732e697a,0x3733317225203233,0x3b3930336625202c\n"
".quad 0x203220636f6c2e0a,0x2e726f0a31203835,0x3331722520323362,0x3433317225202c38\n"
".quad 0x3b3233317225202c,0x203233622e726f0a,0x25202c3933317225,0x7225202c38333172\n"
".quad 0x2e726f0a3b373331,0x3431722520323362,0x3933317225202c30,0x3b3633317225202c\n"
".quad 0x617261702e646c0a,0x7225203233752e6d,0x5a5f5b202c313531,0x696a50324d4c4e34\n"
".quad 0x617261705f666669,0x6c2e0a3b5d315f6d,0x393131203820636f,0x6c2e64616d0a3120\n"
".quad 0x7225203233732e6f,0x317225202c393431,0x3135317225202c34,0x0a3b30317225202c\n"
".quad 0x6d617261702e646c,0x6c7225203436752e,0x345a5f5b202c3131,0x69696a50324d4c4e\n"
".quad 0x6d617261705f6666,0x7476630a3b5d305f,0x6f6c672e6f742e61,0x203436752e6c6162\n"
".quad 0x7225202c386c7225,0x6f6c2e0a3b31316c,0x2039313120382063,0x69772e6c756d0a31\n"
".quad 0x25203233732e6564,0x317225202c396c72,0x610a3b34202c3934,0x25203436732e6464\n"
".quad 0x7225202c30316c72,0x396c7225202c386c,0x6f6c672e74730a3b,0x203233752e6c6162\n"
".quad 0x2c5d30316c72255b,0x0a3b303431722520,0x31203820636f6c2e,0x7465720a32203132\n"
".quad 0x6e652e0a0a7d0a3b,0x4e385a5f20797274,0x5067616964324d4c,0x2e0a28666669696a\n"
".quad 0x752e206d61726170,0x4c4e385a5f203436,0x6a5067616964324d,0x7261705f66666969\n"
".quad 0x702e0a2c305f6d61,0x33752e206d617261,0x4d4c4e385a5f2032,0x696a506761696432\n"
".quad 0x617261705f666669,0x61702e0a2c315f6d,0x3233752e206d6172,0x324d4c4e385a5f20\n"
".quad 0x69696a5067616964,0x6d617261705f6666,0x7261702e0a2c325f,0x203233662e206d61\n"
".quad 0x64324d4c4e385a5f,0x6669696a50676169,0x5f6d617261705f66,0x617261702e0a2c33\n"
".quad 0x5f203233662e206d,0x6964324d4c4e385a,0x666669696a506761,0x345f6d617261705f\n"
".quad 0x65722e0a7b0a290a,0x25203233662e2067,0x0a3b3e3034323c66,0x72702e206765722e\n"
".quad 0x33323c7025206465,0x206765722e0a3b3e,0x3c7225203233732e,0x722e0a3b3e383331\n"
".quad 0x203436732e206765,0x3b3e36313c6c7225,0x726168732e090a0a,0x67696c612e206465\n"
".quad 0x2038622e2034206e,0x6c5f616475635f5f,0x7261765f6c61636f,0x335f33343536315f\n"
".quad 0x6f635f6e6f6e5f35,0x696557665f74736e,0x3635325b73746867,0x702e646c0a0a3b5d\n"
".quad 0x3233752e6d617261,0x5f5b202c31722520,0x6964324d4c4e385a,0x666669696a506761\n"
".quad 0x315f6d617261705f,0x61702e646c0a3b5d,0x203233752e6d6172,0x5a5f5b202c387225\n"
".quad 0x616964324d4c4e38,0x5f666669696a5067,0x5d325f6d61726170,0x3820636f6c2e0a3b\n"
".quad 0x6d0a312031353120,0x25203233752e766f,0x69746e25202c3972,0x766f6d0a3b782e64\n"
".quad 0x317225203233752e,0x6961746325202c30,0x766f6d0a3b782e64,0x317225203233752e\n"
".quad 0x2e64697425202c31,0x6c2e64616d0a3b78,0x7225203233732e6f,0x30317225202c3231\n"
".quad 0x25202c397225202c,0x6f6c2e0a3b313172,0x2032353120382063,0x33752e766f6d0a31\n"
".quad 0x202c333172252032,0x792e646961746325,0x33752e766f6d0a3b,0x202c343172252032\n"
".quad 0x3b792e6469746e25,0x3233752e766f6d0a,0x25202c3531722520,0x6d0a3b792e646974\n"
".quad 0x33732e6f6c2e6461,0x202c363172252032,0x7225202c33317225,0x35317225202c3431\n"
".quad 0x3820636f6c2e0a3b,0x630a312034353120,0x33662e6e722e7476,0x6625203233732e32\n"
".quad 0x32317225202c3832,0x33662e6464610a3b,0x25202c3266252032,0x336630202c383266\n"
".quad 0x3b30303030303046,0x203820636f6c2e0a,0x76630a3120353531,0x3233662e6e722e74\n"
".quad 0x326625203233732e,0x3b36317225202c39,0x3233662e6464610a,0x6625202c33662520\n"
".quad 0x46336630202c3932,0x0a3b303030303030,0x31203820636f6c2e,0x64616d0a31203635\n"
".quad 0x203233732e6f6c2e,0x7225202c37317225,0x2c397225202c3031,0x2e7476630a3b3320\n"
".quad 0x752e3233662e6e72,0x2c30336625203233,0x610a3b3731722520,0x25203233662e6464\n"
".quad 0x30336625202c3466,0x303046336630202c,0x6c2e0a3b30303030,0x373531203820636f\n"
".quad 0x6c2e64616d0a3120,0x7225203233732e6f,0x33317225202c3831,0x33202c397225202c\n"
".quad 0x6e722e7476630a3b,0x3233752e3233662e,0x25202c3133662520,0x6464610a3b383172\n"
".quad 0x356625203233662e,0x202c31336625202c,0x3030303046336630,0x636f6c2e0a3b3030\n"
".quad 0x3120393531203820,0x746c2e707465730a,0x317025203233732e,0x202c32317225202c\n"
".quad 0x7465730a3b317225,0x3233732e746c2e70,0x7225202c32702520,0x3b387225202c3631\n"
".quad 0x6572702e646e610a,0x25202c3370252064,0x3b327025202c3170,0x203820636f6c2e0a\n"
".quad 0x25400a3120393531,0x4220617262203370,0x2e0a0a3b325f3942,0x3032203820636f6c\n"
".quad 0x3b7465720a322034,0x3a325f3942420a0a,0x203820636f6c2e0a,0x64610a3120343631\n"
".quad 0x6625203233662e64,0x202c346625202c36,0x3030303430436630,0x2e766f6d0a3b3030\n"
".quad 0x3332662520323366,0x3430436630202c38,0x2e0a3b3030303030,0x3631203820636f6c\n"
".quad 0x2e6464610a312034,0x2c37662520323366,0x6630202c32662520,0x3030303030343043\n"
".quad 0x3820636f6c2e0a3b,0x0a33322033363120,0x203233662e646461,0x6625202c34336625\n"
".quad 0x336630202c383332,0x3b30303030303846,0x203820636f6c2e0a,0x64610a3120343631\n"
".quad 0x6625203233662e64,0x202c346625202c38,0x64610a3b34336625,0x6625203233662e64\n"
".quad 0x202c326625202c39,0x6c2e0a3b34336625,0x333631203820636f,0x2e6464610a333220\n"
".quad 0x3533662520323366,0x202c34336625202c,0x3030303846336630,0x636f6c2e0a3b3030\n"
".quad 0x3120343631203820,0x3233662e6464610a,0x25202c3031662520,0x35336625202c3466\n"
".quad 0x33662e6464610a3b,0x202c313166252032,0x336625202c326625,0x20636f6c2e0a3b35\n"
".quad 0x3332203336312038,0x3233662e6464610a,0x25202c3633662520,0x336630202c353366\n"
".quad 0x3b30303030303846,0x203820636f6c2e0a,0x64610a3120343631,0x6625203233662e64\n"
".quad 0x2c346625202c3231,0x610a3b3633662520,0x25203233662e6464,0x326625202c333166\n"
".quad 0x0a3b36336625202c,0x31203820636f6c2e,0x64610a3332203336,0x6625203233662e64\n"
".quad 0x36336625202c3733,0x303846336630202c,0x6c2e0a3b30303030,0x343631203820636f\n"
".quad 0x662e6464610a3120,0x2c34316625203233,0x6625202c34662520,0x2e6464610a3b3733\n"
".quad 0x3531662520323366,0x25202c326625202c,0x6f6c2e0a3b373366,0x2033363120382063\n"
".quad 0x662e6464610a3332,0x2c38336625203233,0x30202c3733662520,0x3030303038463366\n"
".quad 0x20636f6c2e0a3b30,0x0a31203436312038,0x203233662e646461,0x6625202c36316625\n"
".quad 0x3b38336625202c34,0x3233662e6464610a,0x25202c3731662520,0x38336625202c3266\n"
".quad 0x3820636f6c2e0a3b,0x0a33322033363120,0x203233662e646461,0x6625202c39336625\n"
".quad 0x46336630202c3833,0x0a3b303030303038,0x31203820636f6c2e,0x6464610a31203436\n"
".quad 0x316625203233662e,0x202c346625202c38,0x64610a3b39336625,0x6625203233662e64\n"
".quad 0x2c326625202c3931,0x2e0a3b3933662520,0x3631203820636f6c,0x6464610a33322033\n"
".quad 0x346625203233662e,0x2c39336625202c30,0x3030384633663020,0x6f6c2e0a3b303030\n"
".quad 0x2034363120382063,0x33662e6464610a31,0x202c303266252032,0x346625202c346625\n"
".quad 0x662e6464610a3b30,0x2c31326625203233,0x6625202c32662520,0x2e766f6d0a3b3034\n"
".quad 0x3931722520323375,0x766f6d0a3b30202c,0x326625203233662e,0x30306630202c3733\n"
".quad 0x0a3b303030303030,0x203233752e766f6d,0x25202c3533317225,0x42420a0a3b393172\n"
".quad 0x766f6d0a3a335f39,0x327225203233752e,0x3b3533317225202c,0x203820636f6c2e0a\n"
".quad 0x64610a3120343631,0x6625203233662e64,0x2c356625202c3037,0x0a3b383332662520\n"
".quad 0x64322e786574090a,0x2e3233752e34762e,0x3272257b20323366,0x2c31327225202c30\n"
".quad 0x25202c3232722520,0x745b202c7d333272,0x2c6567616d497865,0x25202c3666257b20\n"
".quad 0x0a0a3b5d7d303766,0x203320636f6c2e09,0x6d0a352038373731,0x25203233622e766f\n"
".quad 0x327225202c333766,0x622e766f6d0a3b30,0x2c34376625203233,0x6d0a3b3132722520\n"
".quad 0x25203233622e766f,0x327225202c353766,0x20636f6c2e0a3b32,0x0a31203436312038\n"
".quad 0x203233662e646461,0x6625202c32376625,0x3833326625202c33,0x2e786574090a0a3b\n"
".quad 0x33752e34762e6432,0x257b203233662e32,0x327225202c343272,0x2c36327225202c35\n"
".quad 0x202c7d3732722520,0x67616d497865745b,0x2c3766257b202c65,0x3b5d7d3237662520\n"
".quad 0x20636f6c2e090a0a,0x3520383737312033,0x3233622e766f6d0a,0x25202c3637662520\n"
".quad 0x766f6d0a3b343272,0x376625203233622e,0x3b35327225202c37,0x3233622e766f6d0a\n"
".quad 0x25202c3837662520,0x6f6c2e0a3b363272,0x3120303520322063,0x3233662e6275730a\n"
".quad 0x25202c3937662520,0x376625202c363766,0x662e6275730a3b33,0x2c30386625203233\n"
".quad 0x25202c3737662520,0x6c756d0a3b343766,0x386625203233662e,0x2c30386625202c31\n"
".quad 0x660a3b3038662520,0x33662e6e722e616d,0x202c323866252032,0x6625202c39376625\n"
".quad 0x31386625202c3937,0x33662e6275730a3b,0x202c333866252032,0x6625202c38376625\n"
".quad 0x2e616d660a3b3537,0x25203233662e6e72,0x386625202c343866,0x2c33386625202c33\n"
".quad 0x2e0a3b3238662520,0x3631203820636f6c,0x2e6464610a312034,0x3538662520323366\n"
".quad 0x2c3733326625202c,0x0a0a3b3438662520,0x2e64322e78657409,0x662e3233752e3476\n"
".quad 0x383272257b203233,0x202c39327225202c,0x7225202c30337225,0x65745b202c7d3133\n"
".quad 0x202c6567616d4978,0x6625202c3866257b,0x090a0a3b5d7d3037,0x31203320636f6c2e\n"
".quad 0x6f6d0a3520383737,0x6625203233622e76,0x38327225202c3638,0x33622e766f6d0a3b\n"
".quad 0x202c373866252032,0x6f6d0a3b39327225,0x6625203233622e76,0x30337225202c3838\n"
".quad 0x2e786574090a0a3b,0x33752e34762e6432,0x257b203233662e32,0x337225202c323372\n"
".quad 0x2c34337225202c33,0x202c7d3533722520,0x67616d497865745b,0x2c3966257b202c65\n"
".quad 0x3b5d7d3237662520,0x622e766f6d090a0a,0x2c39386625203233,0x6d0a3b3233722520\n"
".quad 0x25203233622e766f,0x337225202c303966,0x622e766f6d0a3b33,0x2c31396625203233\n"
".quad 0x2e0a3b3433722520,0x3035203220636f6c,0x662e6275730a3120,0x2c32396625203233\n"
".quad 0x25202c3938662520,0x6275730a3b363866,0x396625203233662e,0x2c30396625202c33\n"
".quad 0x6d0a3b3738662520,0x25203233662e6c75,0x396625202c343966,0x3b33396625202c33\n"
".quad 0x2e6e722e616d660a,0x3539662520323366,0x202c32396625202c,0x6625202c32396625\n"
".quad 0x2e6275730a3b3439,0x3639662520323366,0x202c31396625202c,0x6d660a3b38386625\n"
".quad 0x3233662e6e722e61,0x25202c3739662520,0x396625202c363966,0x3b35396625202c36\n"
".quad 0x203820636f6c2e0a,0x64610a3120343631,0x6625203233662e64,0x35386625202c3839\n"
".quad 0x0a3b37396625202c,0x64322e786574090a,0x2e3233752e34762e,0x3372257b20323366\n"
".quad 0x2c37337225202c36,0x25202c3833722520,0x745b202c7d393372,0x2c6567616d497865\n"
".quad 0x202c303166257b20,0x0a3b5d7d30376625,0x3320636f6c2e090a,0x0a35203837373120\n"
".quad 0x203233622e766f6d,0x7225202c39396625,0x2e766f6d0a3b3633,0x3031662520323362\n"
".quad 0x3b37337225202c30,0x3233622e766f6d0a,0x202c313031662520,0x090a0a3b38337225\n"
".quad 0x762e64322e786574,0x33662e3233752e34,0x2c303472257b2032,0x25202c3134722520\n"
".quad 0x347225202c323472,0x7865745b202c7d33,0x7b202c6567616d49,0x6625202c31316625\n"
".quad 0x090a0a3b5d7d3237,0x203233622e766f6d,0x25202c3230316625,0x766f6d0a3b303472\n"
".quad 0x316625203233622e,0x31347225202c3330,0x33622e766f6d0a3b,0x2c34303166252032\n"
".quad 0x2e0a3b3234722520,0x3035203220636f6c,0x662e6275730a3120,0x3530316625203233\n"
".quad 0x2c3230316625202c,0x730a3b3939662520,0x25203233662e6275,0x6625202c36303166\n"
".quad 0x316625202c333031,0x2e6c756d0a3b3030,0x3031662520323366,0x3630316625202c37\n"
".quad 0x3b3630316625202c,0x2e6e722e616d660a,0x3031662520323366,0x3530316625202c38\n"
".quad 0x2c3530316625202c,0x0a3b373031662520,0x203233662e627573,0x25202c3930316625\n"
".quad 0x6625202c34303166,0x616d660a3b313031,0x203233662e6e722e,0x25202c3031316625\n"
".quad 0x6625202c39303166,0x316625202c393031,0x636f6c2e0a3b3830,0x3120343631203820\n"
".quad 0x3233662e6464610a,0x202c313131662520,0x6625202c38396625,0x74090a0a3b303131\n"
".quad 0x34762e64322e7865,0x3233662e3233752e,0x202c343472257b20,0x7225202c35347225\n"
".quad 0x37347225202c3634,0x497865745b202c7d,0x257b202c6567616d,0x376625202c323166\n"
".quad 0x2e090a0a3b5d7d30,0x3731203320636f6c,0x766f6d0a35203837,0x316625203233622e\n"
".quad 0x34347225202c3231,0x33622e766f6d0a3b,0x2c33313166252032,0x6d0a3b3534722520\n"
".quad 0x25203233622e766f,0x7225202c34313166,0x6574090a0a3b3634,0x2e34762e64322e78\n"
".quad 0x203233662e323375,0x25202c383472257b,0x357225202c393472,0x7d31357225202c30\n"
".quad 0x6d497865745b202c,0x66257b202c656761,0x32376625202c3331,0x6f6d090a0a3b5d7d\n"
".quad 0x6625203233622e76,0x347225202c353131,0x622e766f6d0a3b38,0x3631316625203233\n"
".quad 0x0a3b39347225202c,0x203233622e766f6d,0x25202c3731316625,0x6f6c2e0a3b303572\n"
".quad 0x3120303520322063,0x3233662e6275730a,0x202c383131662520,0x25202c3531316625\n"
".quad 0x75730a3b32313166,0x6625203233662e62,0x316625202c393131,0x31316625202c3631\n"
".quad 0x662e6c756d0a3b33,0x3032316625203233,0x2c3931316625202c,0x0a3b393131662520\n"
".quad 0x662e6e722e616d66,0x3132316625203233,0x2c3831316625202c,0x202c383131662520\n"
".quad 0x730a3b3032316625,0x25203233662e6275,0x6625202c32323166,0x316625202c373131\n"
".quad 0x2e616d660a3b3431,0x25203233662e6e72,0x6625202c33323166,0x316625202c323231\n"
".quad 0x32316625202c3232,0x20636f6c2e0a3b31,0x0a31203436312038,0x203233662e646461\n"
".quad 0x25202c3432316625,0x6625202c31313166,0x74090a0a3b333231,0x34762e64322e7865\n"
".quad 0x3233662e3233752e,0x202c323572257b20,0x7225202c33357225,0x35357225202c3435\n"
".quad 0x497865745b202c7d,0x257b202c6567616d,0x376625202c343166,0x2e090a0a3b5d7d30\n"
".quad 0x3731203320636f6c,0x766f6d0a35203837,0x316625203233622e,0x32357225202c3532\n"
".quad 0x33622e766f6d0a3b,0x2c36323166252032,0x6d0a3b3335722520,0x25203233622e766f\n"
".quad 0x7225202c37323166,0x6574090a0a3b3435,0x2e34762e64322e78,0x203233662e323375\n"
".quad 0x25202c363572257b,0x357225202c373572,0x7d39357225202c38,0x6d497865745b202c\n"
".quad 0x66257b202c656761,0x32376625202c3531,0x6f6d090a0a3b5d7d,0x6625203233622e76\n"
".quad 0x357225202c383231,0x622e766f6d0a3b36,0x3932316625203233,0x0a3b37357225202c\n"
".quad 0x203233622e766f6d,0x25202c3033316625,0x6f6c2e0a3b383572,0x3120303520322063\n"
".quad 0x3233662e6275730a,0x202c313331662520,0x25202c3832316625,0x75730a3b35323166\n"
".quad 0x6625203233662e62,0x316625202c323331,0x32316625202c3932,0x662e6c756d0a3b36\n"
".quad 0x3333316625203233,0x2c3233316625202c,0x0a3b323331662520,0x662e6e722e616d66\n"
".quad 0x3433316625203233,0x2c3133316625202c,0x202c313331662520,0x730a3b3333316625\n"
".quad 0x25203233662e6275,0x6625202c35333166,0x316625202c303331,0x2e616d660a3b3732\n"
".quad 0x25203233662e6e72,0x6625202c36333166,0x316625202c353331,0x33316625202c3533\n"
".quad 0x20636f6c2e0a3b34,0x0a31203436312038,0x203233662e646461,0x25202c3733316625\n"
".quad 0x6625202c34323166,0x74090a0a3b363331,0x34762e64322e7865,0x3233662e3233752e\n"
".quad 0x202c303672257b20,0x7225202c31367225,0x33367225202c3236,0x497865745b202c7d\n"
".quad 0x257b202c6567616d,0x376625202c363166,0x2e090a0a3b5d7d30,0x3731203320636f6c\n"
".quad 0x766f6d0a35203837,0x316625203233622e,0x30367225202c3833,0x33622e766f6d0a3b\n"
".quad 0x2c39333166252032,0x6d0a3b3136722520,0x25203233622e766f,0x7225202c30343166\n"
".quad 0x6574090a0a3b3236,0x2e34762e64322e78,0x203233662e323375,0x25202c343672257b\n"
".quad 0x367225202c353672,0x7d37367225202c36,0x6d497865745b202c,0x66257b202c656761\n"
".quad 0x32376625202c3731,0x6f6d090a0a3b5d7d,0x6625203233622e76,0x367225202c313431\n"
".quad 0x622e766f6d0a3b34,0x3234316625203233,0x0a3b35367225202c,0x203233622e766f6d\n"
".quad 0x25202c3334316625,0x6f6c2e0a3b363672,0x3120303520322063,0x3233662e6275730a\n"
".quad 0x202c343431662520,0x25202c3134316625,0x75730a3b38333166,0x6625203233662e62\n"
".quad 0x316625202c353431,0x33316625202c3234,0x662e6c756d0a3b39,0x3634316625203233\n"
".quad 0x2c3534316625202c,0x0a3b353431662520,0x662e6e722e616d66,0x3734316625203233\n"
".quad 0x2c3434316625202c,0x202c343431662520,0x730a3b3634316625,0x25203233662e6275\n"
".quad 0x6625202c38343166,0x316625202c333431,0x2e616d660a3b3034,0x25203233662e6e72\n"
".quad 0x6625202c39343166,0x316625202c383431,0x34316625202c3834,0x20636f6c2e0a3b37\n"
".quad 0x0a31203436312038,0x203233662e646461,0x25202c3035316625,0x6625202c37333166\n"
".quad 0x74090a0a3b393431,0x34762e64322e7865,0x3233662e3233752e,0x202c383672257b20\n"
".quad 0x7225202c39367225,0x31377225202c3037,0x497865745b202c7d,0x257b202c6567616d\n"
".quad 0x376625202c383166,0x2e090a0a3b5d7d30,0x3731203320636f6c,0x766f6d0a35203837\n"
".quad 0x316625203233622e,0x38367225202c3135,0x33622e766f6d0a3b,0x2c32353166252032\n"
".quad 0x6d0a3b3936722520,0x25203233622e766f,0x7225202c33353166,0x6574090a0a3b3037\n"
".quad 0x2e34762e64322e78,0x203233662e323375,0x25202c323772257b,0x377225202c333772\n"
".quad 0x7d35377225202c34,0x6d497865745b202c,0x66257b202c656761,0x32376625202c3931\n"
".quad 0x6f6d090a0a3b5d7d,0x6625203233622e76,0x377225202c343531,0x622e766f6d0a3b32\n"
".quad 0x3535316625203233,0x0a3b33377225202c,0x203233622e766f6d,0x25202c3635316625\n"
".quad 0x6f6c2e0a3b343772,0x3120303520322063,0x3233662e6275730a,0x202c373531662520\n"
".quad 0x25202c3435316625,0x75730a3b31353166,0x6625203233662e62,0x316625202c383531\n"
".quad 0x35316625202c3535,0x662e6c756d0a3b32,0x3935316625203233,0x2c3835316625202c\n"
".quad 0x0a3b383531662520,0x662e6e722e616d66,0x3036316625203233,0x2c3735316625202c\n"
".quad 0x202c373531662520,0x730a3b3935316625,0x25203233662e6275,0x6625202c31363166\n"
".quad 0x316625202c363531,0x2e616d660a3b3335,0x25203233662e6e72,0x6625202c32363166\n"
".quad 0x316625202c313631,0x36316625202c3136,0x20636f6c2e0a3b30,0x0a31203436312038\n"
".quad 0x203233662e646461,0x25202c3336316625,0x6625202c30353166,0x74090a0a3b323631\n"
".quad 0x34762e64322e7865,0x3233662e3233752e,0x202c363772257b20,0x7225202c37377225\n"
".quad 0x39377225202c3837,0x497865745b202c7d,0x257b202c6567616d,0x376625202c303266\n"
".quad 0x2e090a0a3b5d7d30,0x3731203320636f6c,0x766f6d0a35203837,0x316625203233622e\n"
".quad 0x36377225202c3436,0x33622e766f6d0a3b,0x2c35363166252032,0x6d0a3b3737722520\n"
".quad 0x25203233622e766f,0x7225202c36363166,0x6574090a0a3b3837,0x2e34762e64322e78\n"
".quad 0x203233662e323375,0x25202c303872257b,0x387225202c313872,0x7d33387225202c32\n"
".quad 0x6d497865745b202c,0x66257b202c656761,0x32376625202c3132,0x6f6d090a0a3b5d7d\n"
".quad 0x6625203233622e76,0x387225202c373631,0x622e766f6d0a3b30,0x3836316625203233\n"
".quad 0x0a3b31387225202c,0x203233622e766f6d,0x25202c3936316625,0x6f6c2e0a3b323872\n"
".quad 0x3120303520322063,0x3233662e6275730a,0x202c303731662520,0x25202c3736316625\n"
".quad 0x75730a3b34363166,0x6625203233662e62,0x316625202c313731,0x36316625202c3836\n"
".quad 0x662e6c756d0a3b35,0x3237316625203233,0x2c3137316625202c,0x0a3b313731662520\n"
".quad 0x662e6e722e616d66,0x3337316625203233,0x2c3037316625202c,0x202c303731662520\n"
".quad 0x730a3b3237316625,0x25203233662e6275,0x6625202c34373166,0x316625202c393631\n"
".quad 0x2e616d660a3b3636,0x25203233662e6e72,0x6625202c35373166,0x316625202c343731\n"
".quad 0x37316625202c3437,0x20636f6c2e0a3b33,0x0a31203436312038,0x203233662e646461\n"
".quad 0x25202c3733326625,0x6625202c33363166,0x6f6c2e0a3b353731,0x2032363120382063\n"
".quad 0x662e6464610a3332,0x3833326625203233,0x2c3833326625202c,0x3030384633663020\n"
".quad 0x6464610a3b303030,0x337225203233732e,0x31202c327225202c,0x3820636f6c2e0a3b\n"
".quad 0x730a312032363120,0x732e656e2e707465,0x202c347025203233,0x0a3b38202c337225\n"
".quad 0x203233752e766f6d,0x25202c3533317225,0x636f6c2e0a3b3372,0x3120323631203820\n"
".quad 0x726220347025400a,0x3b335f3942422061,0x3820636f6c2e0a0a,0x6d0a312031353120\n"
".quad 0x25203233752e766f,0x7425202c33333172,0x64610a3b782e6469,0x7225203233732e64\n"
".quad 0x33317225202c3638,0x2e0a3b332d202c33,0x3731203820636f6c,0x2e6c756d0a312030\n"
".quad 0x25203233732e6f6c,0x387225202c373872,0x3b36387225202c36,0x203820636f6c2e0a\n"
".quad 0x6f6d0a3120323531,0x7225203233752e76,0x697425202c343331,0x6464610a3b792e64\n"
".quad 0x387225203233732e,0x3433317225202c39,0x6c2e0a3b332d202c,0x303731203820636f\n"
".quad 0x6c2e64616d0a3120,0x7225203233732e6f,0x39387225202c3039,0x202c39387225202c\n"
".quad 0x76630a3b37387225,0x3233662e6e722e74,0x316625203233752e,0x30397225202c3637\n"
".quad 0x7261702e646c0a3b,0x25203233662e6d61,0x5f5b202c36333266,0x6964324d4c4e385a\n"
".quad 0x666669696a506761,0x335f6d617261705f,0x20636f6c2e0a3b5d,0x0a31203537312038\n"
".quad 0x203233662e6c756d,0x25202c3737316625,0x6625202c37333266,0x616d660a3b363332\n"
".quad 0x203233662e6e722e,0x25202c3837316625,0x6630202c36373166,0x3530463237414333\n"
".quad 0x3b3737316625202c,0x3233662e6c756d0a,0x202c393731662520,0x30202c3837316625\n"
".quad 0x3341413842464266,0x20636f6c2e0a3b42,0x0a35203133352033,0x727070612e327865\n"
".quad 0x25203233662e786f,0x6625202c30383166,0x6c68730a3b393731,0x397225203233622e\n"
".quad 0x3433317225202c31,0x6f6c2e0a3b33202c,0x2038373120382063,0x33732e6464610a31\n"
".quad 0x202c323972252032,0x7225202c31397225,0x6c756d0a3b333331,0x33752e656469772e\n"
".quad 0x202c346c72252032,0x3b34202c32397225,0x3436752e766f6d0a,0x5f202c356c722520\n"
".quad 0x6f6c5f616475635f,0x5f7261765f6c6163,0x35335f3334353631,0x6e6f635f6e6f6e5f\n"
".quad 0x67696557665f7473,0x6464610a3b737468,0x6c7225203436732e,0x2c356c7225202c36\n"
".quad 0x2e0a3b346c722520,0x3731203820636f6c,0x732e74730a312038,0x33662e6465726168\n"
".quad 0x5d366c72255b2032,0x3b3038316625202c,0x203820636f6c2e0a,0x61620a3120303831\n"
".quad 0x3020636e79732e72,0x33752e766f6d0a3b,0x2c37333172252032,0x2e766f6d0a3b3020\n"
".quad 0x3331722520323375,0x3733317225202c36,0x33662e766f6d0a3b,0x2c39333266252032\n"
".quad 0x3030303030663020,0x766f6d0a3b303030,0x6c7225203436752e,0x356c7225202c3531\n"
".quad 0x355f3942420a0a3b,0x36752e766f6d0a3a,0x202c326c72252034,0x2e0a3b35316c7225\n"
".quad 0x3931203820636f6c,0x732e646c0a312030,0x33662e6465726168,0x2c32383166252032\n"
".quad 0x3b5d326c72255b20,0x203820636f6c2e0a,0x65730a3120343931,0x33662e74672e7074\n"
".quad 0x25202c3570252032,0x6630202c32383166,0x4443434343434433,0x662e706c65730a3b\n"
".quad 0x3338316625203233,0x374143336630202c,0x6630202c35304632,0x3030303030303030\n"
".quad 0x2e0a3b357025202c,0x3931203820636f6c,0x2e6464610a312034,0x3831662520323366\n"
".quad 0x3933326625202c34,0x3b3338316625202c,0x203820636f6c2e0a,0x646c0a3120303931\n"
".quad 0x2e6465726168732e,0x3831662520323366,0x326c72255b202c35,0x6f6c2e0a3b5d342b\n"
".quad 0x2034393120382063,0x672e707465730a31,0x7025203233662e74,0x3538316625202c36\n"
".quad 0x434344336630202c,0x65730a3b44434343,0x25203233662e706c,0x6630202c36383166\n"
".quad 0x3530463237414333,0x303030306630202c,0x7025202c30303030,0x20636f6c2e0a3b36\n"
".quad 0x0a31203439312038,0x203233662e646461,0x25202c3738316625,0x6625202c34383166\n"
".quad 0x6f6c2e0a3b363831,0x2030393120382063,0x6168732e646c0a31,0x203233662e646572\n"
".quad 0x5b202c3838316625,0x3b5d382b326c7225,0x203820636f6c2e0a,0x65730a3120343931\n"
".quad 0x33662e74672e7074,0x25202c3770252032,0x6630202c38383166,0x4443434343434433\n"
".quad 0x662e706c65730a3b,0x3938316625203233,0x374143336630202c,0x6630202c35304632\n"
".quad 0x3030303030303030,0x2e0a3b377025202c,0x3931203820636f6c,0x2e6464610a312034\n"
".quad 0x3931662520323366,0x3738316625202c30,0x3b3938316625202c,0x203820636f6c2e0a\n"
".quad 0x646c0a3120303931,0x2e6465726168732e,0x3931662520323366,0x326c72255b202c31\n"
".quad 0x6c2e0a3b5d32312b,0x343931203820636f,0x2e707465730a3120,0x25203233662e7467\n"
".quad 0x39316625202c3870,0x4344336630202c31,0x730a3b4443434343,0x203233662e706c65\n"
".quad 0x30202c3239316625,0x3046323741433366,0x3030306630202c35,0x25202c3030303030\n"
".quad 0x636f6c2e0a3b3870,0x3120343931203820,0x3233662e6464610a,0x202c333931662520\n"
".quad 0x25202c3039316625,0x6c2e0a3b32393166,0x303931203820636f,0x68732e646c0a3120\n"
".quad 0x3233662e64657261,0x202c343931662520,0x36312b326c72255b,0x20636f6c2e0a3b5d\n"
".quad 0x0a31203439312038,0x2e74672e70746573,0x2c39702520323366,0x202c343931662520\n"
".quad 0x4343434344336630,0x706c65730a3b4443,0x316625203233662e,0x43336630202c3539\n"
".quad 0x202c353046323741,0x3030303030306630,0x3b397025202c3030,0x203820636f6c2e0a\n"
".quad 0x64610a3120343931,0x6625203233662e64,0x316625202c363931,0x39316625202c3339\n"
".quad 0x20636f6c2e0a3b35,0x0a31203039312038,0x65726168732e646c,0x6625203233662e64\n"
".quad 0x72255b202c373931,0x0a3b5d30322b326c,0x31203820636f6c2e,0x7465730a31203439\n"
".quad 0x3233662e74672e70,0x25202c3031702520,0x6630202c37393166,0x4443434343434433\n"
".quad 0x662e706c65730a3b,0x3839316625203233,0x374143336630202c,0x6630202c35304632\n"
".quad 0x3030303030303030,0x0a3b30317025202c,0x31203820636f6c2e,0x6464610a31203439\n"
".quad 0x316625203233662e,0x39316625202c3939,0x3839316625202c36,0x3820636f6c2e0a3b\n"
".quad 0x6c0a312030393120,0x6465726168732e64,0x326625203233662e,0x6c72255b202c3030\n"
".quad 0x2e0a3b5d34322b32,0x3931203820636f6c,0x707465730a312034,0x203233662e74672e\n"
".quad 0x6625202c31317025,0x336630202c303032,0x3b44434343434344,0x33662e706c65730a\n"
".quad 0x2c31303266252032,0x3237414333663020,0x306630202c353046,0x2c30303030303030\n"
".quad 0x2e0a3b3131702520,0x3931203820636f6c,0x2e6464610a312034,0x3032662520323366\n"
".quad 0x3939316625202c32,0x3b3130326625202c,0x203820636f6c2e0a,0x646c0a3120303931\n"
".quad 0x2e6465726168732e,0x3032662520323366,0x326c72255b202c33,0x6c2e0a3b5d38322b\n"
".quad 0x343931203820636f,0x2e707465730a3120,0x25203233662e7467,0x326625202c323170\n"
".quad 0x44336630202c3330,0x0a3b444343434343,0x3233662e706c6573,0x202c343032662520\n"
".quad 0x4632374143336630,0x30306630202c3530,0x202c303030303030,0x6c2e0a3b32317025\n"
".quad 0x343931203820636f,0x662e6464610a3120,0x3530326625203233,0x2c3230326625202c\n"
".quad 0x0a3b343032662520,0x203233732e646461,0x25202c3430317225,0x3b38202c36333172\n"
".quad 0x6469772e6c756d0a,0x7225203233732e65,0x30317225202c386c,0x64610a3b34202c34\n"
".quad 0x7225203436732e64,0x6c7225202c30316c,0x3b386c7225202c35,0x203820636f6c2e0a\n"
".quad 0x646c0a3120303931,0x2e6465726168732e,0x3032662520323366,0x316c72255b202c36\n"
".quad 0x636f6c2e0a3b5d30,0x3120343931203820,0x74672e707465730a,0x317025203233662e\n"
".quad 0x3630326625202c33,0x434344336630202c,0x65730a3b44434343,0x25203233662e706c\n"
".quad 0x6630202c37303266,0x3530463237414333,0x303030306630202c,0x7025202c30303030\n"
".quad 0x636f6c2e0a3b3331,0x3120343931203820,0x3233662e6464610a,0x202c383032662520\n"
".quad 0x25202c3530326625,0x6c2e0a3b37303266,0x303931203820636f,0x68732e646c0a3120\n"
".quad 0x3233662e64657261,0x202c393032662520,0x36332b326c72255b,0x20636f6c2e0a3b5d\n"
".quad 0x0a31203439312038,0x2e74672e70746573,0x3431702520323366,0x2c3930326625202c\n"
".quad 0x4343434433663020,0x6c65730a3b444343,0x6625203233662e70,0x336630202c303132\n"
".quad 0x2c35304632374143,0x3030303030663020,0x317025202c303030,0x20636f6c2e0a3b34\n"
".quad 0x0a31203439312038,0x203233662e646461,0x25202c3131326625,0x6625202c38303266\n"
".quad 0x6f6c2e0a3b303132,0x2030393120382063,0x6168732e646c0a31,0x203233662e646572\n"
".quad 0x5b202c3231326625,0x5d30342b326c7225,0x3820636f6c2e0a3b,0x730a312034393120\n"
".quad 0x662e74672e707465,0x2c35317025203233,0x202c323132662520,0x4343434344336630\n"
".quad 0x706c65730a3b4443,0x326625203233662e,0x43336630202c3331,0x202c353046323741\n"
".quad 0x3030303030306630,0x35317025202c3030,0x3820636f6c2e0a3b,0x610a312034393120\n"
".quad 0x25203233662e6464,0x6625202c34313266,0x326625202c313132,0x636f6c2e0a3b3331\n"
".quad 0x3120303931203820,0x726168732e646c0a,0x25203233662e6465,0x255b202c35313266\n"
".quad 0x3b5d34342b326c72,0x203820636f6c2e0a,0x65730a3120343931,0x33662e74672e7074\n"
".quad 0x202c363170252032,0x30202c3531326625,0x4343434343443366,0x2e706c65730a3b44\n"
".quad 0x3132662520323366,0x4143336630202c36,0x30202c3530463237,0x3030303030303066\n"
".quad 0x3b36317025202c30,0x203820636f6c2e0a,0x64610a3120343931,0x6625203233662e64\n"
".quad 0x326625202c373132,0x31326625202c3431,0x20636f6c2e0a3b36,0x0a31203039312038\n"
".quad 0x65726168732e646c,0x6625203233662e64,0x72255b202c383132,0x0a3b5d38342b326c\n"
".quad 0x31203820636f6c2e,0x7465730a31203439,0x3233662e74672e70,0x25202c3731702520\n"
".quad 0x6630202c38313266,0x4443434343434433,0x662e706c65730a3b,0x3931326625203233\n"
".quad 0x374143336630202c,0x6630202c35304632,0x3030303030303030,0x0a3b37317025202c\n"
".quad 0x31203820636f6c2e,0x6464610a31203439,0x326625203233662e,0x31326625202c3032\n"
".quad 0x3931326625202c37,0x3820636f6c2e0a3b,0x6c0a312030393120,0x6465726168732e64\n"
".quad 0x326625203233662e,0x6c72255b202c3132,0x2e0a3b5d32352b32,0x3931203820636f6c\n"
".quad 0x707465730a312034,0x203233662e74672e,0x6625202c38317025,0x336630202c313232\n"
".quad 0x3b44434343434344,0x33662e706c65730a,0x2c32323266252032,0x3237414333663020\n"
".quad 0x306630202c353046,0x2c30303030303030,0x2e0a3b3831702520,0x3931203820636f6c\n"
".quad 0x2e6464610a312034,0x3232662520323366,0x3032326625202c33,0x3b3232326625202c\n"
".quad 0x203820636f6c2e0a,0x646c0a3120303931,0x2e6465726168732e,0x3232662520323366\n"
".quad 0x326c72255b202c34,0x6c2e0a3b5d36352b,0x343931203820636f,0x2e707465730a3120\n"
".quad 0x25203233662e7467,0x326625202c393170,0x44336630202c3432,0x0a3b444343434343\n"
".quad 0x3233662e706c6573,0x202c353232662520,0x4632374143336630,0x30306630202c3530\n"
".quad 0x202c303030303030,0x6c2e0a3b39317025,0x343931203820636f,0x662e6464610a3120\n"
".quad 0x3632326625203233,0x2c3332326625202c,0x0a3b353232662520,0x31203820636f6c2e\n"
".quad 0x2e646c0a31203039,0x662e646572616873,0x3732326625203233,0x2b326c72255b202c\n"
".quad 0x6f6c2e0a3b5d3036,0x2034393120382063,0x672e707465730a31,0x7025203233662e74\n"
".quad 0x32326625202c3032,0x4344336630202c37,0x730a3b4443434343,0x203233662e706c65\n"
".quad 0x30202c3832326625,0x3046323741433366,0x3030306630202c35,0x25202c3030303030\n"
".quad 0x6f6c2e0a3b303270,0x2034393120382063,0x33662e6464610a31,0x2c39333266252032\n"
".quad 0x202c363232662520,0x610a3b3832326625,0x25203233732e6464,0x7225202c36333172\n"
".quad 0x3b3631202c363331,0x3436732e6464610a,0x25202c336c722520,0x3b3436202c326c72\n"
".quad 0x3233732e6464610a,0x202c373331722520,0x32202c3733317225,0x3820636f6c2e0a3b\n"
".quad 0x730a312037383120,0x732e656e2e707465,0x2c31327025203233,0x202c373331722520\n"
".quad 0x752e766f6d0a3b38,0x35316c7225203436,0x0a3b336c7225202c,0x31203820636f6c2e\n"
".quad 0x7025400a31203738,0x4220617262203132,0x2e0a0a3b355f3942,0x3931203820636f6c\n"
".quad 0x707465730a312039,0x203233662e74672e,0x6625202c32327025,0x336630202c393332\n"
".quad 0x3b44434343434344,0x33662e706c65730a,0x2c39323266252032,0x3030384633663020\n"
".quad 0x306630202c303030,0x2c30303030303030,0x6d0a3b3232702520,0x25203233662e766f\n"
".quad 0x6630202c30333266,0x3030303030303030,0x33662e766f6d0a3b,0x2c31333266252032\n"
".quad 0x3030384633663020,0x6f6c2e0a3b303030,0x2032303220382063,0x33662e6275730a31\n"
".quad 0x2c32333266252032,0x202c313332662520,0x2e0a3b3932326625,0x3835203220636f6c\n"
".quad 0x662e6c756d0a3120,0x3333326625203233,0x2c3033326625202c,0x3046373334663020\n"
".quad 0x6f6c2e0a3b303030,0x3334333120332063,0x722e7476630a3520,0x662e3233732e697a\n"
".quad 0x3331317225203233,0x3b3333326625202c,0x203220636f6c2e0a,0x6c68730a31203835\n"
".quad 0x317225203233622e,0x31317225202c3431,0x6d0a3b3432202c33,0x25203233662e6c75\n"
".quad 0x6625202c34333266,0x346630202c323332,0x3b30303030463733,0x203320636f6c2e0a\n"
".quad 0x630a352033343331,0x732e697a722e7476,0x25203233662e3233,0x6625202c35313172\n"
".quad 0x6f6c2e0a3b343332,0x3120383520322063,0x3233622e6c68730a,0x202c363131722520\n"
".quad 0x31202c3531317225,0x622e6c68730a3b36,0x3731317225203233,0x2c3331317225202c\n"
".quad 0x2e6c756d0a3b3820,0x3332662520323366,0x3932326625202c35,0x463733346630202c\n"
".quad 0x6c2e0a3b30303030,0x343331203320636f,0x2e7476630a352033,0x2e3233732e697a72\n"
".quad 0x3131722520323366,0x3533326625202c38,0x3220636f6c2e0a3b,0x726f0a3120383520\n"
".quad 0x317225203233622e,0x31317225202c3931,0x3431317225202c36,0x3233622e726f0a3b\n"
".quad 0x202c303231722520,0x25202c3931317225,0x726f0a3b38313172,0x317225203233622e\n"
".quad 0x32317225202c3132,0x3731317225202c30,0x7261702e646c0a3b,0x25203233752e6d61\n"
".quad 0x5f5b202c32333172,0x6964324d4c4e385a,0x666669696a506761,0x315f6d617261705f\n"
".quad 0x20636f6c2e0a3b5d,0x0a31203230322038,0x732e6f6c2e64616d,0x3033317225203233\n"
".quad 0x202c36317225202c,0x25202c3233317225,0x2e646c0a3b323172,0x36752e6d61726170\n"
".quad 0x2c34316c72252034,0x4d4c4e385a5f5b20,0x696a506761696432,0x617261705f666669\n"
".quad 0x76630a3b5d305f6d,0x6c672e6f742e6174,0x3436752e6c61626f,0x202c31316c722520\n"
".quad 0x2e0a3b34316c7225,0x3032203820636f6c,0x2e6c756d0a312032,0x3233732e65646977\n"
".quad 0x202c32316c722520,0x34202c3033317225,0x36732e6464610a3b,0x2c33316c72252034\n"
".quad 0x202c31316c722520,0x730a3b32316c7225,0x6c61626f6c672e74,0x72255b203233752e\n"
".quad 0x7225202c5d33316c,0x6f6c2e0a3b313231,0x2034303220382063,0x7d0a3b7465720a32\n"
".quad 0x01000002000a0a0a,0x00005b9400000060,0x0000000000000000,0x0001000400000000\n"
".quad 0x0000003800000014,0x0000001500000026,0x0000000000000000,0x7473657400000000\n"
".quad 0x446567616d692f73,0x676e6973696f6e65,0x65446567616d692f,0x2e676e6973696f6e\n"
".quad 0x464c457f00007563,0x0000000433010102,0x00be000200000000,0x0000000000000001\n"
".quad 0x0000596400000000,0x0000004000000000,0x0014051400000000,0x0040000a00380040\n"
".quad 0x0000000000010022,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000100000000,0x0000000000000003,0x0000000000000000,0x000008c000000000\n"
".quad 0x0000032e00000000,0x0000000000000000,0x0000000400000000,0x0000000000000000\n"
".quad 0x0000000b00000000,0x0000000000000003,0x0000000000000000,0x00000bee00000000\n"
".quad 0x000000a900000000,0x0000000000000000,0x0000000100000000,0x0000000000000000\n"
".quad 0x0000001300000000,0x0000000000000002,0x0000000000000000,0x00000c9700000000\n"
".quad 0x0000045000000000,0x0000000200000000,0x0000000100000024,0x0000001800000000\n"
".quad 0x0000014700000000,0x0000000600000001,0x0000000000000000,0x000010e700000000\n"
".quad 0x000004e000000000,0x0000000300000000,0x000000043c000013,0x0000000000000000\n"
".quad 0x000001e900000000,0x0000000200000001,0x0000000000000000,0x000015c700000000\n"
".quad 0x0000003800000000,0x0000000000000000,0x0000000400000004,0x0000000000000000\n"
".quad 0x000001c900000000,0x0000000200000001,0x0000000000000000,0x000015ff00000000\n"
".quad 0x0000000c00000000,0x0000000000000000,0x0000000400000004,0x0000000000000000\n"
".quad 0x0000015e00000000,0x0000000200000001,0x0000000000000000,0x0000160b00000000\n"
".quad 0x0000007800000000,0x0000000000000000,0x0000000100000004,0x0000000000000000\n"
".quad 0x0000012000000000,0x0000000600000001,0x0000000000000000,0x0000168300000000\n"
".quad 0x000000f800000000,0x0000000300000000,0x0000000409000011,0x0000000000000000\n"
".quad 0x000001af00000000,0x0000000200000001,0x0000000000000000,0x0000177b00000000\n"
".quad 0x0000003000000000,0x0000000000000000,0x0000000400000008,0x0000000000000000\n"
".quad 0x0000013200000000,0x0000000200000001,0x0000000000000000,0x000017ab00000000\n"
".quad 0x0000005800000000,0x0000000000000000,0x0000000100000008,0x0000000000000000\n"
".quad 0x000000ed00000000,0x0010000600000001,0x0000000000000000,0x0000180300000000\n"
".quad 0x00000c0000000000,0x0000000300000000,0x000000043b00000f,0x0000000000000000\n"
".quad 0x0000029800000000,0x0000000200000001,0x0000000000000000,0x0000240300000000\n"
".quad 0x0000003800000000,0x0000000000000000,0x000000040000000b,0x0000000000000000\n"
".quad 0x0000027700000000,0x0000000200000001,0x0000000000000000,0x0000243b00000000\n"
".quad 0x0000000c00000000,0x0000000000000000,0x000000040000000b,0x0000000000000000\n"
".quad 0x0000010500000000,0x0000000200000001,0x0000000000000000,0x0000244700000000\n"
".quad 0x0000007800000000,0x0000000000000000,0x000000010000000b,0x0000000000000000\n"
".quad 0x0000025a00000000,0x0000000300000008,0x0000000000000000,0x000024bf00000000\n"
".quad 0x0000010000000000,0x0000000000000000,0x000000040000000b,0x0000000000000000\n"
".quad 0x000000bc00000000,0x0000000600000001,0x0000000000000000,0x000024bf00000000\n"
".quad 0x000005b000000000,0x0000000300000000,0x000000042800000d,0x0000000000000000\n"
".quad 0x000002d800000000,0x0000000200000001,0x0000000000000000,0x00002a6f00000000\n"
".quad 0x0000003800000000,0x0000000000000000,0x0000000400000010,0x0000000000000000\n"
".quad 0x000002b800000000,0x0000000200000001,0x0000000000000000,0x00002aa700000000\n"
".quad 0x0000001800000000,0x0000000000000000,0x0000000400000010,0x0000000000000000\n"
".quad 0x000000d300000000,0x0000000200000001,0x0000000000000000,0x00002abf00000000\n"
".quad 0x0000007800000000,0x0000000000000000,0x0000000100000010,0x0000000000000000\n"
".quad 0x0000009100000000,0x0010000600000001,0x0000000000000000,0x00002b3700000000\n"
".quad 0x000019e800000000,0x0000000300000000,0x000000043700000b,0x0000000000000000\n"
".quad 0x0000023e00000000,0x0000000200000001,0x0000000000000000,0x0000451f00000000\n"
".quad 0x0000003800000000,0x0000000000000000,0x0000000400000014,0x0000000000000000\n"
".quad 0x0000022100000000,0x0000000200000001,0x0000000000000000,0x0000455700000000\n"
".quad 0x0000001000000000,0x0000000000000000,0x0000000400000014,0x0000000000000000\n"
".quad 0x000000a500000000,0x0000000200000001,0x0000000000000000,0x0000456700000000\n"
".quad 0x0000007800000000,0x0000000000000000,0x0000000100000014,0x0000000000000000\n"
".quad 0x0000020800000000,0x0000000300000008,0x0000000000000000,0x000045df00000000\n"
".quad 0x0000010000000000,0x0000000000000000,0x0000000400000014,0x0000000000000000\n"
".quad 0x0000006800000000,0x0000000600000001,0x0000000000000000,0x000045df00000000\n"
".quad 0x0000090000000000,0x0000000300000000,0x000000042a000009,0x0000000000000000\n"
".quad 0x0000019400000000,0x0000000200000001,0x0000000000000000,0x00004edf00000000\n"
".quad 0x0000003800000000,0x0000000000000000,0x0000000400000019,0x0000000000000000\n"
".quad 0x0000017800000000,0x0000000200000001,0x0000000000000000,0x00004f1700000000\n"
".quad 0x0000002000000000,0x0000000000000000,0x0000000400000019,0x0000000000000000\n"
".quad 0x0000007b00000000,0x0000000200000001,0x0000000000000000,0x00004f3700000000\n"
".quad 0x0000007800000000,0x0000000000000000,0x0000000100000019,0x0000000000000000\n"
".quad 0x0000003600000000,0x0000000600000001,0x0000000000000000,0x00004faf00000000\n"
".quad 0x000007a800000000,0x0000000300000000,0x000000043f000006,0x0000000000000000\n"
".quad 0x0000031300000000,0x0000000200000001,0x0000000000000000,0x0000575700000000\n"
".quad 0x0000003800000000,0x0000000000000000,0x000000040000001d,0x0000000000000000\n"
".quad 0x000002f700000000,0x0000000200000001,0x0000000000000000,0x0000578f00000000\n"
".quad 0x0000001000000000,0x0000000000000000,0x000000040000001d,0x0000000000000000\n"
".quad 0x0000004900000000,0x0000000200000001,0x0000000000000000,0x0000579f00000000\n"
".quad 0x0000007800000000,0x0000000000000000,0x000000010000001d,0x0000000000000000\n"
".quad 0x0000005f00000000,0x0000000200000001,0x0000000000000000,0x0000581700000000\n"
".quad 0x0000014c00000000,0x0000000000000000,0x0000000100000000,0x0000000000000000\n"
".quad 0x68732e0000000000,0x2e00626174727473,0x2e00626174727473,0x2e006261746d7973\n"
".quad 0x61626f6c672e766e,0x2e0074696e692e6c,0x61626f6c672e766e,0x2e747865742e006c\n"
".quad 0x6a504d4c4e335a5f,0x766e2e0066666969,0x5a5f2e6f666e692e,0x69696a504d4c4e33\n"
".quad 0x692e766e2e006666,0x7865742e006f666e,0x4e4e4b335a5f2e74,0x2e00666669696a50\n"
".quad 0x2e6f666e692e766e,0x6a504e4e4b335a5f,0x65742e0066666969,0x4c4e345a5f2e7478\n"
".quad 0x666669696a50324d,0x666e692e766e2e00,0x4d4c4e345a5f2e6f,0x00666669696a5032\n"
".quad 0x5a5f2e747865742e,0x676169644e4e4b37,0x2e00666669696a50,0x2e6f666e692e766e\n"
".quad 0x69644e4e4b375a5f,0x666669696a506761,0x5f2e747865742e00,0x6964324d4c4e385a\n"
".quad 0x666669696a506761,0x666e692e766e2e00,0x4d4c4e385a5f2e6f,0x696a506761696432\n"
".quad 0x7865742e00666669,0x706f43345a5f2e74,0x6e2e0069696a5079,0x5f2e6f666e692e76\n"
".quad 0x6a5079706f43345a,0x747865742e006969,0x644d4c4e375a5f2e,0x666a6a6a50676169\n"
".quad 0x6e692e766e2e0066,0x4c4e375a5f2e6f66,0x6a6a50676169644d,0x2e766e2e0066666a\n"
".quad 0x746e6174736e6f63,0x4e4b335a5f2e3631,0x00666669696a504e,0x736e6f632e766e2e\n"
".quad 0x5a5f2e30746e6174,0x69696a504e4e4b33,0x632e766e2e006666,0x30746e6174736e6f\n"
".quad 0x79706f43345a5f2e,0x766e2e0069696a50,0x6e6174736e6f632e,0x4e375a5f2e363174\n"
".quad 0x6a50676169644d4c,0x766e2e0066666a6a,0x6e6174736e6f632e,0x4c4e375a5f2e3074\n"
".quad 0x6a6a50676169644d,0x2e766e2e0066666a,0x5f2e646572616873,0x6a50324d4c4e345a\n"
".quad 0x766e2e0066666969,0x6e6174736e6f632e,0x4e345a5f2e363174,0x6669696a50324d4c\n"
".quad 0x6f632e766e2e0066,0x2e30746e6174736e,0x50324d4c4e345a5f,0x6e2e00666669696a\n"
".quad 0x6465726168732e76,0x324d4c4e385a5f2e,0x69696a5067616964,0x632e766e2e006666\n"
".quad 0x31746e6174736e6f,0x4d4c4e385a5f2e36,0x696a506761696432,0x2e766e2e00666669\n"
".quad 0x746e6174736e6f63,0x4d4c4e385a5f2e30,0x696a506761696432,0x2e766e2e00666669\n"
".quad 0x746e6174736e6f63,0x4e4b375a5f2e3631,0x696a50676169644e,0x2e766e2e00666669\n"
".quad 0x746e6174736e6f63,0x4e4e4b375a5f2e30,0x69696a5067616964,0x632e766e2e006666\n"
".quad 0x31746e6174736e6f,0x4d4c4e335a5f2e36,0x2e00666669696a50,0x74736e6f632e766e\n"
".quad 0x335a5f2e30746e61,0x6669696a504d4c4e,0x4c4e335a5f000066,0x00666669696a504d\n"
".quad 0x735f616475635f5f,0x5f7063725f30326d,0x5f003233665f6e72,0x6d735f616475635f\n"
".quad 0x725f7063725f3032,0x6c735f3233665f6e,0x5f0068746170776f,0x696a504e4e4b335a\n"
".quad 0x4e345a5f00666669,0x6669696a50324d4c,0x4e4e4b375a5f0066,0x69696a5067616964\n"
".quad 0x4c4e385a5f006666,0x6a5067616964324d,0x345a5f0066666969,0x69696a5079706f43\n"
".quad 0x644d4c4e375a5f00,0x666a6a6a50676169,0x616d497865740066,0x0000000000006567\n"
".quad 0x0000000000000000,0x0000000000000000,0x0300000000000000,0x0000000000000100\n"
".quad 0x0000000000000000,0x0300000000000000,0x0000000000000200,0x0000000000000000\n"
".quad 0x0300000000000000,0x0000000000000300,0x0000000000000000,0x0300000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0300000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0300000000000000,0x0000000000001d00,0x00000007a8000000\n"
".quad 0x0300000000000000,0x0000000000002000,0x0000000000000000,0x0300000000000000\n"
".quad 0x0000000000002100,0x0000000000000000,0x0300000000000000,0x0000000000001900\n"
".quad 0x0000000900000000,0x0300000000000000,0x0000000000001c00,0x0000000000000000\n"
".quad 0x0300000000000000,0x0000000000001400,0x00000019e8000000,0x0300000000000000\n"
".quad 0x0000000000001700,0x0000000000000000,0x0300000000000000,0x0000000000001000\n"
".quad 0x00000005b0000000,0x0300000000000000,0x0000000000001300,0x0000000000000000\n"
".quad 0x0300000000000000,0x0000000000000b00,0x0000000c00000000,0x0300000000000000\n"
".quad 0x0000000000000e00,0x0000000000000000,0x0300000000000000,0x0000000000000800\n"
".quad 0x00000000f8000000,0x0300000000000000,0x0000000000000a00,0x0000000000000000\n"
".quad 0x0300000000000000,0x0000000000000400,0x00000004e0000000,0x0300000000000000\n"
".quad 0x0000000000000700,0x0000000000000000,0x0300000000000000,0x0000000000001b00\n"
".quad 0x0000000000000000,0x0300000000000000,0x0000000000001a00,0x0000000000000000\n"
".quad 0x0300000000000000,0x0000000000000900,0x0000000000000000,0x0300000000000000\n"
".quad 0x0000000000000600,0x0000000000000000,0x0300000000000000,0x0000000000000500\n"
".quad 0x0000000000000000,0x0300000000000000,0x0000000000001800,0x0000000000000000\n"
".quad 0x0300000000000000,0x0000000000001600,0x0000000000000000,0x0300000000000000\n"
".quad 0x0000000000001500,0x0000000000000000,0x0300000000000000,0x0000000000000f00\n"
".quad 0x0000000000000000,0x0300000000000000,0x0000000000000d00,0x0000000000000000\n"
".quad 0x0300000000000000,0x0000000000000c00,0x0000000000000000,0x0300000000000000\n"
".quad 0x0000000000001200,0x0000000000000000,0x0300000000000000,0x0000000000001100\n"
".quad 0x0000000000000000,0x0300000000000000,0x0000000000001f00,0x0000000000000000\n"
".quad 0x0300000000000000,0x0000000000001e00,0x0000000000000000,0x1200000001000000\n"
".quad 0x0000000000001d10,0x00000005d0000000,0x120000000e000000,0x0000001810001d00\n"
".quad 0x0000000050000000,0x1200000025000000,0x0000001860001d00,0x0000000188000000\n"
".quad 0x1200000045000000,0x0000000000001910,0x0000000728000000,0x1200000052000000\n"
".quad 0x0000000000001410,0x0000001810000000,0x1200000060000000,0x0000000000001010\n"
".quad 0x00000005b0000000,0x1200000071000000,0x0000000000000b10,0x0000000c00000000\n"
".quad 0x1200000083000000,0x0000000000000810,0x00000000f8000000,0x120000008f000000\n"
".quad 0x0000000000000410,0x00000004e0000000,0x1a000000a0000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0400005de4000000,0x009800dc04280044,0x0088011c042c0000\n"
".quad 0x0094001c042c0000,0x0084009c042c0000,0x00303edca32c0000,0x00200e9ca3200840\n"
".quad 0x00b3b1dc03200440,0x00ed209e04188e40,0x00e9201e04180000,0x00a3a1dc03180000\n"
".quad 0xc00021dc00188040,0xc000001c005000cf,0x00000021e75000cf,0x1000009c00800000\n"
".quad 0x00000b9c005000f0,0xe000089c005000f0,0x00012b1c045000ef,0xe000081c00100000\n"
".quad 0x00000a9c005000cf,0x1000039c005000d0,0x00fc02dde45000d0,0x000004dde2280000\n"
".quad 0x00fc05dde41b0100,0x004c76dc00280000,0x004d37dc00500000,0x00000d9de2580000\n"
".quad 0x00fc0ddde41b0100,0x00d800dc00280000,0x00fc03dde4500000,0x00000e1de2280000\n"
".quad 0x00fc0e5de41b0100,0x1000331c00280000,0x00003d1c005000f0,0xe0003a1c005000f0\n"
".quad 0x000d2c9c045000ef,0xe000399c00100000,0x00003c1c005000cf,0x1000391c005000d0\n"
".quad 0x00e1b35c005000d0,0x00fcc51c86500000,0x00e070dc008011c0,0x00fc211c86500000\n"
".quad 0x00340d5de48011c0,0x00ff441c86280000,0x000c0bdde48011c0,0x00fee21c86280000\n"
".quad 0x00340a5de48011c0,0x00fe861c86280000,0x000c08dde48011c0,0x0054515d00280000\n"
".quad 0x0050451d00500000,0x0058659d00500000,0x0014511c00500000,0x0051451c00580000\n"
".quad 0x00fe211c86300800,0x00340cdde48011c0,0x0044945d00280000,0x0040841d00500000\n"
".quad 0x0048a25d00500000,0x0045145c00500000,0x0059621c00580000,0x0041029c00302800\n"
".quad 0x0020f21c00302200,0x0024925c00500000,0x002483dc00301400,0x0064515d00500000\n"
".quad 0x00ff251c86500000,0x000c0b5de48011c0,0x00fec41c86280000,0x003409dde48011c0\n"
".quad 0x00fe621c86280000,0x0060461d008011c0,0x0014511c00500000,0x000c085de4580000\n"
".quad 0x0068669d00280000,0x0061861c00500000,0x00fe011c86300800,0x00340c5de48011c0\n"
".quad 0x0055155d00280000,0x0051051d00500000,0x0069a41c00500000,0x0055555c00303000\n"
".quad 0x0059245d00580000,0x0040f3dc00500000,0x0051449c00500000,0x0045141c00302a00\n"
".quad 0x0040f85c00302400,0x0020411d00500000,0x00ff051c86500000,0x000c0adde48011c0\n"
".quad 0x00fea41c86280000,0x0034095de48011c0,0x00fe461c86280000,0x000c03dde48011c0\n"
".quad 0x002450dd00280000,0x00fce71c86500000,0x000c30dc008011c0,0x0028629d00580000\n"
".quad 0x00079e5c03500000,0x001040dc004800c0,0xe0038e1c00300600,0x001f91dc235000cf\n"
".quad 0x0028a0dc001a8ec0,0x000e10dc00300600,0x0055111d00500000,0x0051015d00500000\n"
".quad 0x0010419c00500000,0x0059211d00580000,0x0014515c00500000,0x0010411c00300c00\n"
".quad 0x001030dc00300a00,0x0065d21d00500000,0x0061c19d00500000,0x0069e15d00500000\n"
".quad 0x0020821c00500000,0x0018619c00580000,0x0014511c00301000,0x001033dc00300c00\n"
".quad 0xf5e00001e7500000,0x00c0f11c004003ff,0x00db60dc00580040,0x00077ddc03303e00\n"
".quad 0xe0036d9c004800c0,0x000430dc005000cf,0xa8ec30dc02300840,0xbf0031dc0032fee2\n"
".quad 0xc00030c000208ef0,0x000c00dc205800cf,0x000830dc00600000,0x000c30c000c80000\n"
".quad 0x001431dc00580000,0x0007f0dc04220e40,0x001f71dc23201040,0x000cb2dc001a8ec0\n"
".quad 0xf2800001e7500000,0x000575dc034003ff,0xe00134dc004800c0,0x001d71dc235000cf\n"
".quad 0xf1800001e71a8ec0,0x0014b1dc004003ff,0x00a3b01ca3220e40,0x0080011de4207440\n"
".quad 0x0027f09c04280040,0x0010019c03201040,0xe00020de002009c0,0xdfc0211c005000cf\n"
".quad 0x0010001c435800d0,0xdfc030dc005000c0,0x009001dc435800d0,0x000d209c84480040\n"
".quad 0x001120dc84140600,0x0040209c03140600,0x000c201c436000c0,0x0000601c85680000\n"
".quad 0x0000001de7940000,0x0000000000800000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0xcd3ca72f05000000,0x043f8000003dcccc,0x000000002d000802,0x1900080a04000000\n"
".quad 0x0300180020000000,0x00000c1704001819,0x0000140004000000,0x00000c17040011f0\n"
".quad 0x0000100003000000,0x00000c17040011f0,0x00000c0002000000,0x00000c17040011f0\n"
".quad 0x0000080001000000,0x00000c17040011f0,0x0000000000000000,0x0c00080d040021f0\n"
".quad 0xe400000001000100,0x042800440400005d,0x042c0000009800dc,0x042c00000088011c\n"
".quad 0x042c00000094001c,0xa32c00000084009c,0xa3200840003031dc,0x042004400020021c\n"
".quad 0x23180000001d209e,0x04188e4000b071dc,0x001800000021201e,0x235000cfc00020dc\n"
".quad 0x0018804000a081dc,0x865000cfc000009c,0xa38011c000fc2100,0xe420104000a07000\n"
".quad 0xa328004000800081,0x002005c000100080,0x005800d0dfc060c0,0x005800d0dfc04100\n"
".quad 0x845800d0dfc05140,0x84140600000d20c0,0x8414060000112180,0x0314060000152140\n"
".quad 0xe36000c000403100,0x035000c0001000c0,0x436000c000205140,0x4368000000184180\n"
".quad 0x43480040009030c0,0x8568000000146000,0xe794000000002000,0x008000000000001d\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0400000000000000,0x000000002d000802,0x1700080a04000000\n"
".quad 0x0300100020000000,0x00000c1704001019,0x00000c0002000000,0x00000c17040011f0\n"
".quad 0x0000080001000000,0x00000c17040011f0,0x0000000000000000,0x0c00080d040021f0\n"
".quad 0xe400000001000100,0x042800440400005d,0x042c0000009800dc,0xe22c00000088011c\n"
".quad 0x04180000000c015d,0x042c00000094001c,0xa32c00000084009c,0xa320084000303e9c\n"
".quad 0xa3200a400020311c,0xa3200a40002000dc,0x232004400020001c,0x04188e4000b3a1dc\n"
".quad 0x041800000011215c,0x04180000000d209c,0x0418000000e9211e,0x23180000000120de\n"
".quad 0x0018804000a001dc,0x005000cfc00052dc,0x005000cfc000209c,0x005000cfc00041dc\n"
".quad 0xe75000cfc00030dc,0x0080000000000021,0x005000f01000271c,0x005000f000002e1c\n"
".quad 0x045000efe0002d9c,0x0010000000092a1c,0x005000cfe0002d1c,0x005000d00000299c\n"
".quad 0x005000d010002c9c,0x005000d02000291c,0x005000f01000309c,0x005000f000003a9c\n"
".quad 0x045000efe0003c1c,0x00100000000d289c,0x005000cfe0003b9c,0x005000d00000381c\n"
".quad 0x005000d010003b1c,0xe25000d02000379c,0xe41b0100000003dd,0xe428000000fc041d\n"
".quad 0x0028000000fc04dd,0x86500000003cb75c,0x008011c000fdc31c,0x86500000003c70dc\n"
".quad 0xe48011c000fc221c,0x8628000000740e5d,0xe48011c000ff851c,0x86280000000c0add\n"
".quad 0xe48011c000fea11c,0x0028000000740ddd,0x005000000034935d,0x005000000030825d\n"
".quad 0x005000000038a21d,0x005800000034d31c,0x003018000024925c,0x003012000020821c\n"
".quad 0x00500000002105dc,0x865000000054515d,0xe48011c000ff641c,0x86280000000c0c5d\n"
".quad 0xe48011c000ff031c,0x8628000000740a5d,0x008011c000fe821c,0x005000000050451d\n"
".quad 0xe45800000014511c,0x00280000000c08dd,0x005000000058659d,0x863008000051451c\n"
".quad 0xe48011c000fe211c,0x0028000000740d5d,0x005000000044d45d,0x005000000040c41d\n"
".quad 0x005000000048e35d,0x005800000045145c,0x003028000059631c,0x003022000041039c\n"
".quad 0x005000000031731c,0x00301c000034d35c,0x005000000034c5dc,0x865000000024515d\n"
".quad 0xe48011c000ff441c,0x86280000000c0bdd,0xe48011c000fee31c,0x86280000007409dd\n"
".quad 0x008011c000fe651c,0x005000000020421d,0xe45800000014511c,0x00280000000c085d\n"
".quad 0x005000000028629d,0x863008000020821c,0x008011c000fe011c,0xe43010000028a21c\n"
".quad 0x0028000000740cdd,0x005000000021721c,0x005000000044d45d,0x005000000040c31d\n"
".quad 0x005000000048e25d,0x005800000045135c,0x00301a000030c29c,0x003014000024925c\n"
".quad 0x00500000002485dc,0x865000000050411d,0xe48011c000ff221c,0x86280000000c0b5d\n"
".quad 0xe48011c000fec31c,0x862800000074095d,0xe48011c000fe441c,0x00280000000c07dd\n"
".quad 0x86500000005450dd,0x008011c000fde61c,0x00580000000c30dc,0x035000000058659d\n"
".quad 0x004800c0000534dc,0x00300600001040dc,0x235000cfe000f3dc,0x001a8ec0002131dc\n"
".quad 0x00300600005960dc,0x00500000000d70dc,0x005000000024d11d,0x005000000020c15d\n"
".quad 0x005800000010419c,0x005000000028e11d,0x00300c000014515c,0x00300a000010411c\n"
".quad 0x00500000001030dc,0x005000000045921d,0x005000000041819d,0x005000000049a15d\n"
".quad 0x005800000020821c,0x003010000018619c,0x00300c000014511c,0xe75000000010341c\n"
".quad 0x044003fff4800001,0x042c00000084015c,0x032c00000088011c,0x03207e0000fc1fdc\n"
".quad 0x034800fffff450dc,0xa34800fffff4409c,0xa3500000000c30dc,0x002006000008209c\n"
".quad 0x0458004000c100dc,0x001800000009209c,0x023006400004209c,0x0032fee2a8ec209c\n"
".quad 0x00208ef0bf0021dc,0x205800cfc0002080,0x63600000000800dc,0x004000000014409c\n"
".quad 0x03c80000000830dc,0x006000c00008209e,0x85580000000c30c0,0x04c90000000020dc\n"
".quad 0x8550ee0000ffffdc,0x85c100000003f2dc,0xa5c100000013f29c,0xc5c100000023f21c\n"
".quad 0xc5c100000043f11c,0xc5c100000083f41c,0x00c1000000c3f51c,0x00220e400014b1dc\n"
".quad 0x85220e400014a3dc,0x04c100000103f69c,0x042010400007f29c,0x002012400007f8dc\n"
".quad 0x04220e40001481dc,0x001000000029289c,0x85220e40001493dc,0x00c100000113f6dc\n"
".quad 0x04500000008e289c,0x002010400007f8dc,0x04220e40001441dc,0x002012400007f91c\n"
".quad 0x00500000008e211c,0x04220e40001453dc,0x002010400007f15c,0x045000000090411c\n"
".quad 0x002012400007f8dc,0x00220e40001461dc,0x005000000014489c,0xa5220e40001473dc\n"
".quad 0x00c100000123f61c,0x04500000008e289c,0x002010400007f8dc,0x04220e40001501dc\n"
".quad 0x002012400007f91c,0x00500000008e241c,0x04220e40001513dc,0x002010400007f45c\n"
".quad 0x045000000091041c,0x002012400007f8dc,0x00220e40001521dc,0x005000000045089c\n"
".quad 0xc5220e40001533dc,0x00c100000143f31c,0x04500000008e289c,0x002010400007f8dc\n"
".quad 0x04220e40001541dc,0x002012400007f91c,0x00500000008e251c,0x04220e40001553dc\n"
".quad 0x002010400007f55c,0x045000000091451c,0x002012400007f8dc,0x00220e40001561dc\n"
".quad 0x005000000055489c,0xc5220e40001573dc,0x00c100000183f21c,0x04500000008e289c\n"
".quad 0x002010400007f8dc,0x04220e400015a1dc,0x002012400007f91c,0x00500000008e269c\n"
".quad 0x04220e400015b3dc,0x002010400007f6dc,0x045000000091a69c,0x002012400007f8dc\n"
".quad 0x00220e40001581dc,0x00500000006da89c,0xc5220e40001593dc,0x00c1000001c3f11c\n"
".quad 0x04500000008e289c,0x002010400007f8dc,0x04220e400014c1dc,0x002012400007f91c\n"
".quad 0x00500000008e231c,0x04220e400014d3dc,0x002010400007f35c,0x045000000090c31c\n"
".quad 0x002012400007f8dc,0x00220e400014e1dc,0x005000000034c89c,0x85220e400014f3dc\n"
".quad 0x00c100000203f79c,0x04500000008e289c,0x002010400007f8dc,0x04220e40001481dc\n"
".quad 0x002012400007f91c,0x00500000008e221c,0x04220e40001493dc,0x002010400007f25c\n"
".quad 0x045000000090821c,0x002012400007f8dc,0x00220e400014a1dc,0x005000000024889c\n"
".quad 0x85220e400014b3dc,0x00c100000213f7dc,0x04500000008e289c,0x002010400007f8dc\n"
".quad 0x04220e40001441dc,0x002012400007f91c,0x00500000008e211c,0x04220e40001453dc\n"
".quad 0x002010400007f15c,0x045000000090411c,0x002012400007f8dc,0x00220e40001461dc\n"
".quad 0x005000000014489c,0xa5220e40001473dc,0x00c100000223f09c,0x04500000008e289c\n"
".quad 0x002010400007f8dc,0x04220e400015e1dc,0x002012400007f91c,0x00500000008e279c\n"
".quad 0x04220e400015f3dc,0x002010400007f7dc,0x005000000091e89c,0xc5220e40001421dc\n"
".quad 0x04c100000243f41c,0x002012400007f79c,0x00500000007e209c,0x04220e40001433dc\n"
".quad 0x002010400007f0dc,0x005000000078209c,0x04220e40001501dc,0x002012400007f41c\n"
".quad 0x00500000000c209c,0x04220e40001513dc,0x002010400007f0dc,0x005000000040209c\n"
".quad 0x04220e40001521dc,0x002012400007f41c,0xc5500000000c209c,0x00c100000283f51c\n"
".quad 0x04220e40001533dc,0x002010400007f0dc,0x045000000040209c,0xc52012400007f41c\n"
".quad 0x00c1000002c3f61c,0x00220e40001541dc,0x00500000000c209c,0x04220e40001553dc\n"
".quad 0x002010400007f0dc,0x005000000040209c,0x04220e40001561dc,0x002012400007f41c\n"
".quad 0x00500000000c209c,0x04220e40001573dc,0x002010400007f0dc,0x005000000040209c\n"
".quad 0x04220e40001581dc,0x002012400007f41c,0x00500000000c209c,0x04220e40001593dc\n"
".quad 0x002010400007f0dc,0x005000000040209c,0x04220e400015a1dc,0x002012400007f41c\n"
".quad 0x85500000000c209c,0x00c100000303f81c,0x04220e400015b3dc,0x002010400007f0dc\n"
".quad 0x855000000040209c,0x04c100000313f85c,0x002012400007f41c,0x00220e40001601dc\n"
".quad 0xa5500000000c209c,0x04c100000323f71c,0x002010400007f0dc,0x00220e40001613dc\n"
".quad 0xc55000000040209c,0x04c100000343f31c,0x002012400007f41c,0x00220e400015c1dc\n"
".quad 0x00500000000c209c,0x04220e400015d3dc,0x002010400007f0dc,0x005000000040209c\n"
".quad 0x04220e400014c1dc,0x002012400007f31c,0x00500000000c209c,0x04220e400014d3dc\n"
".quad 0x002010400007f0dc,0xc55000000030209c,0x00c100000383f21c,0x04220e400014e1dc\n"
".quad 0x002012400007f31c,0x00500000000c209c,0x04220e400014f3dc,0x002010400007f0dc\n"
".quad 0x005000000030209c,0x04220e40001481dc,0x002012400007f21c,0x00500000000c209c\n"
".quad 0x04220e40001493dc,0x002010400007f0dc,0xc55000000020209c,0x00c1000003c3f11c\n"
".quad 0x04220e400014a1dc,0x002012400007f21c,0x00500000000c209c,0x04220e400014b3dc\n"
".quad 0x002010400007f0dc,0x005000000020209c,0x04220e40001441dc,0x002012400007f11c\n"
".quad 0x00500000000c209c,0x04220e40001453dc,0x002010400007f0dc,0x005000000010209c\n"
".quad 0x04220e40001461dc,0x002012400007f11c,0x00500000000c209c,0x04220e40001473dc\n"
".quad 0x002010400007f0dc,0x045000000010209c,0xa32012400007f11c,0x0020004000a3a01c\n"
".quad 0x00500000000c209c,0xe45000000010209c,0x002800400080011d,0xa3220e40001421dc\n"
".quad 0xe32009c00010019c,0x045000c00010001c,0x432010400027f09c,0x00480040009001dc\n"
".quad 0x005000cfe00020de,0x005800d0dfc0211c,0x845800d0dfc030dc,0x84140600000d209c\n"
".quad 0x03140600001120dc,0x436000c00040209c,0x85680000000c201c,0xe79400000000601c\n"
".quad 0x008000000000001d,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0500000000000000\n"
".quad 0x003dcccccd3ca72f,0x2d000802043f8000,0x0400000000000000,0x200000001f00080a\n"
".quad 0x0400181903001800,0x0400000000000c17,0x040011f000001400,0x0300000000000c17\n"
".quad 0x040011f000001000,0x0200000000000c17,0x040011f000000c00,0x0100000000000c17\n"
".quad 0x040011f000000800,0x0000000000000c17,0x040021f000000000,0x010001000c00080d\n"
".quad 0x0400005de4000000,0x009800dc04280044,0x0088011c042c0000,0x0094001c042c0000\n"
".quad 0x0084009c042c0000,0x003031dca32c0000,0x0020001ca3200840,0x00b071dc23200440\n"
".quad 0x001d20de04188e40,0x0001209e04180000,0x00a001dc23180000,0xc00032dc00188040\n"
".quad 0xc000229c005000cf,0x00000021e75000cf,0x00fca11c86800000,0x1000a09c008011c0\n"
".quad 0x0000a89c005000f0,0xe000a91c005000f0,0x0029299c045000ef,0xe000a81c00100000\n"
".quad 0x0000a79c005000cf,0x1000a71c005000d0,0x000003dde25000d0,0x00fc041de41b0100\n"
".quad 0x00fc04dde4280000,0x003cb0dc00280000,0x00fc221c86500000,0x000c08dde48011c0\n"
".quad 0x00fe231c86280000,0x0004f5dc008011c0,0x000c095de4301e80,0x0014945d00280000\n"
".quad 0x0010825d00500000,0x0018a21d00500000,0x0045145c00500000,0x0024925c00580000\n"
".quad 0x0020821c00302200,0x0014d25d00301200,0x0010c35d00500000,0x00c0821c00500000\n"
".quad 0x0015721c00580040,0xa8ec821c02301040,0xbf0081dc0032fee2,0xc000820000208ef0\n"
".quad 0x0020021c205800cf,0x0008821c00600000,0x0020820000c80000,0x003481dc00580000\n"
".quad 0x0017f21c04220e40,0x0021061c00201040,0x0024941c00500000,0x00fe421c86580000\n"
".quad 0x0018e31d008011c0,0x0034d35c00500000,0x0024f6dc00302000,0x000c09dde4301e80\n"
".quad 0x0030c31c00280000,0x00c0c31c00301a00,0x0015b41c00580040,0x00fe631c86301840\n"
".quad 0x000c085de48011c0,0xa8ed051c02280000,0xbf0141dc0032fee2,0xc001450000208ef0\n"
".quad 0x00fe041c865800cf,0x0050051c208011c0,0x000c07dde4600000,0x0009465c00280000\n"
".quad 0x0065964000c80000,0x00fde51c86580000,0x003591dc008011c0,0x000c075de4220e40\n"
".quad 0x0017f65c04280000,0x006587dc00201040,0x00fdc61c86500000,0x000534dc038011c0\n"
".quad 0x0014925d004800c0,0x001080dd00500000,0x0024921c00500000,0x000c321c00580000\n"
".quad 0x0018a0dd00301000,0x000c325c00500000,0x0044f0dc00301000,0x0014d21d00301e80\n"
".quad 0x00c0929c00500000,0x0010c25d00580040,0x0020831c00500000,0x0014321c00580000\n"
".quad 0x0024929c00301440,0x0018e25d00301800,0xa8ec821c02500000,0x0024929c0032fee2\n"
".quad 0xbf0081dc00301400,0x003cf25c00208ef0,0x00c0a29c00307e00,0xc000820000580040\n"
".quad 0x0011031d005800cf,0x0014925c00500000,0x0020021c20301440,0x0015129d00600000\n"
".quad 0xa8ec925c02500000,0x0008821c0032fee2,0x0028a35c00c80000,0xbf0093dc00580000\n"
".quad 0x0020820000208ef0,0x0019229d00580000,0xc000924400500000,0x003481dc005800cf\n"
".quad 0x0030c31c00220e40,0x0024021c20301a00,0x0017f25c04600000,0x0015535d00201040\n"
".quad 0x0008821c00500000,0x0025f25c00c80000,0x0028a29c00500000,0x0020820400301800\n"
".quad 0x0011431d00580000,0x0034d35c00500000,0x003481dc00580000,0x0015939d00220e40\n"
".quad 0x0030c31c00500000,0x0017f21c04301a00,0x0011835d00201040,0x0038e39c00500000\n"
".quad 0x0020921c00580000,0x00c0a25c00500000,0x0019629d00580040,0x0034d35c00500000\n"
".quad 0x001430dc00301c00,0x0028a29c00301240,0x0019a31d00301800,0xa8ec30dc02500000\n"
".quad 0x00c0a25c0032fee2,0x0030c29c00580040,0xbf0031dc00301a00,0x0015b25c00208ef0\n"
".quad 0x00c0a29c00301240,0xc00030c000580040,0xa8ec925c025800cf,0x0015729c0032fee2\n"
".quad 0x000c00dc20301440,0xbf0093dc00600000,0xa8eca29c02208ef0,0x000830dc0032fee2\n"
".quad 0xc000924400c80000,0xbf00a5dc005800cf,0x000c30c000208ef0,0x0024025c20580000\n"
".quad 0xc000a28800600000,0x003431dc005800cf,0x0008925c00220e40,0x0028029c20c80000\n"
".quad 0x0017f0dc04600000,0x0024924400201040,0x0008a29c00580000,0x000c821c00c80000\n"
".quad 0x003491dc00500000,0x0028a28800220e40,0xe000f3dc00580000,0x0017f0dc045000cf\n"
".quad 0x0034a1dc00201040,0x000c821c00220e40,0x0017f0dc04500000,0x001d31dc23201040\n"
".quad 0x000c841c001a8ec0,0xee600001e7500000,0x005501dc004003ff,0x00a0701ca3220e40\n"
".quad 0x0080011de4200040,0x0047f09c04280040,0x0010019ca3201040,0xe00020de002009c0\n"
".quad 0xdfc0211c005000cf,0x0010001ce35800d0,0xdfc030dc005000c0,0x009001dc435800d0\n"
".quad 0x000d209c84480040,0x001120dc84140600,0x0040209c03140600,0x000c201c436000c0\n"
".quad 0x0000601c85680000,0x0000001de7940000,0x0000000000800000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0541100000000000,0x0a408000003ca72f,0x713f8000003ca3d7\n"
".quad 0x2d000802043f4a3d,0x0400000000000000,0x200000002100080a,0x0400181903001800\n"
".quad 0x0400000000000c17,0x040011f000001400,0x0300000000000c17,0x040011f000001000\n"
".quad 0x0200000000000c17,0x040011f000000c00,0x0100000000000c17,0x040011f000000800\n"
".quad 0x0000000000000c17,0x040021f000000000,0x010001000c00080d,0x0400005de4000000\n"
".quad 0x009800dc04280044,0x0088011c042c0000,0x000c015de22c0000,0x0094001c04180000\n"
".quad 0x0084009c042c0000,0x003033dca32c0000,0x0020311ca3200840,0x002000dca3200a40\n"
".quad 0x0020001ca3200a40,0x00b0f1dc23200440,0x0011215c04188e40,0x000d211c04180000\n"
".quad 0x003d20de04180000,0x0001209e04180000,0x00a001dc23180000,0xc00051dc00188040\n"
".quad 0xc000411c005000cf,0xc00030dc005000cf,0xc000209c005000cf,0x00000021e75000cf\n"
".quad 0x1000461c00800000,0x00004a9c005000f0,0xe000481c005000f0,0x00112a1c045000ef\n"
".quad 0xe000479c00100000,0x0000499c005000cf,0x10004b1c005000d0,0x000002dde25000d0\n"
".quad 0x10002c9c001b0100,0x0000291c005000f0,0xe000271c005000f0,0x0009289c045000ef\n"
".quad 0xe000269c00100000,0x00002b9c005000cf,0x10002c1c005000d0,0x00fc05dde45000d0\n"
".quad 0x00fc04dde4280000,0x002c765c00280000,0x00fd841c86500000,0x002c3cdc008011c0\n"
".quad 0x00ff231c86500000,0x00640adde48011c0,0x00fea21c86280000,0x00cc095de48011c0\n"
".quad 0x00fe411c86280000,0x0064085de48011c0,0x00fe051c86280000,0x00cc075de48011c0\n"
".quad 0x0044d35d00280000,0x0040c41d00500000,0x0048e31d00500000,0x0034d35c00500000\n"
".quad 0x0041035c00580000,0x00fdc41c86301a00,0x00640a5de48011c0,0x0024525d00280000\n"
".quad 0x0020421d00500000,0x0028615d00500000,0x0024925c00500000,0x0030c11c00580000\n"
".quad 0x0020819c00301a00,0x0011711c00301200,0x0014515c00500000,0x001445dc00300c00\n"
".quad 0x0055145d00500000,0x00fe821c86500000,0x00cc08dde48011c0,0x00fe211c86280000\n"
".quad 0x006407dde48011c0,0x00fde31c86280000,0x0051051d008011c0,0x0045141c00500000\n"
".quad 0x00cc06dde4580000,0x0059259d00280000,0x0051451c00500000,0x00fda41c86302000\n"
".quad 0x006409dde48011c0,0x0024525d00280000,0x0020421d00500000,0x0028615d00500000\n"
".quad 0x0024925c00500000,0x0059611c00580000,0x0020819c00302800,0x0011711c00301200\n"
".quad 0x0014515c00500000,0x001445dc00300c00,0x0031031d00500000,0x00fe611c86500000\n"
".quad 0x00cc0bdde48011c0,0x00fee21c86280000,0x00640b5de48011c0,0x00fec51c86280000\n"
".quad 0x00cc0c5de48011c0,0x0035135d00280000,0x00ff0d1c86500000,0x0034d35c008011c0\n"
".quad 0x0039239d00580000,0x000534dc03500000,0x0030c31c004800c0,0xe000b2dc00301a00\n"
".quad 0x001d31dc235000cf,0x0038e31c001a8ec0,0x0014925d00301800,0x0010821d00500000\n"
".quad 0x0018a11d00500000,0x0024925c00500000,0x0031715c00580000,0x0020819c00500000\n"
".quad 0x0010411c00301200,0x0010511c00300c00,0x0057529d00500000,0x0053421d00500000\n"
".quad 0x005b619d00500000,0x0028a25c00500000,0x0020821c00580000,0x0018615c00301200\n"
".quad 0x001445dc00301000,0xf5e00001e7500000,0x008401dc044003ff,0x0088019c042c0000\n"
".quad 0x00fc1fdc032c0000,0xfff4715c03207e00,0xfff4611c034800ff,0x0014515ca34800ff\n"
".quad 0x0010411ca3500000,0x00c1715c00200a00,0x0011211c04580040,0x0004411c00180000\n"
".quad 0xa8ec411c02300a40,0xbf0041dc0032fee2,0xc000410000208ef0,0x0010015c205800cf\n"
".quad 0x001c611c63600000,0x0008515c00400000,0x0008411e03c80000,0x00145140006000c0\n"
".quad 0x0000415c85580000,0x00ffffdc04c90000,0x100035dc0050ee00,0x00c8059de45000f0\n"
".quad 0x00fd661c86280000,0x0000259c008011c0,0x00fd631c865000f0,0xe0002c1c008011c0\n"
".quad 0x005c0c5de45000ef,0x00ff091c86280000,0x00092b9c048011c0,0x005c0bdde4100000\n"
".quad 0x0003f21cc5280000,0x00fee41c86c10000,0x001481dc008011c0,0xe000251c00220e40\n"
".quad 0x005c055de45000cf,0x0007f11c04280000,0x001493dc00201040,0x0000279c00220e40\n"
".quad 0x001126dc045000d0,0x002121dc04100000,0x0007f71c04100000,0x00fd411c86201240\n"
".quad 0x005c07dde48011c0,0x002474dc00280000,0x0071b1dc00500000,0x00fde81c86500000\n"
".quad 0x1000271c008011c0,0x005c075de45000d0,0x0021855c00280000,0x0021961c00307e00\n"
".quad 0x0021a65c00307e00,0x0024c21c00307e00,0x0024d55c00302a00,0x0024e25c00303000\n"
".quad 0x002a421c00303200,0x00fdc61c86301000,0x20002b1c008011c0,0x005c0b5de45000d0\n"
".quad 0x00fec31c86280000,0x000035dc008011c0,0x002a555c005000f0,0x002a625c00302a00\n"
".quad 0x005c0cdde4301200,0x00ff291c86280000,0x002934dc008011c0,0x0014a1dc00500000\n"
".quad 0x002d129c00220e40,0x002d021c00302a00,0x002d355c00301000,0x002d225c00500000\n"
".quad 0x0014b3dc00301200,0x0043f41cc5220e40,0x0007f2dc04c10000,0x002c71dc00201040\n"
".quad 0x0007f2dc04500000,0x001501dc00201240,0x0041555c00220e40,0x002c72dc00500000\n"
".quad 0x0007f1dc04500000,0x001511dc00201040,0x0040411c00220e40,0x001cb1dc00301000\n"
".quad 0x0007f2dc04500000,0x001521dc00201040,0x0040515c00220e40,0x002c72dc00301400\n"
".quad 0x0007f1dc04500000,0x001531dc00201040,0x0040619c00220e40,0x001cb2dc00301200\n"
".quad 0x0007f1dc04500000,0x0046021c00201040,0x0046175c00300800,0x001cb1dc00300a00\n"
".quad 0x004552dc00500000,0x004627dc00500000,0x0048b55c00300c00,0x00fd611c86500000\n"
".quad 0x005c0c5de48011c0,0x004d56dc00280000,0x00ff081c86500000,0x005c0bdde48011c0\n"
".quad 0x0049841c00280000,0x0083f21cc5301000,0x0049945c00c10000,0x0049a49c00303a00\n"
".quad 0x001481dc00303e00,0x004cc41c00220e40,0x004cd31c00302000,0x004ce4dc00302200\n"
".quad 0x0022475c00302400,0x00fee61c86302000,0x001493dc008011c0,0x0007f35c04220e40\n"
".quad 0x005c055de4201040,0x0007f39c04280000,0x003471dc00201240,0x0014a1dc00500000\n"
".quad 0x003871dc00220e40,0x00fd441c86500000,0x0007f35c048011c0,0x0014b1dc00201040\n"
".quad 0x005c07dde4220e40,0x003471dc00280000,0x0007f55c04500000,0x0054755c00201040\n"
".quad 0x002251dc00500000,0x00fde31c86301800,0x0021b6dc008011c0,0x002264dc00500000\n"
".quad 0x0025b6dc00302600,0x0029b21c00500000,0x0024411c00500000,0x002456dc00303a00\n"
".quad 0x0024625c00300e00,0x002c84dc00302600,0x005c075de4500000,0x002a07dc00280000\n"
".quad 0x00c3f11cc5300800,0x002a121c00c10000,0x002a225c00303600,0x002d861c00301200\n"
".quad 0x002d921c00303e00,0x0011029c00301000,0x002da41c00303000,0x0011145c00301200\n"
".quad 0x0014c31c00301000,0x00fdcd1c86301400,0x001441dc008011c0,0x001453dc00220e40\n"
".quad 0x005c0b5de4220e40,0x0007f21c04280000,0x001465dc00201040,0x0007f25c04220e40\n"
".quad 0x0021521c00201240,0x00fec81c86500000,0x001471dc008011c0,0x0007f29c04220e40\n"
".quad 0x0024821c00201440,0xe00035dc00500000,0x0007f55c045000ef,0x0028861c00201040\n"
".quad 0x005c0cdde4500000,0x0103f21cc5280000,0x0055855c00c10000,0x00ff261c86500000\n"
".quad 0x0011241c008011c0,0x0011349c00302000,0x001481dc00500000,0x0014d35c00220e40\n"
".quad 0x0007f6dc04302200,0x006d511c00201040,0x00fd6a1c86500000,0x0015249c008011c0\n"
".quad 0x0014e41c00500000,0x005c0c5de4302000,0x0019215c00280000,0x001c515c00500000\n"
".quad 0x00ff091c86500000,0x005c0bdde48011c0,0x0020515c00280000,0x001b431c00500000\n"
".quad 0x001b535c00301800,0x001b619c00301a00,0x001e031c00302000,0x001e135c00301800\n"
".quad 0x001e21dc00301a00,0x0021831c00300c00,0x0021919c00301800,0x0021a1dc00301a00\n"
".quad 0x002684dc00300e00,0x00fee41c86301800,0x005c055de48011c0,0x00fd431c86280000\n"
".quad 0x001491dc008011c0,0x005c07dde4220e40,0x0007f21c04280000,0x0014a1dc00201040\n"
".quad 0x00fde61c86220e40,0x0020411c008011c0,0x0007f21c04500000,0x0014b1dc00201040\n"
".quad 0x005c075de4220e40,0x0020411c00280000,0x0007f21c04500000,0x0020421c00201040\n"
".quad 0x00fdc81c86500000,0x0026955c008011c0,0x002456dc00300c00,0x0026a25c00500000\n"
".quad 0x0143f11cc5300e00,0x002a44dc00c10000,0x005c0b5de4302600,0x002a555c00280000\n"
".quad 0x0029b6dc00302a00,0x002a629c00500000,0x001441dc00301200,0x0007f5dc04220e40\n"
".quad 0x002d025c00201040,0x00fec91c86302600,0x005c821c008011c0,0x000d25dc04500000\n"
".quad 0x001451dc00100000,0x002d155c00220e40,0x005c0cdde4302a00,0x002d229c00280000\n"
".quad 0x0007f4dc04301400,0x002db2dc00201040,0x00ff241c86500000,0x004c84dc008011c0\n"
".quad 0x0010c21c00500000,0x0010b2dc00301200,0x0010d25c00500000,0x0010e29c00302a00\n"
".quad 0x0014b2dc00301400,0x0015821c00500000,0x0015911c00301000,0x0015a6dc00301200\n"
".quad 0x001a015c00301400,0x00fd621c86301000,0x005c0c5de48011c0,0x00ff031c86280000\n"
".quad 0x005c0bdde48011c0,0x00fee61c86280000,0x005c055de48011c0,0x001a111c00280000\n"
".quad 0x001a26dc00300800,0x00fd481c86303600,0x0018b2dc008011c0,0x001461dc00500000\n"
".quad 0x001473dc00220e40,0x001cb2dc00220e40,0x0007f7dc04500000,0x007d34dc00201040\n"
".quad 0x0007f7dc04500000,0x007d37dc00201240,0x001e455c00500000,0x001e575c00300a00\n"
".quad 0x001e66dc00300800,0x0183f11cc5303600,0x001441dc00c10000,0x0010b2dc00220e40\n"
".quad 0x0007f4dc04500000,0x001451dc00201040,0x004df4dc00220e40,0x0007f7dc04500000\n"
".quad 0x001461dc00201040,0x007d37dc00220e40,0x0007f4dc04500000,0x001471dc00201040\n"
".quad 0x004df7dc00220e40,0x0007f4dc04500000,0x004df4dc00201040,0x0014b7dc00500000\n"
".quad 0x001102dc00500000,0x0011141c00302a00,0x0019f55c00303a00,0x0011211c00500000\n"
".quad 0x005c07dde4303600,0x0014821c00280000,0x001496dc00301600,0x0014a15c00302000\n"
".quad 0x00fde41c86300800,0x005c075de48011c0,0x001d511c00280000,0x0018c31c00500000\n"
".quad 0x01c3f21cc5301000,0x0018d35c00c10000,0x0018e15c00303600,0x001d831c00300a00\n"
".quad 0x001d919c00301800,0x001da15c00301a00,0x002201dc00300a00,0x00fdc61c86301800\n"
".quad 0x005c0b5de48011c0,0x001481dc00280000,0x00fec31c86220e40,0x0007f55c048011c0\n"
".quad 0x001491dc00201040,0xe00035dc00220e40,0x005534dc005000cf,0x0007f55c04500000\n"
".quad 0x005c0cdde4201040,0x0014a1dc00280000,0x005534dc00220e40,0x00ff2d1c86500000\n"
".quad 0x0007f55c048011c0,0x0014b1dc00201040,0x0022119c00220e40,0x0055355c00300c00\n"
".quad 0x0007f4dc04500000,0x004d54dc00201040,0x00fd6a1c86500000,0x0020411c008011c0\n"
".quad 0x0022215c00500000,0x005c0c5de4300a00,0x0024411c00280000,0x0028421c00500000\n"
".quad 0x00ff091c86500000,0x005c0bdde48011c0,0x002501dc00280000,0x0025145c00300e00\n"
".quad 0x0025225c00300c00,0x002c841c00300a00,0x0029849c00500000,0x0203f11cc5300e00\n"
".quad 0x0029921c00c10000,0x0029a25c00302200,0x001441dc00301200,0x001453dc00220e40\n"
".quad 0x001465dc00220e40,0x002cc31c00220e40,0x002cd29c00302400,0x002ce49c00301000\n"
".quad 0x0007f25c04301200,0x0013421c00201240,0x0013545c00301800,0x001686dc00301400\n"
".quad 0x0007f21c04301000,0x0021321c00201040,0x00fee31c86500000,0x001471dc008011c0\n"
".quad 0x0007f29c04220e40,0x0024821c00201440,0x0007f61c04500000,0x005c055de4201040\n"
".quad 0x002884dc00280000,0x0243f21cc5500000,0x0061375c00c10000,0x00fd461c86500000\n"
".quad 0x005c07dde48011c0,0x001481dc00280000,0x0013655c00220e40,0x0011011c00302400\n"
".quad 0x0007f4dc04500000,0x0016981c00201040,0x004dd4dc00302200,0x00fde41c86500000\n"
".quad 0x0014411c008011c0,0x0016a55c00500000,0x001a415c00302a00,0x001846dc00303600\n"
".quad 0x005c075de4500000,0x001a511c00280000,0x001db6dc00304000,0x00fdc81c86500000\n"
".quad 0x001a619c008011c0,0x005c0b5de4302a00,0x0021b55c00280000,0x00fec91c86500000\n"
".quad 0x000035dc008011c0,0x005c0cdde45000d0,0x001cc15c00280000,0x001cd11c00300a00\n"
".quad 0x001ce19c00300800,0x0021815c00300c00,0x002191dc00300a00,0x0021a21c00300800\n"
".quad 0x0025041c00300c00,0x00ff211c86300a00,0x001491dc008011c0,0x0007f61c04220e40\n"
".quad 0x0014a1dc00201040,0x00fd631c86220e40,0x006134dc008011c0,0x0007f61c04500000\n"
".quad 0x0014b1dc00201040,0x005c0c5de4220e40,0x006134dc00280000,0x0007f61c04500000\n"
".quad 0x0061375c00201040,0x00ff061c86500000,0x002511dc008011c0,0x0025555c00300e00\n"
".quad 0x0025221c00500000,0x002a025c00301000,0x0283f41cc5302000,0x002a11dc00c10000\n"
".quad 0x0029555c00300e00,0x002a221c00500000,0x002e429c00301000,0x002d555c00301200\n"
".quad 0x001501dc00500000,0x002e51dc00220e40,0x002e621c00300e00,0x0007f25c04301000\n"
".quad 0x005c0bdde4201040,0x004156dc00280000,0x0025d55c00500000,0x001511dc00500000\n"
".quad 0x0040411c00220e40,0x004052dc00301400,0x0044c11c00300e00,0x0040631c00300800\n"
".quad 0x0049841c00301000,0x00fee21c86300800,0x0007f61c048011c0,0x001523dc00201040\n"
".quad 0x02c3f11cc5220e40,0x0061561c00c10000,0x0007f75c04500000,0x005c055de4201240\n"
".quad 0x001531dc00280000,0x0075861c00220e40,0x00fd481c86500000,0x0007f55c048011c0\n"
".quad 0x001441dc00201040,0x005c07dde4220e40,0x0055855c00280000,0x0007f61c04500000\n"
".quad 0x001451dc00201040,0x0061561c00220e40,0x00fde91c86500000,0x0044d55c008011c0\n"
".quad 0x0007f2dc04301600,0x005c075de4201040,0x002d82dc00280000,0x0045b61c00500000\n"
".quad 0x0044e45c00500000,0x00fdc31c86301800,0x0049861c008011c0,0x0049a45c00500000\n"
".quad 0x005c0b5de4302200,0x004d861c00280000,0x001186dc00500000,0x0049961c00500000\n"
".quad 0x0015b55c00302a00,0x004c821c00500000,0x004c925c00302000,0x004ca29c00303000\n"
".quad 0x0012021c00302200,0x0012125c00301000,0x0012229c00301200,0x0016421c00301400\n"
".quad 0x0016511c00301000,0x0016615c00301200,0x00fec61c86301400,0x100035dc008011c0\n"
".quad 0x005c0cdde45000d0,0x00ff281c86280000,0x0018c31c008011c0,0x001461dc00301000\n"
".quad 0x0303f41cc5220e40,0x0007f6dc04c10000,0x001471dc00201040,0x00fd621c86220e40\n"
".quad 0x006cb2dc008011c0,0x0007f6dc04500000,0x001501dc00201040,0x005c0c5de4220e40\n"
".quad 0x006cb6dc00280000,0x0007f2dc04500000,0x002db2dc00201040,0x00ff091c86500000\n"
".quad 0x005c0bdde48011c0,0x0018d35c00280000,0x001956dc00300800,0x0018e75c00500000\n"
".quad 0x00fee11c86300a00,0x005c055de48011c0,0x001d831c00280000,0x001d961c00301800\n"
".quad 0x0042081c00301a00,0x00fd431c86301800,0x001511dc008011c0,0x005c07dde4220e40\n"
".quad 0x001da75c00280000,0x0007f55c04303a00,0x001db1dc00201040,0x0054b55c00500000\n"
".quad 0x004212dc00500000,0x00fde61c86303000,0x004071dc008011c0,0x0042241c00500000\n"
".quad 0x004486dc00303a00,0x005c075de4304000,0x004471dc00280000,0x0044921c00500000\n"
".quad 0x0044a45c00301600,0x004a441c00302000,0x00fdc81c86303600,0x005c0b5de48011c0\n"
".quad 0x001521dc00280000,0x00feca1c86220e40,0x200035dc008011c0,0x0007f2dc045000d0\n"
".quad 0x005c0cdde4201040,0x002d52dc00280000,0x004a555c00500000,0x00ff221c86301000\n"
".quad 0x004a645c008011c0,0x004871dc00302200,0x00fd691c86500000,0x004c441c008011c0\n"
".quad 0x004c559c00302000,0x004c675c00302a00,0x001531dc00302200,0x004c74dc00220e40\n"
".quad 0x0343f11cc5500000,0x005c0c5de4c10000,0x0010c55c00280000,0x0010d59c00302000\n"
".quad 0x00ff041c86302c00,0x001443dc008011c0,0x001134dc00220e40,0x0010e75c00500000\n"
".quad 0x0007f11c04303a00,0x005c0bdde4201040,0x0010b6dc00280000,0x00fee31c86500000\n"
".quad 0x0015811c008011c0,0x005c055de4302a00,0x001598dc00280000,0x005c0b5de4302c00\n"
".quad 0x001a011c00280000,0x00fd451c86300800,0x001532dc008011c0,0x001451dc00500000\n"
".quad 0x0015a4dc00220e40,0x0007f15c04303a00,0x005c07dde4201240,0x0015b15c00280000\n"
".quad 0x00fde61c86500000,0x005c075de48011c0,0x001a18dc00280000,0x00fdc71c86304600\n"
".quad 0x001a24dc008011c0,0x00fec81c86302600,0x001463dc008011c0,0x0018b19c00220e40\n"
".quad 0x0007f2dc04500000,0x001e97dc00201040,0x001e85dc00304600,0x002c52dc00300800\n"
".quad 0x001471dc00500000,0x001c66dc00220e40,0x001ea8dc00500000,0x0383f11cc5302600\n"
".quad 0x0007f4dc04c10000,0x004cb4dc00201240,0x0007f2dc04500000,0x001441dc00201040\n"
".quad 0x001085dc00220e40,0x002d34dc00302e00,0x0007f2dc04500000,0x001451dc00201040\n"
".quad 0x001097dc00220e40,0x002d32dc00303e00,0x0007f4dc04500000,0x001461dc00201040\n"
".quad 0x0011b6dc00220e40,0x004cb4dc00500000,0x0010a11c00500000,0x03c3f21cc5304600\n"
".quad 0x0007f8dc04c10000,0x001471dc00201040,0x001645dc00220e40,0x008d38dc00302e00\n"
".quad 0x0007f4dc04500000,0x001481dc00201040,0x004e38dc00220e40,0x0007f9dc04500000\n"
".quad 0x001491dc00201040,0x0015b4dc00220e40,0x009e39dc00500000,0x0007f6dc04500000\n"
".quad 0x001934dc00201040,0x0014a1dc00500000,0x006e78dc00220e40,0x001d36dc00500000\n"
".quad 0x0007f4dc04500000,0x0019041c00201040,0x0021b6dc00302e00,0x004e34dc00500000\n"
".quad 0x0014b1dc00500000,0x0025b8dc00220e40,0x001656dc00500000,0x001667dc00303e00\n"
".quad 0x002a38dc00300800,0x0019145c00500000,0x0019219c00303600,0x0007f91c04303e00\n"
".quad 0x001cc31c00201040,0x001cd35c00302000,0x001ce19c00302200,0x002e311c00300c00\n"
".quad 0x0091315c00500000,0x002141dc00500000,0x0021531c00301800,0x0021619c00301a00\n"
".quad 0x0025921c00300c00,0x002581dc00301800,0x0025a19c00300e00,0x0029d21c00300c00\n"
".quad 0x0029c1dc00301000,0x0029e25c00300e00,0x002e119c00300c00,0x002e01dc00301000\n"
".quad 0x002e221c00300e00,0x03e0010007301200,0x00fc231c86500000,0x00d0009de48011c0\n"
".quad 0x00a0f01ca3280040,0x008000dde4200040,0x001451dc00280040,0xe000209e00220e40\n"
".quad 0x0010029ca35000cf,0x0010001ce32007c0,0x00d020dc045000c0,0x009002dc43201040\n"
".quad 0x0010809e00480040,0x0010715e00301c00,0x0010625e00301800,0x000c209c00301a00\n"
".quad 0x000c515c00580000,0x000c925c00580000,0x0010809c00580000,0x001070dc00300400\n"
".quad 0x0010611c00300a00,0xdfc0209c00301200,0xdfc030dc005800d0,0xdfc0411c005800d0\n"
".quad 0x0009209c845800d0,0x000d20dc84140600,0x0011211c84140600,0x0040209c03140600\n"
".quad 0x0020411c036000c0,0x000c209c436000c0,0x0010201c43680000,0x0000a01c85680000\n"
".quad 0x0000001de7940000,0x0000425c02800000,0x0000925c02080600,0x002491dc0339fe00\n"
".quad 0x00400001e71a0e40,0x00a0010007400000,0x0060001de7500000,0x0010425c00400000\n"
".quad 0x0034411c00c80000,0x0010911e00301280,0x0000001de7301200,0x0004425c03900000\n"
".quad 0x0060925c036000c0,0x00fc91dc035800c0,0x01600001e71a8e00,0x0004425c03400000\n"
".quad 0x00fc91dc236000c0,0x00400001e71a8e00,0x0010411c00400000,0x04e0001de7c80000\n"
".quad 0xe000411c00400000,0x0010425c00307ed7,0x0034411c00c80000,0x0010911e00301280\n"
".quad 0xe000411c00301200,0x0420001de7307ed7,0xfc0c929c03400000,0x0004a1dc034800ff\n"
".quad 0x03a00001e71a0ec0,0xfffc42dc02400000,0x0000b31c423801ff,0x0010c35c0038fe00\n"
".quad 0x0034c39c00c80000,0x000c031de2301a80,0x0038d41e00180000,0x0028c31c03309a00\n"
".quad 0x0038d35e00600000,0xfffd045c02311a00,0x003501dc003801ff,0x0001145c422e8e00\n"
".quad 0x0007f35c04380200,0x0044c31c032010c0,0x0028c31c03680000,0x0044a29c03580000\n"
".quad 0x0008c39c03680000,0x0028d29c436800c0,0xfc10935c03680000,0x00fce1dc034800ff\n"
".quad 0x0004c25c031a8e00,0x0000431c026800c0,0x00fca1dc033a0000,0x0035129c031aa000\n"
".quad 0x00fc91dc23580000,0x0004a280031a8000,0x0004a25c034800c0,0x0028911c036000c0\n"
".quad 0x0030411c43311600,0x0020001de7680000,0x0010411c00400000,0x0000001de7c80000\n"
".quad 0x0000000000900000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0xcd3ca72f05000000\n"
".quad 0x0001ffffff3dcccc,0x2d00080204bf8000,0x0400000000000000,0x200000001c00080a\n"
".quad 0x0400181903001800,0x0400000000000c17,0x040011f000001400,0x0300000000000c17\n"
".quad 0x040011f000001000,0x0200000000000c17,0x040011f000000c00,0x0100000000000c17\n"
".quad 0x040011f000000800,0x0000000000000c17,0x040021f000000000,0x020004003000080d\n"
".quad 0x0400005de4000000,0x009800dc04280044,0x0088011c042c0000,0x0094001c042c0000\n"
".quad 0x0084009c042c0000,0x003032dca32c0000,0x0020001ca3200840,0x00b0b1dc23200440\n"
".quad 0x002d20de04188e40,0x0001209e04180000,0x00a001dc23180000,0xc00031dc00188040\n"
".quad 0xc000219c005000cf,0x00000021e75000cf,0x00fc621c86800000,0x1000609c008011c0\n"
".quad 0x0000699c005000f0,0xe000691c005000f0,0x0019279c045000ef,0xe000681c00100000\n"
".quad 0x0000689c005000cf,0x1000671c005000d0,0x000003dde25000d0,0x00fc011de41b0100\n"
".quad 0x00fc015de4280000,0x00fc0a1de4280000,0x00fc0a5de4280000,0x00fc019de4280000\n"
".quad 0x00fc04dde4280000,0x003c70dc00280000,0x00fc241c86500000,0x000c09dde48011c0\n"
".quad 0x00fe651c86280000,0x000c095de48011c0,0x00fe431c86280000,0x000c07dde48011c0\n"
".quad 0x00fde61c86280000,0x000c085de48011c0,0x002515dd00280000,0x002106dd00500000\n"
".quad 0x005d775c00500000,0x002925dd00580000,0x006db6dc00500000,0x005d76dc00303a00\n"
".quad 0x0004f5dc00303600,0x002557dd00301e80,0x00c1b6dc00500000,0x0021475d00580040\n"
".quad 0x007df7dc00500000,0x001576dc00580000,0x0075d7dc00303640,0xa8edb6dc02303e00\n"
".quad 0x0029675d0032fee2,0xbf01b1dc00500000,0x0075d7dc00208ef0,0xc001b6c000303e00\n"
".quad 0x00c1f7dc005800cf,0x006c06dc20580040,0x0009b75c00600000,0x0024f6dc00c80000\n"
".quad 0x0075d74000301e80,0x0015b7dc00580000,0x0075145c00303e40,0xa8edfa5c02305200\n"
".quad 0x0035d1dc0032fee2,0x0075019c00220e40,0xbf0293dc00300c00,0x0017f41c04208ef0\n"
".quad 0x0075249c00201040,0x0074411c00305000,0xc0029a4400500000,0x0024d75d005800cf\n"
".quad 0x0040541c00500000,0x00a4015c20500000,0x0020ca1d00600000,0x0075d75c00500000\n"
".quad 0x0008515c00580000,0x0028ea5d00c80000,0x00a2875c00500000,0x0014514400303a00\n"
".quad 0x0044fa1c00580000,0x00a6975c00301e80,0x0015451c00303a00,0x003451dc00300c00\n"
".quad 0x00c1d19c00220e40,0x00155a5c00580040,0x001567dc00302200,0x0016819c00302400\n"
".quad 0x0014495c00300c40,0x0017f49c04500000,0xa8ec645c02201040,0x0025959d0032fee2\n"
".quad 0x00fe011c86500000,0xbf0111dc008011c0,0x0021855d00208ef0,0x0059659c00500000\n"
".quad 0xc001144000580000,0x000c08dde45800cf,0x0055555c00280000,0x0049085c00302c00\n"
".quad 0x0044059c20500000,0x0029a75d00600000,0x00fe241c86500000,0x000968dc008011c0\n"
".quad 0x0075d59c00c80000,0x003cf55c00302a00,0x008e38c000307e00,0x00c1659c00580000\n"
".quad 0x000c075de4580040,0x008cc31c00280000,0x001550dc00302800,0x00fdc51c86302c40\n"
".quad 0xa8ec30dc028011c0,0x008cda5c0032fee2,0x008ce35c00305200,0xbf0033dc00303e00\n"
".quad 0x008e539c00208ef0,0x003631dc00500000,0xc00030c400220e40,0x000534dc035800cf\n"
".quad 0xe000f3dc004800c0,0x0024575d005000cf,0x002047dd00500000,0x0075d95c00500000\n"
".quad 0x000c075c20580000,0x0017f0dc04600000,0x007df95c00201040,0x0009d75c00304a00\n"
".quad 0x002867dd00c80000,0x000e10dc00500000,0x0075d74400500000,0x007df7dc00580000\n"
".quad 0x001d31dc23304a00,0x0075831c001a8ec0,0x00c1f61c00301800,0x0075a35c00580040\n"
".quad 0x0035d3dc00301a00,0x001687dc00220e40,0x0075961c00303040,0x0074e39c00305200\n"
".quad 0xa8edf65c02500000,0x0025175d0032fee2,0x002107dd00500000,0xbf0195dc00500000\n"
".quad 0x0075d85c00208ef0,0x0017f69c04580000,0xc001964800201240,0x0029275d005800cf\n"
".quad 0x007df7dc00500000,0x0064065c20304200,0x006830dc00600000,0x0075d69c00500000\n"
".quad 0x002557dd00303e00,0x0009965c00500000,0x00c1a69c00c80000,0x0021475d00580040\n"
".quad 0x007df7dc00500000,0x0065964800580000,0x0015b69c00580000,0x002966dd00303440\n"
".quad 0x0075d75c00500000,0x0064411c00303e00,0xa8eda31c02301800,0x006db69c0032fee2\n"
".quad 0x0064515c00303a00,0xbf00c5dc00303000,0x00c1a61c00208ef0,0x0064669c00580040\n"
".quad 0xc000c30800301a00,0x0015735c005800cf,0x003593dc00303040,0x0030019c20220e40\n"
".quad 0xa8ecd35c02600000,0x0064e39c0032fee2,0x0008631c00500000,0xbf00d7dc00c80000\n"
".quad 0x0017f19c04208ef0,0x0030c30800201240,0xc000d34c00580000,0x0018319c005800cf\n"
".quad 0x0031041c00500000,0x003400dc20300800,0x0034c3dc00600000,0x0031115c00220e40\n"
".quad 0x0008311c00300a00,0x0017f0dc04c80000,0x0031235c00201240,0x0010410c00303400\n"
".quad 0x0030e31c00580000,0x000c639c00500000,0x003443dc00500000,0x0011419c00220e40\n"
".quad 0x00115a5c00302000,0x0017f0dc04300a00,0x00116a1c00201240,0x0010c11c00301a00\n"
".quad 0x000ce15c00500000,0xeae00001e7500000,0x03c00100074003ff,0x00d0009de4500000\n"
".quad 0x005451dc00280040,0x0010615e00220e40,0xe00020de00301000,0x0012809e005000cf\n"
".quad 0x001291de00301400,0x00d030dc04301200,0x00a0b01ca3201040,0x0080021de4200040\n"
".quad 0x000c209c00280040,0x000c515c00580000,0x000c71dc00580000,0x0012809c00580000\n"
".quad 0x001060dc00300400,0x0012911c00300a00,0xdfc0209c00300e00,0xdfc030dc005800d0\n"
".quad 0xdfc0411c005800d0,0x0009209c845800d0,0x000d20dc84140600,0x0011211c84140600\n"
".quad 0x0040209c03140600,0x0010021ca36000c0,0x0010001ce32011c0,0x0020411c035000c0\n"
".quad 0x000c209c436000c0,0x0090025c43680000,0x0010201c43480040,0x0000801c85680000\n"
".quad 0x0000001de7940000,0x0000409c02800000,0x0000209c02080600,0x006421dc0339fe00\n"
".quad 0x00400001e71a0e40,0x00a0010007400000,0x0060001de7500000,0x0010409c00400000\n"
".quad 0x007440dc00c80000,0x000c211e00300480,0x0000001de7300400,0x0004409c03900000\n"
".quad 0x0060209c036000c0,0x00fc21dc035800c0,0x01600001e71a8e00,0x0004409c03400000\n"
".quad 0x00fc21dc236000c0,0x00400001e71a8e00,0x0010411c00400000,0x04e0001de7c80000\n"
".quad 0xe000409c00400000,0x001020dc00307ed7,0x0074209c00c80000,0x0008309e00300680\n"
".quad 0xe000211c00300600,0x0420001de7307ed7,0xfc0c20dc03400000,0x000431dc034800ff\n"
".quad 0x03a00001e71a0ec0,0xfffc41dc02400000,0x0000411c023801ff,0x0000731c423a0000\n"
".quad 0x0010c35c0038fe00,0x0074c39c00c80000,0x000c031de2301a80,0x0038d3de00180000\n"
".quad 0x000cc31c03309a00,0x0038d35e00600000,0xfffcf41c02311a00,0x0034f1dc003801ff\n"
".quad 0x0001041c422e8e00,0x0007f35c04380200,0x0040c31c032010c0,0x000cc31c03680000\n"
".quad 0x004030dc03580000,0x0008c39c03680000,0x000cd0dc436800c0,0xfc10235c03680000\n"
".quad 0x00fce1dc034800ff,0x0004c09c031a8e00,0x00fc31dc036800c0,0x003500dc031aa000\n"
".quad 0x00fc21dc23580000,0x000430c0031a8000,0x0004309c034800c0,0x000c209c036000c0\n"
".quad 0x0010211c43310e00,0x0020001de7680000,0x0010411c00400000,0x0000001de7c80000\n"
".quad 0x0000000000900000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0541100000000000\n"
".quad 0x0a408000003ca72f,0x713f8000003ca3d7,0x0001ffffff3f4a3d,0x2d00080204bf8000\n"
".quad 0x0400000000000000,0x200000001600080a,0x0400181903001800,0x0400000000000c17\n"
".quad 0x040011f000001400,0x0300000000000c17,0x040011f000001000,0x0200000000000c17\n"
".quad 0x040011f000000c00,0x0100000000000c17,0x040011f000000800,0x0000000000000c17\n"
".quad 0x040021f000000000,0x020004003000080d,0x0400005de4000000,0x009800dc04280044\n"
".quad 0x0088011c042c0000,0x0094001c042c0000,0x0084009c042c0000,0x0030311ca32c0000\n"
".quad 0x0020105d03200840,0x002000dca34800c0,0x00b041dc23200440,0x0011209e04188e40\n"
".quad 0x000d201e04180000,0x00a031dc23180000,0x0000111c85188040,0x001010dc85c80000\n"
".quad 0xc0002edc00c80000,0xc0000e9c005000cf,0x00000021e75000cf,0x1003ad9c00800000\n"
".quad 0x0003aa1c005000f0,0xe003ac1c005000f0,0x00e9289c045000ef,0xe003ab9c00100000\n"
".quad 0x0003a81c005000cf,0x1003ac9c005000d0,0x00fc011de45000d0,0x00fc07dde4280000\n"
".quad 0x00fc04dde4280000,0x00fc05dde4280000,0x00fc06dde4280000,0x00000f5de2280000\n"
".quad 0x00fc0f9de41b0100,0x00f7be5c00280000,0x00f7df1c00500000,0x000002dde2580000\n"
".quad 0x00fc03dde41b0100,0x002fae1c00280000,0x00fc00dde4500000,0x0000001de2280000\n"
".quad 0x00fc015de41b0100,0x10038d1c00280000,0x00038a9c005000f0,0xe0038b1c005000f0\n"
".quad 0x00e1299c045000ef,0xe003819c00100000,0x0003891c005000cf,0x1003809c005000d0\n"
".quad 0x00039d5c005000d0,0x00ff451c86500000,0x0003bddc008011c0,0x00ff631c86500000\n"
".quad 0x00d40adde48011c0,0x00fea21c86280000,0x00dc0a5de48011c0,0x00fe841c86280000\n"
".quad 0x00d40b5de48011c0,0x00fec61c86280000,0x00dc0c5de48011c0,0x0054d1dd00280000\n"
".quad 0x0050c51d00500000,0x0058e59d00500000,0x001c71dc00500000,0x00ff031c86580000\n"
".quad 0x00d409dde48011c0,0x005141dc00280000,0x005961dc00300e00,0x001c30dc00300e00\n"
".quad 0x0025125d00500000,0x0021041d00500000,0x0029221d00500000,0x0024925c00500000\n"
".quad 0x0041025c00580000,0x002081dc00301200,0x001c30dc00301200,0x0064d35d00500000\n"
".quad 0x00fe641c86500000,0x00dc08dde48011c0,0x00fe251c86280000,0x00d401dde48011c0\n"
".quad 0x00fc621c86280000,0x0060c61d008011c0,0x0034d1dc00500000,0x00dc0bdde4580000\n"
".quad 0x0068e69d00280000,0x006181dc00500000,0x00fee31c86300e00,0x0069a1dc008011c0\n"
".quad 0x00d4095de4300e00,0x001c30dc00280000,0x0045545d00500000,0x0041451d00500000\n"
".quad 0x0049641d00500000,0x0045145c00500000,0x0051445c00580000,0x004101dc00302200\n"
".quad 0x001c31dc00302200,0x0020c21d00500000,0x00fe441c86500000,0x00dc085de48011c0\n"
".quad 0x00fe051c86280000,0x00d400dde48011c0,0x00fc261c86280000,0x00dc0cdde48011c0\n"
".quad 0x0024d0dd00280000,0x00ff271c86500000,0x000c30dc008011c0,0x0028e29d00580000\n"
".quad 0x0004515c03500000,0x002080dc004800c0,0xe000001c00300600,0x001c51dc235000cf\n"
".quad 0x0028a0dc001a8ec0,0x000c70dc00300600,0x0045525d00500000,0x0041421d00500000\n"
".quad 0x004961dd00500000,0x0024925c00500000,0x0020821c00580000,0x001c71dc00301200\n"
".quad 0x001c30dc00301000,0x0065d29d00500000,0x0061c25d00500000,0x0069e21d00500000\n"
".quad 0x0028a29c00500000,0x0024925c00580000,0x002081dc00301400,0x001c30dc00301200\n"
".quad 0xf5e00001e7500000,0x00ff821c864003ff,0x00c0309c008011c0,0x002cb01c00580040\n"
".quad 0x0004f3dc03307800,0xe000b2dc004800c0,0x0004001c005000cf,0xa8ec001c02300440\n"
".quad 0xbf0001dc0032fee2,0xc000000000208ef0,0x0000001c205800cf,0x0008001c00600000\n"
".quad 0x0000000000c80000,0x001401dc00580000,0x0000411c00220e40,0x0007f09c04500000\n"
".quad 0x001cf1dc23201040,0x0009f7dc001a8ec0,0x000086dc00500000,0x000095dc00303600\n"
".quad 0x0000a4dc00302e00,0xf1e00001e7302600,0x0007ef9c034003ff,0xe003df5c004800c0\n"
".quad 0x001fe1dc235000cf,0xf0e00001e71a8ec0,0x04200100074003ff,0x00ffa21c86500000\n"
".quad 0x0010101e858011c0,0x000010de85c00000,0x00d0009de4c00000,0x0015f1dc00280040\n"
".quad 0xe000209e00220e40,0x00a0301ca35000cf,0x008000dde4200040,0x0010031ca3280040\n"
".quad 0x00d020dc042007c0,0x0010001ce3201040,0x0090035c435000c0,0x0011309e00480040\n"
".quad 0x0011b15e00301400,0x0011719e00301000,0x000c209c00301200,0x000c515c00580000\n"
".quad 0x000c619c00580000,0x0011309c00580000,0x0011b0dc00300400,0x0011711c00300a00\n"
".quad 0xdfc0209c00300c00,0xdfc030dc005800d0,0xdfc0411c005800d0,0x0009209c845800d0\n"
".quad 0x000d20dc84140600,0x0011211c84140600,0x0040209c03140600,0x0020411c036000c0\n"
".quad 0x000c209c436000c0,0x0010201c43680000,0x0000c01c85680000,0x0000001de7940000\n"
".quad 0x0000401c02800000,0x0000001c02080600,0x002401dc0339fe00,0x00400001e71a0e40\n"
".quad 0x00a0010007400000,0x0060001de7500000,0x0010401c00400000,0x0034409c00c80000\n"
".quad 0x0008011e00300080,0x0000001de7300000,0x0004401c03900000,0x0060001c036000c0\n"
".quad 0x00fc01dc035800c0,0x01600001e71a8e00,0x0004401c03400000,0x00fc01dc236000c0\n"
".quad 0x00400001e71a8e00,0x0010411c00400000,0x04e0001de7c80000,0xe000401c00400000\n"
".quad 0x0010009c00307ed7,0x0034001c00c80000,0x0000201e00300480,0xe000011c00300400\n"
".quad 0x0420001de7307ed7,0xfc0c009c03400000,0x000421dc034800ff,0x03a00001e71a0ec0\n"
".quad 0xfffc40dc02400000,0x0000411c023801ff,0x0000315c423a0000,0x0010519c0038fe00\n"
".quad 0x003451dc00c80000,0x000c015de2300c80,0x001c621e00180000,0x0008515c03308c00\n"
".quad 0x001c619e00600000,0xfffc825c02310c00,0x001881dc003801ff,0x0000925c422e8e00\n"
".quad 0x0007f19c04380200,0x0024515c032010c0,0x0008515c03680000,0x0024209c03580000\n"
".quad 0x000851dc03680000,0x0008609c436800c0,0xfc10019c03680000,0x00fc71dc034800ff\n"
".quad 0x0004501c031a8e00,0x00fc21dc036800c0,0x0018909c031aa000,0x00fc01dc23580000\n"
".quad 0x00042080031a8000,0x0004201c034800c0,0x0008001c036000c0,0x0010011c43310600\n"
".quad 0x0020001de7680000,0x0010411c00400000,0x0000001de7c80000,0x0000000000900000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0xcd3ca72f05000000,0x0001ffffff3dcccc\n"
".quad 0x2d00080204bf8000,0x0400000000000000,0x200000002300080a,0x0400181903001800\n"
".quad 0x0400000000000c17,0x040011f000001400,0x0300000000000c17,0x040011f000001000\n"
".quad 0x0200000000000c17,0x040011f000000c00,0x0100000000000c17,0x040011f000000800\n"
".quad 0x0000000000000c17,0x040021f000000000,0x020004003000080d,0x2d00100704000000\n"
".quad 0xffffffffff000000,0x04ffffffffffffff,0x000000002c000812,0x2c00081104000000\n"
".quad 0x0400000000000000,0x000000002b000812,0x2b00081104000000,0x0400000000000000\n"
".quad 0x000000002a000812,0x2a00081104000000,0x0400000000000000,0x0000000029000812\n"
".quad 0x2900081104000000,0x0400000000000000,0x0000000026000812,0x2600081104000000\n"
".quad 0x0400000000000000,0x0000000025000812,0x2500081104000000,0x0400000000000000\n"
".quad 0x0000000028000812,0x2800081104000000,0x0400000000000000,0x0000000026000812\n"
".quad 0x2600081104000000,0x0400000000000000,0x0000000025000812,0x2500081104000000\n"
".quad 0x0400000000000000,0x0000000027000812,0x2700081104000000,0x0400000000000000\n"
".quad 0x0000000026000812,0x2600081104000000,0x0400000000000000,0x0000000025000812\n"
".quad 0x2500081104000000,0x0400000000000000,0x0800000024000812,0x2400081104000000\n"
".quad 0x0000000008000000,0x0000000500000006,0x0000000000005964,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000230,0x0000000000000230,0x0000000000000004\n"
".quad 0x00002c0560000000,0x00000000000010e7,0x0000000000000000,0x0000000000000000\n"
".quad 0x000000000000059c,0x000000000000059c,0x0000000000000004,0x00002b0560000000\n"
".quad 0x0000000000001683,0x0000000000000000,0x0000000000000000,0x0000000000000180\n"
".quad 0x0000000000000180,0x0000000000000004,0x00002a0560000000,0x0000000000001803\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000cbc,0x0000000000000cbc\n"
".quad 0x0000000000000004,0x00002a0660000000,0x00000000000024bf,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000100,0x0000000000000004\n"
".quad 0x0000290560000000,0x00000000000024bf,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000678,0x0000000000000678,0x0000000000000004,0x0000280560000000\n"
".quad 0x0000000000002b37,0x0000000000000000,0x0000000000000000,0x0000000000001aa8\n"
".quad 0x0000000000001aa8,0x0000000000000004,0x0000280660000000,0x00000000000045df\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000100\n"
".quad 0x0000000000000004,0x0000270560000000,0x00000000000045df,0x0000000000000000\n"
".quad 0x0000000000000000,0x00000000000009d0,0x00000000000009d0,0x0000000000000004\n"
".quad 0x0000240560000000,0x0000000000004faf,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000868,0x0000000000000868,0x0000000000000004\n"
".text");

extern "C" {

extern const unsigned long long fatbinData[10871];

}


extern "C" {

static const struct {int m; int v; const unsigned long long* d; char* f;} __fatDeviceText __attribute__ ((aligned (8))) __attribute__ ((section (".nvFatBinSegment")))=
 { 0x466243b1, 1, fatbinData, 0 };

}
# 3 "/tmp/tmpxft_00006ea3_00000000-1_imageDenoising.cudafe1.stub.c" 2 3
extern void __device_stub__Z4CopyPjii(TColor *, int, int);
extern void __device_stub__Z3KNNPjiiff(TColor *, int, int, float, float);
extern void __device_stub__Z7KNNdiagPjiiff(TColor *, int, int, float, float);
extern void __device_stub__Z3NLMPjiiff(TColor *, int, int, float, float);
extern void __device_stub__Z7NLMdiagPjjjff(TColor *, unsigned, unsigned, float, float);
extern void __device_stub__Z4NLM2Pjiiff(TColor *, int, int, float, float);
extern void __device_stub__Z8NLM2diagPjiiff(TColor *, int, int, float, float);
static void __sti____cudaRegisterAll_49_tmpxft_00006ea3_00000000_4_imageDenoising_cpp1_ii__Z3Maxff(void) __attribute__((__constructor__));
void __device_stub__Z4CopyPjii(TColor *__par0, int __par1, int __par2){if (cudaSetupArgument((void *)(char *)&__par0, sizeof(__par0), (size_t)0UL) != cudaSuccess) return;if (cudaSetupArgument((void *)(char *)&__par1, sizeof(__par1), (size_t)8UL) != cudaSuccess) return;if (cudaSetupArgument((void *)(char *)&__par2, sizeof(__par2), (size_t)12UL) != cudaSuccess) return;{ volatile static char *__f; __f = ((char *)((void ( *)(TColor *, int, int))Copy)); (void)cudaLaunch(((char *)((void ( *)(TColor *, int, int))Copy))); };}
# 14 "tests/imageDenoising/imageDenoising_copy_kernel.cu"
void Copy( TColor *__cuda_0,int __cuda_1,int __cuda_2)
# 18 "tests/imageDenoising/imageDenoising_copy_kernel.cu"
{__device_stub__Z4CopyPjii( __cuda_0,__cuda_1,__cuda_2);
# 29 "tests/imageDenoising/imageDenoising_copy_kernel.cu"
}
# 1 "/tmp/tmpxft_00006ea3_00000000-1_imageDenoising.cudafe1.stub.c"
void __device_stub__Z3KNNPjiiff( TColor *__par0, int __par1, int __par2, float __par3, float __par4) { if (cudaSetupArgument((void *)(char *)&__par0, sizeof(__par0), (size_t)0UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par1, sizeof(__par1), (size_t)8UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par2, sizeof(__par2), (size_t)12UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par3, sizeof(__par3), (size_t)16UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par4, sizeof(__par4), (size_t)20UL) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(TColor *, int, int, float, float))KNN)); (void)cudaLaunch(((char *)((void ( *)(TColor *, int, int, float, float))KNN))); }; }
# 17 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
void KNN( TColor *__cuda_0,int __cuda_1,int __cuda_2,float __cuda_3,float __cuda_4)
# 23 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
{__device_stub__Z3KNNPjiiff( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 79 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
}
# 1 "/tmp/tmpxft_00006ea3_00000000-1_imageDenoising.cudafe1.stub.c"
void __device_stub__Z7KNNdiagPjiiff( TColor *__par0, int __par1, int __par2, float __par3, float __par4) { if (cudaSetupArgument((void *)(char *)&__par0, sizeof(__par0), (size_t)0UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par1, sizeof(__par1), (size_t)8UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par2, sizeof(__par2), (size_t)12UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par3, sizeof(__par3), (size_t)16UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par4, sizeof(__par4), (size_t)20UL) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(TColor *, int, int, float, float))KNNdiag)); (void)cudaLaunch(((char *)((void ( *)(TColor *, int, int, float, float))KNNdiag))); }; }
# 99 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
void KNNdiag( TColor *__cuda_0,int __cuda_1,int __cuda_2,float __cuda_3,float __cuda_4)
# 105 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
{__device_stub__Z7KNNdiagPjiiff( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 140 "tests/imageDenoising/imageDenoising_knn_kernel.cu"
}
# 1 "/tmp/tmpxft_00006ea3_00000000-1_imageDenoising.cudafe1.stub.c"
void __device_stub__Z3NLMPjiiff( TColor *__par0, int __par1, int __par2, float __par3, float __par4) { if (cudaSetupArgument((void *)(char *)&__par0, sizeof(__par0), (size_t)0UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par1, sizeof(__par1), (size_t)8UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par2, sizeof(__par2), (size_t)12UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par3, sizeof(__par3), (size_t)16UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par4, sizeof(__par4), (size_t)20UL) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(TColor *, int, int, float, float))NLM)); (void)cudaLaunch(((char *)((void ( *)(TColor *, int, int, float, float))NLM))); }; }
# 17 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
void NLM( TColor *__cuda_0,int __cuda_1,int __cuda_2,float __cuda_3,float __cuda_4)
# 23 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
{__device_stub__Z3NLMPjiiff( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 85 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
}
# 1 "/tmp/tmpxft_00006ea3_00000000-1_imageDenoising.cudafe1.stub.c"
void __device_stub__Z7NLMdiagPjjjff( TColor *__par0, unsigned __par1, unsigned __par2, float __par3, float __par4) { if (cudaSetupArgument((void *)(char *)&__par0, sizeof(__par0), (size_t)0UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par1, sizeof(__par1), (size_t)8UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par2, sizeof(__par2), (size_t)12UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par3, sizeof(__par3), (size_t)16UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par4, sizeof(__par4), (size_t)20UL) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(TColor *, unsigned, unsigned, float, float))NLMdiag)); (void)cudaLaunch(((char *)((void ( *)(TColor *, unsigned, unsigned, float, float))NLMdiag))); }; }
# 104 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
void NLMdiag( TColor *__cuda_0,unsigned __cuda_1,unsigned __cuda_2,float __cuda_3,float __cuda_4)
# 110 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
{__device_stub__Z7NLMdiagPjjjff( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 148 "tests/imageDenoising/imageDenoising_nlm_kernel.cu"
}
# 1 "/tmp/tmpxft_00006ea3_00000000-1_imageDenoising.cudafe1.stub.c"
void __device_stub__Z4NLM2Pjiiff( TColor *__par0, int __par1, int __par2, float __par3, float __par4) { if (cudaSetupArgument((void *)(char *)&__par0, sizeof(__par0), (size_t)0UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par1, sizeof(__par1), (size_t)8UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par2, sizeof(__par2), (size_t)12UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par3, sizeof(__par3), (size_t)16UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par4, sizeof(__par4), (size_t)20UL) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(TColor *, int, int, float, float))NLM2)); (void)cudaLaunch(((char *)((void ( *)(TColor *, int, int, float, float))NLM2))); }; }
# 32 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
void NLM2( TColor *__cuda_0,int __cuda_1,int __cuda_2,float __cuda_3,float __cuda_4)
# 38 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
{__device_stub__Z4NLM2Pjiiff( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 121 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
}
# 1 "/tmp/tmpxft_00006ea3_00000000-1_imageDenoising.cudafe1.stub.c"
void __device_stub__Z8NLM2diagPjiiff( TColor *__par0, int __par1, int __par2, float __par3, float __par4) { if (cudaSetupArgument((void *)(char *)&__par0, sizeof(__par0), (size_t)0UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par1, sizeof(__par1), (size_t)8UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par2, sizeof(__par2), (size_t)12UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par3, sizeof(__par3), (size_t)16UL) != cudaSuccess) return; if (cudaSetupArgument((void *)(char *)&__par4, sizeof(__par4), (size_t)20UL) != cudaSuccess) return; { volatile static char *__f; __f = ((char *)((void ( *)(TColor *, int, int, float, float))NLM2diag)); (void)cudaLaunch(((char *)((void ( *)(TColor *, int, int, float, float))NLM2diag))); }; }
# 141 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
void NLM2diag( TColor *__cuda_0,int __cuda_1,int __cuda_2,float __cuda_3,float __cuda_4)
# 147 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
{__device_stub__Z8NLM2diagPjiiff( __cuda_0,__cuda_1,__cuda_2,__cuda_3,__cuda_4);
# 204 "tests/imageDenoising/imageDenoising_nlm2_kernel.cu"
}
# 1 "/tmp/tmpxft_00006ea3_00000000-1_imageDenoising.cudafe1.stub.c"
static void __sti____cudaRegisterAll_49_tmpxft_00006ea3_00000000_4_imageDenoising_cpp1_ii__Z3Maxff(void) { __cudaFatCubinHandle = __cudaRegisterFatBinary((void*)&__fatDeviceText); atexit(__cudaUnregisterBinaryUtil); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(TColor *, int, int, float, float))NLM2diag), (char*)"_Z8NLM2diagPjiiff", "_Z8NLM2diagPjiiff", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(TColor *, int, int, float, float))NLM2), (char*)"_Z4NLM2Pjiiff", "_Z4NLM2Pjiiff", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(TColor *, unsigned, unsigned, float, float))NLMdiag), (char*)"_Z7NLMdiagPjjjff", "_Z7NLMdiagPjjjff", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(TColor *, int, int, float, float))NLM), (char*)"_Z3NLMPjiiff", "_Z3NLMPjiiff", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(TColor *, int, int, float, float))KNNdiag), (char*)"_Z7KNNdiagPjiiff", "_Z7KNNdiagPjiiff", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(TColor *, int, int, float, float))KNN), (char*)"_Z3KNNPjiiff", "_Z3KNNPjiiff", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterFunction(__cudaFatCubinHandle, (const char*)((void ( *)(TColor *, int, int))Copy), (char*)"_Z4CopyPjii", "_Z4CopyPjii", -1, (uint3*)0, (uint3*)0, (dim3*)0, (dim3*)0, (int*)0); __cudaRegisterTexture(__cudaFatCubinHandle, (const struct textureReference*)&texImage, (const void**)"texImage", "texImage", 2, 1, 0); }
# 2 "tmpxft_00006ea3_00000000-1_imageDenoising.cudafe1.stub.c" 2
# 1 "tmpxft_00006ea3_00000000-1_imageDenoising.cudafe1.stub.c"
