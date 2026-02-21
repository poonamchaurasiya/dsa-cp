#include<iostream>
int KthSmallest(int arr[],int n,int k)
{
    sort(arr,arr+n);
    return arr[k-1];
}