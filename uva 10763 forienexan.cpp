/*************************************
/**
           Sabuj sarker
            def: CSE;
    Daffodil International University
**/
///**************************************
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
struct compare
{
   bool operator()(const int& I , const int& r)
   {
       return I > r;
   }
};
I main()
{

    I t,  i, count;
    while(sc("%d",&t))
    {
        if( !t )
        {
            break;
        }
    I dis[ t ];
    I m[ t ];
    count = 0;
    FOR( i, 0, t-1 )
    {
        sc("%d",&dis[ i ]);
        sc("%d",&m[ i ]);
    }
    sort( dis, dis+t);
    sort( m, m+t );
    FOR( i, 0, t-1 )
    {
        if( dis[ i ] != m[ i ] )
        {
            cout<<"NO"<<endl;
            count = 1;
            break;
        }
    }
    if( count == 0 )
    {
        cout<<"YES"<<endl;
    }
    }
    return 0;
}
