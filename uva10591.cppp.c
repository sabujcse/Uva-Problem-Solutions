#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,sum;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        int a=n;
        sum=0;
        while(n<9 || n>9)
        {
            if(n<=9)
            {
             sum=n;
             break;
            }
            while(n!=0)
            {
                int b= n%10;
                sum = sum+ (b*b);
                n = n/10;
            }
        }
        if(sum==1 || sum==7)
            printf("Case #%d: %d is a Happy number.\n",i,a);
        else
            printf("Case #%d: %d is an Unhappy number.\n",i,a);
    }
    return 0;
}
