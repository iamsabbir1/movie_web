#include <bits/stdc++.h>
using namespace std;
void solve();
void Procedure1(int n);
void Procedure2(int n);
void MergeSort(vector<int>&v,int i,int j);
int  main()
{
    solve();
}

void solve()
{
    int n;
    cin >> n;
    Procedure1(n);
    Procedure2(n);

}

void Procedure1(int n)
{
    cout << "Procedure 1" <<endl;
    set<int>s;
    int count = 0;
    int i=1;
    int j=n;
    while(i<j)
    {
        count++;
        if(i*j==n)
        {
            s.insert(i);
            s.insert(j);
            i++;
            j--;
        }

        else if(i*n>n)
            j--;
        else if(i*n<n)
            i++;
    }
    cout <<"Count : "<<count<<endl;
    for(auto it=s.begin();it!=s.end();it++)
        cout << *it <<" ";
}

void Procedure2(int n)
{
    int count = 0;
   vector<int>v;
   cout << "Procedure 2" <<endl;
   for(int i=1;i<=sqrt(n);i++)
   {
        count++;
        if(n%i==0)
            v.push_back(i);v.push_back(n/i);
   }
   MergeSort(v,0,n-1);
   cout << "Count : " <<count <<endl;
   for(int i=0;i<v.size();i++)
   {
    cout << v[i] << " ";
   }
   cout << endl;

}

void MergeSort(vector<int>&v,int i,int j)
{
    
}