class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l = 0, r = num, mid = 0;
        while (l <= r){
            mid = l + (r-l)/2;
            if (mid * mid == num) return true;
            if (mid * mid < num){
                l = mid + 1;
            } else {
                r = mid -1;
            }
        }
        return false;
    }
};