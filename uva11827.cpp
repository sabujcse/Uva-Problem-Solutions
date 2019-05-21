#include<bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
    if(b==0)
        return a;
    else
        return GCD(b,a%b);
}
int main()
{
    int t,ary[1010];
    string s;
    cin>>t;
    getchar();
    while(t--)
    {
        getline(cin,s);
        stringstream ss(s);
        int j=0;
        while(ss>>ary[j])
            j++;
            int g=0;
        for(int i=0;i<j;i++)
        {
            for(int l=i+1;l<j;l++)
            {
                g=max(g,GCD(ary[i],ary[l]));
            }
        }
         cout<<g<<endl;
    }
    return 0;
}
