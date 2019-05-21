#include<stdio.h>
#include<math.h>

int main()
{
    long long int N,k;
    int t,i,n=0,rem;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&N);
        k=N;
        n=0;
        while(N>0)
        {
            N/=10;
            n++;
        }
        N=k;
        while(N>0)
        {
            rem=N%10;
            N=N/10;
            k=k-pow(rem,n);
        }
        if(k==0)
        {
            printf("A\n");
        }
        else
        {
            printf("N\n");
        }

    }
    return 0;
}
