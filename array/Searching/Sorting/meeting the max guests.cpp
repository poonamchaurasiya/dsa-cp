#include<iostream>
int maxGuests(int arr[],int dep[],int n)
{
    sort(arr,arr+n);
    sort(dep,dep+n);
    int i=0,j=0,res=0,curr=0;
    while (i<n && j<n)
    {
        if (arr[i]<dep[j])
        {
            curr++;
            res=max(res,curr);
            i++;
        }
        else
        {
            curr--;
            j++;
        }
    }
    return res;
}