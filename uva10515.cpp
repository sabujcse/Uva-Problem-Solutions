#include<bits/stdc++.h>
using namespace std;
int main()
{
    char m[111];
    char n[111];
    while(scanf("%s%s",m,n)!=EOF)
    {
        int lenm = strlen(m);
        int lenn = strlen(n);
        if( lenm == 1 && lenn == 1 && m[0] == '0' && n[0] == '0')
        {
            return 0;
        }
        if(lenn == 1 && n[0] == '0')
        {
            printf("1\n");
            continue;
        }
        int result = m[ lenm - 1] - '0';
        int res;

        if( result ==0 || result ==1 || result ==5 || result== 6)
        {
            printf("%d\n", result);
            continue;
        }
        else if( result == 2 || result == 3|| result == 7 || result == 8)
              res = 4;
        else if( result == 4 || result == 9)
            res = 2;
        int  powr;
        if ( lenn == 1)
        {
            powr = (n[lenn - 1] - '0' )%res;
        }
        else
        {
            powr = ((n[lenn - 2 ] - '0')*10 + (n[lenn - 1] - '0'))%res;

        }
        if( powr == 0)
        {
            powr = res;
        }
         result = pow(result,powr);
         result = result%10;
         printf("%d\n",result);

    }
    return 0;
}
