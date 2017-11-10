#ifndef QUEUE_ARRAY_H
#define QUEUE_ARRAY_H

typedef struct QueueArray {
    int size;
    int rear;
    int front;
    int *arr;
} QueueArray;

QueueArray* createQueueArray(int size);

int isEmpty(QueueArray *queue);

int isFull(QueueArray *queue);

void enQueue(QueueArray *queue, int value);

int deQueue(QueueArray *queue);
void printqueue(QueueArray *queue);
#endif