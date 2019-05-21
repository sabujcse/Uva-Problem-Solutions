#include<bits/stdc++.h>
using namespace std;
long long int  GCD(long long int  i, long long int j)
{
    if(j==0)
        return i;
    else
        return GCD(j,i%j);
}
int main()
{
    long long  int   PN[1000010]={0};
    long long int  i,j,a,b,c,ma,mb,mc;
    long long int number,ans,count;
    while(scanf("%lld",&number)==1)
    {
        count=0;
        for(i=1;i*i<=number;i++)
        {
            for(j=i+1;j*j<=number;j+=2)
            {
                if(GCD(i,j)==1)
                {
                    a=j*j-i*i;
                    b=2*j*i;
                    c=j*j+i*i;
                    if(c>number)
                        break;
                    ma=a;
                    mb=b;
                    mc=c;
                    while(mc<=number)
                    {
                       PN[ma]=PN[mb]=PN[mc]=1;
                       ma+=a;
                       mb+=b;
                       mc+=c;
                    }
                    count++;
                }
            }
        }
        long long ans=number;
        for(i=1;i<=number;i++)
        {
            ans= ans-PN[i];
            PN[i]=0;
        }
        printf("%lld %lld\n",count,ans);
    }
    return 0;
}
