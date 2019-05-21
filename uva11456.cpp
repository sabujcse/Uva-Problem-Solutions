#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, num, test;
    int a[ 2500 ];
    int lis[ 2500 ];
    int lds[2500 ];
    cin>>test;
    while( test-- )
    {
        cin>>n;
        for( int i = 0; i<n; i++ )
        {
            cin>>a[ i ];
        }
    for( int i = n - 1; i >= 0; i-- )
    {
        lis[ i ] = 1;
        for( int j = i + 1; j < n; j++ )
        {
            if( a [ i ] < a[ j ])
            {
                lis[ i ] = max( lis[ j ] + 1, lis[ i ] );
            }
        }
    }
    for( int i = n - 1; i>= 0; i -- )
    {
        lds[ i ] = 1;
        for( int j = i + 1; j < n; j ++ )
        {
            if( a[ i ] > a[ j ] )
            {
                lds[ i ] = max( lds[ j ] + 1, lds[ i ]);
            }
        }
    }
   int ans = 0;
    for( int i = 0; i < n; i++ )
    {
        ans = max( ans , lis[ i ] + lds[ i ] - 1 );
    }
    //cout<<"lis ";
    cout<<ans<<endl;
    }
    return 0;
}
