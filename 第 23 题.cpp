#include <iostream>
#include <string>
using namespace std;
int n,i,j,ans;
string s;
char get(int i)
{
	if(i<n) return s[i];
	else return s[i-n];	
}
int main()
{
	cin>>s;
	n=s.size();
	ans=0;
	for(i=1;i<=n-1;i++)
	{
		for(j=0;j<=n-1;j++)
			if(get(i+j)<get(ans+j))
			{
				ans=i;
				break;	
			}
			else if(get(i+j)>get(ans+j)) break;
	}
	for(j=0;j<=n-1;j++) cout<<get(ans+j);
	cout<<endl;
	return 0;	
}


