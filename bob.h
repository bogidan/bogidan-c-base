#ifndef __BOB_COMMON_TYPES__
#define __BOB_COMMON_TYPES__
// common types
typedef signed   char      S08;
typedef signed   short     S16;
typedef signed   long      S32;
typedef signed   long long S64;

typedef unsigned char      U08;
typedef unsigned short     U16;
typedef unsigned long      U32;
typedef unsigned long long U64;

typedef          float     F32;
typedef          double    F64;

#define COMMON_TYPE_CHECK ASSERT( \
	sizeof(S08)==1 && sizeof(S16)==2 && sizeof(S32)==4 && sizeof(S64)==8 && \
	sizeof(U08)==1 && sizeof(U16)==2 && sizeof(U32)==4 && sizeof(U64)==8 && \
	                                    sizeof(F32)==4 && sizeof(F64)==8 );

#if defined _WIN32 && defined _DEBUG
#include <crtdbg.h>
#define BREAK _ASSERT( FALSE )
#define ASSERT(a) _ASSERT(a)
#define VERIFY(a) _ASSERT(a)
#elif defined _WIN32
#define VERIFY(a) a
#endif



// -- State Machine Macros --
#define BIT_STATE_NONE (0)
#define BIT_STATE_ALL (0xFFFFFFFF)
#define BIT_STATE_CREATE(i) (1<<(i-1))

#define BIT_STATE_SET(var,set)       var  = set;
#define BIT_STATE_TOGGLE(var,toggle) var ^= toggle;
#define BIT_STATE_CHECK(var,valid) (var&(valid))

#define BIT_STATE_VERIFY(var,valid) ASSERT( BIT_STATE_CHECK(var,valid) )
#define BIT_STATE_SET_VERIFY(var,set,valid) if(BIT_STATE_CHECK(var,valid)) {BIT_STATE_SET(var,set);} else BREAK;
#define BIT_STATE_SET_CHECK(var,set,valid) if(BIT_STATE_CHECK(var,valid)) {BIT_STATE_SET(var,set);}

// -- win32 Console Macros
//#define DEBUG_CONOSOLE
#ifdef DEBUG_CONOSOLE
#define dprintf(...) printf(__VA_ARGS__);
#else
#define dprintf()
#endif

// -- Name Generator Macros --
#define PASTE(a,b) a##_##b
#define GEN_NAME(pre,func) PASTE(pre,func)

// -- UNREFERENCED PARAMETER --
#define UNREF(a) UNREFERENCED_PARAMETER(a)

// -- Error Checking Macros --
#ifndef FAILED
#  define FAILED(r)    (((U32)(r)) <  0)
#endif
#ifndef SUCCEEDED
#  define SUCCEEDED(r) (((U32)(r)) >= 0)
#endif

// -- Size of Array --
#define sizeofArray(a) (sizeof(a)/sizeof(a[0]))

#define IF_FAILED_MSG(...) if(FAILED(hr)){printf(__VA_ARGS__);}
#define IF_FAILED_BREAK(...) if(FAILED(hr)){printf(__VA_ARGS__); break;}
#define IF_FAILED_RETURN(...) if(FAILED(hr)){printf(__VA_ARGS__); return;}
#define IF_FAILED_CONTINUE(...) if(FAILED(hr)){printf(__VA_ARGS__); continue;}
#define IF_FAILED_GOTO(label, ...) if(FAILED(hr)){printf(__VA_ARGS__); goto label;}
#define IF_FAILED_RETURN_V(value,...) if(FAILED(hr)){printf(__VA_ARGS__); return value;}

#endif
