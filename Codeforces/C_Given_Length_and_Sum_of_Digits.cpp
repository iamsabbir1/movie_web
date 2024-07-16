#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int m, s;
    cin >> m >> s;

    if (s == 0)
    {
        if (m == 1)
            cout < < < < "0 0" << endl;
        cout << "-1 -1" << endl;
        return;
    }
    if (s == 0 && m == 1)
    {
        cout << 0 << " " << 0 << endl;
        return;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    soln();
    return 0;
}