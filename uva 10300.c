#include<stdio.h>

int main()
{
    long long int a,b,c,ans=0,i,n,m,j;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&m);
        for(j=1;j<=m;j++)
        {
            scanf("%lld%lld%lld",&a,&b,&c);
            ans+=(a*c);
        }
        printf("%lld\n",ans);
        ans=0;

    }
    return 0;
}
