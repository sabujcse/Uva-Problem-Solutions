#include<bits/stdc++.h>
using namespace std;
#define M 10000000
bool prime[M];
int main()
{
   for(int i=2;i<=sqrt(M);i++)
        if(prime[i]==0)
    for(int j=i*i;j<=M;j+=i)
    prime[j]=1;
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        int m=0,x,y;
        if(n<8)
            cout<< "Impossible." << endl;
        else
        {
            if(n%2==0)
            {
                cout << 2 << " " << 2 << " ";
                n-=4;
           }
           if(n%2==1)
           {
               cout << 2 << " " << 3 << " ";
               n-=5;
           }
           for(int j=2;j<n;j++)
            if(!prime[j]&&!prime[n-j])
           {
               x=j;
               y=(n-j);
               m=1;
               break;
           }
           if(m)cout << x << " " << y << endl;
        }
    }
    return 0;
}
