class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<int,string> telephone;
        for(int i=2;i<10;i++)
        {
            if(i==2)
                telephone[i]="abc";
            
            if(i==3)
                telephone[i]="def";
            
            if(i==4)
                telephone[i]="ghi";
            
            if(i==5)
                telephone[i]="jkl";
            
            if(i==6)
                telephone[i]="mno";
            
            if(i==7)
                telephone[i]="pqrs";
            
            if(i==8)
                telephone[i]="tuv";
            
            if(i==9)
                telephone[i]="wxyz";
        }
        vector<string> result;
        solve(telephone,digits,0,result,"");
        return result;
    }
    
    void solve(map<int,string> telephone,string digits,int index, vector<string> &result,string smallresult)
    {
        if(index>=digits.size())
        {
            if(!smallresult.empty())
                result.push_back(smallresult);
            return;
        }
        string letters = telephone[digits[index]-'0'];
        for(int i=0;i<letters.size();i++)
        {
            smallresult+=letters[i];
            solve(telephone,digits,index+1,result,smallresult);
            smallresult.pop_back();
        }
    }
};