#include <iostream>
using namespace std;
void reverse(int arr[], int n)
{
    int temp = arr [0];
    for (int i = 0;i <n, i++)
    arr [n-1]= arr [i];
    arr [n-1]= temp;
}


