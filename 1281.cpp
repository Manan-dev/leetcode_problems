class Solution {
public:
    int subtractProductAndSum(int n) {
        int ans = 0, prod = 1,sum = 0;
        while (n > 0){
            prod = prod * (n %10);
            sum = sum + (n%10);
            n = n / 10;
        }
        ans = prod - sum;
        return ans;
    }
};