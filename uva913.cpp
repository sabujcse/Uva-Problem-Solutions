#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int number,d,s;
    while(cin>>number)
    {
        d=number*(number+2)/2;
        s=3*d-6;
        cout<<s<<endl;
    }
    return 0;
}
