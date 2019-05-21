#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase,count,sum,j,l,i;
    char ch[100];
    scanf("%d",&testcase);
    for( i=1;i<=testcase;i++)
    {
        count=0;
        sum=0;
        scanf("%s",&ch);
        for( j=0;j<strlen(ch);j++)
          {
            if(ch[j]=='O')
            {
                count++;
                sum = sum+count;
            }
            if(ch[j]=='X')
             {
                count=0;
             }
          }
           printf("%d\n",sum);
    }
    return 0;
}

