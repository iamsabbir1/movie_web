#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int t;
    cin >> t;
    while(t--)    solve();
}
void solve()
{
    long long n,f,a,b;
    cin >>n >> f >> a >> b;
    vector<long long>v(n+1);
    v[0] = 0;
    for(int i=1;i<=n;++i)  
    {
        cin >> v[i];
        if((v[i]-v[i-1])*a>b)
        {   
            f-=b;
            continue;
        }
        f = f-((v[i]-v[i-1])*a);
    }
    (f>0)? cout << "YES\n" : cout <<"NO\n";
    
}