class Solution {
public:
    int lengthOfLastWord(string s) {
        int result=0,temp=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=' ') temp++;
            else temp=0;
            if(temp)result = temp;
        }
        return max(temp,result);
    }
};