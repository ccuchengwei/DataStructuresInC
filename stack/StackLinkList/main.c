#include <stdio.h>
#include <stdlib.h>
#include "stacklinklist.h"
int main()
{
    StackList *stack = createStackList();
    
    printf("Is empty : %c\n",(isEmpty(stack)==1?'Y':'N'));

    push(stack,3);
    printf("push 3\n");
    printf("top is %d!\n",stack->top->data);

    push(stack,5);
    printf("push 5\n");
    printf("top is %d!\n",stack->top->data);

    
    printf("pop %d\n",pop(stack));
    printf("top is %d!\n",stack->top->data);

}