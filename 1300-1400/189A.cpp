#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n;

    vector<int> arr(3);

    for (int i = 0; i < 3; i++)
    {
        int a;
        cin >> a;
        arr[i] = a;
    }

    sort(arr.begin(), arr.end());

    int ans = 0;

    vector<int> dp(n + 1, -1);
    dp[0] = 0;

    for (int i = arr[0]; i <= n; i++)
    {
        int req = i;
        for (int j = 0; j < 3; j++)
        {
            if (i - arr[j] >= 0 && dp[i - arr[j]] != -1)
            {
                dp[i] = max(dp[i], 1 + dp[i - arr[j]]);
            }
        }
    }

    cout << dp[n] << endl;
}
