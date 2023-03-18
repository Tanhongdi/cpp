#include<bits/stdc++.h>
using namespace std;
long long n , maxx = -9223372036854775807 , minn = 9223372036854775807 ;
int main()
{
	cin >> n ;
	long long asb[n+100] ;
	for ( long long i = 0 ; i < n ; i ++ )
	{
		cin >> asb[i] ;
		if ( asb[i] > maxx ) maxx = asb[i] ;
		if ( asb[i] < minn ) minn = asb[i] ;
	}
	for ( long long i = 0 ; i < n ; i ++ )
		cout << maxx - asb[i] << " " ;
	cout << endl ;
	for ( long long i = 0 ; i < n ; i ++ )
		cout << asb[i] - minn << " " ;
	cout << endl ;
    return 0;
}
// By Guy_AwA

