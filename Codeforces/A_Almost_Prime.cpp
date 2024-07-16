#include <bits/stdc++.h>
using namespace std;

vector<bool>prime(3001,true);

void solve();
void Prime();
int factors(int n);
bool isprime(int n);
int main()
{
    solve();
}

void solve()
{
    int n,c=0;
    cin >> n;
    Prime();
    for(int i=1;i<=n;i++)
    {
        int count = factors(i);
        if(count==2)
            c++;
    }
    cout << c <<endl;
    Prime();
}

void Prime()
{
    prime[0] = prime[1] = false;
    for(int i=2;i*i<3001;i++)
    {
        if(prime[i] && (long long)i*i<3001)
        {
            for(int j=i*i;j<3001;j+=i)
            {
                prime[j] = false;
            }
        }
    }
}

int factors(int n)
{
    vector<int>v;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(isprime(i))
                v.push_back(i);
            if(isprime((n/i)) && i!=(n/i))
                v.push_back(n/i);
        }
            
    }
    return v.size();
}

bool isprime(int n)
{
    return prime[n];
}