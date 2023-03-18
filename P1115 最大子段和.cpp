#include<bits/stdc++.h>
using namespace std;
int p , ans = -114514 ;
int main()
{
    cin >> p ;
    int n[p+5] , a[p+5] ;
    for(int i = 0 ; i < p ; i ++ )
    {
        cin >> n[i] ;
        a[i] = max( a[i-1] + n[i] , n[i] ) ;
        ans = max( ans , a[i] ) ;
    }
    cout << ans ;
    return 0;
}

// By Guy_AwA

