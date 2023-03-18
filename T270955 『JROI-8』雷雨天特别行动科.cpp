#include<bits/stdc++.h>
using namespace std;
long long x , k ;
int main()
{	
	cin >> x >> k ;
	for ( long long i = 0 ; i < k ; i ++ )
	{
		x += 1 ;
		if ( x % 3 == 0 ) x /= 3 ;
	}
	cout << x ;
    return 0;
}
// By Guy_AwA

