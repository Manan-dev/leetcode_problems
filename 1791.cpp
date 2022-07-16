class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,int> mpp;
        map<int,int>::iterator mit;
        for(int i = 0; i < edges.size(); i++){
            for (int j = 0; j< edges[i].size(); j++){
                mpp[edges[i][j]]++;
            }
        }
        for (mit = mpp.begin(); mit != mpp.end(); mit++){
            if (mit->second == edges.size()) return mit->first;
        }
        
        return 0;
    }
};