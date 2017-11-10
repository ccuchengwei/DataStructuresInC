#include <stdio.h>
#include <stdlib.h>
#include "stackArray.h"

int main()
{
    int i;
    StackArray *Stack;
    Stack = createStack(3);
    printf("isEmpty : %c\n",(isEmpty(*Stack) == 1 ? 'Y' : 'N'));

    printf("Push 3 \n");
    push(Stack,3);
    for(i = 0; i<=Stack->top;i++)
        printf("Stack[%d] : %d\n",i,Stack->array[Stack->top]);

    printf("Push 2 \n");
    push(Stack,2);
    for(i = 0; i<=Stack->top;i++)
        printf("Stack[%d] : %d\n",i,Stack->array[i]);

    printf("isEmpty : %c\n",(isEmpty(*Stack) == 1 ? 'Y' : 'N'));

    printf("Pop : %d \n",pop(Stack));

    for(i = 0; i<=Stack->top;i++)
        printf("Stack[%d] : %d\n",i,Stack->array[i]);

    printf("isFull : %c\n",(isFull(*Stack) == 1 ? 'Y' : 'N'));

    printf("Push 4 \n");
    push(Stack,4);
    for(i = 0; i<=Stack->top;i++)
        printf("Stack[%d] : %d\n",i,Stack->array[i]);

    printf("Push 5 \n");
    push(Stack,5);
    for(i = 0; i<=Stack->top;i++)
        printf("Stack[%d] : %d\n",i,Stack->array[i]);

    printf("isFull : %c\n",(isFull(*Stack) == 1 ? 'Y' : 'N'));


}
