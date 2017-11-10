#ifndef STACK_ARRAY_H
#define STACK_ARRAY_H
#include <stdio.h>
#include <stdlib.h>
typedef struct StackArray{
    int *array;
    int top;
    int capacity;

}StackArray;


StackArray* createStack(int size);
int isEmpty(StackArray s);
int isFull(StackArray s);
void push(StackArray *s,int data);
int pop(StackArray *s);

#endif // STACK_ARRAY_H


