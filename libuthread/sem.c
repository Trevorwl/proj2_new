#include <stddef.h>
#include <stdlib.h>

#include "queue.h"
#include "private.h"
#include "sem.h"
#include "uthread.h"
#include "Constants.h"

sem_t sem_create(size_t count)
{
    (void)count;
    return 0;
}

int sem_destroy(sem_t sem)
{
    (void)sem;
    return 0;
}

int sem_down(sem_t sem)
{
    (void)sem;
    return 0;
}

int sem_up(sem_t sem)
{
    (void)sem;
    return 0;
}

