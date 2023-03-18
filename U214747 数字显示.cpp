#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k,x,ci;
    long long ans=0;
    cin >> n >> m >> k ;
    int a[m+1];
    for(int i=1;i<=m;i++)
        a[i]=1000001;
    for(int i=0;i<n;i++)
    {
        cin >> x >> ci ;
        a[x]=min(a[x],ci);
    }
    for(int i=1;i<=m;i++)
        ans+=a[i];
    cout<<min(ans,(long long)k);
    return 0;
}
