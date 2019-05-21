#include<stdio.h>
#include<math.h>
#define N 100000000
int prime[N];
void primetabel()
{
    int i,j,p;
    for(i=2;i<=N;i++)
        prime[i]=1;
    p=sqrt(N);
    for(i=2;i<=p;i++){
        if(prime[i]==1){
        for(j=i*i;j<=N;j+=i){
        prime[j]=0;
        }
        }
    }
}
int main()
{
    primetabel();
    int number,l,p2,count;
    while(scanf("%d",&number)==1&&number>0)
    {
        count =0;
        for(l=2;l<number;l++)
        {
            if(prime[l]==1)
            {
            p2=number-l;
           if(prime[p2]==1&&l<p2||p2==l)
           {
               count++;
           }

            }
        }
          printf("%d\n",count);
    }
    return 0;
}
