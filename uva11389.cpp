#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ary1[ 101 ], ary2[ 101 ];
    int n, d, r;
    while(cin>>n>>d>>r)
    {
        if( n == 0 && d == 0 && r == 0 )
        {
            break;
        }
        for( int i = 0; i < n; i++ )
        {
            scanf("%d",&ary1[ i ] );
        }
        for( int j = 0; j < n; j++ )
        {
            scanf("%d",&ary2[ j ] );
        }
        sort( ary1 , ary1+n );
        sort( ary2 , ary2+n );
        int sum = 0;
        for( int i = 0; i < n; i++ )
        {
            if( ary1 [ i ] + ary2[ n - i - 1 ] > d )
            {
                sum += ( ( ary1[ i ] + ary2[ n - i - 1 ] ) - d  ) * r;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
