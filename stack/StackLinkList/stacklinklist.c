#include "stacklinklist.h"
#include "../../Link-List/LinklistNode.h"

StackList* createStackList()
{
    StackList *temp=(StackList*)malloc(sizeof(StackList));
    temp->top=NULL;
    return temp;

}


int isEmpty(StackList *stack)
{
    return (stack->top == NULL ? 1:0);
}

void push(StackList *stack, int data)
{
    llnode *temp = (llnode*)malloc(sizeof(llnode));
    temp->data = data;
    temp->next = stack->top;
    stack->top = temp;

}
int pop(StackList *stack)
{
    llnode *temp = stack->top;
    int data = temp->data;
    stack->top = stack->top->next;
    free(temp);
    return data;

    
}