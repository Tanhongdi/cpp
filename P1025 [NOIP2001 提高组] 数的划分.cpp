#include<bits/stdc++.h>
using namespace std;
int n,k,ans;

void dfs(int last,int sum,int cur)
{
    if(cur==k)
    {
        if(sum==n) ans ++ ;
        return;
    }
    for(int i=last;sum+i*(k-cur)<=n;i++)
        dfs(i,sum+i,cur+1);
}
int main()
{
    cin >> n >> k ;
    dfs(1,0,0);
    cout << ans ;
}
// By Guy_AwA

