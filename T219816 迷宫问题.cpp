#include<bits/stdc++.h>
using namespace std;
int n , m , js ;
int main()
{
	cin >> n >> m ;
	char a[n+5][m+5] ;
	for ( int i = 0 ; i < n ; i ++ )
	{
		for ( int j = 0 ; j < m ; j ++ )
		{
			cin >> a[i][j] ;
			
		}
	}
	for( int i = 0 ; i < n ; i ++ )
		for ( int j = 0 ; j < m ; j ++ )
			if ( a[i][j] == "#" )
				js ++; 
	cout << js * 3 ;
    return 0;
}
// By Guy_AwA

