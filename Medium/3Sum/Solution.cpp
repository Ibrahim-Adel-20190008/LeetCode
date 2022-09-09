class Solution {
public:
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    map<int,int> m;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        m[nums[i]]=i;
    }

    for(int i =0;i<nums.size()-2;i++){
        if(nums[i]>0)
           break ;
        for(int j=i+1;j<nums.size()-1;j++){
            int target = (nums[i]+nums[j]);
            target*=-1;
            if(m[target] && m[target]>j){
                result.push_back({nums[i],nums[j],target});
            }
            j = m[nums[j]];
        }
        i = m[nums[i]];
    }
    return result;
}
};