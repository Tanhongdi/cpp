#include<bits/stdc++.h>
using namespace std;
int n , b , c , sum , l , r , ans ;
int main()


{
	cin >> n ;
	int a[n+3] ;
	for(int i = 1 ; i <= n ; i ++ ) 
	{
		cin >> a[i] ;
		sum += a[i] ;
	}
	cin >> l >> r ;
	if( sum < n * l || sum > n * r )
	{
		cout<<"-1";
		return 0 ;
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]<l) b+=(l-a[i]);
		if(a[i]>r) c+=(a[i]-r);
	}
	ans = max( b , c ) ;
	cout << ans ;
    return 0;
}
// By Guy_AwA 
