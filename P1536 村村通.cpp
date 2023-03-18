#include <bits/stdc++.h>
using namespace std;
int n,m,x,y,ans,f[100005];
bool yqwe = false;
int find(int x)
{
	if (f[x]==x) return x;
	else return f[x]=find(f[x]);
}
void merge(int x , int y)
{
	f[find(x)] = find(y) ;
}
int main()
{
	while (cin >> n)
	{
		if ( n == 0 ) break ;
		cin >> m ;
		for (int i = 1 ; i <= n ; i ++ ) f[i]=i;
		for (int i = 1 ; i <= m ; i ++ )
		{
			cin >> x >> y ;
			merge(x,y) ;
		}
		ans = 0 ;
		for ( int i = 1 ; i <= n ; i ++ )
		{
			if ( f[i] == i ) ans ++ ;
		}
		cout << ans - 1 << endl ;
	}	
	return 0;
} 
// By Guy_AwA

