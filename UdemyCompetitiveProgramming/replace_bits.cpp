#include <iostream>
using namespace std;
void clearRangeOfBits(int &n, int i, int j)
{
    int a = -1 << (j + 1);
    int b = (1 << i) - 1;

    int mask = a | b;
    n = n & mask;
}
void binaryRep(int n)
{
    for (int i = 12; i >= 0; i--)
    {
        if (n & (1 << i))
            cout << 1;
        else
            cout << 0;
    }
    cout << endl;
}
int main()
{
    int n, i, j, m;
    cin >> n >> m >> i >> j;
    binaryRep(n);
    binaryRep(m);
    clearRangeOfBits(n, i, j);
    int mask = m << i;
    int res = (n | mask);
    cout << res << endl;

    binaryRep(res);
}