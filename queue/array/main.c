#include <stdio.h>
#include <stdlib.h>
#include "queuearray.h"
int main()
{
    QueueArray* queue = createQueueArray(3);
    
    printf("Is empty : %c\n",(isEmpty(queue)==1?'Y':'N'));

    enQueue(queue,3);
    printf("enqueue 3\n");
    printqueue(queue);
    
    printf("Is empty : %c\n",(isEmpty(queue)==1?'Y':'N'));

    enQueue(queue,2);
    printf("enqueue 2\n");
    printqueue(queue);

    enQueue(queue,1);
    printf("enqueue 1\n");
    printqueue(queue);

    printf("Is Full : %c\n",(isFull(queue)==1?'Y':'N'));

    deQueue(queue);
    printf("dequeue\n");
    printqueue(queue);

}