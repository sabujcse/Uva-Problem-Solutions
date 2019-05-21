
#include<stdio.h>
#include<math.h>
int main()
{
    long int t,p,sum=0,i,j,s;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
          s=0;
        scanf("%ld",&p);
        s=pow(2,p-1)*(pow(2,p)-1);
        for(j=1;j<=s/2;j++)
        {
            if(s%j==0)
            {
                sum+=j;
            }
        }
        if(sum==s)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

    }
    return 0;
}
