#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int number;
    int test;
    scanf("%d",&test);
    while(test--)
    {
       cin>>s;
       int len = s.size();
       if(s=="1"||s=="4"||s=="78")
        printf("+\n");
       else if (s[len-1]=='5'&&s[len-2]=='3')
        printf("-\n");
       else if(s[0]=='9'&&s[len-1]=='4')
        printf("*\n");
       else
        printf("?\n");
    }
    return 0;
}
