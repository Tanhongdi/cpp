#include<bits/stdc++.h>
using namespace std;

int n , k , ans;
int maxd = -1 , mind = 0x7ffff;
int qwq[300005];

void add_ans(int &x , int &y)
{
	ans += min(x , y);
	if(x >= y) x -= y ,y = 0;
	else y -= x , x = 0;
}

int main()
{
	cin >> n >> k ;
	for(int i = 1 , d , m;i <= n;i++)
	{
		cin >> d >> m ;
		qwq[d] += m;
		maxd = max(maxd , d) , mind = min(mind , d);
	}
	for(int i = mind;i <= maxd + 1;i++)
	{ 
		int tmp = k;
		add_ans(tmp , qwq[i - 1]);
		add_ans(tmp , qwq[i]);
	}
	cout << ans ;
	return 0;
}
// By Guy_AwA

