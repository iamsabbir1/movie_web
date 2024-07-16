#include <bits/stdc++.h>
using namespace std;
pair<int,int> sum(vector<int>v,int i,int j);
void solve()
{
    int n;
    cin >> n;

    vector<int>a(n);
    for(int i=0;i<n;++i)
        cin >> a[i];

    for(int i=0;i<n;++i)
    {
        int flag = 0;
        for(int j=i;j<n;++j)
        {
            //k=i
            //k<=j
            pair<int,int> res = sum(a,i,j);
            if(res.first == res.second)
                flag = 1;
        }
        if(flag)   
        {
            cout <<"YES\n";
            break;
        }
            
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}

pair<int,int> sum(vector<int>v,int i,int j)
{
    pair<int,int> result;
    for(int k=i;k<=j;++k)
    {
        if(k%2==1)
            OddSum += v[k];
        else if(k%2==0)
            EvenSum += v[k];
    }
    result = make_pair(OddSum,EvenSum);
    return result;
}