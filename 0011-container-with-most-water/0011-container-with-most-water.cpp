class Solution {
public:
    int maxArea(vector<int>& height) {
        int size=height.size();
        int start=0;
        int end=size-1;
        int maxwater=INT_MIN;

        // for(int i=0;i<size;i++){
        //     for(int j=end;j>=0;j--){
        //         int water=min(height[i],height[j])*(j-i);
        //         maxwater=max(maxwater,water);
        //     }
        // }
        while(start<end){
            int water=min(height[start],height[end])*(end-start);
            maxwater=max(maxwater,water);
            (height[start]<height[end])?start++:end--;
        }
        return maxwater;
    }
};