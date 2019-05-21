#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, ary[10000], n, l, k, dp,  c;
    int d = 1000001;
    while (scanf("%d",&test)!=EOF)
    {
        if(test==0)
            break;
    for(int i = 0; i<test; i++)
    {
     scanf("%d",&ary[i]);
    }
    scanf("%d",&n);
    k=0;
    l=0;
    d = 1000001;
    for(int i = 0; i<test; i++)
    {
        for(int j = i+1; j<test; j++)
        {
        if(ary[i] + ary[j]==n)
        {

            dp = ary[i];
            c = ary[j];
            int mn = abs( dp - c );
            if(mn<d)
            {
                d = mn;
                k = ary[i];
                l = ary[j];
            }
        }
        }
    }
    if(k>l)
    {
        swap(k,l);
    }
     printf("Peter should buy books whose prices are %d and %d.\n",k,l);
    printf("\n");
    }
    return 0;
}

