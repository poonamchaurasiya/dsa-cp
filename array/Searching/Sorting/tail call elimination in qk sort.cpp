#include <iostream>
void qsort(int arr[],int low,int high)
{
    if (low<high)
    {
        int pi=partition(arr,low,high);
        qsort(arr,low,pi-1);
        qsort(arr,pi+1,high);
    }
}