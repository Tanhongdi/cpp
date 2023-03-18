#include<bits/stdc++.h>
using namespace std;
int a1,a2,ans=0;

void Mydfs(int a1,int a2,int t)
{
	if(a1==0||a2==0)
	{
		ans=max(ans,t);
		return;
	}
	if(a1==1&&a2==1)
	{
		ans=max(ans,t);
		return;
	}
	if(a1>a2)
		Mydfs(a1-2,a2+1,t+1);
	else
		Mydfs(a1+1,a2-2,t+1);
}

int main()
{
	cin >>a1 >> a2 ;
	Mydfs(a1,a2,0);
	cout << ans ;
	return 0;
}
