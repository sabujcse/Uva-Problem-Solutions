#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int n, k, x;
    cin>>a;
    for( int i =1; i<= a; i++)
    {
        cin>>n>>k>>x;
        int sum = ((n*( n+1))/2);
        int sum1 = (((x+k-1)*(x+k))/2);
        int sum2 = (((x-1)*x)/2);
        int re=(sum1-sum2);
        int fr=(sum-re);
        printf("Case %d: %d\n",i,fr);
    }
    return 0;
}
