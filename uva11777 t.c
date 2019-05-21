#include<stdio.h>

int main()
{
   int t1,t2,f,ad,ct1,ct2,ct3,sum,sum2,t,i;
   scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d%d%d%d",&t1,&t2,&f,&ad,&ct1,&ct2,&ct3);
        if(ct2<=ct1&&ct2<=ct3)
        sum=(ct1+ct3)/2;
        else if(ct1<=ct2&&ct1<=ct3)
        sum=(ct2+ct3)/2;
        else
        sum=(ct1+ct2)/2;
        sum2=t1+t2+f+ad+sum;
        if(sum2>=90)
            printf("Case %d: A\n",i);
        else if(sum2>=80&&sum2<90)
             printf("Case %d: B\n",i);
        else if(sum2>=70&&sum2<80)
             printf("Case %d: C\n",i);
        else if(sum2>=60&&sum2<70)
           printf("Case %d: D\n",i);
        else if(sum2<60)
        printf("Case %d: F\n",i);
    }

    return 0;
}
