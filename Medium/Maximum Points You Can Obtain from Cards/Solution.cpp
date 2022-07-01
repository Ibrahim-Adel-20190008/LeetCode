class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int result=0;
        for(int i=0;i<k;i++)
            result+=cardPoints[i];
        int tmpResult= result;
        for(int i=k-1;i>-1;i--)
        {
            tmpResult-=cardPoints[i];
            tmpResult+=cardPoints[cardPoints.size()-k+i];
            
            result = max(result,tmpResult);
        }
        return result;
    }
};