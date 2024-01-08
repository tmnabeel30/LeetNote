/*
 * @lc app=leetcode id=1009 lang=cpp
 *
 * [1009] Complement of Base 10 Integer
 */

// @lc code=start
class Solution {
public:
    int bitwiseComplement(int n) {
      
       int mask = 0;
       int m = n;
       int ans = 0;
       if (n == 0){
        return 1;
        }

       while(m != 0){
         mask = (mask << 1) | 1;
         m=m >> 1;

       }
          ans  = (~n) & mask;
    return ans;
       
 
    }
};
// @lc code=end

