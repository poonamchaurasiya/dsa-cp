#include<iostream>
bool is feasible (int arr[],int n , int k,int ans)
{
    int req =1,sum=0;
    for (int i =0;i<n;i++)
    {
        if (num +arr[i]>arr)
        {
            req ++;
            sum =arr[i];
        }
        else 
        sum +=arr[i];
    }
    return(req<=k);
}