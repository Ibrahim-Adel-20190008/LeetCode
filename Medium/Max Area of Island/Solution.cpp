struct point
{
    int x,y;
    point(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
};
class Solution {
public:
    static int searchMaxArea(vector<vector<int>>& grid, int i, int j)
    {
        int result=0;
        stack<point> s;
        s.push(point(i,j));
        while(!s.empty())
        {
            point top = s.top();
            s.pop();
            if(top.x<grid.size() && top.y<grid[0].size())
            {
                if(grid[top.x][top.y]==1)
                {
                    grid[top.x][top.y] = -1;
                    result++;
                    s.push(point(top.x+1,top.y));
                    s.push(point(top.x-1,top.y));
                    s.push(point(top.x,top.y+1));
                    s.push(point(top.x,top.y-1));
                }
            }
        }
        return result;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int result=0,m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                result = max(searchMaxArea(grid,i,j),result);
            }
        }
        return result;
    }
};