#include<bits/stdc++.h>
using namespace std;
const int fx[] = {0, -2, -1, 1, 2, 2, 1, -1, -2};
const int fy[] = {0, 1, 2, 2, 1, -1, -2, -2, -1};

inline int read()
{
    int num = 0; char c = getchar(), up = c;
    while(c < '0' || c > '9') up = c, c = getchar();
    while(c >= '0' && c <= '9') num = (num << 1) + (num << 3) + (c ^ '0'), c = getchar();
    return up == '-' ? -num : num;
}

int bx, by, mx, my;
int f[30];
bool s[30][30];

int main()
{
    bx = read(); by = read();
    mx = read(); my = read();
    bx += 2; by += 2; mx += 2; my += 2;
    f[2] = 1;
    s[mx][my] = 1;
    for(int i = 1;i <= 8; i++)
        s[ mx + fx[i] ][ my + fy[i] ]=1;
    for(int i = 2; i <= bx; i++)
	{
        for(int j = 2; j <= by; j++)
		{
            if(s[i][j])
			{
                f[j] = 0;
                continue;
            }
            f[j] += f[j - 1];
        }
    }
    cout << f[by] ;
    return 0;
}

// By Guy_AwA

