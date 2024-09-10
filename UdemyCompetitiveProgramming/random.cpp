#include <bits/stdc++.h>
using namespace std;

bool poweroftwo(int n)
{
    if (n & (n - 1) == 0)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;

    if (poweroftwo(n))
        cout << "power of two";
    else
        cout << "Not a power of two";
}

bool poweroftwo(int n)
{
    if (n & (n - 1))
        return true;
    return false;
}