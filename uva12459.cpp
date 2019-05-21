#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a;
    while(scanf("%lld",&a)==1&&a>0)
    {
        long long int m=0;
        long long int n=1;
        long long int sum=0;
        for(int i=1;i<=a;i++)
        {
            sum =m+n;
            m=n;
            n=sum;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
