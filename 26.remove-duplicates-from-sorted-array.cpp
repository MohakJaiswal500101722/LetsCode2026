/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //case for empty array
        if (nums.empty()) {
            return 0;
        } 
        int pos = 1;
        for (int i = 1 ; i < nums.size() ; i++) {
            if (nums[i] != nums[i-1]) {
                nums[pos] = nums[i];
                pos++;
            }
        }
        return pos;
    }
};
// @lc code=end

