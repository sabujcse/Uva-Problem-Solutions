#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if((a==b||b==c||c==d))
        {
            printf("square\n");
        }
        else if((a==b&&c==d)||(a==c&&b==d)||(a==d&&b==c))
        {
            printf("rectangle\n");
        }
        else if((a+b+c>d)&&(d+b+c>a)&&(a+d+c>b)&&(a+b+d>c))
        {
            printf("quadrangle\n");
        }
        else
        {
            printf("banana\n");
        }

    }

    return 0;
}
