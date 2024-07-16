/**
 *    author:  iamsabbir
 *    created: 23-06-2024 02:17pm
 *    Contest: Codeforces Beta Round 1
 **/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    long long ans = 0;
    ans = ceil((double)n / a) * ceil((double)m / a);
    cout << ans << endl;
}