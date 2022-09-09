class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c : s)
        {
            if(c=='(' || c=='{' || c=='[')
                st.push(c);
            else
            {
                if(st.empty() ||(c-st.top() != 2 && c-st.top() != 1)) return false;
                st.pop();
            }
        }
        return st.empty()?true:false;
    }
};