class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int current=prices[0],result=0;
        for(int i=1;i<prices.size();i++)
        {
            result = max(result,prices[i]-current);
            current = min(current,prices[i]);
        }
        return result;
    }
};