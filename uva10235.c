#include<stdio.h>
#include<math.h>

int main()
{
    long long int N,count=0,cu=0,i,rev=0,c,rem,j,d;
    while(scanf("%lld",&N)==1)
    {
        c=N;
        d=N;
    for(i=2;i<=sqrt(d);i++)
    {
        count=0;
        if(d%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0&&d!=1)
    {
        while(N>0)
        {
          rem=N%10;
          N=N/10;
          rev=rev*10+rem;
        }
        for(j=2;j<=sqrt(rev);j++)
        {
            if(rev%j==0)
            {
                cu++;
                break;
            }
        }
        if(cu==0&&rev!=1)
        {
            printf("%lld is emirp\n",c);
        }
        else
        {
            printf("%lld is prime\n",c);
        }
    }
    else
    {
        printf("%lld is not prime.\n",N);
    }
    cu=0;
    count=0;
    rev=0;
    }
    return 0;
}
