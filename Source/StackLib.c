#include <stdio.h>
#include <stdlib.h>
#include "StackLib.h"

static NODE *mStack;
static int  mSize;

STACK* InitStack(void) {
    STACK  *Stack = NULL;

    mStack = malloc(sizeof(NODE));
    mStack->Next = NULL;

    mSize = 0;

    Stack = malloc(sizeof(STACK));
    Stack->Push = InternalsPush;
    Stack->Pop = InternalsPop;
    Stack->Size = InternalsSize;

    return Stack;
}


void InternalsPush(int _value) {
    NODE *tmp = NULL;

    tmp = malloc(sizeof(NODE));
    tmp->Value = _value;
    tmp->Next = mStack;
    mStack = tmp;
    mSize = mSize + 1;
    printf("Push: %d\n", _value);

    return;
}


void InternalsPop(void) {
    NODE *tmp = NULL;

    if (mStack->Next == NULL) {
        printf("Pop: Stack is empty!\n");
        return;
    }
    tmp = mStack;
    mStack = tmp->Next;
    mSize = mSize - 1;
    printf("Pop: %d\n", tmp->Value);
    free(tmp);

    return;
}


int InternalsSize(void) {
    printf("Size: %d\n", mSize);
    return mSize;
}