#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void BubbleSort(int *unsort, int len)
{
    
    int i,j,temp;
    
    for(i=0;i<len;i++)
    {
        for(j=0;j<len-i-1;j++)
        {
            if(unsort[j]>unsort[j+1])
            {
                temp = unsort[j];
                unsort[j] =  unsort[j+1];
                unsort[j+1] = temp;

            }
        }   

    }
    

}

void InsertionSort(int *unsort, int len)
{
    int i,j,temp;

    for(i=0;i<len;i++)
    {
        temp = unsort[i];
        for( j=i-1; temp < unsort[j] && j>=0; j--) {

             unsort[j+1] =unsort[j];
            unsort[j] = temp;
            
        }  

    }
}


void QuickSort(int *unsort, int left, int right)
{
    if(left<right) {
        int i=left, j=right+1;
        int pivote=unsort[i];
        do {
            for(i=i+1; unsort[i]<pivote; i++);
            for(j=j-1; unsort[j]>pivote; j--);
            if(i<j) {
                int temp=unsort[i];
                unsort[i]=unsort[j];
                unsort[j]=temp;
            }
        } while(i<j);
        int temp=unsort[left];
        unsort[left]=unsort[j];
        unsort[j]=temp;
        QuickSort(unsort, left, j-1);
        QuickSort(unsort, j+1, right);
    }

}


void LSD(int *unsort, int len, int maxdigit)
{
    for(int i=1; i<=maxdigit; i++) {
        int bucket[10][10]={-1};
        int top[10]={0};
        int base=pow(10, i-1);


         
        for(int j=0; j<len; j++) {
            int lsd=unsort[j]/base%10;

            
            if(top[lsd]+1>9) {
                fprintf(stderr, "Overflow\n");
                exit(1);
            }
            bucket[lsd][top[lsd]++]=unsort[j];
        }

         
        int temp=0;
        for(int j=0; j<10; j++) {
            for(int k=0; k<top[j]; k++) {
                unsort[temp++]=bucket[j][k];
            }
        }
    }

}

int* MergeSort(int *unsort, int left, int right)
{
    if(right > left)
    {
        int mid = (left+right)/2;
        MergeSort(unsort,left,mid);
        MergeSort(unsort,mid+1,right);
        int *temp = (int*)malloc(sizeof(int)*(right-left+1));
        int i =left,j=mid+1,top=0;
        while(i<=mid && j<=right)
        {
            if(unsort[i]<unsort[j])
                temp[top++] = unsort[i++];
            else
                temp[top++] = unsort[j++];

        }
        while(i<=mid)
        {
            temp[top++] = unsort[i++];

        }
        while(j<=right)
        {
            temp[top++] = unsort[j++];

        }
        top =0;
        for(int k=left;k<=right;k++)
        {
             unsort[k] = temp[top++];
        }
        

    }

}
