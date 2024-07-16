#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
vector<int> duplicates(vector<long long> arr)
{
    // code here
    for (long long x : arr)
        cout << x << " ";
}
void soln()
{
    int n;
    cin >> n;
    vector<long long> arr(n);

    for (long long &x : arr)
        cin >> x;

    vector<int> res = duplicates(arr);
    for (int x : res)
        cout << x << " ";
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