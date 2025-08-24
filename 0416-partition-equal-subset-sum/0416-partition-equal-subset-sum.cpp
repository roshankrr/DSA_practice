class Solution {
public:
    bool subsetSum(int i, int target, vector<int>& nums,vector<vector<int>>&dp) {
    if (target == 0) return true;                  // success
    if (i == nums.size() || target < 0) return false; // failure
    if(dp[i][target]!=-1)return dp[i][target];
    // pick or not pick
    bool pick = subsetSum(i+1, target - nums[i], nums,dp);
    bool notpick = subsetSum(i+1, target, nums,dp);

    return dp[i][target]= pick || notpick;
}


    bool canPartition(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        vector<vector<int>>dp(nums.size()+1,vector<int>(total,-1));
    if (total % 2 != 0) return false;
    return subsetSum(0, total/2, nums,dp);
    }
};