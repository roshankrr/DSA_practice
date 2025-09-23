class Solution {
public:

    long long solve(int idx,vector<vector<int>>& questions,vector<long long>&dp){
        //base case
        if(idx>=questions.size())return 0;
        if(dp[idx]!= -1)return dp[idx]; //memoiese
        //recursion
        long long pick=questions[idx][0]+solve(idx+questions[idx][1]+1,questions,dp);
        long long notpick=solve(idx+1,questions,dp);
        return dp[idx]= max(pick,notpick);
    }
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long>dp(questions.size()+1,-1);
        return solve(0,questions,dp);
    }
};