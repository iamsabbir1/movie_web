#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void soln()
{
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll minCards = *min_element(a.begin(), a.end());
    ll extraCards = 0;

    cout << minCards << endl;
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