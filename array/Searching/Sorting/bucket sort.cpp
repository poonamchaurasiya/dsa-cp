#include<iostream>
using namespace std;
void bucket sort(float arr[],int n)
{
    vector<float>buckets[n];
    for (int i=0;i<n;i++)
    {
        int bi= n*arr[i];
        buckets[bi].push_back(arr[i]);
    }
    for (int i=0;i<n;i++)
    sort(buckets[i].begin(),buckets[i].end());
    int index=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<buckets[i].size();j++)
        {
            arr[index++]=buckets[i][j];
        }
    }
}