/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start

class Solution {
public:
    string OnlyAlphabet( string statement){
        string result;
        for(char ch : statement){
            if (ch.isalpha()){
                result += ch;
            }

        }

        return result;
    } 
    bool isPalindrome(string s) {

        string modified = tolower(OnlyAlphabet(s));
        string reversed  = reverse(modified.begin(), modified.end()); 
        
        if (reversed == modified) {
            return true;
        }else {
            return false;
        }
    }
};
// @lc code=end
