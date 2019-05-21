#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int fib[81];
    fib[0]=1;
    fib[1]=1;
    fib[2]=2;
    for(long long int i=3;i<=80;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
     long long int n;
    while(scanf("%lld",&n)==1&&n>0)
    {
        printf("%lld\n",fib[n]);
    }
    return 0;
}
