#include<bits/stdc++.h>
using namespace std;
#define Max 1000001
int factr[Max];
int factorialcount [Max];
int x;
int primefactr(int x)
{
    int i;
    int count = 0;
    for(i=2;i*i<=x;i++)
    {
        if(x%i==0)
        {
            count++;
            x=x/i;
            i=1;
        }
    }
    if(x >1)
        count++;
    return count;
}
int main()
{
    int n;
    factorialcount[1]=0;
    for(int j=2;j<=Max;j++)
        factorialcount[j]= factorialcount[j-1]+primefactr(j);
        while(scanf("%d",&n)!=EOF)
        {
            printf("%d\n",factorialcount[n]);
        }

    return 0;
}
