#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[1000];
    int co=0,i;
    double d=0.00;
    while(gets(ch))
    {
        if(ch[0]=='*')break;
        for(i=0, co=0; ch[i]; i++)
        {
            if(ch[i]=='/')
            {
                if(d==1.00)co++;
                    d=0.00;
            }
            else if(ch[i]=='W') d+=(1.0);
            else if(ch[i]=='H') d+=(1.00/2.0);
            else if(ch[i]=='Q') d+=(1.00/4.0);
            else if(ch[i]=='E') d+=(1.00/8.0);
            else if(ch[i]=='S') d+=(1.00/16.0);
            else if(ch[i]=='T') d+=(1.00/32.0);
            else if(ch[i]=='X') d+=(1.00/64.0);
        }
        printf("%d\n",co);
    }
    return 0;
}
