#include<bits/stdc++.h>
using namespace std;
long long int desarr( long long int n)
{
    if (n==0)
        return 1;
    if (n==1)
        return 0;
    else if (n==2)
        return 1;
    return (n-1)*(desarr(n - 1)+ desarr (n -2));
}
long long factorial(long long int n)
{
    long long int sum=1;
    for(long long i =1;i<=n; i++)
      sum*=i;
    return sum;

}
long long int combination( long long int a , long long int b)
{
    long long int sum1 = factorial ( a );
    long long int sum2 = factorial ( b );
    long long int sum3 = factorial ( a-b );
    long long int result = sum1 / ( sum2 * sum3 );
    return result;
}
int main()
{
    long long int n, m;
    while(scanf("%lld %lld",&n , &m)==2)
    {
        long long int sum = 0;
        sum += desarr ( n );
        for( long long  i = 1; i<= m; i++ )
        {
           sum += combination (n , i) * desarr (n-i);
        }
        printf("%lld\n",sum);
    }
    return 0;
}


