#include<bits/stdc++.h>
using namespace std;
int n , x , ans ;
vector<int> a , b;
int main()
{
    cin >> n;
    for (int i = 0; i < n; ++i) 
	{
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < (int)a.size(); ++i) 
	{
        if (i == 0) b.push_back(a[0]);
        else  
		{ 
			if (a[i] >= b[b.size() - 1]) b.push_back(a[i]);
            else *upper_bound(b.begin(), b.end(), a[i]) = a[i];
            ans = b.size() ;
        }
    }
    cout << ans << endl;
    return 0 ;
}
