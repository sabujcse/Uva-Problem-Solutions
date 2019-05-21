#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,d,n,f,l,t,i;
    scanf("%lf",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        d=(a+b)/3;
        f=c/d;
        n=a-d;
        l=f*n;
        printf("%0.0lf\n",l);
    }
    // printf("%lf\n",l);
    return 0;
}
