class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result;
        int index=0,index2=0;
        while(m!=0 && n!=0)
        {
            if(nums1[index]<nums2[index2])
            {
                result.push_back(nums1[index]);
                m--;
                index++;
            }
            else
            {
                result.push_back(nums2[index2]);
                n--;
                index2++;
            }
        }
        while(m!=0)
        {
            result.push_back(nums1[index]);
            m--;
            index++;
        }
        while(n!=0)
        {
            result.push_back(nums2[index2]);
            n--;
            index2++;
        }
        nums1=result;
    }
};