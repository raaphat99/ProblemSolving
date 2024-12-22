class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int rows = matrix.size(), cols = matrix[0].size();
        int top=0, bottom=rows-1, left=0, right=cols-1, dir=0;

        while(top<=bottom && left<=right) {
            if (dir == 0) {
                for (int i=left; i<=right; i++) {
                    result.push_back(matrix[top][i]);
                    top++;
                }
            } else if (dir == 1) {
                for (int i=top; i<=bottom; i++) {
                    result.push_back(matrix[i][right]);
                    right--;
                }
            } else if (dir == 2) {
                for (int i=right; i>=left; i--) {
                    result.push_back(matrix[bottom][i]);
                    bottom--;
                }
            } else {
                for (int i=bottom; i>=top; i--) {
                    result.push_back(matrix[i][left]);
                    left++;
                }
            }
            dir = (dir+1)%4;
        }
        return result;
    }
};
