class Solution {
public:
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        int n = strs.size();
        vector<string> dupl = strs;
        for(int i=0; i<n; i++){
            sort(dupl[i].begin(),dupl[i].end());
        }
        vector<int> visited(n,0);
        for(int i=0; i<n; i++){
            vector<string> v;
            for(int j=i; j<n; j++){
                if(dupl[j]==dupl[i]&&visited[j]==0){
                    v.push_back(strs[j]);
                    visited[j] = 1;
                }
            }
            if(v.size()>=1){
            res.push_back(v);
            }
        }
        return res;
    }
};