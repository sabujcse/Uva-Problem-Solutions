#include<stdio.h>

long long int  bigmod (long long int b, long long int  p, long long int  m)
{
    if( p == 0)
    {
        return 1;
    }
    if( p%2 == 0)
    {
        long long int re = bigmod (b, p/2, m);
        return (re*re)%m;
    }
    else if( p%2 == 1)
    {
        long long int p1 = b%m;
        long long int p2= bigmod(b, p-1,m);
        return (p1 * p2)%m;
    }
}
int main()
{
    long long int b, p, m;
    while(scanf("%lld %lld %lld",&b, &p, &m)!= EOF)
    {
        printf("%lld\n",bigmod(b, p, m));
    }
    return 0;
}
