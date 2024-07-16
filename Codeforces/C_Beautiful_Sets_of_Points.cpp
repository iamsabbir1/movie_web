#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n, m, i = -1;
    cin >> n >> m;

    int k = min(n, m) + 1;
    cout << k << endl;
    for (int i = 0; i < k; i++)
        cout << i << " " << (min(n, m) - 1) << endl;
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