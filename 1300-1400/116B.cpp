#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int ans = 0;

    vector<vector<char>> forest(n, vector<char>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char a;
            cin >> a;
            forest[i][j] = a;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (forest[i][j] == 'W')
            {

                bool left = j - 1 >= 0 ? forest[i][j - 1] == 'P' : false;
                bool right = i - 1 >= 0 ? forest[i - 1][j] == 'P' : false;
                bool up = j + 1 <= m - 1 ? forest[i][j + 1] == 'P' : false;
                bool down = i + 1 <= n - 1 ? forest[i + 1][j] == 'P' : false;

                if (left || right || up || down)
                {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;
}
