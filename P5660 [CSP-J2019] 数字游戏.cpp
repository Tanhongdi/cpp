#include<bits/stdc++.h>
using namespace std;
int ans , qw3 = 1 ;
char s[8] ;
int main()
{
    for ( int i = 1 ; i <= 8 ; i ++ )
	{
		cin >> s[i] ;
		if ( s[i] == '1' )
		 	ans ++ ;
		else
		{
			ans ++ ;
			ans -= qw3 ;
		}
	}
    cout << ans ;
    return 0;
}
