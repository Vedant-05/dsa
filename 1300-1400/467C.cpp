#include <bits/stdc++.h>
using namespace std;

long long int findi(int n, int k, int m, vector<long long int> &sumBehind, vector<vector<long long int>> &dp) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= k; ++j) {
            dp[i][j] = -1;
        }
    }

    for (int i = 0; i < n; ++i) {
        dp[i][0] = 0;
    }

    for (int j = 1; j <= k; ++j) {
        for (int i = 0; i < n; ++i) {
            long long int selected = 0;
            if (i - m + 1 >= 0) {
                selected = (sumBehind[i - m + 1]) - (i == sumBehind.size() - 1 ? 0 : sumBehind[i + 1]);
                if (i - m >= 0) {
                    selected += dp[i - m][j - 1];
                }
            }
            dp[i][j] = max(i > 0 ? dp[i - 1][j] : 0, selected);
        }
    }
    return dp[n - 1][k];
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    long long int sum = 0;
    vector<long long int> sumBehind(n, 0);

    for (int i = n - 1; i >= 0; --i) {
        sum += arr[i];
        sumBehind[i] = sum;
    }

    vector<vector<long long int>> dp(n, vector<long long int>(k + 1, -1));

    cout << findi(n, k, m, sumBehind, dp);
    return 0;
}
