class Solution {
public:
    void dfs(vector<int>& subst,vector<vector<int>>& res,vector<int>& nums,vector<int>& visited,int n){
        if(subst.size()==n){
            res.push_back(subst);
            return;
        }
        for(int i=0; i<n; i++){
            if(visited[i]) continue;
            subst.push_back(nums[i]);
            visited[i] = 1;
            dfs(subst,res,nums,visited,n);
            visited[i] = 0;
            subst.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> subst;
        int n = nums.size();
        vector<int> visited(n,0);
        dfs(subst,res,nums,visited,n);
        return res;
    }
};
