class Solution {
public:
    int maxProfit(int k, vector<int> &prices) {
    if(!k || !prices.size()) return 0;
    vector<vector<int>> dp(k+1,vector<int>(prices.size()));
        for(int i=0;i<dp.size();i++){
            for(int j=0;j<dp[i].size();j++){
                if(i==0) dp[i][j]=0;
                else if(j==0) dp[i][j]=0;
                else{
                    int temp,mx=INT_MIN;
                    for(int k=0;k<j;k++){
                        temp = prices[j]-prices[k] + dp[i-1][k];
                        mx = max(temp,mx);
                    }
                    dp[i][j] = max(mx,dp[i][j-1]);
                }
            }
        }
        return dp[k][prices.size()-1];
    }
};