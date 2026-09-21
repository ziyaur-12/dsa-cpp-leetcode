class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {

        vector<int> ans;
        int count[1001] = {0};

        // Har array ke elements count karo
        for(int i = 0; i < nums.size(); i++) {

            for(int j = 0; j < nums[i].size(); j++) {

                count[nums[i][j]]++;
            }
        }

        // Jo element har array me hai
        for(int i = 1; i <= 1000; i++) {

            if(count[i] == nums.size()) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};