#include<bits/stdc++.h>
using namespace std;
int n , m , ans ;
char a[105][105];
void panduan(int x,int y) 
{
    if(x<1||y<1||x>n||y>m) return ;
	if(a[x][y+1]!='0') 
	{
		a[x][y+1]='0';
		panduan(x,y+1);
	}
	if(a[x][y-1]!='0') 
	{
		a[x][y-1]='0';
		panduan(x,y-1);
	}
	if(a[x+1][y]!='0') 
	{
		a[x+1][y]='0';
		panduan(x+1,y);
	}
	if(a[x-1][y]!='0') 
	{
		a[x-1][y]='0';
		panduan(x-1,y);
	}
}

int main() 
{
	cin >> n >> m ;
	for(int i = 1 ; i <= n ; i++)
		for(int j=1; j<=m; j++)
			cin>>a[i][j];
	for(int i=1; i<=n; i++) 
	{
		for(int j=1; j<=m; j++) 
		{
			if(a[i][j]!='0') 
			{
				a[i][j]=0;
				ans++;
				panduan(i,j);
			}
		}
	}
	cout << ans ;
	return 0;
}
//By Guy_AwA

