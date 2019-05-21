#include<stdio.h>
#include<math.h>

int main()
{
    int ary[1001],i,j,tem,b,k,testcase,count=0;
    while(scanf("%d",&testcase)==1)
    {
        b=0;
        for(i=0;i<testcase;i++)
        {
            scanf("%d",&ary[i]);
        }
        for(i=1;i<testcase;i++)
        {
            for(j=testcase-1;j>=i;j--)
            {
                if(ary[j-1]>ary[j])
                {
                    tem=ary[j-1];
                    ary[j-1]=ary[j];
                    ary[j]=tem;
                    b++;
                }

            }
        }
        printf("Minimum exchange operations : %d\n",b);
    }
    return 0;
}
