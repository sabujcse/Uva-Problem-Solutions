#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,d,f,count;
    int ary[6];
    while(scanf("%d",&t)==1&&t>0)
    {
        count=0;
        for(int j=0;j<5;j++)
        {
           scanf("%d",&ary[j]);
            if(ary[j]==t)
           {
            count++;
           }
        }
        printf("%d\n",count);
    }
    return 0;
}
