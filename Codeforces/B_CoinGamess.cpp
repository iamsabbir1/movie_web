/**
 *    author:  iamsabbir
 *    created: 08-06-2024 11:29pm
 *    Contest: Codeforces Round 942 (Div. 2)
 **/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, countU = 0;
        cin >> n;
        string s;
        cin >> s;

        for (char c : s)
            if (c == 'U')
                countU++;
        if (countU & 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
