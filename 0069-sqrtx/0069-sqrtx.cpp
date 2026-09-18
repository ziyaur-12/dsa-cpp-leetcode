class Solution {
public:

    long long binarySearch(int n){
        int s = 0;
        int e = n;
        int ans= -1;
        while(s <= e){
            long long mid = s+ (e-s)/2;
            long long square = mid*mid;
            if(square == n){
                return mid;
            }

            else if(square > n){
                e = mid -1;
            }
           else if(square < n){
                ans = mid;
                s = mid +1;
            }
        }
        return ans;
    }
      int mySqrt(int x) {

        return binarySearch(x);
        
    }
};