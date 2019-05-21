#include<bits/stdc++.h>
using namespace std;
char ch[1000000];
int main()
{
    int test;
    int a, b, c;
    c = 1;
    while(scanf("%s",ch)!=EOF)
    {
        cin>>test;
       printf("Case %d:\n", c++);
       for( int i = 1; i<= test; i++)
       {
             int count = 1;
           cin>>a>>b;
           int l = strlen(ch);
           if(l==0)
            break;
           if( a == b )
           {
               printf("Yes\n");
               continue;
           }
           if(a > b)
           {
               for( int i = b; i <= a; i++)
               {
                   if(ch[i]!=ch[b])
                   {
                       count = 0;
                       if( count== 0)
                       {
                           printf("No\n");
                          break;
                       }
                   }
               }
           }
           else
           {
               for( int i = a; i <= b; i++)
               {
                   if(ch[i]!=ch[a])
                   {
                       count = 0;
                       if( count== 0)
                       {
                           printf("No\n");
                           break;
                       }
                   }
               }
           }
           if(count==1)
           {
               printf("Yes\n");
           }
       }
    }
    return 0;
}
