#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,q,l=0,i,j,k,count;
    int ary[10001];
    int ary2[10001];
    while(scanf("%d%d",&N,&q)==2)
    {
        if(N==0&&q==0)
            break;
    for( i=0;i<N;i++)scanf("%d",&ary[i]);
    for( j=0;j<q;j++)scanf("%d",&ary2[j]);
      sort(ary,ary+N);
     printf("CASE# %d:\n",++l);
        for(k=0;k<q;k++)
        {
             count=0;
            for(j=0;j<N;j++)
            {
            if(ary[j]==ary2[k]&&count!=1)
            {
                printf("%d found at %d\n",ary2[k],j+1);
                count++;
            }
          }
        if(count==0)
        {
            printf("%d not found\n",ary2[k]);
        }

        }
    }
    return 0;
}
