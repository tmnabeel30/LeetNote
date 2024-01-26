/*
 * @lc app=leetcode id=1838 lang=cpp
 *
 * [1838] Frequency of the Most Frequent Element
 */

// @lc code=start


class Solution {
    public:
    int maxFrequency(std::vector<int>& nums, int k){
// Step 2: Initialize variables
      long long L = 0, sum = 0, res = 0;
      int n = nums.size();
// Step 1: Sort the array
     std::sort(nums.begin(), nums.end());

 // Step 3: Traverse the array with a sliding window
      for(int R = 0; R<n; R++){
        
        sum  += nums[R];
    // Shrink the window if the condition is not satisfied    
        while((nums[R]*(R - L + 1)) > (sum + k) ){
            sum -= nums[L];
           L++;
        
        }
     
      // Update the result   
        res = res = std::max(res, R - L + 1);

      }

      return res;
    }
};



// @lc code=end

