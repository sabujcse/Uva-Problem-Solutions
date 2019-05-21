/*****************************************************
*#*##################################################*                                                  *
*#****************************************************                                                  *
*#*       URI:          sabujbd,                   *#*
*#*       UVA:          sabuj_coder.               *#*
*#*       LIGHTOJ:      return_SS,                 *#*
*#*       DEVSKILL:     return_SS                  *#*
*#*       CODEFORCES:   return_SS                  *#*
*#*       TIMUS:        return_SS                  *#*
*#*       CODEMARSHAL:  return_SS                  *#*
*#*                                                *#*
*#*                                                *#*
*#*          Sabuj sarker                          *#*
*#*          def: CSE;                             *#*
*#*    Daffodil International University           *#*
*#*                                                *#*
*#*                                                *#*
*****************************************************
*####################################################
*****************************************************/
#include<bits/stdc++.h>
using namespace std;
#include<stack>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<list>
typedef      long long              ll;
typedef      long long int          lli;
typedef      unsigned int           ui ;
typedef      unsigned long long int ulli;
typedef      double                 D;
typedef      float                  f;
typedef      int                    I;
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
#define mxx 17
int main()
{
    map<string,int>vl;
    char ch[mxx];
    int mx, nx, values;
       sc("%d %d",&mx,&nx);
    while( mx-- ){
        sc(" %s %d", &ch, &values);
        vl[ch] = values;
    }
    while( nx-- ){
        int result = 0;
        while(scanf(" %s", &ch)!=EOF){
    if( ch[0] == '.' ) break;
         result += vl[ch];
    }
    cout<<result<<endl;
    }
    return 0;
}
