#include<stdio.h>

int main()
{
    double c,d,s,p,t;
    int i;
    scanf("%lf",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf",&c,&d);
        s=9*c/5+d;
        p=s*5/9;
           printf("Case %d: %0.2lf\n",i,p);
    }
   // printf("Case %d: %0.2lf\n",i,p);
    return 0;
}
