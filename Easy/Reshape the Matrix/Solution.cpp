class Solution {
public:
vector<vector<int>> matrixReshape(vector<vector<int>>mat, int r, int c) {
    vector<vector<int>> result(r);
    int rows =mat.size(), columns =mat[0].size();
    int size=rows*columns;
    if(size!=(r*c))
    {
        return mat;
    }
    else
    {
        int newi=0,newj=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                result[i].push_back(mat[newi][newj]);
                newj++;
                newj%=columns;
                newi = newj?newi:newi+1;
            }
        }
        return result;
    }
}
};