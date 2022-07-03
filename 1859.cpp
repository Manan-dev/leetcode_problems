class Solution {
public:
    string sortSentence(string s) {
       string newS;
        vector<string> vs(9);
        stringstream ss(s);
        int num, cnt = 0;
        while (ss >> newS){
            num = newS[newS.size()-1]-'0'-1;
            vs[num] = newS.substr(0, newS.length()-1);
            cnt++;
        }
        string ans = vs[0];
        for (int i = 1; i < cnt; i++){
            ans = ans + " " + vs[i];
        }
        return ans;
    }
};