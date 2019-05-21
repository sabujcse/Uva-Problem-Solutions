#include<stdio.h>
#include<math.h>

int main()
{
    long int contestent,buged,hotel,number,week,prize,cost=15000000,w,h,initial;
    while(scanf("%ld%ld%ld%ld",&contestent,&buged,&hotel,&week)==4)
    {
        for(h=0;h<hotel;h++)
        {
            scanf("%ld",&prize);
            for(w=0;w<week;w++)
            {
                scanf("%ld",&number);
                initial=0;
                if(number>=contestent)
                {
                    initial=prize*contestent;
                    if(cost>initial)
                        cost=initial;
                }
            }
        }
        if(cost>buged)
            printf("stay home\n");
        else
            printf("%ld\n",cost);
           cost=15000000;
    }
    return 0;
}
