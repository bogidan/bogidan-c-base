#include "bob.h"
#include "_gen_name_preprocessor.c"

// -- Process Default Defines --
//  PUMP_NAME, INPUT_BUFF_POW, OUTPUT_BUFF_POW
#ifndef PUMP_NAME
        #define PUMP_NAME Test
#endif
#ifndef PUMP_INPUT_POW
        #define PUMP_INPUT_POW 10
#endif
#ifndef PUMP_OUTPUT_POW
        #define PUMP_OUTPUT_POW 5
#endif

// Values for use in function
#define INPUT_BUFF_SIZE (1 << INPUT_BUFF_POW)

#define OUTPUT_BUFF_SIZE (1 << PUMP_IN_POW)


// define names to generate
#define Input_Buff_Size GEN_NAME(Input_Buff_Size)
const int Input_Buff_Size = INPUT_SIZE;




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

