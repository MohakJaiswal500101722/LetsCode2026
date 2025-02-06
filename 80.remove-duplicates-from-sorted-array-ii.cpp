class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //nums = [1 , 1, 1 , 2 , 2 , 3]
        if(nums.empty()) {
            return 0;
        } if (nums.size() <= 2) return nums.size();
        int pos = 2;
        for (int i = 2 ; i < nums.size() ; i++) {
            if (nums[i] != nums[pos - 2]) {
                nums[pos] = nums[i];
                pos++;
            }
        }
        return pos;
    }
  
};