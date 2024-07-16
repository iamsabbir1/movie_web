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
    int l,r,lucky=0,track=0;
    cin >> l >> r;
    for(int i=l;i<=r;i++)
    {
        string s = to_string(i);
        int min_n,max_n;
        min_n = INT_MAX;
        max_n = 0;
        for(int j=0;s[j]!='\0';j++)
        {
            if(s[j]-'0'>=max_n)
                max_n = s[j] - '0';
            if((s[j]-'0')<min_n)
                min_n = s[j] - '0';
        }

        if(track<=(max_n-min_n))
        {
            lucky = i;
            track = max_n - min_n;
        }

    }
    cout << lucky <<endl;
}
