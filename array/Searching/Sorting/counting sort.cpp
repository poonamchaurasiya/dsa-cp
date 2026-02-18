#include<iostream>
void count sort(arr,n,k)
{
    intcount[k];
    for(int i=0;i<k;i++)
    count [i]=0;
    for (int i=0;i<n;i++)
    count[arr[i]]++;
int index =0;
for (int i=0;i<k;i++)
{
    for (int j=0;j<count[i];j++)
    {
        arr[index]=i;
        index++;
    }
}
}