class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int small=0,large=tokens.size()-1,result=0;
        for(int i=0;i<tokens.size();i++){
            if(power>=tokens[small]){
                power-=tokens[small++];
                result++;
            }
            else if(result>0 && small!=large){
                power+=tokens[large--];
                result--;
            }
            else break;
        }
        return result;
    }
};