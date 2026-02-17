#include<iostream>
void partition(int arr[],int l int hint p)
    {
        int temp[h-l+1],index=0;
        for(int i=l,i<h,i++)
        if(arr[i]<arr[b]&&i!=p)
        {
            temp[index]arr[i];index++;}
            temp[index++]=arr[p];
            (int i =l;i<=h;i++)
            if(arr[i]>arr[b])
            {
                temp[index]=arr[i],index++;
                for(int i = l;i<h;i++)
                arr [i]=temp[i-l];
            }
        }
    