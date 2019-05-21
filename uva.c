#include<stdio.h>
//#include<conio.h>
#define max 200005

int main()
{
   long int  num[max],i,j,k,t,s,n;

  //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);

    while (scanf("%ld",&n)!=EOF)
    {
        if(n==0)
        {
            break;
        }

    for(i=0;i<n;i++)
    {
        scanf("%ld",&num[i]);
    }
    for(j=1;j<n;j++)
        for(k=n-1;k>=j;k--)
    {
        if(num[k-1]>num[k])
        {
            t=num[k-1];
            num[k-1]=num[k];
            num[k]=t;
        }
    }
    for(s=0;s<n;s++)
    {
        printf("%ld",num[s]);
        printf(" ");
    }
    printf("\n");
    }
    return 0;
}
