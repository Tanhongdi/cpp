#include<bits/stdc++.h>
using namespace std;
struct fc
{
	int num;
	int score;
}a[5010];
int cmp (fc n,fc m)
{
	if (n.score==m.score) return n.num<m.num;
	return n.score>m.score;
}
using namespace std;
int main()
{
	int n,m,lq;
	cin>>n>>m;
	lq=floor(m*1.50);
	for (int i=1;i<=n;++i) cin >> a[i].num >> a[i].score ;
	sort(a+1,a+n+1,cmp);
	cout<<a[lq].score<<" ";
	int i = lq;
	while (a[i].score==a[i+1].score&&i<=n) i++;
	cout<<i<<endl;
	for (int j=1;j<=i;++j) cout<<a[j].num<<" "<<a[j].score<<endl;
	return 0;
}
// By Guy_AwA

