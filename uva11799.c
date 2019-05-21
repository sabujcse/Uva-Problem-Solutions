#include<stdio.h>
#include<math.h>
int main()
{
    long long int a[1000],i,j,k,in,t,l,c;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&c);
            for(j=0;j<c;j++)
            {
              scanf("%lld",&a[j]);
            }
             in=a[0];
            for(j=1;j<c;j++)
            {
            if(a[j]>in)
            {
             in=a[j];
            }
          }
    printf("Case %lld: %lld\n",i,in);
    }
    return 0;
}

