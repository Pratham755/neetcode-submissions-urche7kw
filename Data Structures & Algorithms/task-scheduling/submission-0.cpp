class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char,int> mpp;
        for(int i = 0; i<tasks.size(); i++)
        {
            mpp[tasks[i]]++;
        }
        priority_queue<int> pq;
        int ans = 0;
        for(auto it : mpp)
        {
            pq.push(it.second);
        }
        while(!pq.empty())
        {
            vector<int> temp;
            for(int i = 0; i<=n && !pq.empty(); i++)
            {
               temp.push_back(pq.top());
               pq.pop();
            }
            for(int f : temp)
            {
                if(f > 1)
                pq.push(f-1);
            }
            if(pq.empty())
            ans += temp.size();
            else
            ans += n+1;
        }
        return ans;
    }
};
