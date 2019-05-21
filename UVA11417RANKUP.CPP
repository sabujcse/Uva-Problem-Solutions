#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define sp 501
int prime[ sp ];
int shive()
{
    for( int i = 2; i<= sp; i++ )
        prime[ i ] = 1;
    prime[ 1 ] = 0;
    int kk = sqrt( sp );
    for( int i = 2; i<= kk; i++ )
    {
        if( prime[ i ] == 1 )
        {
        for( int j = i * i; j<= sp; j+= i )
        {
            prime[ j ] = 0;
        }
        }
    }
}
int GCD( int x, int y )
{
    if( y==0 )
        return x;
    else return GCD( y, x%y );
}
int main()
{
int N, G = 0;
while( sc("%d",&N)&&N)
{
    G += ( N -1) ;
    for( int i=2;i<N;i++) {
    for( int j=i+1;j<=N;j++)
    {
        if( prime[ i ] == 1 || prime[ j ] == 1 )
        {
            G+=1;
        }
        else
        {
        G+=GCD(i,j);
        }
     }
}
pf("%d\n",G);
G =0;
}
   return 0;
}

