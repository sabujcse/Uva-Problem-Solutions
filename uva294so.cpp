#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long  low,upp,t,i,j,num,division,s,max;
    cin>>t;
    while(t--)
    {
        scanf("%lld%lld",&low,&upp);
        max=0;
        if(low==1&&upp==0)
        {
            printf("Between 1 and 1, 0 has a maximum of 2 divisors.\n");
            continue;
        }
        for(i=low;i<=upp;i++)
        {
            division=0;
            int p=sqrt(i);
            for(j=1;j<=p;j++)
            {
                if(i%j==0){
                        division++;
                if(i/j!=j){
                        division++;
                }
            }
            if(max<division)
            {
                max=division;
                s=i;
            }
        }
    }
    printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",low,upp,s,max);
}
}
