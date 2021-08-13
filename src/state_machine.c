#include "state_machine.h"

/* Private data */
struct StateMachine {
    void (*current_state)(void);
    void (*next_state)(void);
};

/* Set initial state here */
static void (*initial_state)(void) = NULL;
static struct StateMachine state_machine;


int8_t initStateMachine(void)
{
    state_machine.next_state = initial_state;
    return 0;
}

int8_t setNextState(void (*next_state)())
{
    if (next_state != NULL) {
        state_machine.next_state = next_state;
        return 0;
    } else {
        return -1;
    }
}

void runStateMachine(void)
{
    state_machine.current_state = state_machine.next_state;
    state_machine.current_state();
}

f_ptr getCurrentState(void)
{
    return (f_ptr)state_machine.current_state;
}

f_ptr getNextState(void)
{
     return (f_ptr)state_machine.next_state;
}
