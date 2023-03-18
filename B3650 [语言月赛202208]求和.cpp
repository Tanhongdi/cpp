#include<bits/stdc++.h>
using namespace std;
long long ans = 0 , n ;
int main()
{
    cin>>n;
    for( long long i = 1 ; i <= n ; i ++ )
	{
        ans += i ;
        cout << ans << "\n" ;
    }
    return 0;
 } 
