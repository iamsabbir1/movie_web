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
    string s;
    int a=0,b=0;
    cin >> s;
    for(int i=0;s[i]!='\0';++i)
    {
        if(s[i]=='A')
            a++;
        else if(s[i]=='B')
            b++;
    }
    if(a>b)
        cout << 'A' <<endl;
    else if(a<b)
        cout << 'B' <<endl;
}