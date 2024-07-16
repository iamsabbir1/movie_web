#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin >> n >> m;
    int c[n+1][n+1]={0};

    for(int x = 1;x <=m ;x++)
    {
        cin >> i >> j;
        cin >> c[i][j] >> c[j][i];
    }

    for(int x = 1;x <=n ;x++)
    {
        for(int y = 1;y <=n ;y++)
            cout << c[x][y] << " ";
        cout << endl;
    }
}