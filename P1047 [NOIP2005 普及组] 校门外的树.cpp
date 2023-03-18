#include <bits/stdc++.h>
using namespace std;
int l , m , v , u , ans , a[10086] ;
int main ()
{
	cin >> l >> m ;
	for ( int i = 1 ; i <= m ; i ++ )
	{
		cin >> u >> v ;
	    for ( int j = u ; j <= v ; j ++ )
	        a[j] = 1 ;
	}
	for ( int i = 0 ; i <= l ; i ++ )
	{
		if ( a[i] == 0 ) ans ++ ;
	}
	cout << ans ;
	return 0 ;
 } 
// By Guy_AwA

