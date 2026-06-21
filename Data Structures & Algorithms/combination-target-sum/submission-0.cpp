class Solution {
public:
void helper(int idx,int n,vector<int> &curr,vector<vector<int>> &ans,vector<int> &nums,int target,int sum)
{
    if(target == 0)
    {
        ans.push_back(curr);
        return;
    }
    if(idx == n || target < 0)
    {
        return;
    }
    curr.push_back(nums[idx]);
    helper(idx,n,curr,ans,nums,target-nums[idx],sum+nums[idx]);
   // sum -= nums[idx];
    //if(!curr.empty()) 
    curr.pop_back();
    helper(idx+1,n,curr,ans,nums,target,sum);
    
}
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> curr;
        vector<vector<int>> ans;
        helper(0,n,curr,ans,nums,target,0);
        return ans;
        
    }
};
