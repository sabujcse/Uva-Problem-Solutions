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
int main()
{
    int buttenNo[101];
    int howmanypress[101];
    int test,alimnts;
    sc("%d",&test);
    while(test--){
        sc("%d",&alimnts);
        for( int ii = 0; ii<alimnts; ii++){
            sc("%d",&buttenNo[ii]);
        }
        for( int jj = 0; jj<alimnts; jj++ ){
            sc("%d",&howmanypress[jj]);
        }
        for( int zz = 0; zz<alimnts; zz++){
            if(buttenNo[zz] == 0 ){
                int hh = howmanypress[zz];
                for( int kk=1; kk<=hh; kk++ ){
                    cout<<' ';
                }
            }
            else if(buttenNo[zz] == 1 ){
                if(howmanypress[zz] == 1)
                {
                    cout<<".";
                }
                else if(howmanypress[zz]==2){
                    cout<<",";
                }
                else if(howmanypress[zz]==3){
                    cout<<"?";
                }
                else if(howmanypress[zz]==4){
                    cout<<'"';
                }
            }
            else if(buttenNo[zz] == 2 ){
                    if(howmanypress[zz]==1){
                        cout<<"a";
                    }
                    else if(howmanypress[zz]==2){
                        cout<<"b";
                    }
                    else if(howmanypress[zz]==3){
                        cout<<"c";
                    }

            }
            else if(buttenNo[zz] == 3 ){
                      if(howmanypress[zz]==1){
                        cout<<"d";
                    }
                    else if(howmanypress[zz]==2){
                        cout<<"e";
                    }
                    else if(howmanypress[zz]==3){
                        cout<<"f";
                    }

            }
            else if(buttenNo[zz] == 4 ){
                      if(howmanypress[zz]==1){
                        cout<<"g";
                    }
                    else if(howmanypress[zz]==2){
                        cout<<"h";
                    }
                    else if(howmanypress[zz]==3){
                        cout<<"i";
                    }
            }
            else if(buttenNo[zz] == 5 ){
                  if(howmanypress[zz]==1){
                        cout<<"j";
                    }
                    else if(howmanypress[zz]==2){
                        cout<<"k";
                    }
                    else if(howmanypress[zz]==3){
                        cout<<"l";
                    }
            }
            else if(buttenNo[zz] == 6 ){
                  if(howmanypress[zz]==1){
                        cout<<"m";
                    }
                    else if(howmanypress[zz]==2){
                        cout<<"n";
                    }
                    else if(howmanypress[zz]==3){
                        cout<<"o";
                    }
            }
            else if(buttenNo[zz] == 7 ){
                    if(howmanypress[zz]==1){
                        cout<<"p";
                    }
                    else if(howmanypress[zz]==2){
                        cout<<"q";
                    }
                    else if(howmanypress[zz]==3){
                        cout<<"r";
                    }
                    else if(howmanypress[zz]==4){
                        cout<<"s";
                    }
            }
            else if(buttenNo[zz] == 8 ){
                  if(howmanypress[zz]==1){
                        cout<<"t";
                    }
                    else if(howmanypress[zz]==2){
                        cout<<"u";
                    }
                    else if(howmanypress[zz]==3){
                        cout<<"v";
                    }
            }
            else if(buttenNo[zz] == 9 ){
                   if(howmanypress[zz]==1){
                        cout<<"w";
                    }
                    else if(howmanypress[zz]==2){
                        cout<<"x";
                    }
                    else if(howmanypress[zz]==3){
                        cout<<"y";
                    }
                    else if(howmanypress[zz]==4){
                        cout<<"z";
                    }
            }

        }
        cout<<endl;
    }
    return 0;
}


