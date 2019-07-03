class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int array_size=grid.size();
        vector<int> row(array_size, 0);
        vector<int> col(array_size, 0);
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]>row[i])
                {
                    row[i]=grid[i][j];
                }
                if(grid[i][j]>col[j])
                {
                    col[j]=grid[i][j];
                }
            }
        }
        
        int ans=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                ans += min(row[i] - grid[i][j], col[j] - grid[i][j]);
            }
        }
        return ans;
    }
};