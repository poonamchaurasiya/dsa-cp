#include <iostream>
using namespace std;
void prinunion (int arr1[],int arr2[],int n,int m)
{
    int c[m+n];
    for (int i=0;i<m;i++)
    c[i]=arr1[i];
    for(int i=0;i<n;i++)
    c[m+i]=arr2[i];
    for (int i=0;i<m+n;i++)
    {
        cout<<c[i]<<" ";
    }
}
    