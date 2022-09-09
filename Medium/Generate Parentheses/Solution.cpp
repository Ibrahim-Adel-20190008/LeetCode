class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> out;
        sol(n,0,0,"",out);
        return out;
    }
    void sol(int n,int start, int end,string smallResult,vector<string> &finalResult)
    {
        if(start==n && end==n)
        {
            finalResult.push_back(smallResult);
            return;
        }
        if(start<n) sol(n,start+1,end,smallResult+"(",finalResult);
        if(start>end) sol(n,start,end+1,smallResult+")",finalResult);
    }
};