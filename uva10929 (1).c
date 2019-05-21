#include<stdio.h>
#include<math.h>

int main()
{
    unsigned  int n;
    while (scanf("%ud",&n)!=EOF&&n!=0)
    {
    if(n%11==0)
    {
       printf("%u is a multiple of 11.\n",n);
    }
    else
    {
       printf("%u is not a multiple of 11.\n",n);
    }
    }
    return 0;
}

