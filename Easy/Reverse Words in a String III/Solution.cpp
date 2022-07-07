class Solution {
public:
    string reverseWords(string s) {
        int start=0,end=s.size()-1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                end = i-1;
                for(int j=start;j<=(start+end)/2;j++)
                    swap(s[j],s[end-(j-start)]);
                start = i+1;
            }
        }
        end=s.size()-1;
        for(int j=start;j<=(start+end)/2;j++)
            swap(s[j],s[end-(j-start)]);
        return s;
    }
};