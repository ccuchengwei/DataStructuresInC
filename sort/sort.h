#ifndef SORT_H
#define SORT_H

void BubbleSort(int *unsort, int len);

void InsertionSort(int *unsort, int len);


void QuickSort(int *unsort, int left, int right);

void LSD(int *unsort, int len, int maxdigit);

int* MergeSort(int *unsort, int left, int right);

#endif  