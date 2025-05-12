#include <signal.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>

#include "private.h"
#include "uthread.h"
#include "settings.h"


#define HZ 100

/*
 * Set to true by scheduler if user wants preemption, false otherwise.
 *
 * Prevents preemption logic from being executed if preemptionAllowed=false.
 */
//extern bool preemptionAllowed;


void preempt_disable(void)
{

}

void preempt_enable(void)
{

}


void preempt_start(bool preempt)
{
    (void)preempt;
}

void preempt_stop(void)
{

}

