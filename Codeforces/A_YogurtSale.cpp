/**
 *    author:  iamsabbir
 *    created: 23-06-2024
 *    Contest: Codeforces Round 938 (Div. 3)
 **/

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
int solve();
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
}

int solve()
{
    int n, a, b;
    cin >> n >> a >> b;

    if (n == 1)
        return a;
    if (2 * a <= b)
        return a * n;
    else if (n&1)
        return (n / 2) * b + a;
    else
        return n / 2 * b;
}