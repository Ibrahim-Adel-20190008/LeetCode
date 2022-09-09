class Solution {
public:
string convert(string s, int numRows) {
    if(s.size() <= numRows || numRows==1)
        return s;
    vector<string> rows;
    int position=-1, inc=1;
    for(int i=0;i<numRows;i++)
        rows.push_back("");
    for(int i=0;i<s.size();i++)
    {
        position += inc;
        rows[position]+=s[i];
        if(position==numRows-1)inc=-1;
        if(position==0)inc=1;
    }
    stringstream result;
    for(string s:rows)
    {
        result<<s;
    }
    return result.str();
}
};