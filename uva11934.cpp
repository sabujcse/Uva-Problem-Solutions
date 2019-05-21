#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,j,b,c,d,l,f,count;
    while(scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&l)==5){
    if(a==0&&b==0&&c==0&&d==0)
    {
        break;
    }
    count=0;
    for( j=0;j<=l;j++)
    {
        f=(j*j*a)+(j*b)+c;
        if(f%d==0)
            count++;
    }
    printf("%lld\n",count);
    }
    return 0;
}
