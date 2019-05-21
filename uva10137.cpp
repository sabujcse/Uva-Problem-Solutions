#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    double ave = 0,sum = 0;
    while(1)
    {
        cin>>test;
        if(test==0)
            break;
        sum = 0;
        ave = 0;
        double ar[test];
        for(int i =0; i< test; i++)
        {
          scanf("%lf",&ar[i]);
          sum+=ar[i];
        }
        ave = sum/test;
        double difa = 0, sum1 = 0, sum2 = 0;
        for(int j = 0; j< test; j++)
        {
            difa = (double)long ((ar[j] - ave)*100)/100.0;
        if(difa<0)
        {
            sum1 -=difa;
        }
        else
        {
            sum2+=difa;
        }
        }
    if(sum2>sum1)
    {
        printf("$%0.2lf\n",sum2);
    }
    else
        printf("$%0.2lf\n",sum1);
    }
    return 0;
}
