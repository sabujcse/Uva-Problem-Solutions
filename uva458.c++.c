#include<stdio.h>
#include<string.h>

int main()
{
    char ch[1000];
    int i,l;
    while(gets(ch))
    {
        i=strlen(ch);
        for(l=0;l<i;l++)
        printf("%c",ch[l]);
        printf("\n");
    }
    return 0;
}
