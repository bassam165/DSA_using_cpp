class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int t) {
        int m = mat.size(), n = mat[0].size();
        int r = 0, c = n - 1;
        while(r < m && c >= 0){
            if(t == mat[r][c]){
                return true;
            } else if(t < mat[r][c]){
                c--;
            } else {
                r++;
            }
        }
        return false;
    }
};
