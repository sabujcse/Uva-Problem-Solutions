#include<stdio.h>
#include<math.h>

int main()
{

    long int a,b,num,n,n2,i,s;
    while (scanf("%ld%ld",&a,&b)==2&&a!=0&&b!=0)
    {
        num=0;
        n=sqrt(a);
        n2=sqrt(b);
        for(i=n;i<=n2;i++)
        {
            s=pow(i,2);
            if(s>=a&&s<=b)
                num++;
            if(s>b)
                break;
        }
        printf("%ld\n",num);
    }
    return 0;
}
