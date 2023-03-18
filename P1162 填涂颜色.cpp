#include<bits/stdc++.h>
using namespace std;
int n ;
int dx[5]={0,-1,1,0,0};
int dy[5]={0,0,0,-1,1};
void dfs(int p,int q)
{
    int i;
    if (p<0||p>n+1||q<0||q>n+1||a[p][q]!=0) return ;
    a[p][q]=1;
    for (i=1;i<=4;i++) dfs(p+dx[i],q+dy[i]);
}
int main()
{
	cin >> n ;
	int a[n+5][n+5] = {0} ;
	for ( int i = 0 ; i < n ; i ++ )
	{
		for ( int j = 0 ; j < n ; j ++ )
		{
			cin >> a[i][j] ;
			if (b[i][j]==0) a[i][j]=0;
            else a[i][j]=2;
		}
	}  
        }
    dfs(0,0);
    for (int i=1;i<=n;i++)
	{
        for (j=1;j<=n;j++)
        if (a[i][j]==0) cout<<2<<" ";
        else cout<<b[i][j]<<' ';
        cout << endl ;
    }
}
    return 0;
}
// By Guy_AwA
