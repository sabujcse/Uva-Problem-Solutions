#include<stdio.h>

int main()
{
    int testcase,i,number1,number2,final1,final2,again,provide,give;
    scanf("%d",&testcase);
    for(i=1;i<=testcase;i++)
    {
        scanf("%d%d",&number1,&number2);
        provide=number1+number2;
        again=number1-number2;
        final1=provide/2;
        final2=number1-final1;
        if(number1<number2||provide%2!=0||again%2!=0)
        {
            printf("impossible\n");
        }
        else
            printf("%d %d\n",final1,final2);

    }
    return 0;
}
