#include <bits/stdc++.h>

#define endl "\n"
using namespace std;
void solve();
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
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
    string s[10];
    for(int i=0; i<10; i++)
        cin >> s[i];
    int count_=1,value=0;


    for(int x =0; x <5; x++)
    {
        int i,j,k,l;

        for(i=x; i<=(9-x); i++)
        {
            if(s[x][i]=='X')
                value+=count_;
        }

        for(j=x+1; j<=(9-x); j++)
        {
            if(s[j][9-x]=='X')
                value+=count_;
        }


        for(l=9-x-1; l>=x; l--)
        {
            if(s[9-x][l]=='X')
                value+=count_;
        }


        for(int m = 9-x-1; m>=x+1; m--)
        {
            if(s[m][x]=='X')
                value+= count_;
        }
        count_++;
    }

    cout << value <<endl;

}
