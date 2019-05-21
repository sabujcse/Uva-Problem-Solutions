#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char ch[100];
   long int count,l,i,sum,b;
  while(gets(ch))
      {
          count=0;
        l=strlen(ch);
        for(i=0;i<l;i++)
        {
            b=ch[i]-'0';
            sum=b*(pow(2,l-i)-1);
            count+=sum;
        }
        if(count==0)
            break;
        printf("%ld\n",count);
    }
    return 0;
}
