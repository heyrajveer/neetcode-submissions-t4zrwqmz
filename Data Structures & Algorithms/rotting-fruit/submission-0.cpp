class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m =grid.size();
        int n =grid[0].size();
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                }
            }
        }
       int t =0;
       int drow[4]={-1,0,+1,0};
       int dcol[4]={0,+1,0,-1};
       while(!q.empty()){
        int r =q.front().first.first;
        int c=q.front().first.second;
        int tm =q.front().second;
        q.pop();
        t =max(tm,t);
         for(int k=0;k<4;k++){
            int a = r+drow[k];
            int b = c+dcol[k];
            
            if( a >=0 && b >=0 && a<m && b <n && grid[a][b]==1){
                 q.push({{a,b},tm+1});
                 grid[a][b]=2;
            }

         }


       }for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    return -1;
                }
            }
            }
       
       return t;
        

    }
};
