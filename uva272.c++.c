#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100000];
    long int i,l,p=0;
    while(gets(ch))
    {
        l=strlen(ch);
        for(i=0;i<l;i++)
        {
            if(ch[i]=='"')
            {
            p=p+1;
            if(p%2==1)
                printf("``");
            else
                printf("''");
            }
            else
                printf("%c",ch[i]);
        }
          printf("\n");
      }

    return 0;
}
