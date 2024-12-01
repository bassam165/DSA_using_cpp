class Solution {
public:
    bool search(vector<vector<int>>& mat, int target, int row){
         int n = mat[row].size();
        int st = 0, end = n - 1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(mat[row][mid] == target){
                return true;
            } else if(target > mat[row][mid]){
                st = mid + 1;
            } else{
                end = mid - 1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int r = mat.size(), c = mat[0].size();
        int sr = 0, er = r - 1;
        while(sr <= er){
            int mr = sr + (er - sr)/2;
            if(target >= mat[mr][0] && target <= mat[mr][c-1]){
                return search(mat, target, mr);
            }else if(target > mat[mr][c-1]){
                sr = mr + 1;
            }
             else {
                er = mr - 1;
            }
        }
        return false;
    }
};
