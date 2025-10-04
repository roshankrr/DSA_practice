class Solution {
    int solve(int i,vector<int>& coins, int amount,vector<vector<int>>&dp){
        if(i>=coins.size() or amount<0)return 1e8;
        if(amount==0)return 0;
        if(dp[i][amount]!=-1)return dp[i][amount];
        int pick=1+solve(i,coins,amount-coins[i],dp);
        int notpick=solve(i+1,coins,amount,dp);
        return dp[i][amount]=min({pick,notpick});
    }
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,-1));
        int ans=solve(0,coins,amount,dp);
        return (ans==1e8)?-1:ans;
    }
};