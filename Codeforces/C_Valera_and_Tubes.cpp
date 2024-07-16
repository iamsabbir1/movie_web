#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    int n, m, k;
    cin >> n >> m >> k;

    int totalCells = n * m;
    int minCellPerTube = totalCells / k;
    int extraCell = totalCells % k;

    int currentTube = 1, cellInsCurrentTube = 0;
    bool directionRight = true;
    int x = 1, y = 1;

    for (int tube = 1; tube <= k; ++tube)
    {
        int cellForThisTube = minCellPerTube + (tube <= extraCell ? 1 : 0);
        cout << cellForThisTube << " ";
        for (int cell = 1; cell <= cellForThisTube; ++cell)
        {
            cout << x << " " << y << " ";
            if (directionRight)
            {
                if (y == m)
                {
                    x++;
                    directionRight = false;
                }
                else
                {
                    y++;
                }
            }

            else
            {
                if (y == 1)
                {
                    x++;
                    directionRight = true;
                }
                else
                {
                    y--;
                }
            }
        }
        cout << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    while (t--)
        soln();
    return 0;
}