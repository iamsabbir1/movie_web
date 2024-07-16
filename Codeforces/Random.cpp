#include <bits/stdc++.h>
using namespace std;
bool isStrictlyGreater(vector<vector<int>> &a, int i, int j, int n, int m);
void stabilizationAlgorithm(vector<vector<int>> &a, int n, int m);
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    stabilizationAlgorithm(a, n, m);

    for (const auto row : a)
    {
        for (int val : row)
            cout << val << " ";
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
}

void stabilizationAlgorithm(vector<vector<int>> &a, int n, int m)
{
    bool changed = true;
    while (changed)
    {
        changed = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (isStrictlyGreater(a, i, j, n, m))
                {
                    a[i][j] = a[i][j] - 1;
                    changed = true;
                }
            }
        }
    }
}

bool isStrictlyGreater(vector<vector<int>> &a, int i, int j, int n, int m)
{
    if (i > 0 && a[i][j] <= a[i - 1][j])
        return false;
    if (i < n - 1 && a[i][j] <= a[i + 1][j])
        return false;
    if (j > 0 && a[i][j] <= a[i][j - 1])
        return false;
    if (j < m - 1 && a[i][j] <= a[i][j + 1])
        return false;
    return true;
}
