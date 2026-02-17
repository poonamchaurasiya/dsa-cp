#include<iostream>
void merge sort(int arr[],int l,int r)
{
    if(r>l)
    {
        int m=l+(r-l)/2;
        merge sort(arr,l,m);
        merge sort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}