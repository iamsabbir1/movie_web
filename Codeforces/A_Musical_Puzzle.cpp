#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    set<string> s1;
    cin >> n >> s;
    
    for(int i=s.size()-1; i >=1;i--)
    {
        string s2 = s.substr(i-1,2);
        s1.insert(s2);
    }
    cout << s1.size() << endl;
   
}
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    
    return 0;
}