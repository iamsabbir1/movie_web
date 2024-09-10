#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n;
    cin >> n;

    int sum = 0;
    sum = n / 10 + n % 10;
    cout << sum << endl;
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