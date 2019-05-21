#include<stdio.h>

int f[15];
int r[15];

int main()
{
    int i;
    f[0]=1;
    for(i=1;i<=12;i++)
        f [i] =f [i-1]* i;
        r[2] =1;
    for(i=3;i<=12;i++)
        r[i] = (i-1) * (r[i-1]+ r[i-2]);

    int  testcase, number;
    scanf("%d", &testcase);
    while( testcase--)
    {
        scanf("%d", &number);
        printf("%d/%d\n",r[number],f[number]);
    }
    return 0;
}
