#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
#define ll long long
#define endl '\n'

void soln()
{
    ll n, k;
    cin >> n >> k;

    if (k <= (n + 1 / 2))
        cout << 2 * k - 1 << endl;
    else
        cout << k << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        soln();
}