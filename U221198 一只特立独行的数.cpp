#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n ;
    int a[n],b[n],a1=0,a2=0;
    for(int i=0;i<n;i++)
        scanf("%d",a+i);
    for(int i=0;i<n;i++)
    {
        b[i]=a[i]%2;
        if(b[i])
            a1++;
        else
            a2++;
    }
        if(a1==1)
            for(int j=0;j<n;j++)
            {
                if(b[j]==1)
                {
                    cout<<j+1;
                    return 0;
                }
            }
        else
            for(int j=0;j<n;j++)
            {
                if(b[j]!=1)
                {
                    cout<<j+1;
                    return 0;
                }
            }
}

