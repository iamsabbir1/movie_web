#include<bits/stdc++.h>
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
    int n,m;
    cin >> n >>m;
    if(n%2==0 && m%2==0)
        cout << (n*m)/2 <<endl;
    else if(n%2==1 && m%2==1)
        cout << max((n*(m/2)),((n/2)*m)) <<endl;
    else if(n%2==0 && m%2==1)
        cout << (n*(m/2)) <<endl;
    else if(n%2==1 && m%2==0)
        cout << max((n*m)/2,(m*(n/2))) <<endl;

}