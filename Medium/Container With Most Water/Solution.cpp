class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0,end=height.size()-1,result=0,area;
        while(start<end)
        {
            area=(end-start) * min(height[start],height[end]);
            result = max(result,area);
            if(height[start]>height[end])
                end--;
            else 
                start++;
        }
        return result;
    }
};