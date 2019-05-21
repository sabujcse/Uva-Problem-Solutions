#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a;
    int p,op;
    while(scanf("%lld",&a)==1)
    {
        p=1;
        op=0;
        while(a>p)
        {
            if(op%2==0)
                p=p*9;
            else
                p=p*2;
            op++;
        }
        if(op%2==1)
        {
            printf("Stan wins.\n");
        }
        else
        {
            printf("Ollie wins.\n");
        }
    }
    return 0;
}
