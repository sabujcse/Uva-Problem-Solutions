#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, x1, x2, c, count, kkkk=1 ;
    cin>>c;
    cout<<endl;
    int  d, l;
    for( int j  = 1; j<= c; j++ )
    {
        cin>>test;
        int i = 1;
        count = 0;
        l = test;
    while( test -- )
    {
        cin>>x1>>x2;
        if( i == 1 )
        {
            d = abs( x1  - x2 );
            i = 0;
        }
        else
        {
          if( d == abs( x1 - x2 ))
          {
              count++;
          }
        }
    }
    if( count == l - 1 )
    printf("yes\n");
    else
        printf("no\n");
        if( j < c )
        cout<<endl;
    }
    return 0;
}
