#include <bits/stdc++.h>
using namespace std;
void solve();

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}

void solve()
{
    vector<pair<char,bool>>v(3);
    char X[3][3];
    int x,y;

    v[0] = make_pair('A',false);
    v[1] = make_pair('B',false);
    v[2] = make_pair('C',false);

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin >> X[i][j];
            if(X[i][j]=='?')
            {
                x = i;
                y = j;
            }
        }
            
    }

    for(int i=0;i<3;i++)
    {
        if(X[x][i] =='A')
            v[0].second = true;
        else if(X[x][i]=='B')
            v[1].second = true;
        else if(X[x][i] == 'C') 
            v[2].second = true;
    }


    for(int i=0;i<3;i++)
    {
        if(v[i].second == false)
        {
            cout << v[i].first << endl;
            break;
        }
    }
}