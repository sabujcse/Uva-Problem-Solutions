#include<bits/stdc++.h>

using namespace std;
long int ary[2000005],i,testcase;
int main()
{
    while(scanf("%ld",&testcase)==1&&testcase>0)
    {
        for(i=0;i<testcase;i++)
        {
            scanf("%d",&ary[i]);
        }
        sort(ary,ary+i);
        for(i=0;i<testcase;i++)
        {
            printf("%d",ary[i]);
            if(i<testcase-1)
                printf(" ");
        }
        printf("\n");

    }
    return 0;
}
