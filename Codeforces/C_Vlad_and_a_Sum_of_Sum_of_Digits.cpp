#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define M 200001

long long res[200001];

long long sumOfDigit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

void soln()
{
    long long n;
    cin >> n;

    cout << res[n] << endl;
}

int main()
{
    res[0] = 0;
    for (int i = 1; i < M; i++)
        res[i] = res[i - 1] + sumOfDigit(i);

    int t;
    cin >> t;
    while (t--)
        soln();
}