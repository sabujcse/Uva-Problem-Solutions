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
vector< int >graph[21];
void BFS( I s, I d )
{
    I l;
    queue< int > q;
    I visited[ 50 ] = {0};
    I level [ 50 ];
    visited[ s ]=1;
    level[s] = 0;
    q.push(s);
    while( !q.empty() )
    {
        I u = q.front();
        FOR( l, 0, graph[ u ].size()-1)
        {
            I v = graph[u][l];
            if(!visited[v])
            {
                visited[v]=1;
                level[v] = level[u]+1;
                q.push(v);
            }
        }
        q.pop();

    }
    pf("%2d to %2d: %d\n",s,d,level[d]);
}
I main()
{
    I x, y, k =0, i, j;
    while( sc("%d",&x)==1&&x)
    {
        FOR( j, 0, x-1 )
        {
            sc("%d",&y);
            graph[ 1 ].pb(y);
            graph[ y ].pb(1);
        }
        FOR( i, 2, 19 )
        {
            sc("%d",&x);
            FOR(  j, 0, x-1 )
            {
                sc("%d",&y);
                graph[i].pb(y);
                graph[y].pb(i);
            }
        }
        I sr, dis, n;
        sc("%d",&n);
        pf("Test Set #%d\n",++k);
        FOR( i, 0, n-1 )
        {
            sc("%d%d",&sr,&dis);
            BFS(sr,dis);
        }
        cout<<endl;
        FOR(i, 0, 21-1)
        {
            graph[ i ].clear();
        }
    }
    return 0;
}

