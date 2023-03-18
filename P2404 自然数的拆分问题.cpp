#include<bits/stdc++.h>
using namespace std;
int a[10005]= {1} , n ;
int search(int s,int t) 
{
	for(int i=a[t-1]; i<=s; i++) 
	{
		if(i<n) 
		{
			a[t]=i;
			s-=i;
			if(s==0) 
			{
				for(int k=1; k<=t-1; k++) cout << a[k] << "+" ;
				cout << a[t] << endl ;
			}
			else search(s,t+1);
			s+=i;
		}
	}
}
int main() 
{
	cin >> n ;
	search(n,1);
	return 0;
}
// By Guy_AwA

