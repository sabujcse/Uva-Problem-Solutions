#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
map< string , char> mp;
void o_dah_dah_table()
{
    mp[".-"] = 'A';       mp[".---"] = 'J';     mp["..."] = 'S';      mp[".----"] = '1';    mp[".-.-.-"] = '.';    mp["---..."] = ':';
    mp["-..."] = 'B';     mp["-.-"] = 'K';      mp["-"] = 'T';        mp["..---"] = '2';    mp["--..--"] = ',';    mp["-.-.-."] = ';';
    mp["-.-."] = 'C';     mp[".-.."] = 'L';     mp["..-"] = 'U';      mp["...--"] = '3';    mp["..--.."] = '?';    mp["-...-"] = '=';
    mp["-.."] = 'D';      mp["--"] = 'M';       mp["...-"] = 'V';     mp["....-"] = '4';    mp[".----."] = '\'';   mp[".-.-."] = '+';
    mp["."] = 'E';        mp["-."] = 'N';       mp[".--"] = 'W';      mp["....."] = '5';    mp["-.-.--"] = '!';    mp["-....-"] = '-';
    mp["..-."] = 'F';     mp["---"] = 'O';      mp["-..-"] = 'X';     mp["-...."] = '6';    mp["-..-."] = '/';     mp["..--.-"] = '_';
    mp["--."] = 'G';      mp[".--."] = 'P';     mp["-.--"] = 'Y';     mp["--..."] = '7';    mp["-.--."] = '(';     mp[".-..-."] = '"';
    mp["...."] = 'H';     mp["--.-"] = 'Q';     mp["--.."] = 'Z';     mp["---.."] = '8';    mp["-.--.-"] = ')';    mp[".--.-."] = '@';
    mp[".."] = 'I';       mp[".-."] = 'R';      mp["-----"] = '0';    mp["----."] = '9';    mp[".-..."] = '&';
}
int main()
{
    o_dah_dah_table();
    int TC;
    sc("%d",&TC);
    char ss[ 2010 ], SP[ 11 ];
    getchar();
    for( int i = 1; i<= TC; i++ ){
        gets( ss );
        pf("Message #%d\n",i);
        int ll = strlen( ss );
        int kk = 0;
        while( kk < ll )
        {
            if( ss[ kk ] == ' ' )
            {
                if( ss[ ++kk ] == ' ')
                {
                    cout<<' ';kk++;
                }
                continue;
            }
        sscanf(ss+kk, "%s", &SP);
        cout<<mp[SP];
        while( kk < ll && ss[ kk ] != ' ' ) kk++;
        }
        cout<<endl;
        if( i != TC ) cout<<endl;
    }
    return 0;
}
