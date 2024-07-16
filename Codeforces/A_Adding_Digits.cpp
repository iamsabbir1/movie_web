#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    ll a, b;
    string s;
    int n;
    cin >> a >> b >> n;

    int flag = 0;
    for (int i = 0; i < 10; i++)
    {
        if ((a * 10 + i) % b == 0)
        {
            flag = 1;
            a = a * 10 + i;
            n--;
            break;
        }
    }
    if (flag == 0)
    {
        cout << -1 << endl;
        return;
    }

    else
    {
        cout << a;
        for (int i = 0; i < n; i++)
            cout << 0;
        cout << endl;
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