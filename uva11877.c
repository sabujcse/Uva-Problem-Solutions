#include<stdio.h>

int main()
{
    int n,x,y,z,sum=0;
    while (scanf("%d",&n)!=EOF&&n!=0)
    {
       sum=0;
        while(1)
        {
            x=n/3;
            y=n%3;
            n=x+y;
            sum+=x;
            if(n==1||n==0)
            {
                break;
            }
            else if(n==2)
            {
                n=n+1;
            }
        }
         printf("%d\n",sum);
    }
        //printf("%d",sum);
    return 0;
}
