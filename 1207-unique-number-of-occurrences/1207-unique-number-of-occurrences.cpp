class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int, int> freq;

        // Step 1: Count frequency
        for(int num : arr) {
            freq[num]++;
        }

        unordered_set<int> seen;

        // Step 2: Check frequency is unique
        for(auto x : freq) {

            int count = x.second;

            if(seen.count(count)) {
                return false;
            }

            seen.insert(count);
        }

        return true;
    }
};