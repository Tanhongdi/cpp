/*
	Name: 
	Copyright: 
	Author: 
	Date: 19/06/22 15:34
	Description: 
*/

#include<bits/stdc++.h>
using namespace std;
int i , n , ans , a[1005] ;
int main()
{
	cin >> n ;
	ans = n ;
	for( i = 0 ; n > 0; i ++ )    
    {    
        a[i] = n % 2 ;    
        n= n / 2 ;  
    }       
    for( i = i - 1 ; i >= 0 ; i -- ) cout << a[i] ; 
	cout << endl ;
	cout << std::oct << ans << endl;   
    cout << std::hex << ans << endl;  
    return 0;
}
