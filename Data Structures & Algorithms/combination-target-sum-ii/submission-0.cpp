class Solution {
public:
void helper(int idx,int n,vector<int>&res,vector<vector<int>> &ans,int target,vector<int> &candidates)
{
    if(target == 0)
    {
        ans.push_back(res);
        return;
    }
    if(target < 0 || idx== n)
    return;
    for(int i = idx; i<n; i++)
    {
        if(i > idx && candidates[i] == candidates[i-1])
        continue;
        res.push_back(candidates[i]);
        helper(i+1,n,res,ans,target-candidates[i],candidates);
        res.pop_back();
    }
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<int> res;
        vector<vector<int>> ans;
        sort(candidates.begin(),candidates.end());
        helper(0,n,res,ans,target,candidates);
        return ans;
        
    }
};
