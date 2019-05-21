#include<stdio.h>
#include<math.h>
#define N 1000000
int primesTable[N];
void siveaprocc()
{
    int i,j,result;
    for(i=2;i<=N;i++)
        primesTable[i]=1;
    primesTable[0]=0;
    primesTable[1]=0;
    result=sqrt(N);
    for(i=2;i<=result;i++)
        if(primesTable[i]){
        for(j=i*i;j<=N;j+=i){
        primesTable[j]=0;
        }
        }
    primesTable[2]=0;
}
int main()
{
    siveaprocc();
    int number,a,b;
    while(scanf("%d",&number)==1&&number>0)
    {
        for(a=3;a<number;a++)
        {
        if(primesTable[a])
        {
            b=number-a;
        if(primesTable[b])
        {
            printf("%d = %d + %d\n",number,a,b);
            break;
        }
        }
        }
    }
    return 0;
}
