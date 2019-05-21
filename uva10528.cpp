#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int h, m, ss, c, t;
    while( cin>>s )
    {
        h = (s[ 0 ] - '0' ) * 10 + ( s[ 1 ] - '0' );
        m = (s[ 2 ] - '0' ) * 10 + ( s[ 3 ] - '0' );
        ss = (s[ 4 ] - '0' ) * 10 + ( s[ 5 ] - '0' );
        c = (s[ 6 ] - '0' ) * 10 + ( s[ 7 ] - '0' );
        t = ( h * 3600 + m * 60 + ss  ) * 100 + c;
        t = t * 125 / 108;
        printf("%07d\n", t);
    }
    return 0;
}
