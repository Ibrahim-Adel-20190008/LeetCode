class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        map<int,int> newNums;
        for(int i=0;i<nums.size();i++)
            newNums[nums[i]]=i;
        for(int i=0;i<operations.size();i++)
        {
            nums[newNums[operations[i][0]]]=operations[i][1];
            newNums[operations[i][1]] = newNums[operations[i][0]];
        }
        return nums;
    }

};