class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result="";
        bool flag=false;
        for(int i=0;i<strs[0].size();i++){
            char a=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=a) {flag=true; break;}
            }
            if(flag) break;
            result+=a;
        }
        return result;
    }
};