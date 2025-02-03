/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start

// More optimized BRUTE FORCE SOLUTION
#include <vector>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i = 0 ; i < nums.size() ; i++) {
            int req = target - nums[i]; //calculating the required number
            for (int j = i + 1 ; j < nums.size() ; j++) {
                if (nums[j] == req) {
                    return {i , j};
                }
            }
        } 
        return {};
    }
};
// @lc code=end

