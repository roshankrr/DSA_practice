class Solution {
public:
    int solve(int indx, vector<int>& days, vector<int>& costs, vector<int>& dp) {
    if (indx >= days.size()) return 0;
    if (dp[indx] != -1) return dp[indx];

    // 1-day pass
    int cost0 = costs[0] + solve(indx + 1, days, costs, dp);

    // 7-day pass
    int i = indx;
    while (i < days.size() && days[i] < days[indx] + 7) i++;
    int cost1 = costs[1] + solve(i, days, costs, dp);

    // 30-day pass
    int j = indx;
    while (j < days.size() && days[j] < days[indx] + 30) j++;
    int cost2 = costs[2] + solve(j, days, costs, dp);

    return dp[indx] = min({cost0, cost1, cost2});
}

int mincostTickets(vector<int>& days, vector<int>& costs) {
    vector<int> dp(days.size(), -1);
    return solve(0, days, costs, dp);
}

};