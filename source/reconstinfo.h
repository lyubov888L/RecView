#if !defined(ATI_OS_WIN)
//130920 #include <cutil_inline.h>
#include <helper_cuda.h>
#include <cufft.h>
#include <vector_types.h>
#else
#include <CL/cl.h>
	typedef float float2;
	typedef void* cufftHandle;
#endif

class CXyz;

//followings are defined in general.h
//#define READTIF16bit 1
//#define READTIF8bit 2
#define RIFLAG_KEEPSINOGRAM 4

#if !defined( _RECONSTINFO_H_ )
#define _RECONSTINFO_H_
struct RECONST_INFO {
	unsigned char iStatus;
	int ixdim;
	//int iRecDim;
	int iInterpolation;
	double center;
	int iSinoCenter;//190107
	int iLenSinogr;
	int* iReconst;
	int iStartSino;
	int iStepSino;
	//190122 bool bMaster;
	//CGazoDoc* pDoc;
	unsigned int* pDoc;
	int* nSinogr;
	//CString dataName;
	char dataName[61];
	char* bInc;
	float* fdeg;
	float* fexp;
	int iMultiplex;
	int iOffset;
	int maxSinogrLen;
	short** iSinogr;
	float* fFilter;
	//110920 bool bAngularIntp;
	unsigned int dReconFlags;
	float fTiltAngle;
	int drStart;
	int drEnd;
	double drX;
	double drY;
	BOOL drOmit;
	unsigned int threadID;
	//120828 HANDLE hThread;
	//190119 unsigned int hThread;
	uintptr_t hThread;
	//
	//CUDA memory allocation
	unsigned int max_d_ifp;
	unsigned int max_d_igp;
#if !defined(ATI_OS_WIN)
	int* d_ifp;
	int* d_igp;
#else
	cl_mem d_ifp;
	cl_mem d_igp;
#endif
	float* d_filt;
	unsigned int max_d_filt;
	short* d_strip;
	unsigned int max_d_strip;
	float2* d_p;
	unsigned int max_d_p;
	float* d_px;
	unsigned int max_d_px;
//	int* h_igp;
//	unsigned int max_h_igp;
//	float* d_fcos;
//	float* d_fsin;
//	unsigned int max_d_fcos;

	cufftHandle fftplan;
	unsigned int ifftdim;
	cudaStream_t stream1, stream2;

	//lsqfit
	unsigned __int64 i64result;
	unsigned __int64 i64sum;
	short** ppRef;
	short** ppQry;
	unsigned int uiMaxRef;
	unsigned int uiMaxQry;
	CXyz* pcxyz1;
	CXyz* pcxyz2;
	int iLsqBin;
	int iLsqBxref;
	//drift list
	int* piDrift;
	int iFlag;
};
#endif
