#include<stdio.h>

int main()
{
    int a,b,c,d,e=0,f=0;
    while(scanf("%d%d%d%d",&a,&b,&c,&d))
    {
        if(a==0&&b==0&&c==0&&d==0)
        {
            break;
        }
        e=c-a;
        f=d-b;
        if(f<0)
        {
            f=60+(d-b);
            e--;
        }
        if(e<0)
        {
            e=24+e;
        }
         printf("%d\n",e*60+f);
    }
    return 0;
}
