#include <iostream>
int longest sub (int arr [],int n)
{
    sort(arr,arr+n);
    int rea =1,curr=1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==[i-1]+1){curr++;}
        else if(arr[i]!=arr[i-1]
        {
            res=max(res,curr);
            curr=1;
        }
    }
    return max(res,curr);
}
        