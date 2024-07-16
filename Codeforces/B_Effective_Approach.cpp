#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n, m, vasya = 0, petya = 0;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a)
        cin >> x;
    cin >> m;
    vector<int> b(m);
    for (auto &x : b)
    {
        cin >> x;
        for (int i = 0; i < n; i++)
        {
            vasya++;
            if (a[i] == x)
                break;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            petya++;
            if (a[i] == x)
                break;
        }
    }
    cout << vasya << " " << petya << endl;
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