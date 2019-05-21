#include<bits/stdc++.h>
using namespace std;
int main()
{
    char input[100];
    while(gets(input))
    {
        int length = strlen(input);

        char letters [] = " nabcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ`1234567890-=[]\\;',./";
        char mapping[] =  "   czaqsdfyghjbvui w etx  r  czaqsdfyghjbvui w etx  r   `1234567890op[klnm,";

        int mlength=strlen(letters);

          for(int i = 0; i < length; i++) {
        for(int j = 0; j < mlength; j++) {
            if(letters[j] == input[i]) {
                printf("%c",mapping[j]);
                break;
            }
        }
    } printf("\n");
    }
    return 0;
}
