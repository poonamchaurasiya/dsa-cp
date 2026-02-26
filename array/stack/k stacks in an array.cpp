#include <iostream>
struct k stacks{
    int * arr, *top,*next;
    int k ;
    k stacks(int k_val)
    {
        k = k_val;
        arr = new int[k];
        top = new int[k];
        next = new int[k];
        for (int i = 0; i < k; i++)
        {
            top[i] = -1;
            next[i] = i + 1;
        }
        next[k-1] = -1;
    }
}