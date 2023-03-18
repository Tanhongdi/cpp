#include<bits/stdc++.h>
using namespace std ;
int n , m , p , a[1000005] , q , w ;
int get(int wc)
{
	if ( wc == a[wc] ) return wc ;
	else return get(a[wc]) ;
}
void love(int x , int y)
{
	a[get(x)] = get(y) ;
}
int main ()
{
	cin >> n >> m >> p ;
	for ( int i = 1 ; i <= n ; i ++ ) a[i] = i ;
	for ( int i = 1 ; i <= m ; i ++ )
	{
		cin >> q >> w ;
		love( q , w ) ;
	}
	for ( int i = 1 ; i <= p ; i ++ )
	{
		cin >> q >> w ;
		if ( get(q) == get(w) ) cout << "Yes" << endl ;
		else cout << "No" << endl ;
	}
	return 0 ;
}
// By Guy_AwA

