#include <bits/stdc++.h>
using namespace std;

void soln()
{
    string s;
    cin >> s;

    int cuts = 0;
    for (int i = 0; i < s.length() - 1; i++)
    {
        if (s[i] == '1' && s[i + 1] == '0')
            cuts++;
    }

    cout << (cuts > 0 ? cuts + 1 : 1) << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        soln();
}