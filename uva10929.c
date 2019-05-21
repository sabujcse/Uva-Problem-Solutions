#include<stdio.h>
#include<string.h>

int main()
{
    int length, i, count;
    char n[1050];
    while (1)
    {
        count = 0;
      scanf("%s",&n);
      length=strlen(n);
      for(i=0;i<length;i++)
      {
          count=count*10+n[i]-'0';
          count=count%11;
      }
      if(count==0&&length==1)
          break;
     else if(count==0)
       printf("%s is a multiple of 11.\n",n);
     else
       printf("%s is not a multiple of 11.\n",n);
    }
    return 0;
}

