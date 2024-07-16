#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
long long maxSubarraySum(vector<int> &arr)
{
    // code here...
    int maxSoFar = INT_MIN, maxEndingHere = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        maxEndingHere += arr[i];

        if (maxSoFar < maxEndingHere)
        {
            maxSoFar = maxEndingHere;
        }
        if (maxEndingHere < 0)
        {
            maxEndingHere = 0;
        }
    }

    return maxSoFar;
}
void soln()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int &x : arr)
        cin >> x;

    cout << maxSubarraySum(arr);
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