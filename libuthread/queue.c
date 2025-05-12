#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "queue.h"


queue_t queue_create(void)
{
    return 0;
}

int queue_destroy(queue_t queue)
{
    (void)queue;
    return 0;
}


int queue_enqueue(queue_t queue, void *data)
{
    (void)data;
    (void)queue;
     return 0;
}

int queue_dequeue(queue_t queue, void **data)
{
    (void)data;
    (void)queue;
    return 0;
}


int queue_delete(queue_t queue, void *data)
{
    (void)data;
        (void)queue;
        return 0;

}

int queue_iterate(queue_t queue, queue_func_t func)
{
    (void)func;
        (void)queue;
            return 0;
}

int queue_length(queue_t queue)
{
    (void)queue;
    return 0;
}

