class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int target = nums[nums.size()/2];
        int result=0;
        for(int i: nums)
        {
            result+=abs(target-i);
        }
        return result;
    }
};