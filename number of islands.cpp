class Solution {
public:
    void flood(int x, int y, vector<vector<char>> &grid){
        grid[x][y]='0';
        if(x+1<(int)grid.size()  && grid[x+1][y]=='1')flood(x+1, y, grid);
        if(x-1>=0  && grid[x-1][y]=='1' )flood(x-1, y, grid);
        if(y+1<(int)grid[x].size() && grid[x][y+1]=='1' )flood(x, y+1, grid);
        if(y-1>=0 && grid[x][y-1]=='1')flood(x, y-1, grid);
    }

    int numIslands(vector<vector<char>> &grid) {
        int ans=0;
        int m=grid.size();
        int n;
        if(m!=0)
            n=grid[0].size();
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(grid[i][j]=='1' ){
                    ans++;
                    flood(i, j, grid);
                }
            }
        }
        return ans;
    }
};
