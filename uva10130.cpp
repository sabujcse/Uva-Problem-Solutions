#include<bits/stdc++.h>
#define mem(x,y)memset(x,y,sizeof(x))
#define max(x,y)(x>y?x:y)
using namespace std;
int dp[1002][1002];
int weight[1002];
int cost[1002];
int n;
int capacity;
int func(int i, int w)
{
    int profit1;
    int profit2;
    if(i>=n)
        return 0;
    if(dp[i][w]!=-1)
    {
    return dp[i][w];
    }
    if(w+weight[i]>capacity)
    {
         profit1 = 0;
    }
    else
    {
      profit1 = cost[i]+func(i+1,w+weight[i]);
    }
    profit2 = func(i+1,w);
    dp[i][w] = max(profit1,profit2);
    return dp[i][w];

}
int main()
{

    int test;
    int person;
    int result;
    cin>>test;
    while(test--)
    {
        result = 0;
        cin>>n;
        for(int i =0; i<n; i++)
        {
            cin>>cost[i]>>weight[i];
        }
    cin>>person;
      for( int i = 0; i<person; i++)
      {
          for( int i= 0; i<1002; i++)
          {
              for( int j = 0; j<1002; j++)
              {
                  dp[i][j] =-1;
              }
          }
          cin>>capacity;
          result += func(0,0);
      }
      cout<<result<<endl;
    }
    return 0;
}
