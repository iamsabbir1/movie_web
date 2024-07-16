#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n;
    cin >> n;
    if (n & 1)
        cout << -1 << endl;
    else
    {
        for (int i = 1; i <= n; i += 2)
            cout << i + 1 << " " << i << " ";
    }
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