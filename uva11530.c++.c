#include<stdio.h>

int main()
{
    int l,sum=0,i,t,j;
    char ch[100];
    while (scanf("%d",&t)==1)
    {
    for(j=0;j<=t;j++)
    {
        sum=0;
        gets(ch);
        l=strlen(ch);
        for(i=0;i<=l;i++)
        {
            if(ch[i]=='a')
                sum+=1;
            if(ch[i]=='b')
                sum+=2;
            if(ch[i]=='c')
                sum+=3;
            if(ch[i]=='d')
                sum+=1;
            if(ch[i]=='e')
                sum+=2;
            if(ch[i]=='f')
                sum+=3;
            if(ch[i]=='g')
                sum+=1;
            if(ch[i]=='h')
                sum+=2;
            if(ch[i]=='i')
                sum+=3;
            if(ch[i]=='j')
                sum+=1;
            if(ch[i]=='k')
                sum+=2;
            if(ch[i]=='l')
                sum+=3;
            if(ch[i]=='m')
                sum+=1;
            if(ch[i]=='n')
                sum+=2;
            if(ch[i]=='o')
                sum+=3;
            if(ch[i]=='p')
                sum+=1;
            if(ch[i]=='q')
                sum+=2;
            if(ch[i]=='r')
                sum+=3;
            if(ch[i]=='s')
                sum+=4;
            if(ch[i]=='t')
                sum+=1;
            if(ch[i]=='u')
                sum+=2;
            if(ch[i]=='v')
                sum+=3;
            if(ch[i]=='w')
                sum+=1;
            if(ch[i]=='x')
                sum+=2;
            if(ch[i]=='y')
                sum+=3;
            if(ch[i]=='z')
                sum+=4;
            if(ch[i]==' ')
                sum+=1;
        }
        if(j!=0)
        printf("Case #%d: %d\n",j,sum);
        }
      }
    return 0;
}

