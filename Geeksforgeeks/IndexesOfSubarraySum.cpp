#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

vector<int> subarraySum(vector<int> arr, int n, long long s)
{
    // Your code here
    int start = 0, end = 0;
    long long currentSum = 0;
    vector<int> result;

    while (end < arr.size())
    {
        currentSum += arr[end];
        while (currentSum > s && start < end)
        {
            currentSum -= arr[start];
            start++;
        }

        if (currentSum == s)
        {
            result.push_back(start + 1);
            result.push_back(end + 1);
            return result;
        }

        end++;
    }

    result.push_back(-1);
    return result;
}

void soln()
{
    int n;
    ll s;
    cin >> n >> s;
    vector<int> arr(n);
    for (int &x : arr)
        cin >> x;

    vector<int> res = subarraySum(arr, n, s);
    for (int x : res)
        cout << x << " ";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while (t--)
        soln();
    return 0;
}