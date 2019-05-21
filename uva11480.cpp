#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    long long int t = 0;
    while(scanf("%lld", &n)==1&&n)
    {
        long long int count = 0, a, b, c;
        for( a = n/3; a>=1; a--)
        {
            b = a + 1;
            c = b + 1;
            if(a+b+c<=n)
            {
                c--;
                count += (n-a-b-c+1)/2;
            }
        }
        printf("Case %lld: %lld\n",++t,count);
    }
    return 0;
}
