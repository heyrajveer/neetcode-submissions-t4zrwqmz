
   
        

class Solution {
public:

  int  dfs(vector<vector<int>>& grid,int i,int j){
    if(i <0 ||j<0|| i>=grid.size() ||j >=grid[0].size()||grid[i][j]==0 ){
        return 0;
    }
    grid[i][j]=0;
    int drow[4] ={-1,0,+1,0};
    int dcol[4] ={0,+1,0,-1};
int  ans =1;
    for(int k=0;k<4;k++){
      ans  += dfs(grid,i+drow[k],j+dcol[k]);
    }

   return ans;
  }
   int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row =grid.size();
        int col =grid[0].size();
int count =0;
// vector<vector<bool>>vis(row,vector<int>(col,false));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]== 1){
                  int ans =dfs(grid,i,j);
                  count =max(count,ans);
                }
            }
        }
        return count ;
    }
};
