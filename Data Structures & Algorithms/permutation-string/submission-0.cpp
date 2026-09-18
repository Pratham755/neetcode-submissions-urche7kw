class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        map<char,int> mpp1;
        map<char,int> mpp2;
        int k = s1.size();
        for(int i = 0; i<n1; i++)
        {
            mpp1[s1[i]]++;
        }
        int l = 0;
        for(int r = 0; r < s2.size(); r++)
        {
            mpp2[s2[r]]++;
            if(r-l+1 == k)
            {
                if(mpp1 == mpp2)
                return true;
            
            mpp2[s2[l]]--;
            if(mpp2[s2[l]] == 0)
            mpp2.erase(s2[l]);
            l++;
            }
        }
        return false;
    }
};
