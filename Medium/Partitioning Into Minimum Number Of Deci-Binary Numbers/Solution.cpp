class Solution {
public:
    int minPartitions(string n) {
        int result = n[0];
        for(int i=1;i<n.size();i++)
        {
            result = result>n[i]?result:n[i];
        }
        return result-'0';
    }
};