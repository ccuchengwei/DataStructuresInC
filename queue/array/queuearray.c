
#include <stdio.h>
#include <stdlib.h>
#include "queuearray.h"
/*
typedef struct QueueArray {
    int size;
    int rear;
    int front;
    int *arr;
} QueueArray;
*/
QueueArray* createQueueArray(int size)
{
    QueueArray* temp = (QueueArray*)malloc(sizeof(QueueArray));
    temp->size = size;
    temp->rear = -1;
    temp->front = -1;
    temp->arr = (int*)malloc(size*sizeof(int));
    return temp;
}

int isEmpty(QueueArray *queue)
{
    return (queue->rear == queue->front ? 1:0);
    
}

int isFull(QueueArray *queue)
{
    return (queue->rear == queue->size-1 ? 1:0);
}

void enQueue(QueueArray *queue, int data)
{
    if(isFull(queue))exit(1);
    queue->arr[++queue->rear] = data;


}

int deQueue(QueueArray *queue)
{
    if(isEmpty(queue))exit(1);
    return queue->arr[++queue->front];
}
void printqueue(QueueArray *queue)
{
    int i;
    for(i=queue->front+1;i<queue->rear+1;i++)
    {printf("%d ",queue->arr[i]);}
    printf("\n");
}