#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[10000];
        int k =0;
       while(gets(ch))
       {
          int l = strlen(ch);
        if(ch[k]=='0'&&l==1)
            break;
        int r;
        int count = 0;
        for(int i = 0; i< l; i++)
        {
            count +=ch[i]-'0';
        }
        if(count%9!=0)
        {
              printf("%s is not a multiple of 9.\n",ch);
        }
        else
        {
            r = 1;
            while(count>9)
            {
                r++;
                int len = 0;
              while(count>0)
              {
                  len += count%10;
                  count= count/10;
              }
              //count = len;
            }

            printf("%s is a multiple of 9 and has 9-degree %d.\n",ch,r);
        }
       }

    return 0;
}
