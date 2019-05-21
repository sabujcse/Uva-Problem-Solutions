#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int B,S;
    int i=1;
    while(scanf("%lld%lld",&B,&S)==2&&B>0&&S>0)
    {
        if(B==1||B==0)
        {
            printf("Case %d: :-\\\n",i);
        }
       else if(B<=S)
       {
           printf("Case %d: :-|\n",i);
       }
       else if(B>S)
       {
           printf("Case %d: :-(\n",i);
       }
       i++;
    }
    return 0;
}
