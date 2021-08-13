#ifndef STATE_MACHINE_H
#define STATE_MACHINE_H

#include <stdint.h>
#include <stdlib.h>

typedef void (*StateFunc)(void);

typedef struct {
    void (*current_state)(void);
    void (*next_state)(void);
} StateMachine;


int8_t initStateMachine(StateMachine* state_machine, StateFunc initial_state);
int8_t setNextState(StateMachine* state_machine, StateFunc next_state);
void runStateMachine(StateMachine* state_machine);
StateFunc getCurrentState(StateMachine* state_machine);
StateFunc getNextState(StateMachine* state_machine);

#endif /*_STATE_MACHINE_H_*/
