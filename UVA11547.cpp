#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
int main()
{
    int n;
    int test;
    sc("%d",&test);
    while( test-- )
    {
        sc("%d",&n);
        int mm = n*567;
        int dd = mm/9;
        int add = dd+7492;
        int mm2 = add * 235;
        int div = mm2/47;
        int sub = div - 498;
        if( sub < 0 )
        {
            sub *= -1;
        }
        int ll = sub /10;
        pf("%d\n",ll%10);
    }
    return 0;
}
