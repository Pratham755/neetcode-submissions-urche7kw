class Solution {
public:
void helper(int idx,int n,vector<int> &curr,vector<int> &nums,vector<vector<int>> &ans)
{
    if(idx == n)
    {
        ans.push_back(curr);
        return;
    }
    for(int i = idx; i<n; i++)
    {
        swap(nums[idx],nums[i]);
        curr.push_back(nums[idx]);
        helper(idx+1,n,curr,nums,ans);
        swap(nums[i],nums[idx]);
        curr.pop_back();
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<int> curr;
        vector<vector<int>> ans;
        helper(0,n,curr,nums,ans);
        return ans;
        
    }
};
