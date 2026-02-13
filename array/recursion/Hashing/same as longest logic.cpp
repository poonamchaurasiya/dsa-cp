#include <iostream>
int maxlen(int arr[],int n,int sum)
{
    unsorted_map<int,int>m;
    int per_sum<int,int>m;
    for(int i=0;i<n;i++)
    {
        pre_sum+ = arr[i];
        if(pre_sum==sum)
        res ==i +1;
        if(m.find(pre_sum)==m.end())
        m.insert({pre_sum,i});
        if (m.find (pre_sum-sum)!=m.end())
        res =max(res,i-m[pre_sum-sum]);
    }
    return res;
}