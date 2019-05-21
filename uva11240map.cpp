#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
int main()
{
    map< char , int >m;
    int test, n, k, sp;
    string ss;
    char ch;
    sc("%d",&test);
    while( test-- )
    {
        sc("%d",&n);
        getchar();
        for( int i = 0; i<n; i++ )
        {
            cin>>ch;
            sc("%d",&k);
            m[ ch ] = k;
            getchar();
        }
        double kk = 0.0;
        sc("%d",&sp);
        getchar();
        for( int i = 0; i<sp; i++ )
        {
            getline(cin,ss);
            for( int j = 0; j<ss.size(); j++ )
            {
                kk = kk +  m[ss[ j ]];
            }
        }
        pf("%0.2lf$\n",kk/100.0);
        m.clear();
    }
    return 0;
}
