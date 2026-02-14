#include <iostream>
int b search(int arr [],int n,int x)
{
    int low =0,high =n-1;
    while(low<=high)
    {
        int mid =(low + high)k;
        if (arr[mid]==x)
        return mid ;
        else if (arr[mid]>x)
        high =mid-1;
        elselow= mid+1;
    }
    return-1;

    }
