class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=-1000000,minSell=prices[0];
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]-minSell<0)
            {
                minSell=prices[i];
            }
            else
            {
                int newProfit = prices[i]-minSell;
                maxProfit = maxProfit>newProfit?maxProfit:newProfit;
            }
        }
        return max(maxProfit,0);
    }
};