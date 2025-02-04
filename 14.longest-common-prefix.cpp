/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        sort(s.begin(), s.end());
        
        string firstS = s[0];
        string lastS = s[s.size() - 1];

        int index = 0;
        while (index < firstS.length() && index < lastS.length()) {
            if(firstS[index] == lastS[index]) {
                index++;
            } else {
                break;
            }
        }

        return firstS.substr(0, index);
    }
};
// @lc code=end

