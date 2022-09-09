class Solution {
public:
        int maxResult(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        int n=nums.size();
        int dp[n];
        dp[n-1]=nums[n-1];
        pq.push({nums[n-1],n-1});
        for(int i=n-2;i>=0;i--)
        {
            auto current = pq.top();
            dp[i]=nums[i]+current.first;
            while(!pq.empty() && current.second >= (i+k))
            {
                pq.pop();
                current=pq.top();
            }
            pq.push({dp[i],i});
        }
        return dp[0];
    }
};