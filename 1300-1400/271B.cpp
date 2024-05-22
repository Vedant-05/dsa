#include <bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>
using namespace std;

set<int> sprime;
bool prime[1000001];

void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    prime[1] = false;

    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {

            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            sprime.insert(p);
}

int main()
{
    int n, m;
    cin >> n >> m;
    sprime.clear();
    memset(prime, true, sizeof(prime));

    SieveOfEratosthenes(1000000);

    vector<vector<int>> dp(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int a;
            cin >> a;
            if (prime[a] == true)
            {
                dp[i][j] = 0;
            }
            else
            {
                dp[i][j] = *sprime.upper_bound(a) - a;
            }
        }
    }

    vector<int> rowSum(n, 0);
    vector<int> colSum(m, 0);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // cout << dp[iś][j] << " ";
            rowSum[i] += dp[i][j];
            colSum[j] += dp[i][j];
        }
        // cout << endl;
    }

    sort(rowSum.begin(), rowSum.end());
    sort(colSum.begin(), colSum.end());

    cout << min(rowSum[0], colSum[0]) << endl;
}
