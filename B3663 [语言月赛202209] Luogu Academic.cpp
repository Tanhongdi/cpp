#include <bits/stdc++.h>
using namespace std;
int k=0;
string s;
int main()
{
    cin>>s;
    for(int i=0;i+4<s.length();i++)
        if(s[i]=='l'&&s[i+1]=='u'&&s[i+2]=='o'&&s[i+3]=='g'&&s[i+4]=='u')
            k++;
    cout << k ;
    return 0;
}
// By Guy_AwA

