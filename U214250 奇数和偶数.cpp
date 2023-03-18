#include<bits/stdc++.h>
using namespace std;
string a ;
int n ;
int main()
{
	cin >> n ;
	for ( int i = 0 ; i < n ; i ++ )
	{
		cin >> a ;
		if ( a[a.size() - 1 ] % 2 == 1 ) cout << "odd" << endl ;
		else cout << "even" << endl ;
	}
    return 0;
}
