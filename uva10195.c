#include<stdio.h>
#include<math.h>

int main()
{

    double a,b,c,s,re;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
    {
     if(a>0.0&&b>0.0&&c>0.0)
     {
          s=((a+b+c)/2);
         re=sqrt(((s-a)*(s-b)*(s-c))/s);
        printf("The radius of the round table is: %0.3lf\n",re);

     }
     else
        printf("The radius of the round table is: 0.000\n");
    }
    return 0;
}
