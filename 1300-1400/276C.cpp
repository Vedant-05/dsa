#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        arr[i] = a;
    }

    sort(arr.begin(), arr.end());

    vector<int> line(n + 2, 0);

    for (int i = 0; i < m; i++)
    {
        int l, r;
        cin >> l >> r;

        line[l]++;
        line[r + 1]--;
    }

    int start = 0;
    vector<long long> adj;
    for (int i = 0; i < n + 2; i++)
    {
        start += line[i];
        line[i] = start;
        if (line[i] > 0)
        {
            adj.push_back(start);
        }
    }

    sort(adj.begin(), adj.end());
    int l = n - 1;

    long long ans = 0;

    for (int i = adj.size() - 1; i >= 0; i--)
    {
        ans += 1ll * adj[i] * arr[l];

        l--;
    }

    cout << ans << endl;
}
