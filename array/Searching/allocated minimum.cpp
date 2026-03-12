#include<iostream>
int min page (int arr[],int n,int k)
{
if (k==1)
return sum (arr,0,n-1);
if (n==1)
return arr [0];
int res =INF;
for (int i =1;i<n;i++)
res = min (res,max(min pages(arr,i,k-1,sum(arr,i))));
return res ;

int sum (int arr [],int b,int e)}{
    int n =0;
    for (int =b;i<e;i++)
    s+= arr[i]
    return s;
}
