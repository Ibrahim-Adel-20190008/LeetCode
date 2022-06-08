class Solution {
public:
    bool isPalindrome(int x) {
        string number="";
        if(x<0)
            return false;
        while(x!=0)
        {
            number+=(x%10);
            x/=10;
        }
        for(int i=0;i<number.size()/2;i++)
        {
            if(number[i]!=number[number.size()-1-i])
                return false;
        }
        return true;
    }
};