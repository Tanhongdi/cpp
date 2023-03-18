#include<bits/stdc++.h>
using namespace std;

pair <long long, long long> p[8010], k[8010]; 

int le[8010];

int main()
	{
	
		long long n, q; 
		cin >> n >> q ;
		for(long long i=0; i<n; i++) 
		{ 
			cin >> p[i].first ; 
			p[i].second = i;
			k[i] = p[i]; 
		}
		sort(k, k+n);
		for(long long i=0; i<n; i++) le[k[i].second] = i; 
		while(q --)
		{
			long long op; 
			cin >> op ;
			if(op == 2)
			{
				long long x; 
				cin >> x ;
				cout << le[--x]+1 << endl ;
			}
			else 
			{
				long long x, nownum;
				pair <long long, long long> lsnum;
				cin >> x >> nownum ;
				lsnum = p[--x];
				p[x].first = nownum;
				le[x] = 0;
				for(long long i=0; i<n; i++)
				{
					if(i == x) continue;
					if(p[i] < p[x]) ++le[x]; 
		
					if(p[i] < lsnum && p[i] > p[x]) ++le[i];
					if(p[i] > lsnum && p[i] < p[x]) --le[i];
				}
			}
		}
		
		return 0;
	}
