class Solution {
public:
bool ispalindrome(string &s,int start,int end)
{
    while(start < end)
    {
        if(s[start++] != s[end--])
        {
            return false;
        }
    }
    return true;
}
void helper(int idx,string &s,vector<string> &res,vector<vector<string>> &ans)
{
    if(idx == s.size())
    {
        ans.push_back(res);
        return;
    }
    for(int i = idx; i<s.size(); i++)
    {
        if(ispalindrome(s,idx,i))
        {
            res.push_back(s.substr(idx,i-idx+1));
            helper(i+1,s,res,ans);
            res.pop_back();
        }
    }
}
    vector<vector<string>> partition(string s) {
        vector<string> res;
        vector<vector<string>> ans;
        helper(0,s,res,ans);
        return ans;
        
    }
};
