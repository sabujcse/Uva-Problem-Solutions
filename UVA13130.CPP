#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
int main()
{
    int t;
    int qqq[ 6 ];
    sc("%d",&t);
    while( t-- )
    {
        for( int i = 0; i<5; i++ )
        {
            sc("%d",&qqq[ i ]);
        }
        int ll = abs(qqq[0]-qqq[1]);
        int rr = abs(qqq[1]-qqq[2]);
        int kk = abs(qqq[2]-qqq[3]);
        int xx = abs(qqq[3]-qqq[4]);
        int l = ll;
        int r = rr;
        int k = kk;
        int x = xx;
        if(( ll == rr) && (r == kk) &&( k == xx))
        {
            pf("Y\n");
        }
        else
        {
            pf("N\n");
        }
    }
    return 0;
}
