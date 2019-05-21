#include<stdio.h>
#include<math.h>

int main()
{
    long int a,b;
    int count,c;
    while(scanf("%ld%ld",&a,&b)&&a!=0&&b!=0)
    {
        count=0;
        c=0;
        while(a || b)
        {
            c=(a%10+b%10+c)/10;
            a=a/10;
            b=b/10;
            count=count+c;
        }
        if(!count)
            printf("No carry operation.\n");
        else if(!(count^1))
            printf("1carry operation.\n");
        else
            printf("%dcarry operations.\n",count);
    }
    return 0;
}
