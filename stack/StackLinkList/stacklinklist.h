
#ifndef STACK_LINK_LIST_H
#define STACK_LINK_LIST_H
#include <stdio.h>
#include <stdlib.h>
#include "../../Link-List/LinklistNode.h"

typedef struct StackList {
    llnode *top;
} StackList;

StackList* createStackList();

int isEmpty(StackList *stack);

void push(StackList *stack, int data);

int pop(StackList *stack);


#endif