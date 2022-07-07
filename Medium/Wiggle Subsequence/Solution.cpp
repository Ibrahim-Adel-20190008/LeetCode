class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int stage =1,final_result=1,result=1,current=nums[0],value;
        
        for(int j=0;j<2;j++)
        {
            for(int i=1;i<nums.size();i++)
            {
                // positive
                if(stage)
                {
                    value = nums[i]-current;
                    if(value>0)
                    {
                        stage=0;
                        result++;
                    }
                    current = nums[i];
                }
                // negative
                else
                {
                    value = nums[i]-current;
                    if(value<0)
                    {
                        stage=1;
                        result++;
                    }
                    current = nums[i];
                }
            }
            stage=0;
            final_result = max(final_result,result);
            result=1;
            current=nums[0];
        }
        return final_result;
    }
};