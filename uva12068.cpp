#include<bits/stdc++.h>
using namespace std;

long long int GCD(  long long int a, long long int b )
{
    if( b== 0)
        return a;
    else
        return GCD( b, a%b );
}
int main()
{
    long long int n [ 11 ];

    long long int number, test, sum = 1, sum1 = 0, r = 0;
    cin>>number;
    for( int i =0; i < number; i++)
    {
        cin>>test;
        for( int j = 0; j < test; j++)
        {

        cin>>n[ j ];

        sum *=n [ j ];

        }

    for( int k = 0; k < test; k++ )
    {
        sum1 += sum / n[ k ];
    }
     sum *= test;
     printf("Case %lld: %lld/%lld\n",++r,(sum/GCD(sum,sum1)),(sum1/GCD(sum,sum1)));
     sum1 = 0;
     sum = 1;
    }
    return 0;
}
