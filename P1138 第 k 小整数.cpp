#include<bits/stdc++.h>
using namespace std;
long long n , k , x ;
int main()
{
	cin >> n >> k ;
	long long a[n+5] ;
	for ( long long i = 0 ; i < n ; i ++ ) cin >> a[i] ;
	sort(a,a+n+1) ;
	x = unique(a, a + n) - a ;
	//for ( int i = 0 ; i < n ; i ++ ) cout << a[i] << " " ;
	if ( x < k ) cout << "NO RESULT" ;
	else cout << a[k-1] ;
    return 0;
}
// By Guy_AwA

