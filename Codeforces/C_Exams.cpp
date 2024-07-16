#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n;
    cin >> n;

    vector<pair<int, int>> exams(n);

    for (int i = 0; i < n; i++)
        cin >> exams[i].first >> exams[i].second;

    sort(exams.begin(), exams.end());

    int lastDay = 0;
    for (int i = 0; i < n; i++)
    {
        if (exams[i].second >= lastDay)
        {
            lastDay = exams[i].second;
        }
        else
        {
            lastDay = exams[i].first;
        }
    }

    cout << lastDay << endl;
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