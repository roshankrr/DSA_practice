class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int left=0,right,top=0,bottom;
        right=matrix[0].size()-1;
        bottom=matrix.size()-1;
        /*
        1=left--right
        2=top--bottom
        3=right--left
        4=bottom--top
        */
        int direction=1;
        while(top<=bottom && left<=right){
            switch(direction){
                case 1:
                for(int x=left;x<=right;x++){
                    ans.push_back(matrix[top][x]);
                }
                top++;
                direction=2;
                break;
                case 2:
                for(int x=top;x<=bottom;x++){
                    ans.push_back(matrix[x][right]);
                }
                right--;
                direction=3;
                break;
                case 3:
                for(int x=right;x>=left;x--){
                    ans.push_back(matrix[bottom][x]);
                }
                bottom--;
                direction=4;
                break;
                case 4:
                for(int x=bottom;x>=top;x--){
                    ans.push_back(matrix[x][left]);
                }
                direction=1;
                left++;
                break;
            }
        }
        return ans;
    }
};