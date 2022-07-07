class Solution {
public:
        int romanToInt(string s) {
        map<string,int> m;
        m["I"]=1; m["IV"]=4; m["IX"]=9;
        m["V"]=5;
        m["X"]=10; m["XL"]=40; m["XC"]=90;
        m["L"]=50;
        m["C"]=100; m["CD"]=400; m["CM"]=900;
        m["D"]=500; m["M"]=1000;
        int result=0;
        for(int i=0;i<s.size();i++)
        {
            string tmp="";
            tmp+=s[i];
            tmp+=s[i+1];
            if(m.find(tmp)!=m.end())
            {
                result+=m[tmp];
                i++;
                continue;
            }
            result+=m[string (1,s[i])];
        }
        return result;
    }
};