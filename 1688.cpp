class Solution {
public:
    int numberOfMatches(int n) {
        int cnt = 0;
        while (n > 1) {
            // number of matches
            cnt = cnt +  n / 2;
            // number of teams
            n = (n - 1) / 2 +1;
        }
        return cnt;
    }
};
