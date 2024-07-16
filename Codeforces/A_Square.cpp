#include <bits/stdc++.h>
using namespace std;
void solve();
float distance(int x1,int y1,int x2,int y2);
void solve()
{
    int xy[4][2];
    set<int>s;
    for(int i=0;i<4;++i)
    {
        for(int j=0;j<2;++j)
        {
            cin >> xy[i][j];
        }
    }
    for(int i=0;i<4;++i)
    {
        for(int j=i+1;j<4;j++)
        {
            s.insert(distance(xy[i][0],xy[i][1],xy[j][0],xy[j][1]));
        }
    }

    set<int>::iterator it=s.begin();
    cout << (*it) * (*it)<<endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--) solve();
}
float distance(int x1,int y1,int x2,int y2)
{
    float dis = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    return dis;
}
