#include<stdio.h>
#include<math.h>

int main()
{
    long long int a;
    while(scanf("%lld",&a)==1&&a>0)
    {
        if(a>=101)
            printf("f91(%lld) = %lld\n",a,a-10);
        else
            printf("f91(%lld) = 91\n",a);
    }
    return 0;
}
