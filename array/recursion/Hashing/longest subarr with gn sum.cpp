#include <iostream>
int maxlen(int arr[],
int n,int sum)
{
    int res =0;
    for (int i=0;i<n;i++)
    {
        int curr-sum=0;
        for (int j=i,j<n;j++)
        {
            curr-sum+=arr[j];
            if(curr-sum==sum)
            res=max(res,j-i+1);
        }
    }
    return res;
}