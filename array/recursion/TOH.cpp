#include <iostream>
using namespace std ;
void TOH (int n,char A, char B, char C)
{
    if (n==1)
    {
        cout << "move 1 form "<< A << "to" << c << endl;
        return ;
        {
            TOH (n-1,A,C,B)
            cout<< " move "<< n << " form" << A << "to"<< c << endl;
            TOH((n-1),B,A,C);
        }
        int  main ()
        {
            int n=3;
            TOH (n,'A','B','C')
            return 0;
        }
    }
}