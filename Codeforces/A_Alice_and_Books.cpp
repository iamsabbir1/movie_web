#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n;
    cin >> n;
    vector<int> a(n);

    for (auto &x : a)
        cin >> x;
    int maxBook = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (a[i] > maxBook)
            maxBook = a[i];
    }
    cout << maxBook + a[n-1]<< endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        soln();
    return 0;
}