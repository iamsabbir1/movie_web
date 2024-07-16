#include <iostream>
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
void solve();
void small(int n,int m);
void large(int n,int m);

int main()
{
    int t;
    cin >> t;

    while(t--)
        solve();
}

void solve()
{
    int n,m; //n is the number of apple piecess and m is the number of people
    cin >> n >> m;
    if(n==m)
    {
        cout << 0 <<endl;
        return;
    }
    if(n>m)
        large(n,m);
    else
        small(n,m);

}

void small(int n,int m)
{
    int rem = n,counter=0;
    while(rem%m!=0)
    {
        if(rem==1)
        {
            cout << -1 << endl;
            return;
        }
        rem*=2;
        counter++;
        if(rem>=m)
            rem%=m;
    }
    cout << counter << endl;
}

void large(int n,int m)
{
    if(n%m==0)
    {
        cout << 0 << endl;
        return;
    }

    int rem = n%m,counter=1;
    while(rem%m!=0)
    {
        if(rem==1)
        {
            cout << -1 << endl;
            return;
        }
        rem*=2;
        counter++;
        if(rem>=m)
            rem%=m;
    }
    cout << counter << endl;
}
