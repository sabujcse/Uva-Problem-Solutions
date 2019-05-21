#include<stdio.h>
#include<string.h>

bool is_vowel(char x)
{
    if(x == 'a'||x=='e'||x=='i'||x=='o'||x=='u')
        return true;
    return false;
}
bool check(char x[] , char y[])
{
    int i;
    int lengt_x;
    int lengt_y;
    lengt_x=strlen(x);
    lengt_y=strlen(y);
    if(lengt_x!=lengt_y)
        return false;
    for(i=0;i<lengt_x;i++)
    if(!is_vowel(x[i])&&x[i]!=y[i])
    {
        return false;
    }
    return true;
}
int main()
{
    char first[25];
    char second[25];
    int testcase;
    scanf("%d",&testcase);
    while(testcase--)
    {
        scanf("%s %s",&first,&second);
        if(check(first,second))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
