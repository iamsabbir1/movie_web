#include <iostream>
#include <queue>
using namespace std;
int main()
{
    int arr[] = {10, 15, 20, 13, 6, 90};
    priority_queue<int, vector<int>, greater<int>> heap;

    int n = sizeof(arr) / sizeof(int);
    for (int x : arr)
    {
        heap.push(x);
    }

    while (!heap.empty())
    {
        cout << heap.top() << endl;
        heap.pop();
    }
}