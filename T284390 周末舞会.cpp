#include<bits/stdc++.h>
using namespace std;
queue <int> q;
int n,a[114514],b[114514],c[114514],f[114514],f1[114514],f2[114514],vis[114514],ans;
int main()
{
    cin >> n ;
    for (int i=1; i<=n; i++) cin >> a[i] and f2[a[i]] = i ;
	for (int i=1; i<=n; i++) cin >> b[i] ;
    for (int i=1; i<=n; i++) cin >> c[i] ;
    for (int i=1; i<=n; i++) f[b[i]]++ , f1[c[i]]++;
	for (int i=1; i<=n; i++)
		if (f[i]==0 || f1[i]==0)
			q.push(i);
    while (q.size()) 
	{
        int xx=q.front(); q.pop();
        if (vis[f2[xx]]) continue;
        vis[f2[xx]]=1;
        f[b[f2[xx]]]--;
        f1[c[f2[xx]]]--;
        if (f[b[f2[xx]]]==0)
            q.push(b[f2[xx]]);
        if (f1[c[f2[xx]]]==0)
            q.push(c[f2[xx]]);
        ans++;
    }
    cout << ans ;
    return 0;
}
// By Guy_AwA

