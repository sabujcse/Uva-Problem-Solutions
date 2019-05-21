#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[5],b[5],c[5],d[5];
    int test, i, j, sum, sum1, sum3, p, q, r, s;
    scanf("%d",&test);
    while(test--)
    {
        sum = 0, sum1 = 0,sum3 = 0;
        p = 0, q = 0, r = 0, s= 0;
        scanf("%s%s%s%s",&a,&b,&c,&d);
        for(i =0; i<3; i+=2)
        {
            p = ( a[i]- '0' )*2;
            q = ( b[i]- '0' )*2;
            r = ( c[i]- '0' )*2;
            s = ( d[i]- '0' )*2;
            sum = sum+p/10+q/10+r/10+s/10+p%10+q%10+r%10+s%10;
        }
        for(j = 0; j<=3; j+=2)
        {
            p = ( a[j+1]- '0' );
            q = ( b[j+1]- '0' );
            r = ( c[j+1]- '0' );
            s = ( d[j+1]- '0' );
            sum1 += (p+q+r+s);
        }
       sum3 = sum1 + sum;
       if(sum3%10==0)
        printf("Valid\n");
       else
        printf("Invalid\n");
    }
    return 0;
}
