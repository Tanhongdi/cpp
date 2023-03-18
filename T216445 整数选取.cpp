#include<bits/stdc++.h>
using namespace std;
int n , k , ans , m ;
int main()
{
	cin >> n >> m;
	int a[n+5];
	for ( int i = 0 ; i < n ; i ++)cin >> a[i];
	sort( a , a+n ) ;
	for ( int i = 0 ; i < n ; i ++)
    {
		k += a[i];
		if( k > m ) break ;
		ans ++ ;
    }
	cout << ans <<endl ;
	return 0;
}
// By Guy_AwA
