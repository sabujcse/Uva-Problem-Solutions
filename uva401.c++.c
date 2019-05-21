#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100];
    int i,j,len,c,k;
    while(scanf("%s",ch)!=EOF)
    {
        c=0;
        k=0;
        len=strlen(ch);
        for(j=0;j<len;j++)
        {
            if(ch[j]==ch[len-j-1])
            {
                k++;
            }
        }
        for(i=0;i<len;i++)
        {
            if((ch[i]=='A'&&ch[length-i-1]=='A')||(ch[i]=='E'&&ch[length-i-1]=='3')||
               (ch[i]=='H'&&ch[length-i-1]=='H')||(ch[i]=='I'&&ch[length-i-1]=='I')||
               (ch[i]=='J'&&ch[length-i-1]=='L')||(ch[i]=='L'&&ch[length-i-1]=='J')||
               (ch[i]=='M'&&ch[length-i-1]=='M')||(ch[i]=='O'&&ch[length-i-1]=='O')||
               (ch[i]=='T'&&ch[length-i-1]=='T')||(ch[i]=='U'&&ch[length-i-1]=='U')||
               (ch[i]=='V'&&ch[length-i-1]=='V')||(ch[i]=='W'&&ch[length-i-1]=='W')||
               (ch[i]=='X'&&ch[length-i-1]=='X')||(ch[i]=='Y'&&ch[length-i-1]=='Y')||
               (ch[i]=='Z'&&ch[length-i-1]=='5')||(ch[i]=='1'&&ch[length-i-1]=='1')||
               (ch[i]=='2'&&ch[length-i-1]=='S')||(ch[i]=='3'&&ch[length-i-1]=='E')||
               (ch[i]=='5'&&ch[length-i-1]=='Z')||(ch[i]=='8'&&ch[length-i-1]=='8'))
               c++;
        }
      if(len==k&&len==c)
      {
          printf("%s -- is a mirrored palindrome.\n\n",ch);
      }
      else if(len==k&&len!=c)
      {
          printf("%s -- is a regular palindrome.\n\n",ch);
      }
      else if(len!=k&&len==c)
      {
          printf("%s -- is a mirrored string.\n\n",ch);
      }
      else if(len!=k&&len!=c)
      {
          printf("%s -- is not a palindrome.\n\n",ch);
      }
    }
    return 0;
}

