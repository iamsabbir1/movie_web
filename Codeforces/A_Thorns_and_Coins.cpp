#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int coin = 0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='@')
            coin++;
        else if(s[i]=='.')
            continue;
        else if(s[i+1]=='*')
            break;
        if(i==n-1)
            break;
    }
    cout << coin <<endl;
}