class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int n = nums.size();

        // First non-negative number
        int start = 0;
        int end = n - 1;

        while(start <= end) {

            int mid = start + (end - start) / 2;

            if(nums[mid] >= 0) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        int neg = start;


        // First positive number
        start = 0;
        end = n - 1;

        while(start <= end) {

            int mid = start + (end - start) / 2;

            if(nums[mid] > 0) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }

        int pos = n - start;

        return max(pos, neg);
    }
};