class Solution {
public:
    void dfs(vector<int>& nums,int i,vector<int>& st, vector<vector<int>>& subset){
        if(i==nums.size()) {
            subset.push_back(st);
            return;
        }
        st.push_back(nums[i]);
        dfs(nums,i+1,st,subset);
        st.pop_back();
        dfs(nums,i+1,st,subset);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> subset;
        vector<int> st;
        dfs(nums,0,st,subset);
        return subset;
    }
};
