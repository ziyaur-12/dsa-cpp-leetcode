class Solution {
    public:
    bool checkEqual(int a[26], int b[26]){
        for(int i=0; i<26; i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        // Count the frequency of each character in s1
        int count1[26] = {0};
        for(int i=0; i<s1.length(); i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }

        // Use a sliding window to check if any permutation of s1 exists in s2
        int windowSize = s1.length();
        int count2[26] = {0};
        int i = 0;

        // Initialize the first window
        while(i < windowSize && i < s2.length()){
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        // Check if the first window is a permutation of s1
        if(checkEqual(count1, count2)){
            return true;
        }   

        // Slide the window and check each subsequent window
        while(i < s2.length()){
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;

            char oldChar = s2[i - windowSize];
            index = oldChar - 'a';
            count2[index]--;
            i++;
            // Check if the current window is a permutation of s1
            if(checkEqual(count1, count2)){
                return true;
            }
        }
        return false;
    }
};