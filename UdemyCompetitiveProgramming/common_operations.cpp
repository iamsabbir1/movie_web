#include <iostream>
using namespace std;

int getIthBit(int n, int i)
{
    int mask = (1 << i);
    return (n & mask) > 0 ? 1 : 0;
}

void setIthBit(int n, int i)
{
    int mask = (1 << i);
    cout << (n | mask);
}

void clearIthBit(int &n, int i)
{
    int mask = ~(1 << i);
    n = (n & mask);
}

void updateIthBIt(int &n, int i, int v)
{
    clearIthBit(n, i);
    int mask = (v << i);
    n = n | mask;
}
int clearLastIthBIt(int n, int i)
{
    int mask = -1 << i;
    return n & mask;
}

void clearBitsInRange(int &n, int i, int j)
{
    int a = (-1 << (j + 1));
    int b = (1 << i) - 1;

    int mask = a | b;
    n = n & mask;
}
int main()
{
    int n = 31;
    int i, j;
    cin >> i >> j;

    // updateIthBIt(n, i, 0);
    // cout << n << endl;
    //    setIthBit(n, i);
    // cout << clearLastIthBIt(n,i);

    clearBitsInRange(n, i, j);
    cout << n;
}