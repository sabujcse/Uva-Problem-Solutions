#include<bits/stdc++.h>
using namespace std;
int smallest( int a, int b)
{
    if(a>b)
    {
        return b;
    }
    else
        return a;
}
int main()
{
    char ch[2];
    int sabuj, puja, test;
    cin>>test;
    for( int i = 1; i<=test; i++)
    {
         cin >> ch >> sabuj >> puja;
          if(ch[0]=='r'||ch[0]=='Q')
            printf("%d\n",smallest( sabuj, puja ));
          else if(ch[0]=='k')
            printf("%d\n",( sabuj*puja )/2);
          else
            printf("%d\n",((sabuj+1)/2)*(( puja+1)/2));
    }
    return 0;
}
