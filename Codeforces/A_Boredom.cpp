#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &x : a)
        cin >> x;

    const int MAX = 100005;
    vector<ll> freq(MAX, 0);

    for (int x : a)
        freq[x]++;

    vector<ll> dp(MAX, 0);

    dp[1] = freq[1];
    for (int i = 2; i < MAX; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + i * freq[i]);
    }

    cout << dp[MAX - 1] << endl;
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