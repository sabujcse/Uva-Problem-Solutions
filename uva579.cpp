#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  a, b;
    double x, y, l , puja, sabuj, sinigdho;
    char s;
    while(cin>>a>>s>>b)
    {
        if(a==0&&b==0)
        {
            break;
        }
        x = 1.0*a;
        y = 1.0*b;
        l = y * 6.00;
        puja = x * 30.00 + (l/12.00);
        if(l > puja)
        {
            sinigdho = l - puja;
        }
        else
        {
            sinigdho = puja - l;
        }
        if(sinigdho>180.00)
        {
         sinigdho = 360.00 - sinigdho;
        }
        printf("%.3lf\n",sinigdho);
    }
    return 0;
}
