class Solution {
public:
void solve(vector<int>& nums,int idx,vector<vector<int>>&st,vector<int>v){
if(idx >=nums.size()){
    st.push_back(v);
    return ;
}
int e =nums[idx];
v.push_back(e);
solve(nums,idx+1,st,v);
v.pop_back();
while( idx< nums.size()-1 && nums[idx] == nums[idx+1]){ idx++;}

solve(nums,idx+1,st,v);

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>st;
        vector<int>v;
        sort(nums.begin(),nums.end());
        solve(nums,0,st,v);
        return st;
    }
};
