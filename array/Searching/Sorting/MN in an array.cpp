#include<iostream>
using namespace std;
int getminDiff(int arr[],int n,int m)
{
    int min_diff=INT_MAX;
    for (int i=0;i<=n-m;i++)
    {
        int diff=arr[i+m-1]-arr[i];
        min_diff=min(min_diff,diff);
    }
    return min_diff;
}