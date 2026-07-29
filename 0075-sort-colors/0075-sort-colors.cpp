class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size=nums.size();
        //using 3 pointer
        int start=0,end=size-1,mid=0;
        while(mid<=end){
            if(nums[mid]==0){
                swap(nums[mid],nums[start]);
                start++;
                mid++;
            }
            else if (nums[mid]==2){
                swap(nums[mid],nums[end]);
                end--;
            }
            else mid++;
            
        }
    }
};

// 1 0 2

