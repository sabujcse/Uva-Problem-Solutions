#include<bits/stdc++.h>
using namespace std;
#include<stack>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<list>
typedef      long long               ll;
typedef      long long int           lli;
typedef      unsigned int            ui ;
typedef      unsigned long long int  ulli;
typedef      double                  D;
typedef      float                   F;
typedef      int                     I;
#define      Clear(a) memset( a, 0, sizeof(a))
#define      sc     scanf
#define      pf     printf
#define      Angle  360
#define      AN     180
#define      pb     push_back
#define      pp     pop_back
#define      t_r     true
#define      f_r     false
#define      PI    a(cos)
#define      MIN(a,b) ((a) < (b) ? (a) : (b))
#define      MAX(a,b) ((a) > (b) ? (a) : (b))
#define      FOR(i , x, y ) for(  i = (x); i<=(y); i++ )
#define      ROR(i , x, y ) for(  i = (x); i>=(y); i-- )
#define      priority_queue<int,vector<int>,compare>pq; /***priorty_queue function***/
#define N 2010
bool prime[ N ];
int sp[ N ];
int shive()
{
    memset(prime,t_r,N);
    prime[ 0 ] = f_r;
    prime[ 1 ] = f_r;
    int q = sqrt( N );
    for( int i = 2; i<= q; i++ )
    {
        if( prime[ i ] )
        {
            for( int j = i * i; j< N; j+= i )
            {
                prime[ j ] = f_r;
            }
        }
    }
}
I main()
{
    shive();
    int test;
    char ch[ 250 ];
    cin>>test;
    getchar();
    for( int i = 1; i<= test; i++ )
    {
       sc("%s",&ch);
        int l = strlen( ch );
        memset(sp,0,N);
        for( int k = 0; k < l; k++ )
        {
            sp[ ch[ k ] ]++;
        }
        bool check = f_r;
        pf("Case %d: ",i);
        for( int j = 0; j < 128; j++ )
        {
            if( prime[sp[ j ]] )
            {
                pf("%c",j);
                check = t_r;
            }
        }
        if( !check )
            pf("empty");
        cout<<endl;

    }
    return 0;
}
