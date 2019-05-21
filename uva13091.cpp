#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[10][10];
    int testcase,i,j,d,k,count,c=1;
    scanf("%d",&testcase);
    while(testcase--)
    {
        count=0;
        for(i=0;i<5;i++)
        {
          scanf("%s",&ch[i]);
          if(i==0)
          {
              for(k=0;k<5;k++)
              {
                if(ch[i][k]=='|')
                {
                d=k;
                break;
                }
              }
          }
          for(k=0;k<5;k++)
          {
                if(ch[i][k]=='>'&&k>d)
                count=1;
                if(ch[i][k]=='>'&&k<d)
                count=2;
                if(ch[i][k]=='<'&&k<d)
                count=1;
                if(ch[i][k]=='<'&&k>d)
                count=2;

          }
        }
        if(count==1)
            printf("Case %d: No Ball\n",c);
        else
            printf("Case %d: Thik Ball\n",c);
            c++;
    }
    return 0;
}
