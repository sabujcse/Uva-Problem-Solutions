#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long N,answer,i;
    int count;
    while(cin>>N&&N!=0)
    {
        if(N<0)
            N*=-1;
        count = 0;
         answer = -1;
        for( i=2;i*i<=N&&N!=1;i++)
        {
            while (N%i==0)
            {
                N=N/i;
                answer=i;
            }
            if( answer==i)
            {
                count++;
            }
        }
        if(N!=1&&answer!=-1)
            answer = N;
        else if (count==1)
            answer =-1;
        cout<<answer<<endl;
    }
    return 0;
}
