class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        int value=nums[0];
        result.push_back(value);
        for(int i=1;i<nums.size();i++)
        {
            value+=nums[i];
           result.push_back(value); 
        }
        return result;
    }
};