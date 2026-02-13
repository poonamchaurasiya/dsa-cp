#include<iostream>
bool is ()subarray (int arr [],int n){
    unsorted-set <int>h;
    int pre-sum =0;
    for (int i =0;i<n;i++)
    {
        pre-sum + =arr[i];
        if (h.find(pre-sum)!=h.end())
        return true;
        if(pre-sum==0);
        return true;
    h.insert(pre-sum);
    }
return false;
}
