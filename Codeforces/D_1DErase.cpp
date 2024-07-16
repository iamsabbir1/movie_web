#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
void solve();
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}

void solve()
{
    int n,k;
    string s;
    cin >> n >> k >> s;

    int time = 0,rem=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='B')
        {
            time++;
            i+=(k-1);
        }

        else
            rem = s.size()-i+1;
    }

    cout << time <<endl;
}
