#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
}
void solve()
{
    int n;
    cin >> n;
    vector<pair<int,int>>vp(n);
    for(int i=0;i<n;++i)
    {
        cin >> vp[i].first;
        cin >> vp[i].second;
    }

    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n-i-1;++j)
        {
            if(vp[j].first>vp[j+1].first && vp[j].second<vp[j+1].second)
            {
                int tempf,temps;
                tempf = vp[j].first;
                temps = vp[j].second;
                vp[j].first = vp[j+1].first;
                vp[j].second = vp[j+1].second;

                vp[j+1].first = tempf;
                vp[j+1].second = temps;
            }
        }
    }

    for(int i=0;i<n;++i)
    {
        cout << vp[i].first <<" "<<vp[i].second <<endl;
    }
}