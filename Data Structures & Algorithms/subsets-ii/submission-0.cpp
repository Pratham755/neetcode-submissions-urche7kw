class Solution {
public:
void helper(int idx,vector<int> &curr,vector<vector<int>> &ans,int n,vector<int> &nums)
{ans.push_back(curr);
     
    if(idx == n)
    {
       
        return;
    }
    //ans.push_back(curr);
    for(int i = idx; i<n; i++)
    {
        if(i > idx && nums[i] == nums[i-1])
        continue;
        curr.push_back(nums[i]);
        helper(i+1,curr,ans,n,nums);
        curr.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n = nums.size();
        vector<int> curr;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        helper(0,curr,ans,n,nums);
        return ans;
        
    }
};
