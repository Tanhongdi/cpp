#include<bits/stdc++.h>
using namespace std;
struct node
{
    int l,r;  
}jgt[101];

int main()
{
    int n,x,ans=0;
    cin >> n >> x ;
    jgt[0].r=0;
    for(int i=1;i<=n;i++)
        cin >> jgt[i].l >> jgt[i].r ;
    for(int i=1;i<=n;i++)
        ans+=(jgt[i].r-jgt[i].l+1)+(jgt[i].l-jgt[i-1].r-1)%x;
   cout << ans ;
    return 0;
}
