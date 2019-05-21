#include<bits/stdc++.h>
using namespace std;
#define N 1000000
int prime[N];
int primesTable[N];
int k=0;
int shive()
{
    for(int i=2;i<=N;i++)
    prime[i]=1;
    prime[0]=0;
    prime[1]=0;
    int eq = sqrt(N);
    for(int i=2;i<=eq;i++)
    {
        if(prime[i])
        {
            for(int j=i*i;j<=N;j+=i)
                prime[j]=0;
        }
    }
    for(int i=2;i<=N;i++)
    {
        if(prime[i])
          primesTable[k++]=i;
    }
}
int main()
{
    shive();
    int n;
    while(scanf("%d",&n)&&n)
    {
        int count=0;
        for(int i=0;i<k;++i)
        {
            if( n%primesTable[i] ==0 )
          {
                ++count;
        }
        }
        printf("%d : %d\n",n,count);
    }
    return 0;
}
