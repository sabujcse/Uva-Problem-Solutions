#include<stdio.h>
#include<math.h>
#define N 1000000
unsigned long long int prime[N];
void primetabel()
{
    int i,j,root;
    for(i=2;i<=N;i++)
        prime[i]=1;
        prime[1]=0;
        prime[0]=0;
    root=sqrt(N);
    for(i=2;i<=root;i++)
        if(prime[i]==1)
        for(j=i*i;j<=N;j+=i)
        prime[j]=0;
}
int main()
{
    primetabel();
    unsigned long long int number,a,b,c,sum,rev,k;
    while(scanf("%llu",&number)==1)
    {
        rev=0;
        a=number;
        if(number>10)
        {
            while(a>0)
            {
              k=a%10;
              rev=rev*10+k;
              a=a/10;
            }
            if(prime[number]==1)
            {
                if(prime[rev]==1&&rev!=number)
                {
                    printf("%llu is emirp.\n",number);
                }
                else
                {
                    printf("%llu is prime.\n",number);
                }
            }
            else
            {
                printf("%llu is not prime.\n",number);
            }
        }
    else if(prime[number]==1)
        printf("%llu is prime.\n",number);
    else
        printf("%llu is not prime.\n",number);
    }
    return 0;
}
