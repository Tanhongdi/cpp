#include<bits/stdc++.h>
using namespace std;
long long n , m ;
int main()
{
	cin >> n >> m ;
	long long ans[n+5][n+5] , b[n+1][m+1] ;
	for ( long long i = 0 ; i < n ; i ++ )
    	for ( long long j = 0 ; j < m ; j ++ )	
    		cin >> b[i][j] ;
	for(long long i = 1; i <= n; i++) 
    	for(long long j = 1; j <= m; j++) 
        	for(long long x = 1; x <= n; x++) 
            	for(long long y = 1; y <= m; y++) 
                	if(b[i][j] == b[x][y]) 
                    	ans[i][j] = max(ans[i][j], (i - x) * (i - x) + (j - y) * (j - y));
    for ( long long i = 0 ; i < n ; i ++ )
    {
    	for ( long long j = 0 ; j < m ; j ++ )
			cout << ans[i][j] << " " ;
    	cout << endl ;
	}
    return 0;
}
// By Guy_AwA

