#include <bits/stdc++.h>
using namespace std;
int longestPalinSubseq(string S) {
    string R = S;
    reverse(R.begin(), R.end());
     // dp[i][j] will store the length of the longest
    // palindromic subsequence for the substring
    // starting at index i and ending at index j
    vector<int> curr(R.length() + 1, 0);
    vector<int> prev(R.length() + 1, 0);
     // Filling up DP table based on conditions discussed
    // in the above approach
    for (int i = 1; i <= S.length(); i++) {
        for (int j = 1; j <= R.length(); j++) {
            if (S[i - 1] == R[j - 1])
                curr[j] = 1 + prev[j - 1];
            else
                curr[j] = max(curr[j - 1], prev[j]);
        }
        prev = curr;
    }
     // At the end, DP table will contain the LPS
    // So just return the length of LPS
    return curr[R.length()];
}
// Driver code
int main()
{
    string s = "GEEKSFORGEEKS";
    cout << "The length of the LPS is "
         << longestPalinSubseq(s) << endl;
    return 0;
}
