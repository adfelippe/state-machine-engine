#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H

#include <stdint.h>
#include <stdlib.h>

typedef int (*f_ptr)(void);

int8_t initStateMachine(void);
int8_t setNextState(void (*next_state)());
void runStateMachine(void);
f_ptr getCurrentState(void);
f_ptr getNextState(void);

#endif /*_STATE_MACHINE_H_*/
