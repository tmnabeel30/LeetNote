/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */

// @lc code=start
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(); // no of row
        int n = matrix[0].size(); // no of col
        
        int colmatrix = 1;
 for (int i = 0; i<m; i++){
            for(int j = 0; j<n ; j++){
                if (matrix[i][j] == 0){
               
               matrix[i][0] = 0;
               if(j!= 0){
                matrix[0][j] = 0;
               }
                else{
                colmatrix = 0;
            }
            }
        }
 }
     for (int i = 1; i<m; i++){
            for(int j = 1; j<n ; j++){
                if (matrix[i][j] != 0) {
                    if ((matrix[0][j]==0) || (matrix[i][0]==0)) {
                     matrix[i][j] = 0;
                    
                }
      
            }
            }
        } 

       
    if (matrix[0][0] == 0){
        for (int i = 0; i<n; i++){
            matrix[0][i] = 0;
            }

    }
     if (colmatrix == 0){
        for (int i = 0; i<m; i++){
            matrix[i][0] = 0;

        }
    }
  
  
    }
};
// @lc code=end

