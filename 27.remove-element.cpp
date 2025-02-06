class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int pos = 0;
        for (int i = 0 ; i < arr.size() ; i++)
        {
            if (arr[i] != val) {
                 arr[pos] = arr[i];
            pos++;
            }

        }
        return pos;
    }
};