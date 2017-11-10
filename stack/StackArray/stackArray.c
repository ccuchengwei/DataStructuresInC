#include "stackArray.h"
 StackArray* createStack(int size)
{
   StackArray *Stack = (StackArray *)malloc(sizeof(StackArray));
   Stack->top = -1;
   Stack->capacity = size;
   Stack->array = (int*)malloc(sizeof(int)*size);
   return Stack;
}
int isEmpty(StackArray s){
    return s.top >= 0? 0 : 1;
}
int isFull(StackArray s){
    return s.top == s.capacity-1 ? 1 : 0;
    }
void push(StackArray *s,int data)
{
    if(s->top+1 > s->capacity )
    {
        printf("Stack is full! \n");
        exit(1);
    }
    s->top += 1;
    s->array[s->top] = data;
}
int pop(StackArray *s)
{
    int data;
    if(s->top == -1 )
    {
        printf("Stack is empty! \n");
        exit(2);
    }

    data = s->array[s->top];
    s->array[s->top] = 0;
    s->top -= 1;
    return data;

}
