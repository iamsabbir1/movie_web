#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b;
    cin >> a >> b;

    int m = max(a,b);
    int mi = min(a,b);
    if((m%mi)%2==0)
        cout << "Alice\n";
    else
        cout <<"Bob\n";


}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}