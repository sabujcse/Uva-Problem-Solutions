#include<bits/stdc++.h>
using namespace std;
int main()
{

    unsigned long long int a, b;
    unsigned long long int sum;
    while( cin>>a>>b )
    {
        sum = 0;
        for( int i = 1; i<= a; i++ )
        {
            sum += i *pow( a, i );
        }
        cout<<sum<<endl;
    }
    return 0;
}


