#include<bits/stdc++.h>
using namespace std;
void div(char ch[],long long int n)
{
    long long int i,rem=0;
    int f=1;
    for(i=0;i<strlen(ch);i++)
    {
        rem = rem*10+ch[i]-'0';
        if(rem/n!=0)
            f=0;
        if(!f)
        {
            printf("%lld",rem/n);
        }
        rem=rem%n;
    }
    if(f)
        printf("0");
}

int rem(char ch[],long long n)
{
    long long i, rem=0;
    for(i=0;i<strlen(ch);i++)
    {
        rem=rem*10+ch[i]-'0';
        rem=rem%n;
    }
    return rem;
}

int main()
{
    char ch[100000],t;
    long long int n;
    long long int b;
    while(scanf("%s %c %lld",&ch,&t,&n)==3)
    {
        if(t=='/')
        {
            div(ch,n);
            printf("\n");
        }
        else
        {
             b=rem(ch,n);
            printf("%lld\n",b);
        }
    }
    return 0;
}
