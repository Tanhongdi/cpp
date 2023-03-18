#include<bits/stdc++.h>
using namespace std;
long long a[200005],n;
long long maxi=INT_MIN;
int main()
{
	cin>>n;
	long long dp[n+1] ;
	for(int i = 1 ; i <= n ; i ++ ) cin>>a[i];
	dp[1]=a[1];
	for(int i = 2 ; i <= n ; i ++ ) dp[i]=max(a[i],(dp[i-1]+a[i]));
	for(int i = 1 ; i <= n ; i ++ ) maxi = max(maxi,dp[i]);
	cout<<maxi;
	return 0;
}
