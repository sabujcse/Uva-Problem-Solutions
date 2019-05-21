#include<stdio.h>
int main()
{
    char str[6];
    int l,i=1;
    while(1)
    {
        gets(str);
    if(str[0]=='*')
    {
        break;
    }
    l=strlen(str);
    if(l==4)
    {
        printf("Case %d: Hajj-e-Akbar\n",i);
    }
    else
    {
        printf("Case %d: Hajj-e-Asghar\n",i);
    }
    i++;
    }
}
