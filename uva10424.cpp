#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[26];
    char ch1[26];
    int l1, l2, t1, t2,s1,s2;
    float result;
    while(gets(ch))
    {
        gets(ch1);
        l1 = strlen(ch);
        l2 = strlen(ch1);
        s1 = 0;
        for( int i =0; i<l1; i++)
        {
            if(ch[i]>='a' && ch[i]<='z')
            {
                s1 += ch[i] - 96;
            }
            else if (ch[i]>='A' && ch[i]<'Z')
            {
                s1 += ch[i] - 64;
            }
         }
        t1 = 0;
        while(s1!=0)
        {
            t1 += s1%10;
            s1 = s1/10;
        }
         if(t1>9)
            {
                s1 = t1;
                t1 = 0;
                while( s1!=0 )
                {
                    t1 += s1%10;
                    s1 = s1/10;
                }
            }
            s2 = 0;
        for( int i =0; i<l2; i++)
        {
            if(ch1[i]>='a' && ch1[i]<='z')
            {
                s2 += ch1[i] - 96;
            }
            else if(ch1[i]>='A' && ch1[i]<'Z')
            {
                s2 += ch1[i] - 64;
            }
        }
        t2 = 0;
        while(s2!=0)
        {
            t2 += s2%10;
            s2 = s2/10;
        }
        if( t2 > 9 )
        {
           s2 = t2;
           t2 = 0;
           while(s2!=0)
           {
               t2 += s2%10;
               s2 = s2/10;
           }
        }
        result = 0;
        if(t1 > t2)
            result = ((float)t2/(float)t1)*100;
        else
          result = ((float)t1/(float)t2)*100;
        printf("%0.2lf %%\n",result);

    }
    return 0;
}
