#include<stdio.h>
int gcd(int i, int j)
{
    if(j==0)
     return i;
     else
        return gcd(j,i%j);
}
int main()
{
    int n,i,j,g;
   while(scanf("%d",&n)==1)
   {
       if(n==0)
       {
           break;
       }
    g=0;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
    {
        g+=gcd(i,j);
    }
    printf("%d\n",g);
   }
    return 0;
}
