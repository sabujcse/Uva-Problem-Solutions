#include<bits/stdc++.h>
using namespace std;
int main()
{
    int student[100001];
    int test, ns;
    int  ins,b;
    cin>>test;
    for( int k = 1; k <= test; k++)
    {
        ins = 1;
        scanf("%d",&ns);
        for( int i = 0; i< ns; i++)
        {
            scanf("%d",&student[i]);
            if(ins==student[i])
            {
                ins++;
            }
        }

        //for( int j = 0; j< ns; j++)
        //{
            //if(ins == student[j])
            //{
                //ins++;
           // }
        //}

        printf("Case %d: %d\n",k,ns-ins+1);

    }
    return 0;
}
