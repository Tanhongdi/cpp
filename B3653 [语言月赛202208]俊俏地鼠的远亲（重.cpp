#include<bits/stdc++.h>
using namespace std;
long long n , m , maxx ;
long long mymax(long long q , long long p )
{
	if ( q >= p ) return q ;
	else return p ;
}
int main()
{
	cin >> n >> m ;
	long long a[n+5][m+5] , b[n+5][m+5] ;
	for ( long long i = 0 ;  i < n ; i ++ )
	    for ( long long j = 0 ; j < m ; j ++ ) 
	    	cin >> a[i][j] ;
	for ( long long i = 0 ; i < n ; i ++ )
	{
		for ( long long j = 0 ; j < m ; j ++ )
		{
			maxx = -114514 ;
			for ( long long k = 0 ; k < n ; k ++ )
			{
				for ( long long l = 0 ; l < m ; l ++ )
				{
					if ( a[i][j] == a[k][l] )
					{
						maxx = mymax(maxx,(i-k)*(i-k)+(l-j)*(l-j)) ;
					}
				}
			}
			b[i][j] = maxx ;
		}
	}
	for ( long long i = 0 ;  i < n ; i ++ )
	{
	   	for ( long long j = 0 ; j < m ; j ++ ) 
    		cout << b[i][j] << " " ;
		cout << endl ;
	}
	return 0;
}
// By Guy_AwA

