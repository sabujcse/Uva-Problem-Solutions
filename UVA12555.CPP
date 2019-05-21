#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test, i, j,k=1;
    char ch[10];
    float a, b, sum;
    scanf("%d",&test);
    getchar();
    while(test--)
    {
        cin>>a;
        gets(ch);
        sum = a*0.5;
        for(i = 0; i<strlen(ch)-1; i++)
        {
            if(isdigit(ch[i]))
            {
                b = (( ch[i]-'0' ) * 0.05);
                sum = sum + b;
            }
        }
        printf("Case %d: %g\n",k,sum);
        k++;
    }
    return 0;
}
