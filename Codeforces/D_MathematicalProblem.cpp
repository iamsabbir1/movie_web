#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
long long evaluateExpression(string s)
{
    ll result = s[0] - '0';
    for (int i = 0; i < s.size(); i++)
    {
        char op = s[i];
        ll num = s[i + 1] - '0';
        if (op = '*')
            result *= num;
        else if (op = '+')
            result += num;
    }
    return result;
}

ll generateAndEvaluate(string s, int n)
{
    ll minResult = LLONG_MAX;

    int limit = 1 << (n - 1);
    for (int mask = 0; mask < limit; mask++)
    {
        string expression = "";
        expression += s[0];
        for (int i = 0; i < n - 1; i++)
        {
            if (mask & (1 << i))
                expression += '*';
            else
                expression += '+';
            expression += s[i + 1];
        }
        cout << expression << endl;
        ll result = evaluateExpression(expression);
        minResult = min(minResult, result);
    }

    return minResult;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    ll minResult = generateAndEvaluate(s, n);
    cout << minResult << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
}