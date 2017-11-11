#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void printarray(int *a,int len)
{
    int i;
    for(i=0;i<len;i++)
        printf("%d ",a[i]);
    printf("\n");
}
int main()
{
    int a[10] = {9,1,5,4,7,8,2,6,3,0};

    printf("unsort array:"); 
    printarray(a,10);
    printf("Bubble Sort:");
    BubbleSort(a,10);
    printarray(a,10);

    int b[10] = {9,1,5,4,7,8,2,6,3,0};

    printf("unsort array:"); 
    printarray(b,10);
    printf("Insertio Sort:");
    InsertionSort(b,10);
    printarray(b,10);


    int c[10] = {9,1,5,4,7,8,2,6,3,0};

    printf("unsort array:"); 
    printarray(c,10);
    printf("Quick Sort:");
    QuickSort(c,0,9);
    printarray(c,10);


    int d[10] = {37,91,10,53,66,34,37,48,88,13};

    printf("unsort array:"); 
    printarray(d,10);
    printf("Radix sort:");
    LSD(d,10,2);
    printarray(d,10);

    
    int e[10] = {37,91,10,53,66,34,37,48,88,3};

    printf("unsort array:"); 
    printarray(e,10);
    printf("Merge Sort:");
    MergeSort(e,0,9);
    printarray(e,10);

}