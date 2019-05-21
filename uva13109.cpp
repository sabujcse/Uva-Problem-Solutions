#include<bits/stdc++.h>
using namespace std;
int main()
{
     int ary[100001];
    int testcase,w,m,sum,count;
    cin>>testcase;
    for(int i=1;i<=testcase;i++)
    {
        cin>>m>>w;
        for(int j=0;j<m;j++)
        {
          scanf("%d",&ary[j]);
        }
        sort(ary,ary+m);
        sum=0;
        count=0;
        for(int j=0;j<m;j++)
        {
            sum=sum+ary[j];
            //if(sum>=w)
               // break;
            if(sum<=w)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
