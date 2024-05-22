#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        mp[a]++;
    }

    vector<pair<int, int>> arr;

    for (auto c : mp)
    {
        arr.push_back({c.first, c.second});
    }

    vector<long long> dp(arr.size());

    for (int i = 0; i < arr.size(); i++)
    {
        int pr = i - 1;
        while (pr >= 0 && arr[pr].first + 1 == arr[i].first)
            pr--;
        if (pr == -1)
            dp[i] = 1LL * arr[i].first * arr[i].second;
        else
            dp[i] = dp[pr] + 1LL * arr[i].first * arr[i].second;

        if (i != 0)
            dp[i] = max(dp[i], dp[i - 1]);
    }

    cout << dp[arr.size() - 1] << endl;
}
