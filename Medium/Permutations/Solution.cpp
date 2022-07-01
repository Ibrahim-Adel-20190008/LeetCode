class Solution {
public:
    static void perm(vector<int> nums,vector<int> prefix , vector<vector<int>>& result)
    {
        if(!nums.size())
        {
            result.push_back(prefix);
            return;
        }
        for(int i=nums.size()-1;i>=0;i--)
        {
            int value = nums[i];
            prefix.push_back(value);
            nums.erase(nums.begin()+i);
            perm(nums,prefix,result);
            nums.push_back(value);
            prefix.pop_back();
        }
    }
        vector<vector<int>> permute(vector<int> nums) {
        vector<vector<int>> result;
        perm(nums, vector<int>(), result);
        return result;
    }
};