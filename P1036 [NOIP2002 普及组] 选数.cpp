#include<bits/stdc++.h>
using namespace std;
bool imp(int a)
{
    for(int i = 2; i * i <= a; i++) if(a % i == 0) return false;
    return true;
}

int n,k;
int a[25];
long long ans;

void dfs(int m, int sum, int startx)
{
    if(m == k)
	{
        if(imp(sum))
            ans++;
        return ;
    }
    for(int i = startx; i < n; i++)
        dfs(m + 1, sum + a[i], i + 1);
    return ;
}

int main()
{
    cin >> n >> k ;
    for(int i = 0; i < n; i ++ ) cin >> a[i] ;
    dfs (0 , 0 , 0) ;
    cout << ans ;
    return 0;
}
// By Guy_AwA

