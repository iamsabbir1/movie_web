#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
void soln()
{
    vector<vector<int>> light(3, vector<int>(3)), ans(3, vector<int>(3, 1));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> light[i][j];
            if (light[i][j] & 1)
            {
                ans[i][j] = !ans[i][j];
                if (i - 1 >= 0)
                    ans[i - 1][j] = !ans[i - 1][j];
                if (i + 1 < 3)
                    ans[i + 1][j] = !ans[i + 1][j];
                if (j - 1 >= 0)
                    ans[i][j - 1] = !ans[i][j - 1];
                if (j + 1 < 3)
                    ans[i][j + 1] = !ans[i][j + 1];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j];
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