class Solution {
public:

 void solve(vector<int>& can, int target,int idx,vector<vector<int>>&st,vector<int>v ){

if(target==0){
    st.push_back(v);
    return;
}
if(idx >=can.size()){
    return;
}
if(target>=can[idx]){
    v.push_back(can[idx]);
    solve(can,target-can[idx],idx+1,st,v);
    v.pop_back();
}
  while(can[idx]==can[idx+1]){
    idx++;
  }
solve(can,target,idx+1,st,v);

   }
    vector<vector<int>>combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>st;
        sort(candidates.begin(),candidates.end());
        vector<int>v;
        solve(candidates,target,0,st,v);
        return st;

    }
};
