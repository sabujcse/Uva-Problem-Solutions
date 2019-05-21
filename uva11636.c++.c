#include<stdio.h>

int main()
{
    int a,i,num=0,k=1;
    while(scanf("%d",&a)==1)
    {
            if(a<0)
            break;
    for(i=0;i<a;i++)
    {
        if(pow(2,i)>=a)
        {
            num=i;
            break;
        }

    }
    printf("Case %d: %d\n",k,num);
    k++;
    num=0;
    }
    return 0;
}
