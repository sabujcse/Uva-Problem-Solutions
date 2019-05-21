#include<bits/stdc++.h>

using namespace std;
int prime(int n)
{
    int i;
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0)
        {
            return 0;
        }
        else
            return 1;
    }
}
int main()
{
    int number,testcase,i,j,x,n;
    cin>>testcase;
    for(j=0;j<testcase;j++)
    {
        scanf("%d",&number);
        if(prime(number)==1)
        {
            x=pow(2,number)-1;
            if(prime(x)==1)
            cout<<"yes"<<endl;
            else
            cout<<"No"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
    return 0;
}
