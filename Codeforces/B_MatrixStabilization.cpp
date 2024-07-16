#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isStrictlyGreater(const vector<vector<int>> &a, int i, int j, int n, int m)
{
    if (i > 0 && a[i][j] <= a[i - 1][j])
        return false;
    if (i < n - 1 && a[i][j] <= a[i + 1][j])
        return false;
    if (j > 0 && a[i][j] <= a[i][j - 1])
        return false;
    if (j < m - 1 && a[i][j] <= a[i][j + 1])
        return false;
    return true;
}

void stabilizeMatrix(vector<vector<int>> &a, int n, int m)
{
    bool changed;
    do
    {
        changed = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (isStrictlyGreater(a, i, j, n, m))
                {
                    int requiredValue = a[i][j];
                    if (i > 0)
                        requiredValue = min(requiredValue, a[i - 1][j] + 1);
                    if (i < n - 1)
                        requiredValue = min(requiredValue, a[i + 1][j] + 1);
                    if (j > 0)
                        requiredValue = min(requiredValue, a[i][j - 1] + 1);
                    if (j < m - 1)
                        requiredValue = min(requiredValue, a[i][j + 1] + 1);

                    if (requiredValue > a[i][j])
                    {
                        a[i][j] = requiredValue;
                        changed = true;
                    }
                }
            }
        }
    } while (changed);
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    stabilizeMatrix(a, n, m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}