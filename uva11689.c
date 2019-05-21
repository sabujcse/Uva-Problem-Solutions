#include<stdio.h>

int main()
{
    int a,b,c,t,i,z,sum=0,x,y;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%d%d%d",&a,&b,&c);
    z=a+b;
    sum=0;
    while(1)
        {
            x=z/c;
            y=z%c;
            z=x+y;
            sum+=x;
            if(z<c)
            {
            break;
            }

        }
         printf("%d\n",sum);
    }
    return 0;
}
