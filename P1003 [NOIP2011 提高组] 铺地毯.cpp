#include<bits/stdc++.h>
using namespace std;
int a[10001],b[10001],g[10001],k[10001],q,i,j,d,x,y;
int main()
{
	cin>>q;
	for(d=1;d<=q;d++)
		cin>>a[d]>>b[d]>>g[d]>>k[d];
	cin>>x>>y;
	for(d=q;d>=1;d--)
		if(x>=a[d]&&x<=g[d]+a[d]&&y>=b[d]&&y<=k[d]+b[d])
		{
			cout<<d;
			return 0;
		}
	cout<<"-1";
	return 0;
}
// By Guy_AwA

