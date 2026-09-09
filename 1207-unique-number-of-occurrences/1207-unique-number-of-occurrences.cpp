class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int, int> mp;

        // Step 1: Count frequency
        for(int num : arr) {
            mp[num]++;
        }

        unordered_set<int> set;

        // Step 2: Check frequency is unique
        for(auto x : mp) {

            int count = x.second;
            set . insert(count);

        }

        return set.size() == mp.size();
    }
};