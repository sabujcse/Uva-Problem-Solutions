#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    int i=1;
    while(t--)
    {
        cin>>a;
        printf("Case #%d: %d\n",i,a+(a-1));
        i++;
    }
    return 0;
}
