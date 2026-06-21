class Solution {
public:
void helper(int idx, int n, vector<int> &curr, vector<vector<int>> &ans,vector<int> &nums)
{
    if(idx == n)
    {
        ans.push_back(curr);
        return;
    }
    curr.push_back(nums[idx]);      //take
    helper(idx+1,n,curr,ans,nums); //recurse
    curr.pop_back();              //pop
    helper(idx+1,n,curr,ans,nums); //recurse
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr;
        vector<vector<int>> ans;
        int n = nums.size();
        helper(0,n,curr,ans,nums);
        return ans;
        
    }
};
