#include<iostream>
int partition (int arr[],int l,int h)
{
    int pivot =arr[l];
    int i =l-1;j=h+1;
    while (true)
    {
        while(arr[i]<pivot)
        do {
            i++;
        }
        while(arr[i]<pivot)
        do{
            j--;
            {
                while(arr[j]>pivot)
                if(i>=j )return j;
                swap (arr[i],arr[j]);
            }
        }

        }
    }
