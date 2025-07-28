class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
         int size=arr.size();
        int x=0;
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        while(x<size){
            int start = arr[x][0];
            int end = arr[x][1];
            int y = x + 1;

            while (y < size && arr[y][0] <= end) {
                end = max(end, arr[y][1]);
                y++;
            }

            ans.push_back({start, end});
            x = y;
        }
        return ans;
    }
};