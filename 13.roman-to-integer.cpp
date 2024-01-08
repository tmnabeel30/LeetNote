/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
  
  int num = 0;
  int totalNumber = 0;
    int prevNum = 0;
  for (int i = 0; i< s.length() ; i++){
   switch(s[s.length()-i-1]) {
                case 'I': num = 1; break;
                case 'V': num = 5; break;
                case 'X': num = 10; break;
                case 'L': num = 50; break;
                case 'C': num = 100; break;
                case 'D': num = 500; break;
                case 'M': num = 1000; break;
                                // Handle invalid characters if necessary
                return 0;

            }
            
            if (totalNumber == 0){
                totalNumber += num;
                prevNum = num;
            }else{
                if (prevNum>num){
                    totalNumber = totalNumber-num;
                    prevNum = num;
                }else{
                    totalNumber += num;
                    prevNum = num;
                }
            }
  }
            return totalNumber;

   }
        
    };

// @lc code=end

