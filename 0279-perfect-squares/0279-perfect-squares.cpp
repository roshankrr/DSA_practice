class Solution {
public:

    int solve(int n,vector<int>&dp){
        if(n==0)return 0;
        if(dp[n]!=-1)return dp[n];
        int mini=INT_MAX;
        for(int x=1;x*x<=n;x++){
            mini=min(mini,1+solve(n-(x*x),dp));
            
        }
        return dp[n]= mini;
    }

    int numSquares(int n) {
        vector<int>dp(n+1,-1);
        return solve(n,dp);
    }
};