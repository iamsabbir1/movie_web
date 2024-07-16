#include <bits/stdc++.h>
using namespace std;
#define int long long
void soln()
{
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> a(k + 1), b(k + 1), velocity(k + 1);
    for (int i = 1; i <= k; i++)
        cin >> a[i];
    for (int i = 1; i <= k; i++)
        cin >> b[i];
    a[k] = n;
    for (int i = 1; i <= k; i++)
        velocity[i] = a[i] / b[i];

    a[0] = b[0] = 0;

    while (q--)
    {
        int x;
        cin >> x;

        auto lower = lower_bound(a.begin(), a.end(), x);

        int index = lower - a.begin();

        if (x == a[index])
            cout << b[index] << " ";
        else
        {
            cout << b[index - 1] + (x - a[index - 1]) * (b[index] - b[index - 1]) / (a[index] - a[index - 1]) << " ";
        }
    }
    cout << "\n";
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
        soln();
}