#include<string.h>
#include<string.h>

int main()
{
    char ch[14];
    int i=1;
    while(scanf("%s",ch)==1)
    {
        if(!strcmp(ch,"#"))
        {
            break;
        }
        else if(!strcmp(ch,"HELLO"))
        {
            printf("Case %d: ENGLISH\n",i);
        }
        else if(!strcmp(ch,"HOLA"))
        {
            printf("Case %d: SPANISH\n",i);
        }
        else if(!strcmp(ch,"HALLO"))
        {
            printf("Case %d: GERMAN\n",i);
        }
        else if(!strcmp(ch,"BONJOUR"))
        {
            printf("Case %d: FRENCH\n",i);
        }
        else if(!strcmp(ch,"CIAO"))
        {
            printf("Case %d: ITALIAN\n",i);
        }
        else if(!strcmp(ch,"ZDRAVSTVUJTE"))
        {
            printf("Case %d: RUSSIAN\n",i);
        }
        else
        {
            printf("Case %d: UNKNOWN\n",i);
        }
        i++;
    }
    return 0;
}
