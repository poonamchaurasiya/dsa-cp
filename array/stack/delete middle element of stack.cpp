#include<iostream>
void deleteMiddle(int arr[], int n)
{
    int mid = n/2;
    for (int i = mid; i < n-1; i++)
        arr[i] = arr[i+1];
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    deleteMiddle(arr, n);
    for (int i = 0; i < n-1; i++)
        std::cout << arr[i] << " ";
    return 0;
}