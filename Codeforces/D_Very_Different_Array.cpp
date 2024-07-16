#include <bits/stdc++.h>
using namespace std;
int findmax(vector<int>&v);
void solve();
int main()
{
    int t;
    cin >> t;
    while(t--)  solve();
}


void solve()
{
    long long n,m,dif=0;
    cin >> n >> m;
    vector<int>a1(n),a2(m);
    for(int i=0;i<n;++i)    cin >> a1[i];
    for(int i=0;i<m;++i)    cin >> a2[i];
    sort(a1.begin(),a1.end());
    sort(a2.begin(),a2.end());
    int k=0,l=m-1;
    for(int i=0,j=n-1;i<=j;)
    {
        vector<int>v(5,0);
        v[1] = abs(a1[i]-a2[k]);
        v[2] = abs(a1[i]-a2[l]);
        v[3] = abs(a1[j]-a2[k]);
        v[4] = abs(a1[j]-a2[l]);

        int indx = findmax(v);
        if(indx==1)
        {
            dif += abs(a1[i]-a2[k]);
            i++;
            k++;
        }
        else if(indx==2)
        {
            dif += abs(a1[i]-a2[l]);
            i++;
            l--;
        }
        else if(indx==3)
        {
            dif += abs(a1[j]-a2[k]);
            j--;
            k++;
        }
        else if(indx==4)
        {
            dif += abs(a1[j]-a2[l]);
            j--;
            l--;
        }
    }
    cout << dif <<endl;
}

int findmax(vector<int>&v)
{
    int max = v[0],indx;
    for(int i=0;i<5;++i)
    {
        if(max<v[i])
        {
            max = v[i];
            indx = i;
        }
    }

    return indx;
}