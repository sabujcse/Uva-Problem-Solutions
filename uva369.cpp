#include<bits/stdc++.h>
using namespace std;
long long int calculation( long long int a, long long int b)
{
    long long fr = 1;
    if(a - b<b)
    {
        b = a - b;
    }
    for( int i =1; i<=b; i++, a--)
    {
        fr = fr * a;
        fr = fr / i;
    }
    return fr;
}
int main()
{
    long long int a, b, result;
    while(scanf("%lld%lld",&a,&b)==2&&a&&b)
    {
        result = calculation(a,b);
        printf("%lld things taken %lld at a time is %lld exactly.\n",a,b,result);
    }
    return 0;
}
