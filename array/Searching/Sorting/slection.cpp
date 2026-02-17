#include <iostream>
void selection sort(arr,n){
    int temp[n];
    for (int =0;i,n; i++)
    {
        int min_ind=0;
        for (int j=1;j<n;j++)
        if(arr[j]<arr[min_ind])
        min_ind =j;
        temp[i]=arr[min_ind];
        arr[min_ind]=INF
    }
    (int i =0;i<n;i++)
    arr[i]=temp[i];
}