#include <iostream>
// intially start =0,
end =n-1
bool is palindrome (string, t str,int statrt int end)
{
    if(start>=end)
    return  true;
    return (str[start]==str[end])&&
    is palindrome(str,start+1,end-1)

}