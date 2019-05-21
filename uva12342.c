
#include<stdio.h>
#include<math.h>
int main()
{
    int number,testcase,c=0;
    scanf("%d",&testcase);
    while(testcase--)
    {
        double tax=0;
        scanf("%d",&number);
        printf("Case %d: ",++c);
        if(number>180000)
        {
            number-=180000;
            if(number>0)
            {
                tax+=(number>300000 ? 300000:number)*0.1;
                number-=300000;
                if(number>0)
                {
                    tax+=(number>400000 ? 400000:number)*0.15;
                    number-=400000;
                    if(number>0)
                    {
                        tax+=(number>300000 ? 300000:number)*0.2;
                        number-=300000;
                        if(number>0)
                        tax+= tax*0.25;
                    }
                }
            }
            if(tax<2000)
                puts("2000");
            else
                printf("%d\n",(int) ceil(tax));
        }
        else
            puts("0");
    }
    return 0;
}
