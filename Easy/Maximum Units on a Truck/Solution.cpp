class Solution {
public:
    static bool compare(vector<int> a, vector<int> b)
    {
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),compare);
        int result=0;
        for(int i=0;i<boxTypes.size();i++)
        {
            if(truckSize<=boxTypes[i][0])
            {
                result += truckSize * boxTypes[i][1];
                break;
            }
            result += (boxTypes[i][0] * boxTypes[i][1]);
            truckSize-=boxTypes[i][0];
        }
        return result;
    }
};