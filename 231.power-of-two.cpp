/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        int remainder = 0;
        int Q = n;
        int Z = 0;
        if (n == 1 ){
            return true;
        }
        if (n==0){
            return false;
        }
        if (n>1){
        while(Q != 1){
        remainder = Q%2;
        Q = Q/2;
        if (remainder != 0 ){
            Z++;
        }
        
        }
        }
        if (Z!=0 || n<1){
            return false;
        } else {
            return true;
        }
    }
};
// @lc code=end

