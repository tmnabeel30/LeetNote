/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
    vector<vector<int>> anslist;
    for(int i = 0; i<numRows; i++){
        anslist.push_back(makeARow(i+1));
    }

    return anslist;
    }

    vector<int> makeARow(int row){

        int ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int col = 1;col<row;col++){
            ans = ans *(row-col);
            ans = ans/col;
            ansRow.push_back(ans);
        }
        return ansRow;
    }

    
};
// @lc code=end

