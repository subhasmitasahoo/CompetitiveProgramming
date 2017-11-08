class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int res = 0;
        int r = grid.size();
        int c = grid[0].size();
        int i,j;
        
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                if(grid[i][j] == 0)
                    continue;
                if(i==0)
                    res++;
                if(i==r-1)
                    res++;
                if(j==0)
                    res++;
                if(j==c-1)
                    res++;
                if(i>0 && grid[i-1][j]==0)
                    res++;
                if(i<r-1 && grid[i+1][j]==0)
                    res++;
                if(j>0 && grid[i][j-1]==0)
                    res++;
                if(j<c-1 && grid[i][j+1]==0)
                    res++;
                    
            }
        }
        return res;
    }
};