#include<bits/stdc++.h>
using namespace std;
int n , k ;
int main()
{
	cin >> n >> k ;
	int a[n+5] ;
	for ( int i = 0 ; i < n ; i ++ ) cin >> a[i] ;
	sort(a,a+n+1) ;
	cout << a[k-1] ;
    return 0;
}
// By Guy_AwA
