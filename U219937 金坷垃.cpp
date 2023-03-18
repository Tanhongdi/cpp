#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n , m , x ;
	int L , R ;
	scanf("%d%d",&n,&m) ;
	int a[n+1] ;
    *a=0;
	for ( int i = 1 ; i <= n ;i ++ )
	{
		cin >> x ;
		a[i] = a[i-1] + x ;
	}
	for ( int i = 1 ; i <= m ; i ++ )
	{
		scanf("%d%d",&L,&R) ;
		cout << a[R] - a[L-1] << endl ;
	}
    return 0;
}
