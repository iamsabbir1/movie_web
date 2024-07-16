#include <bits/stdc++.h>
using namespace std;
void solve();
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}

void solve()
{
    string s;
    cin >> s;
    stack<pair<char,int>> s1,s2;
    int l1=0,l2=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s1.push(make_pair(s[i],i));
            l1++;
        }
            
        if(s[i] >=97 && s[i] <=122)
        {
            s2.push(make_pair(s[i],i));
            l2++;
        }
            
    }

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='B')
        {
            if(!s1.empty())
            {
                s1.pop();
            }
        }
        else if(s[i]=='b')
        {
            if(!s2.empty())
            {
                s2.pop();
            }
        }
    }

    int l = max(l1,l2);
    for(int i=0;i<l;i++)
    {
        if(!s1.empty() && !s2.empty())
        {
            if(s1.top().second > s2.top().second)
            {
                if(s2.top().first != 'b')
                {
                    cout << s2.top().first;
                }
                s2.pop();
                
            }
                
            else
            {
                if(s1.top().first != 'B')
                    cout << s1.top().first;
                s1.pop();
            }
                                
        }
        else if(!s1.empty() && s2.empty())
        {
            if(s1.top().first != 'B')
                cout << s1.top().first;
            s1.pop();
        }
        else if(s1.empty() && !s2.empty())
        {
            if(s2.top().first != 'b')
                cout << s2.top().first;
            s2.pop();
        }
    }
    cout << endl;
}