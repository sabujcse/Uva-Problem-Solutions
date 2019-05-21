#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main()
{
    double l,t,i,s,ra,f,n,h;
    scanf("%lf",&t);
    for(i=1;i<=t;i++)
    {
       n=0;
        scanf("%lf",&l);
        n=l/5;
        h=l*6/10;
        ra=l*h;
        s=pi*n*n;
        f=ra-s;
         printf("%0.2lf %0.2lf\n",s,f);

    }
    //printf("%0.2lf %0.2lf\n",s,f);
    return 0;
}
