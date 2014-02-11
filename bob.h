#ifndef __BOB+COMMON_TYPES__
#define __BOB+COMMON_TYPES__
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

// -- Name Generator Macros --
#define PASTE(a,b) a##_##b
#define GEN_NAME(pre,func) PASTE(pre,func)

#endif
