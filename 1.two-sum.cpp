/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int> twoNo(2, 0); 
        
        for(int i=0 ; i<(nums.size()-1); i++){
            
            
            for (int m=i+1; m<nums.size(); m++){
       
                 if (nums[i] + nums[m] == target){
                    twoNo[0] = i;
                    twoNo[1] = m;
                break;
            }
            }
            
            
        }
          return twoNo;
        }
        
    };

// @lc code=end

