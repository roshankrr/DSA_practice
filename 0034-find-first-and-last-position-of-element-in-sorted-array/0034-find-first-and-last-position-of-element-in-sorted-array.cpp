class Solution {
    int find(vector<int>& arr, int target) {
        int left = 0, right = arr.size();
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] < target) left = mid + 1;
            else right = mid;
        }
        return left;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=find(nums,target);
        if(left==nums.size() or nums[left]!=target)return {-1,-1};
        int right=find(nums,target+1)-1;
        return {left,right};
    }
};