// User function Template for C++

class Solution{
public:
    int matrixMultiplication(int n, int arr[])
    {
        
        vector<vector<int>> dp(n,vector<int>(n,INT_MAX));
        
        for(int i = 1;i<n;i++)
        {
            dp[i][i] = 0;
        }
        
        
        for(int l = 2;l<n;l++)
        {
            for(int i = 1;i<n-l+1;i++)
            {   
                int j = i+l-1;
                for(int k = i;k<j;k++)
                {
                    dp[i][j] = min(dp[i][j], arr[i-1] * arr[k] * arr[j] + dp[i][k] + dp[k+1][j]);
                }
            }
        }
        
        
        return dp[1][n-1];
        
        
        
        
        
    }
};
