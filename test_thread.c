#include "rt_def.h"
#include "thread.h"

void delay (rt_uint32_t count)
{
    for(; count!= 0; count--);
}

rt_int16_t flag1;
rt_int16_t flag2;


void flag1_thread_entry(void *p_arg)
{
    for (;;)
    {
        flag1 = 1;
        delay(100);
        flag1 = 0;
        delay(100);
    }
}

void flag2_thread_entry(void *p_arg)
{
    for (;;)
    {
        flag2 = 1;
        delay(100);
        flag2 = 0;
        delay(100);
    }
}












































