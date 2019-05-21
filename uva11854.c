#include<stdio.h>
#include<math.h>

int main()
{

    int a,b,c,n,m,l;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        if(a==0&&b==0&&c==0)
        {
            break;
        }
        m=a*a;
        n=b*b;
        l=c*c;
        if(m==n+l)
        {
            printf("right\n");
        }
        else if(n==l+m)
        {
            printf("right\n");
        }
        else if(l==m+n)
        {
            printf("right\n");
        }
        else
        {
            printf("wrong\n");
        }

    }
    return 0;

}
