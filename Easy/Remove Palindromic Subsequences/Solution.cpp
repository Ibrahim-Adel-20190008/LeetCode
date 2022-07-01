class Solution {
public:
    int removePalindromeSub(string s) {
        int steps=1;
        for(int i=0;i<s.size()/2;i++)
        {
            if(s[i]!=s[s.size()-1-i])
                steps++;
        }
        return min(steps,2);
    }
};