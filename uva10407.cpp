#include<bits/stdc++.h>
using namespace std;
 typedef long long vlong;

vlong  GCD(vlong a, vlong b)
{
    if(b==0)
        return a;
    else
        return GCD(b,a%b);
}
long long  arr[1010];
int main()
{
    while(scanf("%d",&arr[0])!=EOF)
    {
        if(arr[0]==0)
            break;
        int cont=1;
        while(1)
        {
            scanf("%lld",&arr[cont]);
            if(arr[cont]==0)
                break;
            else
                cont++;
        }
        vlong   g =0;
        for(int i=1;i<cont;i++)
        {
        int dif = arr[i] - arr[i-1];
        g = GCD( g , dif);
        }
        if(g<0)
            g=g*-1;
        printf("%lld\n",g);
    }
    return 0;
}
