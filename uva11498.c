#include<stdio.h>
#include<math.h>

int main()
{
    int t,i,n,m,x,y;
    while(scanf("%d",&t)!=EOF)
    {
    if(t==0)
    {
        break;
    }
    scanf("%d%d",&n,&m);
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&x,&y);
        if(n==x||m==y)
        {
            printf("divisa\n");
        }
         if(n<x&&m<y)
        {
            printf("NE\n");
        }
         if(n<x&&y<m)
        {
            printf("SE\n");
        }
         if(n>x&&y<m)
        {
            printf("SO\n");
        }
         if(n>x&&y>m)
        {
            printf("NO\n");
        }
    }
    }
    return 0;
}
