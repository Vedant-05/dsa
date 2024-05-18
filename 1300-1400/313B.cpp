#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    vector<int> dp(n + 1, 0);

    int sol = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i - 1] == s[i])
        {
            sol++;
            dp[i] = sol;
        }
        else
        {
            dp[i] = sol;
        }
    }
    int m;
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        cout << dp[b - 1] - dp[a - 1] << endl;
    }

    return 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << dp[i] << " ";
    // }
}
