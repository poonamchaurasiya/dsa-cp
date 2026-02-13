#include <iostream>
bool is subarray sum (int arr[],int n,int sum)
{for (int i =0; i<n;i++)
{
    int curr -sum =0;
    for(int j=i;j<n;j++)
    {
        curr-sum+ =arr[j];
        if(curr-sum==sum)
        return true;
    }
}
return false;
    }
