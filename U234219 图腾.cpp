#include<bits/stdc++.h>
using namespace std;
char qwq ;
int a[27] = {0} , maxn = 0 , n  ;
int main()
{
	cin >> n ;
	for ( int i = 1 ; i < n  ;  )
	{
		cin >> qwq ;
		switch(qwq)
		{
            case 'A':a[1]++;break;
            case 'B':a[2]++;break;
            case 'C':a[3]++;break;
            case 'D':a[4]++;break;
            case 'E':a[5]++;break;
            case 'F':a[6]++;break;
            case 'G':a[7]++;break;
            case 'H':a[8]++;break;
            case 'I':a[9]++;break;
            case 'J':a[10]++;break;
            case 'K':a[11]++;break;
            case 'L':a[12]++;break;
            case 'M':a[13]++;break;
            case 'N':a[14]++;break;
            case 'O':a[15]++;break;
            case 'P':a[16]++;break;
            case 'Q':a[17]++;break;
            case 'R':a[18]++;break;
            case 'S':a[19]++;break;
            case 'T':a[20]++;break;
            case 'U':a[21]++;break;
            case 'V':a[22]++;break;
            case 'W':a[23]++;break;
            case 'X':a[24]++;break;
            case 'Y':a[25]++;break;
            case 'Z':a[26]++;break;
            default :case '\n': i ++ ;
		}
	}
	for ( int i = 0 ; i < 26 ; i ++ )
		if ( a[i] >= maxn ) maxn = a[i] ;
	for ( int i = maxn - 1; i > 0 ; i -- )
	{
		for ( int j = 1 ; j < 27 ; j ++ )
		{
			if ( a[j] >= i ) cout << "* " ; 
			else cout << "  " ;
		}
		cout << endl ;
	}
	for ( int i = 0 ; i < 26 ; i ++ ) cout << char(i+'A') << " " ;
    return 0;
}
