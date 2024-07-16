#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}

void solve()
{
    long long n,sum=0;
    cin >> n;
    vector<long long>a(n);
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
        
    long long l = sqrt(sum);
   
    if(sum == l*l)
        cout <<"YES\n";
    else
        cout <<"NO\n";
    
}