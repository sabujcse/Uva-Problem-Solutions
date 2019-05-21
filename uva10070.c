#include<stdio.h>
#include<math.h>

int main()
{
    long long int year;
    while(scanf("%lld",&year)!=EOF&&year>=2000)
        if(((year%4==0)&&(year%100!=0))||(year%400==0))
        {
            if(year%15==0)
            {
                printf("This is leap year.\nThis is huluculu festival year.\n\n");
            }
            else if(year%55==0)
            {
                printf("This is leap year.\nThis is bulukulu festival year\n\n");
            }
            else
            printf("This is leap year.\n\n");
        }
        else if(year%15==0)
        {
           printf("This is huluculu festival year.\n\n");
        }
        else if(year%55==0)
        {
            printf("This is bulukulu festival year.\n\n");
        }
        else
        {
            printf("This is an ordinary year.\n\n");
        }
    return 0;
}
