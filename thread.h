#ifndef __RTTHREAD_CONFIG_H__
#define __RTTHREAD_CONFIG_H__

#include "rt_def.h"
struct rt_thread
{
    void *sp;
    void *entry;
    void *parameter;
    void *stack_addr;
    rt_uint32_t stack_size;

    rt_list_t tlist;
};
typedef struct rt_thread *rt_thread_t;


#endif

