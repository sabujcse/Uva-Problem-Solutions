#include<stdio.h>

int main()
{
    int n,z,m,k,p,i,j,t,l;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
      scanf("%d%d%d",&n,&k,&p);
      i=(k+p);
      if(i>n)
      {
          m=i%n;
          if(m==0)
          {
              printf("Case %d: %d\n",j,n);
          }
          else
          printf("Case %d: %d\n",j,m);
      }
    else if(i<n)
      {
          l=k+p;
          printf("Case %d: %d\n",j,l);
      }
    else if (i==n)
       {
           printf("Case %d: %d\n",j,n);
       }
    }
    return 0;
}
