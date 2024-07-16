#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<pair<char,int>>v1,v2;
    string s;
    cin >> s;
    for(int i = 0; i < s.size();i++)
    {
        if(s[i] == 'B')
        {
            if(!v1.empty())
            {
                int position = v1.back().second,l=v1.size();
                v1.pop_back();
                s.erase(position,1);
                s.erase(i,1);
            }
            else
                s.erase(i,1);                
                
        }
        else if(s[i]=='b')
        {
            if(!v2.empty())
            {
                int position = v2.back().second,l = v2.size();
                v2.pop_back();
                s.erase(position,1);
                s.erase(i,1);              
            }
            else
                s.erase(i,1);     
        }
        else if(s[i]>=65 && s[i]<=90)
            v1.push_back(make_pair(s[i],i));
        else if(s[i]>=97 && s[i]<=122)
            v2.push_back(make_pair(s[i],i));

       
    }
    cout << s <<endl;
    
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