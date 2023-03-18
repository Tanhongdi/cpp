#include<bits/stdc++.h>
using namespace std;
char s[1005],s1[1005],s2[1005],sum[1005];
int i;
void change(char *s)
{
    int i,k,l=strlen(s);
    s[l-1]=' ';
    for (i=10;s[i]!=' ';i++) s1[i-10]=s[i];
    for (;s[i]!='@';i++);
    for (i+=11,k=i;s[i]!=' ';i++) s2[i-k]=s[i];
    for (;i<l;i++)
        if (s[i]=='@'){
            s2[0]=' ';
            return;
        }
}
bool cmp(char *s1,char *s2)
{
    int l1=strlen(s1),l2=strlen(s2);
    if (l1!=l2) return 0;
    for (int i=0;i<l1;i++)
    
        if (s1[i]!=s2[i]) return 0;
    return 1;
}
int main()
{
    fgets(s,1000,stdin);
    change(s);
    memcpy(sum,s2,sizeof(s2));
    while (fgets(s,1000,stdin))
	{
        i++;
        memset(s1,0,sizeof(s1));
        memset(s2,0,sizeof(s2));
        change(s);
        if (cmp(s1,sum))
		{
            printf("Successful @yyy loves %s attempt",s1);
            return 0;
        }
        if (!cmp(s2,sum))
		{
            printf("Unsuccessful @yyy loves %s attempt\n%d\nyyy loves %s",sum,i+1,s1);
            return 0;
        }
    }
    cout << "Unsuccessful @yyy loves " << sum << " attempt"<< i << endl <<"Good Queue Shape" ;
    return 0;
}
// By Guy_AwA
