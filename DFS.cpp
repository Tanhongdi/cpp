#include<bits/stdc++.h>
const int maxn = 1005 ;
using namespace std;
int G[maxn][maxn] ;
int n , m , u , v ;
bool vis[maxn];
void dfs ( int now )
{
	cout << now << " " ;
	vis[now] = 1 ;
	for ( int i = 1 ; i <= n ; i ++ ) 
		if ( G[now][i] == 1 && vis[i] == 0 ) 
			dfs(i) ;
}
int main()
{
    cin >> n >> m ;
    while ( m -- )
    {
    	cin >> u >> v ;
    	G[u][v] = 1 ;
	}
	dfs(1);
    return 0;
}

