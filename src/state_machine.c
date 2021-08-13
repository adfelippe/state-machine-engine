#include "state_machine.h"


int8_t initStateMachine(StateMachine* state_machine, StateFunc initial_state)
{
    state_machine->next_state = initial_state;
    return 0;
}

int8_t setNextState(StateMachine* state_machine, StateFunc next_state)
{
    if (next_state != NULL) {
        state_machine->next_state = next_state;
        return 0;
    } else {
        return -1;
    }
}

void runStateMachine(StateMachine* state_machine)
{
    state_machine->current_state = state_machine->next_state;
    state_machine->current_state();
}

StateFunc getCurrentState(StateMachine* state_machine)
{
    return (StateFunc)state_machine->current_state;
}

StateFunc getNextState(StateMachine* state_machine)
{
     return (StateFunc)state_machine->next_state;
}
