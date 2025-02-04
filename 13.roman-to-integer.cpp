#include<unordered_map>
#include<vector>
class Solution {
public:
    int romanToInt(std::string s) {
        std::unordered_map<char, int> romanMap = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
            {'C', 100}, {'D', 500}, {'M', 1000}
        };  

        int result = 0;
        int n = s.length();
        
        for (int i = n - 1; i >= 0; i--) {
            if (i < n - 1 && romanMap[s[i]] < romanMap[s[i + 1]]) {
                result -= romanMap[s[i]];  // Subtract if smaller than next
            } else {
                result += romanMap[s[i]];  // Otherwise, add
            }
        }

        return result;
    }
};
