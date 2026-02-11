#include <ioctream>
using namespace std;
void fun (int n)
{
    if (n==0)
        return;
    cout << n << " GFG" << endl;
    fun(n-1);
}
int main ()
{
    fun(2);
    return 0;
}