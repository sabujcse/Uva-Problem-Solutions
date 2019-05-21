#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a[3000];
    int n,i,j,tem,m,x;
    while(cin>>n)
    {
        a[0]=1;
        m=1;
        tem=0;
        for(i=1;i<=n;i++)
        {
            for(j=0;j<m;j++)
            {
                x=a[j]*i+tem;
                a[j]=x%10;
                tem=x/10;
            }
            while(tem>0)
            {
                a[m]=tem%10;
                tem=tem/10;
                m++;
            }
        }
        printf("%d!\n",n);
        for(i=m-1;i>=0;i--)
        {
            printf("%d",a[i]);
        }
        printf("\n");
    }
    return 0;
}
