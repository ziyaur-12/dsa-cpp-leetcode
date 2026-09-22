class Solution {
public:
    int firstUniqChar(string s) {

        int count[26] = {0};

        // Step 1: frequency count
        for(int i = 0; i < s.size(); i++) {
            count[s[i] - 'a']++;
        }

        // Step 2: first character whose count is 1
        for(int i = 0; i < s.size(); i++) {
            if(count[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};