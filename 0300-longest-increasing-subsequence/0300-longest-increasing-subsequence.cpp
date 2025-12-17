class Solution {

    int LIS(int x,int prev,vector<int>& nums,vector<vector<int>>&dp){
        if(x>=nums.size())return 0;

        if(dp[x][prev+1]!=-1)return dp[x][prev+1];
        int notpick=LIS(x+1,prev,nums,dp);
        int pick=0;
        if(prev==-1 || nums[prev]<nums[x]){
            pick=1+LIS(x+1,x,nums,dp);
        }
        return dp[x][prev+1]=max(pick,notpick);
        
    }


public:
    int lengthOfLIS(vector<int>& nums) {
        vector<vector<int>>dp(nums.size(),vector<int>(nums.size()+1,-1));
        return LIS(0,-1,nums,dp);
    }
};