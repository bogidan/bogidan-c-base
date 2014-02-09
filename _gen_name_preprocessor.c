#define PUMP_NAME test

#define PASTE(a,b) a##_##b
#define GEN_NAME(,pre) PASTE(pre,func)

#define Input_Buff_Size GEN_NAME(Input_Buff_Size)
const int Input_Buff_Size = INPUT_SIZE;

#define INPUT_SIZE 100
#define GEN_NAME2(func,in_out,value) P(PUMP_NAME)##_##func = EVAL(in_out##_##value)
#undef Input_Buff_Size
#define Input_Buff_Size GEN_NAME2(Input_Buff_Size,INPUT,SIZE)
const int Input_Buff_Size;


#define EVAL(a) a
#define GEN_NAME(func,pre) PASTE(PUMP_NAME,func)

#define Input_Buff_Size GEN_NAME(Input_Buff_Size,PUMP_NAME)
const int Input_Buff_Size = INPUT_SIZE;
