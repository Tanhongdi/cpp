#include<bits/stdc++.h>
using namespace std;
int n , q , x ;
int main()
{
	cin >> n >> q ;
	string no[ n + 5 ] ;
	for ( int i = 1 ; i <= n ; i ++ ) cin >> no[i] ;
	for ( int j = 1 ; j <= q ; j ++ )
	{
		cin >> x ;
		cout << no[x] << endl ;
	}
    return 0;
}
//hytpc.mc.netease.com:25565
