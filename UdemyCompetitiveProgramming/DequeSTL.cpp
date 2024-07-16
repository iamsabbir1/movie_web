#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    deque<int> dq(10);

    for (int i = 0; i < 10; i++)
        dq[i] = i * i;

    dq.push_back(120);
    dq.push_front(123);
    cout << "Capacity and size\n";
    cout << dq.size();

    for (int i = 0; i < 10; i++)
        cout << dq[i] << " ";
    cout << endl;

    for (auto x : dq)
        cout << x << " ";
}