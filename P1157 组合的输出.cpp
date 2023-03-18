#include<bits/stdc++.h>
using namespace std;
int r , a[100] , n ;
void dfs(int k)
{
    if(k>r)
	{
        for( int i = 1 ; i <= r ; i ++ ) cout << setw(3) << a[i] ;
        cout << endl ;
        return ;
    }
    for(int i = a[k-1] + 1 ; i <= n ; i ++ )
	{         
        a[k]=i;
        dfs(k+1);
    }
}  
int main()  
{   
    cin>>n>>r;
    dfs(1);
    return 0;  
}  
// By Guy_AwA
