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
#define      sc       scanf
#define      pf       printf
#define      Angle    360
#define      AN       180
#define      pb       push_back
#define      pp       pop_back
#define      t_r      true
#define      f_r      false
#define      RR       1
#define      ww       0
#define      INF_MAX  147483647
#define      INF_MIN  -147483647
#define      Takeint(a)   scanf("%d",&a)
#define      Test_case(t) for( int i = 1; i<= t; i++ )
#define      PI acos(-1)
#define      MIN(a,b) ((a) < (b) ? (a) : (b))
#define      MAX(a,b) ((a) > (b) ? (a) : (b))
#define      FOR(i , x, y ) for(  i = (x); i<=(y); i++ )
#define      ROR(i , x, y ) for(  i = (x); i>=(y); i-- )
#define      priority_queue<int,vector<int>,compare>pq;
#define      Read(r)      freopen(r, "r", stdin)
#define      Write(w)     freopen(w, "w", stdout)
/***priorty_queue function***/
/**sf("%I64d",&n);**/
struct compare
{
   bool operator()(const int& I , const int& r)
    {
     return I > r;
    }
};
/**(Function of trailing zero )
 while( number )
      {
          count += number/5;
          number = number/5;
      }
**/
/**(Tautogram)
{
   string s;
   while(getline(cin,s)&&s!="*")
   {
       char st = s[ 0 ];
       st = tolower( st );
       bool check = t_r;
       for( int i = 0; i < s.size(); i++ )
       {
           if( s[ i ] == ' ')
           {
             if( st != tolower(s[ i + 1 ]))
               {
                  check = f_r;
                  break;
               }
           }
       }
       if( check )
       {
           cout<<"Y"<<endl;
       }
       else
       {
           cout<<"N"<<endl;
       }
   }
}
**/
I main()
{
    string s;
   int test;
   int number;
   cin>>test;
   int mark = 1;
   while( test-- )
   {
       cin>>number;
       cin>>s;
       int count =0;
       for( int i = 0; i < s.size(); )
       {
           if( s[ i ] == '.' )
           {
               count++;
               i+=3;
           }
           else
           {
               i++;
           }
       }
       cout<<"Case"<<' '<<mark<<":"<<' '<<count<<endl;
       mark++;
   }
    return 0;
}
