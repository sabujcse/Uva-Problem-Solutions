#include<bits/stdc++.h>
using namespace std;

int main()
{
    char ch[100];
    while(gets(ch))
    {
        if(ch[0]=='#')
            break;
        int length=strlen(ch);
        if(next_permutation(ch,ch+length))
            puts(ch);
        else
            printf("No Successor\n");
    }
    return 0;
}
