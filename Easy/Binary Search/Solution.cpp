class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start=0,end=nums.size()-1,mid=(end-start)/2;
        bool flag=0;
        while(start<=end)
        {
            if(nums[mid]>target)
            {
                end=mid-1;
                mid = (end-start)/2+start;
            }
            else if(nums[mid]<target)
            {
                start=mid+1;
                mid = (end-start)/2+start;
            }
            else
            {
                flag=1;
                break;
            }
        }
        return flag?mid:-1;
    }
};