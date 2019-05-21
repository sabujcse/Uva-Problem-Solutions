#include<stdio.h>
#include<math.h>

int main()
{
     int t,n,i,c,rem,count=0,j,a,sum=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        c=n;
        a=c;
        count=0;
        while(c!=0)
        {
            c/=10;
            count++;
        }
        sum=0;
        while(n!=0)
        {
            rem=n%10;
            n=n/10;
            sum=sum+pow(rem,count);
        }
         if(sum==a)
        {
            printf("Armstrong\n");
        }
        else
        {
            printf("Not Armstrong\n");
        }
      }
    return 0;
}
