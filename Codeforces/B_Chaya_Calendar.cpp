#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int t;
    cin >>t;
    while(t--)
        solve();
}
void solve()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;++i)
        cin >> a[i];
    int trackYear = 0;
    for(int i=0;i<n;++i)
    {
        trackYear = (trackYear/a[i]+1)*a[i];
    }
    cout << trackYear <<endl;
}