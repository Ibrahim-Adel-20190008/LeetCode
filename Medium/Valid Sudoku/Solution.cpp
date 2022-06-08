class Solution {
public:
bool checkRow(vector<vector<char>> board)
{
    for(int i=0;i<board.size();i++)
    {
        vector<int> numbers(10,1);
        for(int j=0;j<board[i].size();j++)
        {
            if(board[i][j]!='.')
                numbers[board[i][j]-'0']--;
        }
        for(int i=0;i<10;i++)
        {
            if(numbers[i]<0)
                return false;
        }
    }
    return true;
}
bool checkColumn(vector<vector<char>> board)
{
    for(int i=0;i<board.size();i++)
    {
        vector<int> numbers(10,1);
        for(int j=0;j<board[i].size();j++)
        {
            if(board[j][i]!='.')
                numbers[board[j][i]-'0']--;
        }
        for(int i=0;i<10;i++)
        {
            if(numbers[i]<0)
                return false;
        }
    }
    return true;
}
bool checkBox(vector<vector<char>> board)
{
    vector<int> numbers(10,1);
    for(int i=0;i<board.size();i++)
    {
        for(int j=0;j<board[i].size();j++)
        {
            if(board[i][j]!='.')
                numbers[board[i][j]-'0']--;
        }
    }
    for(int i=0;i<10;i++)
    {
        if(numbers[i]<0)
            return false;
    }
    return true;
}
bool checkBoxs(vector<vector<char>> board)
{
    int box=0;
    for(int k=0;k<9;k++)
    {
        vector<vector<char>> smallBox;
        int start = k%3==0?k:k-(k%3);
        for(int i=start;i<start+3;i++)
        {
            vector<char> tmp;
            for(int j=(box*3)%9;j<(box*3)%9+3;j++)
            {
                tmp.push_back(board[i][j]);
            }
            smallBox.push_back(tmp);
        }
        if(!checkBox(smallBox))
            return false;
        box++;
    }
    return true;
}
bool isValidSudoku(vector<vector<char>>& board) {
    return checkRow(board) && checkColumn(board) && checkBoxs(board);
}
};