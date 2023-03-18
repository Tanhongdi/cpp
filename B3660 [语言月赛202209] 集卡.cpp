#include<bits/stdc++.h>
using namespace std;
int t , n , x;
int main()
{
	cin >> t ;
	for ( int w = 0 ; w < t ; w ++ )
	{
		bool flag = 0 ;
		cin >> n ;
		for ( int i = 0 ; i < n ; i ++ )
		{
			cin >> x ;
			if ( x == 0 ) flag = 1 ;
		}
		if ( flag ) cout << "yes" << endl ;
		else cout << "no" << endl ;
	}
    return 0;
}
// By Guy_AwA

