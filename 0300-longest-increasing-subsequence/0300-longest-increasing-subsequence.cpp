class Solution {
public:
    int solve(int i,int prev,vector<int>&nums,vector<vector<int>>&dp){
        if(i>=nums.size())return 0;//base case
        // recursion
        if(dp[i][prev+1]!=-1)return dp[i][prev+1];
        int notpick=solve(i+1,prev,nums,dp); //notpick
        int pick=0;
        if(prev==-1 || nums[prev]<nums[i]){
            pick=1+solve(i+1,i,nums,dp); //pick
        }
        return dp[i][prev+1]= max(pick,notpick);
    }


    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>dp(nums.size()+1,vector<int>(nums.size()+1,-1));
        return solve(0,-1,nums,dp);
    }
};