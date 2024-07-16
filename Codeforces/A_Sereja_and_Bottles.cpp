#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    set<int> s;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
        s.insert(v[i].first);
    }

    int unopened = 0;
    for (int i = 0; i < n; i++)
    {
        bool canOpen = true;
        for (int j = 0; j < n; j++)
        {
            if (i != j && v[i].second == v[j].first)
            {
                canOpen = false;
                break;
            }
        }
        if (canOpen)
            unopened++;
    }

    if (s.size() == n)
        cout << unopened << endl;
    else
        cout << unopened - (n - s.size()) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    t = 1;
    while (t--)
        soln();
    return 0;
}