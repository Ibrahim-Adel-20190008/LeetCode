class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        
        int max_horizontal = horizontalCuts[0], max_vertical = verticalCuts[0];
        const int mod = 1e9 +7;
        for(int i=1;i<horizontalCuts.size();i++)
        {
            max_horizontal = max(max_horizontal,horizontalCuts[i]-horizontalCuts[i-1]);
        }
            max_horizontal = max(max_horizontal,h-horizontalCuts[horizontalCuts.size()-1]);
        
        for(int i=1;i<verticalCuts.size();i++)
        {
            max_vertical = max(max_vertical,verticalCuts[i]-verticalCuts[i-1]);
        }
            max_vertical = max(max_vertical,w-verticalCuts[verticalCuts.size()-1]);
     
        return (long long)max_vertical*max_horizontal%mod;
    }
};