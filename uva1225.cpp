#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ary[100001],testcase;
    while(scanf("%d",&testcase)==1)
    {
        int number,p;
       for(int i=1;i<=testcase;i++)
       {
           int a=0,a1=0,p=0,a2=0,a3=0,a4=0,a5=0,a6=0,a7=0,a8=0,a9=0;
           scanf("%d",&number);
           for(int i=1;i<=number;i++)
           {
                p=i;
               while(p!=0)
                {
               if(p%10==0)
                a++;
               if(p%10==1)
                a1++;
               if(p%10==2)
                a2++;
               if(p%10==3)
                a3++;
               if(p%10==4)
                a4++;
               if(p%10==5)
                a5++;
               if(p%10==6)
                a6++;
               if(p%10==7)
                a7++;
               if(p%10==8)
                a8++;
               if(p%10==9)
                a9++;
                p=p/10;
                }
           }
        printf("%d %d %d %d %d %d %d %d %d %d\n",a,a1,a2,a3,a4,a5,a6,a7,a8,a9);
       }

    }
    return 0;
}
