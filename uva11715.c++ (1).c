#include <stdio.h>
#include<math.h>


int main()
{
    double a,b,c,a1,v,t,s,i;
    int l=1,n;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        scanf("%lf%lf%lf",&a,&b,&c);
        if(n==1)
        {
            a1=((b-a)/c);
            s=(a*c);
            t=((c*c)/2);
            v=a1*t;
            i=s+v;
            printf("Case %d: %0.3lf %0.3lf\n",l,i,a1);
        }
        if(n==2)
        {
            a1=((b-a)/c);
            s=(((b*b)-(a*a))/(2*c));
            printf("Case %d: %0.3lf %0.3lf\n",l,s,a1);

        }
        if(n==3)
        {
            v=sqrt((a*a)+(2*b*c));
            a1=((v-a)/b);
            printf("Case %d: %0.3lf %0.3lf\n",l,v,a1);
        }
        if(n==4)
        {
            v=sqrt((a*a)-(2*b*c));
            a1= ((a-v)/b);
            printf("Case %d: %0.3f %0.3lf\n",l,v,a1);
        }
        l++;
    }
    return 0;
}
