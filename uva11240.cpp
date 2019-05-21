#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
int main()
{
    char ch[10001], s[ 10001 ];
    int a[ 10001 ];
    int test, n, st;
    string ss;
    cin>>test;
    while( test -- )
    {
        cin>>n;
        getchar();
        for( int i = 0; i<n; i++ )
        {
            cin>>ch[ i ]>>a[ i ];
            getchar();
        }
        double sum = 0.0;
        cin>>st;
        getchar();
        while( st-- )
        {
            getline(cin,ss);
            for( int i = 0; i<ss.size(); i++ )
            {
                for( int k = 0; k < n; k++ )
                {
                    if( ss[ i ] == ch[ k ] )
                    {
                        sum += a[ k ];
                    }
                }
            }
        }
        pf("%0.2lf$\n",sum/100.0);

    }
    return 0;
}
