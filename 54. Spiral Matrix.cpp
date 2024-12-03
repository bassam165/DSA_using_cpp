class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        
        int m = mat.size(), n = mat[0].size();
        int srow = 0, erow = m - 1, scol = 0, ecol = n - 1;
        vector<int> ans;
        
        while (srow <= erow && scol <= ecol) {
            // Traverse top row
            for (int i = scol; i <= ecol; i++) {
                ans.push_back(mat[srow][i]);
            }
            srow++;
            
            // Traverse right column
            for (int i = srow; i <= erow; i++) {
                ans.push_back(mat[i][ecol]);
            }
            ecol--;
            
            // Traverse bottom row (if still valid)
            if (srow <= erow) {
                for (int i = ecol; i >= scol; i--) {
                    ans.push_back(mat[erow][i]);
                }
                erow--;
            }
            
            // Traverse left column (if still valid)
            if (scol <= ecol) {
                for (int i = erow; i >= srow; i--) {
                    ans.push_back(mat[i][scol]);
                }
                scol++;
            }
        }
        
        return ans;
    }
};
