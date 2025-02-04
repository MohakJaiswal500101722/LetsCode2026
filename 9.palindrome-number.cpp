/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x; //this is getting updated everytime the loop is running
        long int rev = 0;
        while( x > 0 ) {
            //we want to extract r1 from 121
            int digit;
            digit = x % 10;
            //now we need to store the reverse
            rev = (rev * 10) + digit;
            x = x/10;
        } if (rev == temp) {
            return true;
        } else {
            return false;
        }
    }
};
// @lc code=end

