#include <stdio.h>
#include <stdlib.h>
#include "StackLib.h"

int main(int argc, char const *argv[]) {
    STACK *Stack = InitStack();

    for (int i = 1; i < argc; ++i) {
        if (*argv[i] == '-') {
            Stack->Pop();
        } else {
            Stack->Push(atoi(argv[i]));
        }
    }
    Stack->Size();

    return 0;
}