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
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        
        stack<point> s;
        s.push(point(sr,sc));
        int colorPixel = image[sr][sc];
        
        while(!s.empty())
        {
            point top = s.top();
            s.pop();
            if(top.x<image.size() && top.y<image[0].size())
            {
                int colorCell = image[top.x][top.y];
                if(colorCell!=colorPixel || colorCell == color) continue;
                image[top.x][top.y]=color;
                s.push( point(top.x+1,top.y));
                s.push( point(top.x-1,top.y));
                s.push( point(top.x,top.y+1));
                s.push( point(top.x,top.y-1));   
            }
        }
        return image;
    }
};