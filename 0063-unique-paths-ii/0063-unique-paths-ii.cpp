class Solution {
public:

    int solve(int i,int j,vector<vector<int>>& obstacleGrid,vector<vector<int>>&dp){
        //base case
        if(i>=obstacleGrid.size() || j>=obstacleGrid[0].size()) return 0;
        if(obstacleGrid[i][j] == 1) return 0;
        if(i==obstacleGrid.size()-1 && j==obstacleGrid[0].size()-1) return 1;

        if(dp[i][j]!= -1)return dp[i][j];
        //recursion
        int pickright=solve(i,j+1,obstacleGrid,dp);
        int pickbottom=solve(i+1,j,obstacleGrid,dp);

        return dp[i][j]= pickright+pickbottom;

    }


    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> dp(obstacleGrid.size(), vector<int>(obstacleGrid[0].size(), -1));
        return solve(0,0,obstacleGrid,dp);
    }
};