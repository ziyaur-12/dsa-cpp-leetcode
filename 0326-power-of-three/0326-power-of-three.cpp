class Solution {
public:
    bool isPowerOfThree(int n) {

        if(n <= 0) {
            return false;
        }

        int ans = 1;

        while(ans <= n / 3) {
            ans = ans * 3;
        }

        return ans == n;
    }
};