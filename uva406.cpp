#include<bits/stdc++.h>
using namespace std;
#define n 1001
int prime[n];
int primetabel[n];
void chive()
{
    int i;
    for ( i= 2; i<=n; i++)
        prime[i] = 1;
    int k = sqrt( n );
    for(int j = 2; j<=k; j++)
    if(prime[j])
    {
        for( i = j*j; i<=n; i+=j)
        prime[i]=0;
    }
    prime[1]=1;
}
int main()
{
    chive();
    int m, c,count, i, j,total;
    while(scanf("%d%d",&m, &c)==2)
    {
        count = 0;
     for(  i = 1; i<=m; i++)
     {
      if(prime[i])
     {
       primetabel[++count] = i;
     }
     }
     if( count%2 == 0)
     {
          total = c*2;
          printf("%d %d: ",m,c);
         if(total>count)
         {
             for( i = 1; i<count;  i++)
             {
                 printf("%d ",primetabel[i]);
             }
             printf("%d\n\n",primetabel[i]);
         }
         else
         {
             int mid = count/2;
              int lowerbond = mid - (total/2-1);
              int uperbound = lowerbond + total - 1;
              for(  i =lowerbond; i< uperbound; i++)
              {
                  printf("%d ",primetabel[i]);
              }
              printf("%d\n\n",primetabel[i]);
         }
     }
         else
         {

            total = c*2-1;
            printf("%d %d: ",m,c);
          if(total>count)
          {
             for( i = 1; i<count;  i++)
             {
                 printf("%d ",primetabel[i]);
             }
             printf("%d\n\n",primetabel[i]);
         }
         else
         {
             int mid = count/2+1;
              int lowerbond = mid - (total/2);
              int uperbound = lowerbond + total - 1;
              for(  i = lowerbond; i<uperbound; i++)
              {
                  printf("%d ",primetabel[i]);
              }
              printf("%d\n\n",primetabel[i]);
         }
       }
     }
    return 0;
}
