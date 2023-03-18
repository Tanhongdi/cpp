#include<bits/stdc++.h>
using namespace std;
int n , x[10086] ;
int main()
{
	cin >> n ;
	for (int i = 0 ; i < n ; i ++ )
    {
    	cin >> x[i] ;
    	if ( x[i] % 2 != 0 ) 
    	{
    		cout << x[i] << " " ;
		}
	}
	cout << endl ;
	for (int i = 0 ; i < n ; i ++ )
    {
    	if ( x[i] % 2 == 0 ) 
    	{
    		cout << x[i] << " " ;
		}
	}
	return 0;
}
// By Guy_AwA

