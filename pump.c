
// -- Process Default Defines --
//  PUMP_NAME, INPUT_BUFF_POW, OUTPUT_BUFF_POW
#ifndef PUMP_NAME
        #define PUMP_NAME Test
#endif
#ifndef INPUT_BUFF_POW
        #define INPUT_BUFF_POW 10
#endif
#ifndef OUTPUT_BUFF_POW
        #define OUTPUT_BUFF_POW 5
#endif


#define INPUT_BUFF_SIZE (1 << INPUT_BUFF_POW)

#define OUTPUT_BUFF_SIZE (1 << PUMP_IN_POW)

// -- Name Generator Macros --
#define EVAL(a) a
#define GEN_NAME                     (name)                    EVAL(PUMP_NAME)##_##name
#define GEN_NAME_VALUE               (name,base)               EVAL(PUMP_NAME)##_##name = EVAL(base)
#define GEN_NAME_VALUE_SUFFIX        (name,base,suffix)        EVAL(PUMP_NAME)##_##name = EVAL(base##_##suffix)
#define GEN_NAME_PREFIX_VALUE        (name,prefix,base)        EVAL(PUMP_NAME)##_##name = EVAL(prefix##_##base)
#define GEN_NAME_PREFIX_VALUE_SUFFIX (name,prefix,base,suffix) EVAL(PUMP_NAME)##_##name = EVAL(prefix##_##base##_##suffix)

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


// define names to generate
#define Input_Buff_Size GEN_NAME(Input_Buff_Size)
const int Input_Buff_Size = INPUT_SIZE;

#define INPUT_SIZE 100
#undef Input_Buff_Size
#define Input_Buff_Size GEN_NAME2(Input_Buff_Size,INPUT,SIZE)
const int Input_Buff_Size;


#define Input_Buff_Size GEN_NAME(Input_Buff_Size)
const int Input_Buff_Size = INPUT_SIZE;
const int Input_Buff_Half = INPUT_SIZE>>1;



#ifndef __PUMP_PACKET__
#define __PUMP_PACKET__
struct Packet {
  U08* prt;
  U32  size;
}
#endif

struct Packet output[32];
U32           input [


// Clean up defines
#undef PUMP_NAME
#undef PUMP_IN_POW
#undef PUMP_OUT_POW

#undef INPUT_SIZE_POS
#undef INPUT_SIZE
#undef OUTPUT_SIZE_POW
#undef OUTPUT_SIZE

