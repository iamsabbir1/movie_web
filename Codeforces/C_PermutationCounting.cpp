/**
 *    author:  iamsabbir
 *    created: 09-06-2024 10:01am
 *    Contest: Codeforces Round 942 (Div. 2)
 **/
void solve();

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();   
}

void solve()
{
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    
    cout << "\n";

    long long first = a.back();
    long long count = 1;
    a.pop_back();
    while(!a.empty() && a.back() == first)
    {
        cout << "count: " << count << "\n";
        count++;
        a.pop_back();
    }

    while(!a.empty())
    {
        long long delta = a.back();
        cout << "delta: " << delta << "\n";
        a.pop_back();
    }

}