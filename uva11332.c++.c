#include<stdio.h>

int main()
{
    long long int a,x,sum=0;
    while(scanf("%lld",&a)==1 && a!=0)
    {
      if(a<10)
      {
          printf("%lld\n",a);
      }
      if(a>9)
      {
          while(a>9)
          {
              sum=0;
              while(a>0)
              {
                  x=a%10;
                  a=a/10;
                  sum+=x;
              }
              a=sum;
          }
        printf("%lld\n",sum);
      }

    }
    return 0;
}
