#include<bits/stdc++.h>
using namespace std;
int n , m , x ;
int main()
{
	cin >> n >> m ;
	int a[n+5] = {0} ;
	while(m--) 
	{
		int x; 
		cin >> x ;
		if(x == 1) a[1] = 1 - a[1], a[2] = 1 - a[2], a[n] = 1 - a[n];
		else if(x == n) a[n] = 1 - a[n], a[n - 1] = 1 - a[n - 1], a[1] = 1 - a[1];
		else a[x] = 1 - a[x], a[x + 1] = 1 - a[x + 1], a[x - 1] = 1 - a[x - 1];
	}
	for ( int i = 1 ; i <= n ; i ++ )
		cout << a[i] << " " ;
    return 0;
}
// By Guy_AwA

