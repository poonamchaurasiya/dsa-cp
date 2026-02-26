#include <iostream>
class two stacks{
    int arr[];
    int cap;

    two stacks(int n)
    {
        cap = n;
        arr = new int[cap];
    }
    void push (int x,int sn)
    {
        if (sn == 1)
        {
            if (top1 == cap/2 -1)
            return ;
            top1++;
            arr[top1] = x ;
        }
        else 
        {
            if (top2 == cap/2)
            return ;
            top2--;
            arr[top2] = x ;
        }
    }
}