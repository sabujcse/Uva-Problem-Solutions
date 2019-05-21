#include<stdio.h>
#include<math.h>

int main()
{
    int ary[51],i,j,tem,b,k,testcase,m,count=0,n;
    scanf("%d",&n);
    for(m=1;m<=n;m++)
    {
      scanf("%d",&testcase);
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
        printf("Optimal train swapping takes %d swaps.\n",b);
    }
    return 0;
}

