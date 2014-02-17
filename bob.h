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

#if defined _WIN32 && defined _DEBUG
#include <crtdbg.h>
#define BREAK _ASSERT( FALSE )
#endif

// -- Name Generator Macros --
#define PASTE(a,b) a##_##b
#define GEN_NAME(pre,func) PASTE(pre,func)

// -- Error Checking Macros --
#ifndef FAILED
#  define FAILED(r)    (((U32)(r)) <  0)
#endif
#ifndef SUCCEEDED
#  define SUCCEEDED(r) (((U32)(r)) >= 0)
#endif

#define IF_FAILED_MSG(...) if(FAILED(hr)){printf(__VA_ARGS__);}
#define IF_FAILED_BREAK(...) if(FAILED(hr)){printf(__VA_ARGS__); break;}
#define IF_FAILED_RETURN(...) if(FAILED(hr)){printf(__VA_ARGS__); return;}
#define IF_FAILED_CONTINUE(...) if(FAILED(hr)){printf(__VA_ARGS__); continue;}
#define IF_FAILED_GOTO(label, ...) if(FAILED(hr)){printf(__VA_ARGS__); goto label;}
#define IF_FAILED_RETURN_V(value,...) if(FAILED(hr)){printf(__VA_ARGS__); return value;}

#endif
