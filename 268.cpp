class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int miss = 0;
        int n = nums.size();
        int i = 0;
        for (i = 0; i < n; i++){
            miss = miss ^ i+1 ^ nums[i];
        }
        return miss;
    }
};