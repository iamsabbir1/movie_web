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
}

void clearIthBit(int n, int i)
{
    int mask = ~(1 << i);
    cout << (n & mask);
}
int main()
{
    int n = 13;
    int i;
    cin >> i;

    clearIthBit(n, i);
}