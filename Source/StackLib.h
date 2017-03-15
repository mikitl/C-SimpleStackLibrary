#ifndef _STACK_LIB_H_
#define _STACK_LIB_H_

typedef struct _NODE {
    int           Value;
    struct _NODE  *Next;
} NODE;

typedef struct _STACK {
    void (*Push)(int);
    void (*Pop)(void);
    int (*Size)(void);
} STACK;

STACK* InitStack(void);
void InternalsPush(int _value);
void InternalsPop(void);
int InternalsSize(void);

#endif