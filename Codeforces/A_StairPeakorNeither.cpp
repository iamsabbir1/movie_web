#include <bits/stdc++.h>
using namespace std;

string solve();

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout << solve() << endl;
    }
    return 0;
}
string solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b && b < c)
        return "STAIR";
    if (a < b && b > c)
        return "PEAK";
    return "NONE";
}