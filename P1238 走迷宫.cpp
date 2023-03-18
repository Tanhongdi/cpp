#include<bits/stdc++.h>
using namespace std;

const int mx[4]={0,-1,0,1};
const int my[4]={-1,0,1,0};

int m,n;
int sx,sy,ex,ey;
bool flag=0;
bool vis[20][20]={{0},{0}};

vector <int> px;
vector <int> py;
void dfs(int x,int y)
{
    if(x==ex&&y==ey)
    {
        if (flag==1)
			cout << endl ;
		else flag=1;
        for(unsigned int i=0;i<px.size()-1;i++)
        {
            cout<<"("<<px[i]<<","<<py[i]<<")"<<"->";
        }
        cout<<"("<<ex<<","<<ey<<")";
    }
    for(int i=0;i<4;i++)
    {
        if(vis[x+mx[i]][y+my[i]]==1)
            continue;
        vis[x+mx[i]][y+my[i]]=1;
        px.push_back(x+mx[i]);
        py.push_back(y+my[i]);
        dfs(x+mx[i],y+my[i]);
        vis[x+mx[i]][y+my[i]]=0;
        px.pop_back();
        py.pop_back();
    }
}
int main ()
{
	bool map[20][20]={{0},{0}};	
    cin >> m >> n ;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int temp;
            cin >> temp ;
            map[i][j]=(temp==1?true:false);
            if(map[i][j]==0)vis[i][j]=1;
        }
        getchar();
    }
    cin >> sx >> sy ;
    getchar();
    cin >> ex >> ey ;
    for(int i=0;i<=m+1;i++)
        vis[i][0]=1,vis[i][n+1]=1;
    for(int i=0;i<=n+1;i++)
        vis[0][i]=1,vis[m+1][i]=1;
    px.push_back(sx);
    py.push_back(sy);
    vis[sx][sy]=1;
    dfs(sx,sy);
    if(!flag)cout << -1 ;
    return 0;
}
