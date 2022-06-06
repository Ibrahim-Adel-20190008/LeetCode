class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int partations=1,minVal,count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0)
            {
               minVal=nums[i];
            }
            else
            {
                if(nums[i]-minVal>k)
                {
                    partations++;
                    count=0;
                    i--;
                    continue;
                }
            }
            count++;
        }
        return partations;
    }
};