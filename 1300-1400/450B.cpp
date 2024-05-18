#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;

    long long int n;
    cin >> n;

    vector<long long> dp(12346);
    dp[1] = x;
    dp[2] = y;
    // dp[3] = y-x;
    // dp[4] = -x;
    // dp[5] = y;
    // dp[6] = x+y;
    // dp[7] = x;
    // dp[8] = -y;
    // dp[9] = -x-y;
    // dp[10] = -x;
    // dp[11] = -y;
    // dp[12] = -y+x;

    // cout << dp[1] << endl;
    // cout << dp[2] << endl;

    for (int i = 3; i <= 12; i++)
    {
        dp[i] = dp[i - 1] - dp[i - 2];
        // cout << dp[i] << endl;
    }

    // cout<<dp[12345]<<endl;

    int req = n % 6;

    req = req == 0 ? 6 : req;

    // cout<<req<<endl;

    if (dp[req] < 0)
    {
        if (abs(dp[req]) > (1000000000 + 7))
        {
            cout << dp[req] + 2 * (1000000000 + 7) << endl;
        }
        else
        {
            cout << dp[req] + (1000000000 + 7) << endl;
        }
    }
    else
        cout << dp[req] % (1000000000 + 7) << endl;
}
