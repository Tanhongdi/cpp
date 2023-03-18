#include <bits/stdc++.h>
using namespace std;
int n , x , a[10005] ;
bool vis[10005] ;
bool prime(int x , int y)
{
  if ( x + y < 2 ) return false ;
  for ( int i = 2 ; i * i <= x + y ; i ++ )
    if ( (x + y) % i == 0 ) return false ;
  return true ;
}
void dfs (int now)
{
  if ( now > n && prime(a[1],a[n]))
  {
    for ( int i = 1 ; i <= n ; i ++ )
      cout << a[i] << " ";
    cout << endl ;
  }
  for ( int i = 2 ; i <= n ; i++ )
  {
    if ( vis[i] == 0 && prime(i,a[now-1]))
    {
      a[now] = i ;
      vis[i] = 1 ;
      dfs(now+1) ;
      vis[i] = 0 ;
    } 
  }
}
int main()
{
  cin >> n ;
  a[1] = 1 ;
  dfs( 2 ) ;  
  return 0;
} 

