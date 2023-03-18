#include<bits/stdc++.h>
using namespace std;
int n;
struct Stu
{
	string name;
	int yw,sx,yy;
}a[1005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i].name>>a[i].yw>>a[i].sx>>a[i].yy;
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			int ans=abs(a[i].yw - a[j].yw);
			int ans1=abs(a[i].sx - a[j].sx);
			int ans2=abs(a[i].yy - a[j].yy);
			int ans3=abs(a[i].yy + a[i].yw+a[i].sx - a[j].yw -a[j].sx-a[j].yy);
			if(ans<=5&&ans1<=5&&ans2<=5&&ans3<=10)
			{
				if( a[i].name > a[j].name )
				cout << a[j].name << " " << a[i].name << endl;
				else cout << a[i].name << " " << a[j].name << endl;
			}
		}
	}
	return 0;
}
//cn-zz-bgp-4.natfrp.cloud:48466
