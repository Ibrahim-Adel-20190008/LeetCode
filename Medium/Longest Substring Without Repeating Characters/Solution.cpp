class Solution {
public:
int lengthOfLongestSubstring(string s) {
    int maxLength=-100000,counter=0,start=0;
    map<char,int> subString;
    for(int i=0;i<s.size();i++)
    {
        if(subString.find(s[i]) == subString.end() || subString[s[i]]<start)
        {
            counter++;
            subString[s[i]]=i;
        }
        else
        {
            maxLength = maxLength>counter?maxLength:counter;
            counter=i-subString[s[i]];
            start = subString[s[i]]+1;
            subString[s[i]] = i;
        }
    }
    return maxLength>counter?maxLength:counter;
}
};