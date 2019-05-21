#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    scanf("%d",&test);
    char ch;
    ch = getchar();
    for(int j =1; j<=test; j++)
    {
        string s;
        getline(cin,s);
       int  min=700,mc=0,ac=0,rc=0,gc=0,ic=0,tc=0;
       int len = s.size();
        for(int i = 0; i<len; i++)
        {
            if(s[i]=='M')
                mc++;
            else if(s[i]=='A')
                ac++;
            else if(s[i]=='R')
                rc++;
            else if(s[i]=='G')
                gc++;
            else if(s[i]=='I')
                    ic++;
            else if(s[i]=='T')
                    tc++;
        }
        ac/=3;
        rc/=2;
        if(mc<min)
            min=mc;
         if(ac<min)
            min=ac;
         if(rc<min)
            min=rc;
         if(gc<min)
            min=gc;
         if(ic<min)
            min=ic;
        if (tc<min)
            min=tc;

          printf("%d\n",min);
    }
    return 0;
}
