#include<cstdio>
#include<vector>
#include<map>
using namespace std;

int main()
{
    int n;
    vector<int> v;
    map<int ,int> freq;
    while (scanf("%d",&n)!=EOF)
    {
        if (freq[n]==0) v.push_back(n);
        freq[n]=freq[n]+1;
    }
    int l=v.size();
    for (int i=0;i<l;i++)
        printf("%d %d\n",v[i],freq[v[i]]);
    return 0;
}
