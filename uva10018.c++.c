#include<stdio.h>

int main()
{
    long int number,c,t,rem,count,i,d;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld",&number);
        c=number;
        count=0;
        while(1)
        {
             rem=0;
            while(c>0)
            {
                d=c%10;
                rem=rem*10+d;
                c=c/10;
            }
            if(number==rem)
            {
                break;
            }
            else
            {
                c=number+rem;
                number=number+rem;
                count++;
            }
        }
        printf("%ld %ld\n",count,rem);
        }
    return 0;
}
