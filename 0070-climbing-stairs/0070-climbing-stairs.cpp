class Solution {

    int solve(int i,int n,vector<int>&dp){
        if(i==n)return 1;
        if(i>n)return 0;
        if(dp[i]!=-1)return dp[i];
        int onestep=solve(i+1,n,dp);
        int twostep=solve(i+2,n,dp);
        return dp[i]=onestep+twostep;
    }



public:
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        return solve(0,n,dp);
    }
};