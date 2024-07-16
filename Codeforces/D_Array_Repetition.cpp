#include <bits/stdc++.h>
using namespace std;
void solve()
{
    vector<int>lookup;
    int n,q;
    while(n--)
    {
        int b,x;
        cin >> b >> x;
        if(b==1)
        {
            lookup.push_back(x);
        }
        else if(b==2)
        {
            vector<int>copy = lookup;
            while(x--)
            {
                for(auto it=copy.begin();it!=copy.end();++it)
                {
                    lookup.push_back(*it);
                }
            }
        }
    }
    vector<int>:: iterator it=lookup.begin();
    
    for(int i=0;i<q;++i)
    {
        long long query;
        cin >> query;
        cout << *(it + query) <<" ";
    }
    cout << endl;


}
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
}