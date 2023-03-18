#include<bits/stdc++.h>
using namespace std;
int n,a,b,p=0;
bool pd=true;
int main()
{
    cin >> n >> a >> b ;
  int k[n+2],lift[n+2];
    for(int i=1;i<=n;i++)
    {
        k[i]=-1;
        cin >> lift[i] ;
    }
    k[a]=0;
    while(k[b]==-1 && pd)
    {
        pd=false;
        for(int i=1;i<=n;i++)
            if(k[i]==p)
            {
                int j=i+lift[i];
                if(j<=n && k[j]==-1)
                {
                    k[j]=p+1;
                    pd=true;
                }
                j=i-lift[i];
                if(j>0 && k[j]==-1)
                {
                    k[j]=p+1;
                    pd=true;
                }
            }
        p++;
    }
    cout << k[b] ;
    return 0;
}
