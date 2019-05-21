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
typedef      float                   f;
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
lli M[100000];
lli F[100000];
lli n, i;
I main()
{

    while(sc("%lld",&n)==1&&n >= 0)
    {
       F[ 0 ] = 0;
       F[ 1 ] = 1;
       M [ 0 ] = 1;
       for(  i = 2; i<= n+1; i++ )
       {
           F[ i ] = F[ i - 1 ] + F[ i - 2 ];
       }
       for(  i = 1; i<= n; i++ )
       {
           M[ i ] = M[ i - 1 ] + F[ i + 1 ];
       }
       cout<<M[n] - F[i]<<' '<<M[n]<<endl;
    }
    return 0;
}
