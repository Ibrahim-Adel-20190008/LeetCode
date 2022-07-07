class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++)
        {
            if(target<matrix[i][0])
                break;
            for(int j=0;j<matrix[i].size();j++)
            {
                if(target<matrix[i][j]) break;
                else if(target == matrix[i][j]) return true;
            }
        }
        return false;
    }
};