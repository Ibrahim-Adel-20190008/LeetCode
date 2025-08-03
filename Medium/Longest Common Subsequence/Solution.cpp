#include <bits/stdc++.h>
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int dp[1005][1005];
        int n = text1.size(),m=text2.size();
        memset(dp,0,sizeof dp);
        for(int i = n-1;~i;i--){
            for(int j= m-1 ; ~j;j--){
                if(text1[i]==text2[j]){
                    dp[i][j] = 1 + dp[i+1][j+1];
                }else{
                    int op1 = dp[i+1][j];
                    int op2 = dp[i][j+1];
                    dp[i][j] = max(op1,op2);
                }
            }
        }
        return dp[0][0];
    }
};