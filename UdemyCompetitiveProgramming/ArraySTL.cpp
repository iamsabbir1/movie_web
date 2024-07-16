#include <bits/stdc++.h>
using namespace std;

void updateArray(array<int, 6> &arr, int i, int val)
{
    arr[i] = val;
}
void print(const array<int, 6> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    array<int, 6> arr = {1, 2, 3, 4, 6, 7}; // object
    arr[0] = 10;

    updateArray(arr, 0, 100);

    array<int, 10> fives;
    fives.fill(5);

    // for (int i = 0; i < fives.size(); i++)
    //     cout << fives[i] << " ";
    // cout << endl;
    // print(arr);

    for (int x : fives)
        cout << x << endl;

    return 0;
}