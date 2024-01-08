/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
                if (x < 0) return false; // Negative numbers can't be palindromes
        
        int original = x;
        long reverse = 0; // Use a long to handle potential overflow
        
        while (x > 0) {
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x /= 10;
        }
        
        return original == reverse;

     }
    }   ;

// @lc code=end

