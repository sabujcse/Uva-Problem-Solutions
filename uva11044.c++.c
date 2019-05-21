#include<stdio.h>

int main()
{
    int a,b,t,i,s,p;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        s=(a/3);
        p=(b/3);
        printf("%d\n",s*p);
    }
    return 0;
}
