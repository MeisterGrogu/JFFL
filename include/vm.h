#ifndef jffl_vm_v
#define jffl_vm_h

#include "chunk.h"

typedef struct {
    Chunk* chunk;
} VM;

void initVM(void);
void freeVM(void);

#endif