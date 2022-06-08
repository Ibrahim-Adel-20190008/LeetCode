class Solution {
public:
    int solve (vector<int> nums)
    {
        int result=nums[0],newResult=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            newResult = max(nums[i],newResult+nums[i]);
            result = max(result,newResult);
        }
        return result;
    }
    int maxSubArray(vector<int>& nums) {
        return solve(nums);
    }
};