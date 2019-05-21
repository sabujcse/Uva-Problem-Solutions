#include<stdio.h>
#include<math.h>

int main()
{
   long long int a,r;
   while(scanf("%lld",&a)==1&&a>0)
   {
       r=sqrt(a);
       if(r*r==a)
        printf("yes\n");
       else
        printf("no\n");
   }
    return 0;
}
