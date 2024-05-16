#include <bits/stdc++.h>

using namespace std;

vector<int> parent(100000, -1);
vector<int> size1(100000, 0);

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> energy(n);
    vector<vector<int>> values(n, vector<int>(2));

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        energy[i] = a;
        values[i][0] = a;
        values[i][1] = i;
    }

    sort(values.begin(), values.end());

    // for (int i = 0; i < n; i++)
    // {

    //     cout << values[i][0] << values[i][1];
    // }

    vector<vector<int>> adj(n);

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a - 1].push_back(b - 1);
        adj[b - 1].push_back(a - 1);
    }
    vector<int> vis(n, -1);
    long long int ans = 0;
    for (int i = n - 1; i > 0; i--)
    {
        int val = values[i][0];
        int rmInd = values[i][1];

        for (int j = 0; j < adj[rmInd].size(); j++)
        {
            if (vis[adj[rmInd][j]] == -1)
            {
                ans += energy[adj[rmInd][j]];
                // cout << adj[rmInd][j] << " " << j << endl;
            }
        }
        vis[rmInd] = 1;
    }

    cout << ans << endl;
}
