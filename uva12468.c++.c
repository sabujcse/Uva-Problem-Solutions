#include<stdio.h>

int main()
{
    int a,b,r,n,c;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a<0&&b<0)
        {
            break;
        }
        if(a<b)
        {
            c = (b-a);
            if(c>50)
            {
                n=100-c;
                printf("%d\n",n);
            }
            else
            {
            printf("%d\n",c);
            }
        }
        else
        {
            c = (a-b);
            if(c>50)
            {
                n = 100-c;
                printf("%d\n",n);
            }
            else
            {
                printf("%d\n",c);
            }

        }
    }
    return 0;
}
