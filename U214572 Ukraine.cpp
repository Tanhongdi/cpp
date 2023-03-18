#include<bits/stdc++.h>
using namespace std;
string a ;
char f( char c )
{
	if (( c >= 'b' && c <= 'z' )||( c >= 'B' && c <= 'Z' )) return c - 1 ;
	else if ( c == 'a' ) return 'z' ;
	else if ( c == 'A' ) return 'Z' ;
}
int main()
{
	getline(cin, a); 
	for ( int i = 0 ; i < a.size() ; i ++ )
		cout << f(a[i]) ;
    return 0;
}
