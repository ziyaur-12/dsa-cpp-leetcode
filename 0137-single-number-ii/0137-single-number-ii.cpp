class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int ans = 0;

        // Step 1: Har bit position check karo
        for(int i = 0; i < 32; i++) {

            // Step 2: Current bit ka count
            int count = 0;

            // Step 3: Har number check karo
            for(int num : nums) {

                // Step 4: Current bit 1 hai?
                if(num & (1 << i)) {
                    count++;
                }
            }

            // Step 5: Repeating numbers 3 baar hain
            if(count % 3 != 0) {

                // Step 6: Answer mein current bit 1 karo
                ans = ans | (1 << i);
            }
        }

        return ans;
    }
};