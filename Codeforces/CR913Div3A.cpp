#include <bits/stdc++.h>


using namespace std;
void solve()
{
    string s;
    cin >> s;

    char array[8]={'a', 'b', 'c', 'd', 'e', 'f','g', 'h'};

    for(int i=1;i<=8;i++)
        if(i!=(s[1]-'0'))
            cout << s[0]<<i<<endl;
    
    for(int i=0;i<8;i++)
        if(array[i]!=s[0])
            cout << array[i] <<s[1]<<endl;
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}