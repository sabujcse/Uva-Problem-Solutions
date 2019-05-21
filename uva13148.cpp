#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
int main()
{
    long long int n, i, z;
    while( sc("%lld",&n)&&n)
    {
    if( n == 1)
    {
        pf("Special\n");
    }
    else
    {
    z = n;
    long long int k;
    bool flag = false;
    bool flag2 = false;
    for(  i = 2; i<=sqrt( n ); i++ )
    {
        k = i;
        if( k * k == z  )
        {
            flag = true;
            break;
        }
    }
    if( flag == true )
    {
    for(  i = 2; i<=sqrt( n ); i++ )
    {
        k = i;
        if( ( k * k * k ) == z  )
        {
            pf("Special\n");
            flag2 = true;
            break;
        }
    }
    }
    else
    {
        pf("Ordinary\n");
        break;
        //continue;
    }
    if( flag2 == false  )
    {
        pf("Ordinary\n");
    }
    }
    }
    return 0;
}
