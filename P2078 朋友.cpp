#include<bits/stdc++.h>
using namespace std;
int n,m,p,h,ans=1,anss=1,a,b;
int f[20010][2];
int find(int s,int t)
{
	if(f[s][t]==s||f[s][t]==0)return f[s][t]=s;
    else return f[s][t]=find(f[s][t],t);
}
int main()
{
	cin >> n >> m >> p >> h ;
	for( int i = 1 ; i <= p ; i ++ )
	{
		cin >> a >> b ;
		int x = find( a , 0 ) ;
		int y = find( b , 0 ) ;
		if( x != y )
		{
			if( x > y ) swap( x , y );
			f[y][0] = x ;
		}
	}
	for( int i = 1 ; i <= h ; i ++ )
	{
		cin >> a >> b ;
		a = -a , b = -b ;
		int x = find( a , 1 ) ;
		int y = find( b , 1 ) ;
		if(x!=y)
		{
			if( x > y ) swap( x , y ) ;
			f[y][1] = x ;
		}
	}
	for( int i = 2 ; i <= max( n , m ) ; i ++ )
	{
		if( find(f[i][0] , 0 ) == 1 ) ans++ ;
		if( find(f[i][1] , 1 ) == 1 ) anss++ ; 
	}
	cout << min( ans , anss ) ;
	return 0;
}
// By Guy_AwA

