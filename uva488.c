#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,i,j,m,k,c,testcase,n,l;
    scanf("%d",&testcase);
    for(l=0;l<testcase;l++)
    {
        if(l>0)
            printf("\n");
    scanf("%d%d",&a,&b);
    for(n=0;n<b;n++)
    {
        if(n>0)
            printf("\n");
        for(i=1;i<a+1;i++)
        {
            for(j=0;j<i;j++)
            {
                printf("%d",i);
            }
              printf("\n");
           }
         for(m=a-1;m>0;m--)
            {
             for(k=0;k<m;k++)
             {
                 printf("%d",m);
             }
              printf("\n");
            }
        }
    }
    return 0;
}

