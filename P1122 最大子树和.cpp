#include<bits/stdc++.h>
using namespace std;
int n, a[16005], f[16005], ans = -2147483647 ;
vector <int> G[16005];
void dfs(int u, int fa) 
{
    f[u] = a[u];
    for(int i = 0; i < G[u].size(); i++) 
	{
        int v = G[u][i];
        if (v == fa) continue;
        dfs(v, u);
        if (f[v] >= 1) f[u] += f[v];
    }
}
int main() 
{
    cin >> n ;
    for (int i = 1; i <= n; i++) cin >> a[i] ;
    for (int i = 1; i < n; i++) 
	{
        int u, v;
        cin >> u >> v ;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    dfs(1, 0);
    for(int i = 1; i <= n; i++) ans = max(ans, f[i]) ;
    cout << ans ;
}
// By Guy_AwA

