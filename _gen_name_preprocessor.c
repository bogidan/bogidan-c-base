#define PUMP_NAME test

#define EVAL(a) a
#define GEN_NAME(func) EVAL(PUMP_NAME)##_##func

#define Input_Buff_Size GEN_NAME(Input_Buff_Size)
const int Input_Buff_Size = INPUT_SIZE;

#define INPUT_SIZE 100
#define GEN_NAME2(func,in_out,value) EVAL(PUMP_NAME)##_##func = EVAL(in_out##_##value)
#undef Input_Buff_Size
#define Input_Buff_Size GEN_NAME2(Input_Buff_Size,INPUT,SIZE)
const int Input_Buff_Size;

