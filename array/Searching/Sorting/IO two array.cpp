#include <iostream>
using namespace std;
void intresection(int arr1[],int arr2[],int n,int m)
{
    int i=0,j=0;
    while (i<n && j<m)
    {
        if (arr1[i]<arr2[j])
        i++;
        else if (arr1[i]>arr2[j])
        j++;
        else
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
}