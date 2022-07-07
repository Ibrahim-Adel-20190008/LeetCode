class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int,string>> v ={{1,"I"},{4,"IV"},{5,"V"},{9,"IX"},{10,"X"},{40,"XL"},                {50,"L"},{90,"XC"},{100,"C"},{400,"CD"},{500,"D"},{900,"CM"},{1000,"M"}};
        int size = v.size(),count;
        string result="";
        for(int i=size-1;i>-1;i--)
        {
            count = num/v[i].first;
            num= num -(count*v[i].first);
            while(count!=0)
            {
                result+=v[i].second;
                count--;
            }
        }
        return result;
    }
};