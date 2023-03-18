#include<bits/stdc++.h>
using namespace std;
int h , r , V1 , V ;
int main()
{
	cin >> h >> r ;
	V1 = 3 * r * r * h ; 
	V = V1 / 1000 ;
	for ( int i = 0 ; i < 100000 ; i ++ )
	{
		if ( V * i >= 20 )
		{
			cout << i ;
			break ;
		}
	}
    return 0;
}
