#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> x(n + 1), a(n + 1);
    for (int i = 2; i <= n; i++)
        cin >> x[i];
    a[1] = 1000;

    for (int i = 2; i <= n; i++)
        a[i] = (a[i - 1] + x[i]);
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
    cout << endl;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
        solve();
}