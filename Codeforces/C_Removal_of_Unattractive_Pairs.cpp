#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int temp = 0;
    for(int i=0,j=i+1; j<s.size();)
    {
        if(s[i] != s[j])
        {
            s[i] = '0';
            s[j] = '0';
            if(s[i-1]!='0')
            {
                i = i - 1;
                j++;
                temp = j;
                
            }
            else
            {
                i = temp;
                j++;
            }
        }
        else
        {
            
            temp = j;
            i++;
            j++;
            
        }
    }
    cout << s.size() << endl;
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