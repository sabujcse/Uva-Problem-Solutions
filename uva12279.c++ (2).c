#include<stdio.h>

int main()
{
    int n,k=1,i,j,count=0,num=0,tem;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
        {
            break;
        }
        for(i=1;i<=n;i++)
        {
            scanf("%d",&j);
            if(j>0)
            {
                count++;
            }
            else
            {
                num++;
            }
        }
        tem=count-num;
        printf("Case %d: %d\n",k,tem);
        count=0;
        num=0;
        tem=0;
        k++;
    }
    return 0;
}
