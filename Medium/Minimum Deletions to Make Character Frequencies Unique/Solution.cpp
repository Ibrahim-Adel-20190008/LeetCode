class Solution {
public:
    int minDeletions(string s) {
        sort(s.begin(),s.end());
        map<int,char> m;
        int count=1,result=0;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                count++;
            }
            else
            {
                while(m.find(count)!=m.end())
                {
                    result++;
                    count--;
                }
                if(count>0)
                    m[count]=s[i];
                count=1;
            }
        }
        if(count==1 && m.find(1)!=m.end())
        {
            result++;
        }
        else
        {
            while(m.find(count)!=m.end())
            {
                result++;
                count--;
            }
        }
        return result;
    }
};