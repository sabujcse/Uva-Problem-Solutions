#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ary[105];
    int t,sum,g;
    int f=0;
    while(cin>>t&&t>0)
    {
        sum=0;
    for(int i=0;i<t;i++)
    {
      scanf("%d",&ary[i]);
      sum+=ary[i];
    }
     int r =sum/t;
     g=0;
     for(int j=0;j<t;j++)
     {
         if(r<ary[j])
         {
             int s = ary[j] - r;
             g +=s;
         }
     }
     printf("Set #%d\nThe minimum number of moves is %d.\n",++f,g);
     printf("\n");
    }
   return 0;
}
