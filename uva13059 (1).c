#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,count;
    while(scanf("%d",&n)==1)
    {
        count=0;
        if(n%2!=0)
        {
            printf("%d\n",n-1);
        }
        else
        {
            for(i=n;i>1;i--)
            {
                count++;
            }
            printf("%d\n",count);
        }
    }
    return 0;
}
