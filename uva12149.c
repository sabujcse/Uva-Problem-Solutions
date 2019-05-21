#include<stdio.h>
#define N 101
long long int squretabel[N];
void squrevalue()
{
    long long int i,j;
    for(i=1;i<=N;i++)
        squretabel[i]=(i*i);

}
int main()
{
    squrevalue();
    long long int k,number,sum;
    while(scanf("%lld",&number)==1&&number>0)
    {
        sum=0;
        for(k=1;k<=number;k++)
        {
            sum+=squretabel[k];
        }
        printf("%lld\n",sum);
    }
    return 0;
}
