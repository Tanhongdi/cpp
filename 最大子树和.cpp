#include<bits/stdc++.h>
using namespace std ;
int maxSubTreeSum(int *arr, int n)
 {
    int maxSum = 0 , sum = 0 ;
    for (int i = 0; i < n; i++) 
	{
        sum =max(arr[i], sum + arr[i]);
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}
int n ;
int main() 
{
    cin >> n ;
	int arr[n+5] ;
    for ( int i = 0 ; i < n ; i ++ )
    	cin >> arr[i] ;
    int maxSum = maxSubTreeSum(arr, n);
    cout << maxSum ;
    return 0;
}
