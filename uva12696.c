#include<stdio.h>


int main()
{
    float l,w,d,h,sum,count=0.0, testcase;
    scanf("%f",&testcase);
    while(testcase--)
    {
        sum=0;
        scanf("%f%f%f%f",&l,&w,&d,&h);
        sum=(l+w+d);
        if(((l<=56.00&&w<=45.00&&d<=25.00)||(sum<=125.00))&&h<=7.00)
        {
            printf("1\n");
            count+=1;
        }
        else
            printf("0\n");
    }
    printf("%.0f\n",count);
    return 0;
}
