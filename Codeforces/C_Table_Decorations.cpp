#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    ll r, g, b, ans = 0;
    cin >> r >> g >> b;
    vector<ll> v = {r, g, b};
    sort(v.begin(), v.end());

    ans += v[0];
    v[1] -= v[0];
    v[2] -= v[0];
    int temp = min(v[1], v[2]);

    if (v[2] >= 2 * temp)
        ans += temp;
    else
        ans += (v[1] + v[2]) / 3;

    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while (t--)
        soln();
    return 0;
}