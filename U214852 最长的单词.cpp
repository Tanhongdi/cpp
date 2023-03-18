#include<bits/stdc++.h>
using namespace std;
int maxlong ;
string s ;
int main()
{
	
	while( cin >> s ) 
	{
		if ( s.size() > maxlong ) maxlong = s.size() ;	
	}

	cout << maxlong ;
    return 0;
}
