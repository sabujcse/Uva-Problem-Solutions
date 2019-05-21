#include<stdio.h>

int main()
{
    long long  a,b,c,i=1,j=0;
    while(scanf("%lld%lld",&a,&b))
    {
        c=a;
        if(a<0&&b<0)
        {
            break;
        }
        while(a>1)
        {
            if(a==1)
            {
                break;
            }
           if(a%2==0)
           {
            a=a/2;
           }
            else
            {
                a=3*a+1;
            }
            i++;
            if(a>b)
             {
                 i--;
                break;

             }
        }
        j++;
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",j,c,b,i);
        i=1;
    }
    return 0;
}
