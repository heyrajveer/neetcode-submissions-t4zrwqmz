class Solution {
public:

  void dfs(vector<vector<char>>& grid,int i,int j){
    if(i <0 ||j<0|| i>=grid.size() ||j >=grid[0].size()||grid[i][j]=='0' ){
        return;
    }
    grid[i][j]='0';
    int drow[4] ={-1,0,+1,0};
    int dcol[4] ={0,+1,0,-1};

    for(int k=0;k<4;k++){
           dfs(grid,i+drow[k],j+dcol[k]);
    }
   
  }
    int numIslands(vector<vector<char>>& grid) {
        int row =grid.size();
        int col =grid[0].size();
int count =0;
// vector<vector<bool>>vis(row,vector<int>(col,false));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]== '1'){
                  dfs(grid,i,j);
                  count++;
                }
            }
        }
        return count ;
    }
};
