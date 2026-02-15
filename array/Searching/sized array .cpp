#include <iostream>
int search(int arr [],int x)
{
    if (arr[0]==x)
    return0;
    int i=1;
    while(arr[i]<x)
    i =i*2;
    if(arr[i]==x)
    return i;
    return binarysearch(arr,x,i/z+1,i,x);
}