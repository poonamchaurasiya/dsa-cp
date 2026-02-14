#include<iostream>
int b search( int arr[],int low,int high,int x)

    {if low>high( return-1;
    int mid =(low+high)/2;
    arr[mid]==x)return mid;
    (arr[mid]>x)
    return b search(arr,low,mid-1,x);
    else
    return b search (arr,mid +1,high,x);
    }
