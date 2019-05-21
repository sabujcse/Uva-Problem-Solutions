#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[1000000];
    char ch1[1000000];
    while(scanf("%s%s",&ch,&ch1)!=EOF)
    {
        int i,j;
        int l= strlen(ch);
        int m= strlen(ch1);
        for(i=0,j=0;j<m;j++)
        {
            if(ch[i]==ch1[j])
            {
                i++;
                if(i==l)
                {
                    break;
                }
            }
        }
        if(l==i)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

