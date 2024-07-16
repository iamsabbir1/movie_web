#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int minJumps(int arr[], int n)
{
    // Your code here
    if (n <= 1)
        return 0;

    if (arr[0] == 0)
        return -1;

    int jumps = 1, maxReach = arr[0], step = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
            return jumps;

        maxReach = max(maxReach, i + arr[i]);
            step--;
        if (step == 0)
        {
            jumps++;

            if (i >= maxReach)
                return -1;
            step = maxReach - i;
        }
    }
    return jumps;
}
void soln()
{
    int n;
    cin >> n;
    int arr[n];
    for (int &x : arr)
        cin >> x;
    cout << minJumps(arr, n);
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