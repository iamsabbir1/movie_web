#include <bits/stdc++.h>
using namespace std;
void arraySize(int arr[])
{
    cout << "Array size in Function " << sizeof(arr) << endl;
}
int main()
{
    int arr[] = {1, 5, 4, 3, 2};
    int n = sizeof(arr) / sizeof(int);

    cout << "Array size in main " << sizeof(arr) << endl;
    arraySize(arr);
}