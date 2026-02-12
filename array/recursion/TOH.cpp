#include <iostream>
void TOH (int n,char A, char B, char C)
{
    if (n==1)
    {
        cout << "main 1 form "<< A << "to" << c << endl;
        return ;
        {
            TOH (n-1,A,C,B)
            cout<< " main "<< n << " form" << A << "to"<< c << endl;
            TOH((n-1),B,A,C);
        }
    }
}