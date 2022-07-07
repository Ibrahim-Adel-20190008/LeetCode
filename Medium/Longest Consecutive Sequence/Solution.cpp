class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0;
        priority_queue<int, vector<int>, greater<int> > pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        int count=1,result=0,top=pq.top();
        pq.pop();
        while(!pq.empty())
        {
            if(pq.top()-top==1)
            {
                count++;
            }
            else if(pq.top()==top)
            {
                pq.pop();
                continue;
            }
            else
            {
                result=max(result,count);
                count=1;
            }
            top = pq.top();
            pq.pop();
        }
        return max(result,count);
    }
};