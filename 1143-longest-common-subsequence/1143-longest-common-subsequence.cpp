class Solution {
public:
    //this is the memoisation technique but it will fail for 1 test case 47 in this so we need to apply tabulation
    int solve(string text1,string text2,int x,int y,vector<vector<int>>&dp){
        if(x<0 or y<0)return 0;
        if(dp[x][y]!=-1)return dp[x][y];
        if(text1[x]==text2[y])return dp[x][y] = 1 + solve(text1,text2,x-1,y-1,dp);
        else return dp[x][y]=max(solve(text1,text2,x-1,y,dp),solve(text1,text2,x,y-1,dp));
    }
    //tabul

int lcs(string text1, string text2) {
        int n = text1.size(), m = text2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (text1[i - 1] == text2[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        return dp[n][m];
    }

    int longestCommonSubsequence(string text1, string text2) {
            // vector<vector<int>>dp(text1.size(),vector<int>(text2.size(),-1));
            // return solve(text1,text2,text1.size()-1,text2.size()-1,dp);
            return lcs(text1,text2);
    }
};


