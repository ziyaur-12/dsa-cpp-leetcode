class Solution {
public:
    bool isPalindrome(string s) {

        int start = 0;
        int end = s.size() - 1;

        while(start < end) {

            // Left side ka non-alphanumeric skip karo
            if(!isalnum(s[start])) {
                start++;
                continue;
            }

            // Right side ka non-alphanumeric skip karo
            if(!isalnum(s[end])) {
                end--;
                continue;
            }

            // Lowercase karke compare karo
            if(tolower(s[start]) != tolower(s[end])) {
                return false;
            }

            start++;
            end--;
        }

        return true;
    }
};