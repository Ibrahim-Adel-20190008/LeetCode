class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        
        vector<int> newNums;
        int x;
        
        for(int i=0;i<nums.size()/2;i++)
        {
            if(i%2)
            {
            x = max(nums[2*i],nums[2*i+1]);
            newNums.push_back(x);
            }
            else
            {
            x = min(nums[2*i],nums[2*i+1]);
            newNums.push_back(x);
            }
        }
        
        return minMaxGame(newNums);
        
    }
};