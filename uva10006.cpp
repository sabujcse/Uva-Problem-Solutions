#include<bits/stdc++.h>
using namespace std;
int checkcharmicel( int n)
{
    int rr = 0;
    int ary[]={561,1105,1729,2465,2821,6601,8911,10585,15841,29341,41041,46657,52633,62745,63973};
    for( int i =0; i<15; i++)
    {
        if(n == ary[i])
        {
            rr = 1;
            break;
        }
    }
    if(rr==1)
    {
        return true;
    }
    else

    {
        return false;
    }

}
int main()
{
     int n, x, number;
     while(scanf("%d",&n)&&n)
     {
        number = n;
        x = checkcharmicel( n );
        if(x==1)
        {
            printf("The number %d is a Carmichael number.\n",number);
        }
        else
        {
            printf("%d is normal.\n",number);
        }
     }
    return 0;
}
