class Solution {
public:
    // |x - y| = k is same as y = x + k and y = x - k
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(map[nums[i]+k]) count+=map[nums[i]+k]; 
            if(map[nums[i]-k]) count+=map[nums[i]-k]; 
            map[nums[i]]++;
        }
        return count;
    }
};
