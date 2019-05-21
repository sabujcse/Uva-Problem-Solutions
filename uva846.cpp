#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        int dis=b-a;
        if(dis<=3)
            cout<<dis<<endl;
        else
        {
            int h=sqrt(dis);
            if(h*h==dis)
                cout << (2*h-1) <<endl;
            else if(dis-h*h<=h)
                cout<<2*h<<endl;
            else
                cout<<2*h+1<<endl;
        }
    }
    return 0;
}
