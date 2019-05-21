#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[20];
    while(gets(ch))
    {
        int l =strlen(ch);
        for(int i=0;i<l;i++)
        {
            if(ch[i]=='B'||ch[i]=='F'||ch[i]=='P'||ch[i]=='V')
            {
                if(ch[i-1]!='B'&&ch[i-1]!='F'&&ch[i-1]!='P'&&ch[i-1]!='V')
                    printf("1");
            }
           else  if(ch[i]=='C'||ch[i]=='G'||ch[i]=='J'||ch[i]=='K'||ch[i]=='Q'||ch[i]=='S'||ch[i]=='Z'||ch[i]=='X')
            {
                if(ch[i-1]!='C'&&ch[i-1]!='G'&&ch[i-1]!='J'&&ch[i-1]!='K'&&ch[i-1]!='Q'&&ch[i-1]!='S'&&ch[i-1]!='Z'&&ch[i-1]!='X')
                    printf("2");
            }

           else if(ch[i]=='D'||ch[i]=='T')
            {
                if(ch[i-1]!='D'&&ch[i-1]!='T')
                    printf("3");
            }
            else if(ch[i]=='L')
            {
                if(ch[i-1]!='L')
                printf("4");
            }
            else if(ch[i]=='M'||ch[i]=='N')
            {
                 if(ch[i-1]!='M'&&ch[i-1]!='N')
                printf("5");
            }
            else if(ch[i]=='R')
            {
                if(ch[i-1]!='R')
                printf("6");
            }
        }
        printf("\n");
    }
    return 0;
}
