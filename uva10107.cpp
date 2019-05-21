#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long ary[100005],i=0,ans,number;
    while(scanf("%lld",&number)==1)
    {
        ary[i]=number;
        sort(ary,ary+i+1);
        if(i%2==0)
        {
            printf("%lld\n",ary[i/2]);
        }
        else
        {
            ans=ary[i/2]+ary[(i/2)+1];
            printf("%lld\n",ans/2);
        }
        i++;
    }
    return 0;
}
