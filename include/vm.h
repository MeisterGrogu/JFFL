#ifndef jffl_vm_v
#define jffl_vm_h

#include "chunk.h"

typedef struct {
    Chunk* chunk;
    uint8_t* ip;
} VM;

typedef enum {
    INTERPRET_OK,
    INTERPRET_COMPILE_ERROR,
    INTERPRET_RUNTIME_ERROR
} InterpretResult;

void initVM(void);
void freeVM(void);
InterpretResult interpret(Chunk* chunk);

#endif