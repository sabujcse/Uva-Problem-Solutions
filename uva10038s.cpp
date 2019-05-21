
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,a[3010],b[3010],c;
    while(scanf("%d",&n)==1)
    {
        c=1;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            b[i]=abs(a[i+1]-a[i]);
        }
        sort (b,b+i);
        for(i=1;i<n;i++)
        {
            if(b[i]==b[i-1])
            {
                c=0;
                break;
            }
        }
        if(c==0)
            printf("Not jolly\n");
        else
            printf("Jolly\n");
    }
    return 0;
}
