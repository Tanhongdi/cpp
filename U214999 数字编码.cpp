#include<bits/stdc++.h>
using namespace std;
string a ;
int o , t ;
int main()
{
	cin >> a ;
	for ( int i = 0 ; i < a.size() ; i ++ )
	{
		if ( a[i] == '1' ) o ++ ;
		else 
		if ( a[i] == '0' ) t ++ ;
		cout << o << '1' << t << '0' ;
		
	}
    return 0;
}
//ÌâÄ¿:U214999 Êý×Ö±àÂë 
//time:19/06/22 15:34
