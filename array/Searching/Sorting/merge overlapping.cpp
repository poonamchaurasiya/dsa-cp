#include<iostream>
void merge Intrevals( Intrevals arr[],int n)
{
    sort(arr,arr+n,compare);
    int res=0;
    for (int i=1;i<n;i++)
    {
        if (arr[res].end>=arr[i].start)
        {
            arr[res].end=max(arr[res].end,arr[i].end);
        }
        else
        {
            res++;
            arr[res]=arr[i];
        }
    }
}