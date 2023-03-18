#include<bits/stdc++.h>
using namespace std;
int f[1005][1005],n,a[1005][1005],maxi=-1e9;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
			cin>>a[i][j];
	for(int x=1;x<=n;x++)
		for(int y=1;y<=x;y++)
			f[x][y]=max(f[x-1][y],f[x-1][y-1])+a[x][y];
	for(int i=1;i<=n;i++)
		if(f[n][i]>maxi)maxi=f[n][i];
	cout<<maxi;
	return 0;
}
