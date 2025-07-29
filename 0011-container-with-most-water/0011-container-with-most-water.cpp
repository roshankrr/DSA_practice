class Solution {
public:
    int maxArea(vector<int>& arr) {
        int size=arr.size();
        int low=0;
        int high=size-1;
        int maxwater=0;
        while(low<high){
            int water=min(arr[low],arr[high])*(high-low);
            cout<<water<<" ";
            maxwater=max(water,maxwater);
            (arr[low]<arr[high])?low++:high--;
        }
        return maxwater;
    }
};

//j-i-1