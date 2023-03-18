#include<bits/stdc++.h>
using namespace std;
int n , maxx ;
int main()
{
	cin >> n ;
	int a[n+5] , f[n+5] ;
	for ( int i = 0 ; i < n ; i ++ )
	{
		cin >> a[i] ;
	}
	f[0] = 1 ;
	for ( int i = 1 ; i <= n ; i ++ )
	{
		if ( a[i] > a[i-1] )
		{
			f[i] = f[i-1] + 1 ;
		}
		else f[i] = 1 ;
	}
	for ( int i = 0 ; i < n ; i ++ )
	{
		maxx = max( f[i] , maxx ) ;
	}
	cout << maxx + 1;
    return 0;
}
// By Guy_AwA

