#include<stdio.h>
#include<math.h>
#define N 20000000
int prime[N];
unsigned long long int tp[N];
void primetabel()
{
    int i,j,k,t=1,n;
    for(i=2;i<=N;i++)
        prime[i]=1;
        prime[0]=0;
        prime[1]=0;
    k=sqrt(N);
    for(i=2;i<=k;i++)
        if(prime[i]==1)
    for(j=i*i;j<=N;j+=i)
      prime[j]=0;
    for(i=3;i<N;i++)
    {
        if(prime[i]==1&&prime[i+2]==1)
        {
            tp[t++]=i;
        }
    }
}
int main()
{
    int n;
    primetabel();
        while(scanf("%lld",&n)==1)
        {
            printf("(%llu, %llu)\n",tp[n],tp[n]+2);
        }
   return 0;
}

