#include<stdio.h>

int main()
{
    int a,b,c;
    while(scanf("%d%d",&a,&b)!=EOF)
    {  if(a==0&&b==0)
        {
            break;
        }
        c=(a*b);
        printf("%d\n",c-1);
    }
    return 0;
}
