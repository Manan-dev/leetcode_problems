class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector <bool> out;
        int n = candies.size();
        int maxEl = *max_element(candies.begin(), candies.end());
        for (int i = 0; i < n; i++) {
            if (candies[i] + extraCandies >= maxEl) out.push_back(true);
            else out.push_back(false);
        }
        return out;
    }
};