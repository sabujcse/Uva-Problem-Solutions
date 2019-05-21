#include<bits/stdc++.h>
using namespace std;
#define N 100007
int primesTable[N];
void siveaprocc()
{
    int i,j,result;
    for(i=2;i<=N;i++)
        primesTable[i]=1;
    primesTable[0]=1;
    primesTable[1]=1;
    result=sqrt(N);
    for(i=2;i<=result;i++)
        if(primesTable[i]){
        for(j=i*i;j<=N;j+=i){
        primesTable[j]=0;
        }
        }
}
int main()
{
    siveaprocc();
    int i,j,sum,l;
    char ch[22];
    while(scanf("%s",ch)!=EOF)
    {
        sum=0;
        for(i=0;ch[i];i++)
        {
            if(ch[i]>='a'&&ch[i]<='z')
                sum=sum+ch[i]-'a'+1;
            else
                sum=sum+ch[i]-'A'+27;
        }
        if(primesTable[sum]==1)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
    return 0;
}
