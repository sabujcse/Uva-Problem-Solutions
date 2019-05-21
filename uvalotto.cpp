#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    bool t = false ;
    while( scanf("%d",&test)&&test)
    {
        //if(t)
         //   cout<<endl;
       // t = true;
        int lotto[ 14 ];
         for( int i = 0; i< test; i++ )
            scanf("%d",&lotto[ i ]);
         for( int a = 0; a < test - 5; a++ )
            for( int b = a + 1; b < test - 4 ; b++ )
               for( int c = b + 1; c < test - 3; c++ )
                 for( int d = c + 1; d < test - 2 ; d++ )
                   for( int e = d + 1; e < test - 1; e++ )
                     for( int f = e + 1; f < test; f++)
                          printf("%d %d %d %d %d %d\n",lotto[ a ],lotto[ b ],lotto[ c ],lotto[ d ],lotto[ e ],lotto[ f ]);
         //cout<<endl;
    }
    return 0;
}
