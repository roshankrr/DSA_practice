class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int>neg;
        queue<int>pos;
        int size=nums.size();
        for(int i=0;i<size;i++){
            if(nums[i]<0)neg.push(nums[i]);
            else{
                pos.push(nums[i]);
            }
        }
        int i=0;
        while(!pos.empty() or !neg.empty()){
            int postop=pos.front();
            pos.pop();
            nums[i]=postop;
            i++;
            int negtop=neg.front();
            neg.pop();
            nums[i]=negtop;
            i++;
        }
        return nums;
    }
};