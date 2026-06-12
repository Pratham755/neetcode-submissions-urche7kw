class Solution {
public:
void helper(int idx, unordered_map <char,string> &mpp, vector<string> &ans, string res,string digits)
{
    if(idx == digits.size())
    {
        ans.push_back(res);
        return;
    }
    char digit = digits[idx];
    string curr = mpp[digit];
    for(int i = 0; i<curr.size(); i++)
    {
    res += curr[i];
    helper(idx+1,mpp,ans,res,digits);
    res.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size() == 0)
        return ans;
        unordered_map<char,string> mpp =
        {
             {'2', "abc"},
    {'3', "def"},
    {'4', "ghi"},
    {'5', "jkl"},
    {'6', "mno"},
    {'7', "pqrs"},
    {'8', "tuv"},
    {'9', "wxyz"}};
            string res = "";
            helper(0,mpp,ans,res,digits);
            return ans;
        
    }
};
