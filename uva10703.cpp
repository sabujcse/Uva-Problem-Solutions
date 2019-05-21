#include<bits/stdc++.h>
using namespace std;
bool portion[ 505 ][ 505 ];
int main()
{
    int w,h,n, i, j, k, l;
    int x, xx, y, yy;
    while(scanf("%d%d%d",&w,&h,&n)&&w)
    {
        memset(portion,true,sizeof(portion));
         for( i = 0; i < n; i++)
         {
             scanf("%d%d%d%d",&x,&y,&xx,&yy);
             if( x > xx ) swap(x,xx);
             if( y > yy ) swap(y,yy);
             for( int  l = x; l<= xx; l++ )
             {
                 for( j =  y; j<=  yy; j++ )
                 {
                     portion[ l ][ j ] = 0;
                 }
             }
         }
         int ans = 0;
         for( i = 1; i<= w; i++ )
         {
             for( j = 1; j<= h; j++ )
             {
                 if( portion[i][j]) ans++;
            }
         }
         if( ans == 0 )
            printf("There is no empty spots.\n");
         else if( ans == 1 )
          printf("There is one empty spot.\n");
         else
         printf("There are %d empty spots.\n",ans);
    }
    return 0;
}

