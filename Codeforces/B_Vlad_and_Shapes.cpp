#include <bits/stdc++.h>
#include <cmath>
using namespace std;
#define endl "\n"

void soln()
{
    int n, count = 0, a = 0, b = 0;
    cin >> n;

    string matrix[n];

    for (int i = 0; i < n; i++)
        cin >> matrix[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == '1')
            {
                a = i;
                b = j;
                count++;
            }
        }
    }
    int sq = sqrt(count);

    if (matrix[a - sq + 1][b - sq + 1] == '1' && matrix[a - sq + 1][b] == '1' && matrix[a][b - sq + 1] == '1' && matrix[a][b] == '1')
    {
        cout << "SQUARE" << endl;
        return;
    }

    cout << "TRIANGLE\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
        soln();
}