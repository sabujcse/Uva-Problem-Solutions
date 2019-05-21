#include<stdio.h>

int main()
{
    int a,b,n;
    while(scanf("%d%d",&a,&b)==2&&b>1)
    {
        n=a;
        while(a>=b)
        {
            n=n+(a/b);
            a=(a/b)+(a%b);
        }
        printf("%d\n",n);
    }
    return 0;
}
