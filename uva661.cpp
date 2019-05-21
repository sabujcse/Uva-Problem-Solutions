#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, ampeare,t,l;
    l= 1;
    while(cin>>n>>m>>ampeare&&n&&m&&ampeare)
    {
    int s[21] = {0};
    int c[21];
    for( int i =1; i<= n; i++)
    {
        cin>>c[i];
    }
    int sum = 0, max = 0;
    for( int j = 0; j < m ; j++)
    {
        cin>>t;
        if(s[t]==0)
        {
            sum+= c[t];
            s[t]=1;
        }
        else
        {
            sum-=c[t];
            s[t]=0;
        }
        if(sum>max)
        {
            max = sum;
        }
    }
    printf("Sequence %d\n",l++);
    if(sum>ampeare)
    {
        printf("Fuse was blown.\n");
    }
    else
    {
        printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n",max);
    }
    printf("\n");
    }
    return 0;
}
