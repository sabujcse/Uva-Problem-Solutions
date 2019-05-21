#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ary[15];
    int i,t,n=1;
    cin>>t;
    for(int j=1;j<=t;j++)
    {
        int count=0;
        for(i=0;i<13;i++)
        {
            int l=1;
            scanf("%d",&ary[i]);
            if(l<=ary[i])
            {
                count++;
            }
        }
        if(count==13)
            printf("Set #%d: Yes\n",j);
        else
            printf("Set #%d: No\n",j);
    }
    return 0;
}
