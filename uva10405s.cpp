#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
int dp[MAX][MAX];
char s1[MAX];
char s2[MAX];
bool visited[MAX][MAX];
int lens1,lens2;
int test, i, j, ans;
int LCSDP( int i , int j)
{
    if( s1[ i ] == '\0' || s2[ j ] == '\0')
    {
        return 0;
    }
    if(visited[i][j])
    {
        return dp[i][j];
    }
    ans = 0;
    if( s1[i] == s2[j] )
    {
      ans = 1 + LCSDP(i+1,j+1);
    }
    else
    {
        int p1 = LCSDP(i+1,j);
        int p2 = LCSDP(i,j+1);
        ans = max(p1,p2);
    }
    visited[i][j] = 1;
    dp[ i ][ j ] = ans;
    return dp[i][j];
}
int main()
{
        while(gets(s1)&&gets(s2))
        {
        lens1 = strlen( s1);
        lens2 = strlen( s2);
         memset(visited,0,sizeof(visited));
         memset(dp,0,sizeof(dp));
          printf("%d\n",LCSDP(0,0));
        }
    return 0;
}



