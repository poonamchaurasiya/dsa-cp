#include<iostream>
void printN by(int arr[],intn,int k)
{
    sort(arr,arr+n);
    int i=1,count=1;
    while(i<n)
    {
        while(i<n && arr[i]=arr[i-1])
        {count ++;
        i++
    }if (count>n/k)
    print(arr[i-1]+"");
    count=1;
    i++;
    }
}