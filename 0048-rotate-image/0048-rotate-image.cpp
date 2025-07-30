class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int size=matrix.size();
        for(int x=0;x<size;x++){
            for(int y=x+1;y<size;y++){
                swap(matrix[x][y],matrix[y][x]);
            }
        }

        for(int x=0;x<size;x++){
            reverse(matrix[x].begin(),matrix[x].end());
        }

    }
};