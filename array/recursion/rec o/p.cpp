#include <iostream>
using namespace std;
void fun (int n)
{
    if ( n==0)
    return;
    cout << n << endl;
    fun(n-1);
    cout << n << endl;
}
main ()
{
    fun (3);
return 0;
}

