class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0; // Pointer jaha pe non-zero element ko place karna hai
        for (int j = 0; j < nums.size(); j++) {
            // Agar current element non-zero hai, to usko i-th position pe swap kar do
            if (nums[j] != 0) {
                swap(nums[i], nums[j]);
                i++;
            }
        }
        
    }
};