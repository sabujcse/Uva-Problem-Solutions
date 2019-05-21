#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[5];
    int number, test, i, j, result, sum;
    cin>>test;
    while(test--)
    {
        scanf("%s-%d",ch,&number);
        sum = (26*26*(ch[0]-'A')+26*(ch[1]-'A')+(ch[2]-'A'));
        result = abs(sum - number);
        if(result<=100)
            printf("nice\n");
        else
           printf("not nice\n");
    }
    return 0;
}
