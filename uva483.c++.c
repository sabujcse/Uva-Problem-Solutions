#include<stdio.h>
#include<string.h>

int main()
{
    char ch[1000],rev[1000];
    while(gets(ch))
    {
        strrev(ch);
        printf("%s",ch);
        printf("\n");

    }
    return 0;
}
