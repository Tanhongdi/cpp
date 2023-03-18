#include<bits/stdc++.h>
using namespace std;
int n , k , s , ans ;
int main()
{
	cin >> n >> k ;
	for ( int i = 0 ; i < n ; i ++ )
	{
		cin >> s ;
		if ( s == k )  
			ans ++ ;
	}
	cout << ans ;
    return 0;
}
