#include <iostream>
double getmid(int a[],int a2[],int n1,int2)
{
    int b1=0,e1=n1;
    while (b1<=e1)
    {
        
        int i1(b1+e1)/2;
        int  i2(n1+n2+1)/2-i1;
        int mnx1(i1==n1)?INF : a1[i1];
        int mxl1 =(i1==0)?MINF:a1[i1-1];
        int mnr2 =a2[i2];
        int mxl2=a2[i2-1];
        if (mxli<=mnr2&&mxl2<=mnx)
        return(double)max (mxl1,mxl2)+min(mnr1,mnr2)/2;
        else 
        return (double)maxl1,maxl2);
        else if (mxl1<mnr2)
        e1 =i1-1;
        elseb1 =i1+1;
    }

}