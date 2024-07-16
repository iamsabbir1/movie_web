#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // vector<int> v(1000, 0);

    vector<int> v;
    v.reserve(100);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int no;
        cin >> no;

        v.push_back(no);
        // cout << "capaicty : " << v.capacity() << " Size : " << v.size() << endl;
    }

    sort(v.begin(), v.end());
    for (int x : v)
        cout << x << " ";
}