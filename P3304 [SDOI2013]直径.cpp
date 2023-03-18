#include<bits/stdc++.h>
using namespace std;
const int maxn = 200010;
int n , tot , far , st[maxn] , fa[maxn] ;
long long maxd , dis[maxn] ;
bool isol[maxn] ;
struct node{
    int v, w, nxt ;
} edge[2*maxn] ;
inline void in(int x, int y, int z)
{
    edge[++tot].v = y;
    edge[tot].w = z;
    edge[tot].nxt = st[x];
    st[x] = tot; 
}
void dfs(int now, int f){
    fa[now] = f;
    if(maxd < dis[now]){
        far = now;
        maxd = dis[now];
    }
    for(int i = st[now]; i; i = edge[i].nxt){
        int to = edge[i].v;
        if(to != f){
            dis[to] = dis[now] + edge[i].w;
            (to, now);
        }
    }
}
void Liuhaoyu(int now, int f){
    if(maxd < dis[now])    maxd = dis[now];
    for(int i = st[now]; i; i = edge[i].nxt){
        int to = edge[i].v;
        if(to != f && !isol[to]){
            dis[to] = dis[now] + edge[i].w;
            Liuhaoyu(to, now);
        }
    }
}
int main(){
    cin >> n ;
    for(int i = 1, x, y, z; i < n; i++){
        cin >> x >> y >> z ;
        in(x, y, z);
        in(y, x, z);
    }
    dfs(1, 0);
    int op = far;
    maxd = dis[op] = 0;
    dfs(op, 0);
    cout << maxd ;
    for(int i = far; i; i = fa[i])
        isol[i] = 1;
    int l = op, r = far;
    bool flag = 0;
    for(int i = fa[far]; i != op; i = fa[i]){
        int ld = dis[i];
        int rd = dis[far] - dis[i];
        maxd = dis[i] = 0;
        Liuhaoyu(i, 0);
        if(maxd == ld && !flag)
		{
            l = i;
            flag = 1;
        	if(maxd == rd) r = i;
    	}
	}
    long long ans = 0;
    for(int i = r; i != l; i = fa[i]) ans++;
    cout << ans ;
    return 0;
}
// By Guy_AwA

