class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> m;
        vector <int> result;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]=i;
        
        for(int i=0;i<nums.size();i++)
        {
            int newTarget = target-nums[i];
            if(newTarget == nums[m[newTarget]] && i!=m[newTarget])
            {
                result.push_back(i);
                result.push_back(m[newTarget]);
                return result;
            }
        }
        return result;
    }
};