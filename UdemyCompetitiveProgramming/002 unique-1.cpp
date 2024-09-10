#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int uniqeNo(vector<int> arr)
{
    int n = arr.size();
    int Xor = 0;
    for (int i = 0; i < n; i++)
    {
        Xor ^= arr[i];
    }
    return Xor;
}
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);

    for (auto &i : arr)
        cin >> i;

    cout << uniqeNo(arr);
}