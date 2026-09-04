class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int l = 0;
        unordered_map<int,int> mpp;
        int ans = 0;
        for(int r = 0; r<n; r++)
        {
            mpp[s[r]]++;
            while(mpp[s[r]] > 1)
            {
                mpp[s[l]]--;
                l++;

            }
            ans = max(ans,r-l+1);
        }
        return ans;
    }
};
