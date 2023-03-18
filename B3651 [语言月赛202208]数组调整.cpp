#include<bits/stdc++.h>
using namespace std;
long long n , k , sum ;
int main()
{
	cin >> n >> k;
	for(int i = 1, x; i <= n; i++) 
	{
    	cin >> x;
    	if(i == k) sum -= x;
    	else sum += x;
	}
	cout << sum ;
    return 0 ;
}
// By Guy_AwA

