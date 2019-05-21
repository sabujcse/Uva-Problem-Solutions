#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    while(scanf("%d",&a)==1&a>0)
    {
        int i,j;
        int x =10000000;
        int y=10000000;
        for(i=1;i<=100;i++)
        {
            for(j=1;j<=i;j++)
            {
                if(i*i*i-j*j*j==a&&j<y)
                {
                    x  = i;
                    y  = j;
                }
            }
        }
        if(y==10000000)
            printf("No solution\n");
        else
            printf("%d %d\n",x,y);
    }
    return 0;
}
