#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ary [510];
    int t,c,s,b;
    cin>>t;
    while(t--)
    {
        cin>>c;
        for(int i=0;i<c;i++)
        {
            scanf("%d",&ary[i]);
        }
        sort(ary,ary+c);
        int mid = c/2;
        if(c%2==0)
        {
            s=((ary[mid-1]+ary[mid])/2);
        }
        else
        {
            s=ary[mid];
        }
        b=0;
        for(int j=0;j<c;j++)
        {
            b+=abs(ary[j]-s);
        }
        printf("%d\n",b);
    }
    return 0;
}
