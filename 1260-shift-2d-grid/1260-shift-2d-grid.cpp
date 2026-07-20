class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> newgrid(m, vector<int>(n));

        for(int l=0;l<k;l++){
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(i==m-1 && j==n-1){
                        newgrid[0][0]=grid[i][j];
                    }else if(j==n-1){
                        newgrid[i+1][0]=grid[i][j];
                    }else{
                        newgrid[i][j+1]=grid[i][j];
                    }
                }
            }
            grid = newgrid;
        }

        return grid;
    }
};