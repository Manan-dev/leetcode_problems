class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int cnt = 0;
        int ma = 0;
        for (int i = 0; i < s.size(); i++){
            cnt = 0;
            for (int j = 0; j < s[i].size(); j++){
                if (s[i][j] == ' '){
                    cnt++;
                }
            }
            ma = max(cnt + 1, ma);
        }
        return ma;
    }
};