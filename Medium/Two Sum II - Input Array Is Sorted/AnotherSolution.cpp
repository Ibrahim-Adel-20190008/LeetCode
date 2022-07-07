class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int>m;
        vector<int>result;
        for(int i=0;i<numbers.size();i++)
            m[numbers[i]]=i;
        for(int i=0;i<numbers.size();i++)
            if(m.find(target-numbers[i])!=m.end())
            {
                result.push_back(i+1);
                result.push_back(m[target-numbers[i]]+1);
                break;
            }
        return result;
    }
};