# state-machine-engine
## A simple function pointer-based State Machine Engine in C

This is just a simple state machine engine in C to be used in personal projects. Some remarks:

* It is obviously not thread-safe. That's up to you inside your functions.
* The function pointers can be tweaked to your needs.
* The engine is pretty much self-explanatory, but just in case:
    * Create a State Machine object using the `State Machine` structure.
    * Run `initStateMachine` once you wanna set it up.
    * Just call `runStateMachine` inside an infinite loop to run it.
    * Pass the next state function pointer to `setNextState` when you wanna change states.
    * There are two getters to return both current and next states.
