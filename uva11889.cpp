#include<bits/stdc++.h>
using namespace std;
long long int GCD( long long int a, long long int b)
{
    if ( b==0)
        return a;
    else
        return GCD( b, a%b);
}
long long int LCM(long long a, long long b)
{
    return (a*b)/GCD(a,b);
}
int main()
{
    long long int test, a, b;
    scanf("%lld",&test);
    while(test--)
    {
        cin>>a>>b;
        if(b%a!=0)
        {
            printf("NO SOLUTION\n");
            continue;
        }
        long long c = b/a;
        for(long long int i = c; i<=b; i+=c)
        {
            if( LCM ( i, a )==b)
            {
                printf("%lld\n",i);
                break;
            }
        }
    }
    return 0;
}
