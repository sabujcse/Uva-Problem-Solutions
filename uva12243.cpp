#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s)&&s!="*")
    {
        char ch = s[0];
        ch = tolower(ch);
        bool chk = true;
        for(int i = 0; i<s.size()-1; i++)
        {
            if(s[i]==' ')
            {
                if(ch!= tolower(s[i+1]))
                    chk=false;
            }
        }
        if(chk) printf("Y\n");
        else     printf("N\n");
    }
    return 0;
}
