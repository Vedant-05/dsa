// User function Template for C++

class Solution{
public:
    int nCr(int n, int r){
        // code here
        const long long int MOD = 1e9 + 7;
        vector<vector<long long int>> dp(n+1,vector<long long int> (r+1,1));
        
        
        
        if(r>n) return 0;
        
        
        for(int i = 0;i<=n;i++)
        {
            for(int j = 0;j<=min(r,i);j++)
            {  
                if(j == 0 || j == i) dp[i][j] = 1;
                
                else
                dp[i][j] = (dp[i-1][j-1]%MOD + dp[i-1][j]%MOD)%MOD;
                
            }
        }
        
        
        
        
        return (dp[n][r])%MOD;
    }
};
