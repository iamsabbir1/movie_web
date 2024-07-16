#include <bits/stdc++.h>
using namespace std;
void solve();
int count(string s);
int misplaced(string a,int b);
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
    string a,b;
    int track[n];
    int one,zero;
    one = zero = 0;
    cin >> a >> b;
    //one1 = count(a);
    //one2 = count(b);
    for(int i=0;i<n;++i)
    {
        if(a[i]==b[i])
        {
            track[i] = -1;
            continue;
        }
        track[i] = int(b[i]-'0');
        
    }


    for(int i=0;i<n;++i)
    {
        if(track[i]==1)
            one++;
        if(track[i]==0)
            zero++;
    }
    cout << max(one,zero)<<endl;

    
}
int count(string s)
{
    int one = 0;
    for(int i=0;i<s.size();++i)
    {
        if(s[i]=='1')
            one++;
    }
    return one;
}
int misplaced(string a,string b)
{
    int mispls = 0;
    for(int i=0;i<a.size();++i)
    {
        if(a[i]!=b[i])
            mispls++;
    }
    return mispls;
}