#include<bits/stdc++.h>
using namespace std;
long long int GCD(long long int a, long long int b)
{
    if(b==0)
        return a;
    else
        return GCD(b,a%b);
}
int main()
{
    long long int a,b,c;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        long long int d=b;
         c =GCD(a,b);
         if(c==1)
         {
             printf("%10lld%10lld    Good Choice\n\n",a,d);
         }
         else
         {
             printf("%10lld%10lld    Bad Choice\n\n",a,d);
         }
    }
    return 0;
}
