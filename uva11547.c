#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,i,t,m,d,v,j,rev=0,rem;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        m=((((((n*567)/9)+7492)*235)/47)-498);
      // printf("%lld\n",m);
        rev=0;
        while(m<0||m>0)
        {
            rem=m%10;
            m=m/10;
            rev=rev*10+rem;
        }
          printf("%lld\n",rev);
    }
    return 0;
}
