// LeetCode Problem: 994. Rotting Oranges
// Problem Link: https://leetcode.com/problems/rotting-oranges/

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>> q; //store row,col,minute
        int freshO=0, min=0;
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0; j<grid[i].size(); j++)
            {
                if(grid[i][j]==1)
                    freshO++;
                else if(grid[i][j]==2)
                    q.push({{i,j},0});
            }
        }
        vector<pair<int,int>> dir={{-1,0},{1,0},{0,-1},{0,1}};  //up,down,left,right (row,col)

        while(!q.empty())
        {
            auto cell=q.front(); 
            q.pop();
            int row=cell.first.first;
            int col=cell.first.second;
            int time=cell.second;
            min=max(min,time);  //track max min - result

            for(auto d:dir)
            {
                int newRow=row+d.first;
                int newCol=col+d.second;

                if(newRow>=0 && newRow<grid.size() && newCol>=0 && 
                newCol<grid[newRow].size() && grid[newRow][newCol]==1)
                {
                    grid[newRow][newCol]=2;
                    q.push({{newRow,newCol},min+1});
                    freshO--;
                }        
            }
        }
         return freshO >0 ? -1:min;
    }
};