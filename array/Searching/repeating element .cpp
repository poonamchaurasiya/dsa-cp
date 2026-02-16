#include <iostream>
(int arr [],int n)
{
    int slow = arr[0],fast=arr[0];
    do
    {
        do
        {
            slow =arr[slow];
            fast =arr[fast];
        }
        while (slow!=fast)
        slow =arr[0];
        while (slow !=fast){
            slow =arr [slow];
            fast =arr [fast];
        }return low;
    }

        
        
        
        
    
    
}
